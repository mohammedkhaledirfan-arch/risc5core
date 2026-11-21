module top (
    input  logic        board_clk,   // 100 MHz Nexys A7 oscillator (E3)
    input  logic        reset_btn,   // Center push-button BTNC (N17) -> active-low rst_n
    input  logic        step_btn,    // Up push-button BTNU (M18) -> single-step PC clock
    input  logic [15:0] sw,          // Slide switches SW[15:0]
    output logic [3:0]  leds,        // User LEDs LD[3:0] (MMIO @ 0x1000_0000)
    output logic [7:0]  an,          // 7-segment digit anode enables (active-low)
    output logic [6:0]  seg          // 7-segment cathodes CA-CG (active-low)
);
    wire rst_n = ~reset_btn;

    // 1. Hardware Debouncer + Single-Cycle Rising-Edge Detector for BTNU
    //    Freezes PC until you press BTNU; each press emits one 10 ns clock pulse.
    // -------------------------------------------------------------------------
    logic [20:0] db_cnt     = 21'd0;
    logic        btn_stable = 1'b0;
    logic        btn_prev   = 1'b0;

    always_ff @(posedge board_clk) begin
        if (step_btn == btn_stable) begin
            db_cnt <= 21'd0;
        end else begin
            db_cnt <= db_cnt + 21'd1;
            if (db_cnt == 21'h1F_FFFF) begin
                btn_stable <= step_btn;
                db_cnt     <= 21'd0;
            end
        end
        btn_prev <= btn_stable;
    end

    wire cpu_clk = btn_stable & ~btn_prev;

    // -------------------------------------------------------------------------
    // 2. Internal CPU Observability & ILA Debug Wires
    // -------------------------------------------------------------------------
    (* mark_debug = "true" *) logic [31:0] debug_pc;
    (* mark_debug = "true" *) logic [31:0] debug_instruction;
    logic [31:0] debug_reg_wdata;
    logic [4:0]  debug_reg_waddr;
    logic [31:0] debug_mem_wdata;
    logic [31:0] debug_mem_waddr;

    // -------------------------------------------------------------------------
    // 3. Single-Cycle RV32I Core Instantiation (All 10 Ports Matched to cpu.sv)
    // -------------------------------------------------------------------------
    cpu u_cpu (
        .clk               (cpu_clk),
        .rst_n             (rst_n),
        .manual_sw         (sw[15:2]),
        .led_out           (leds),
        .debug_pc          (debug_pc),
        .debug_instruction (debug_instruction),
        .debug_reg_wdata   (debug_reg_wdata),
        .debug_reg_waddr   (debug_reg_waddr),
        .debug_mem_wdata   (debug_mem_wdata),
        .debug_mem_waddr   (debug_mem_waddr)
    );

    // -------------------------------------------------------------------------
    // 4. 4-Way 7-Segment Display Multiplexer Controlled by SW[1:0]
    //    00: Last RegFile Write Data     01: Last Data Memory / MMIO Write Data
    //    10: [7:6]=Reg rd, [3:0]=MemAddr  11: Current Program Counter (PC)
    // -------------------------------------------------------------------------
    logic [31:0] display_val;
    always_comb begin
        case (sw[1:0])
            2'b00: display_val = debug_reg_wdata;
            2'b01: display_val = debug_mem_wdata;
            2'b10: display_val = {3'b000, debug_reg_waddr, 8'h00, debug_mem_waddr[15:0]};
            2'b11: display_val = debug_pc;
        endcase
    end

    // -------------------------------------------------------------------------
    // 5. 8-Digit 7-Segment Time-Division Multiplexer (~760 Hz refresh)
    // -------------------------------------------------------------------------
    logic [19:0] refresh_cnt = 20'd0;
    always_ff @(posedge board_clk) refresh_cnt <= refresh_cnt + 20'd1;

    wire [2:0]  digit_sel = refresh_cnt[19:17];
    logic [3:0] hex_nibble;

    always_comb begin
        an            = 8'hFF;
        an[digit_sel] = 1'b0; // Active-low anode enable
        hex_nibble    = display_val[digit_sel*4 +: 4];
        case (hex_nibble)
            4'h0: seg = 7'b1000000;
            4'h1: seg = 7'b1111001;
            4'h2: seg = 7'b0100100;
            4'h3: seg = 7'b0110000;
            4'h4: seg = 7'b0011001;
            4'h5: seg = 7'b0010010;
            4'h6: seg = 7'b0000010;
            4'h7: seg = 7'b1111000;
            4'h8: seg = 7'b0000000;
            4'h9: seg = 7'b0010000;
            4'hA: seg = 7'b0001000;
            4'hB: seg = 7'b0000011;
            4'hC: seg = 7'b1000110;
            4'hD: seg = 7'b0100001;
            4'hE: seg = 7'b0000110;
            4'hF: seg = 7'b0001110;
        endcase
    end
endmodule
