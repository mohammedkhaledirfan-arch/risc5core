module cpu (
    input  logic        clk,
    input  logic        rst_n,
    input logic [15:2] manual_sw,
    output logic [3:0]  led_out,           // Drives 4 physical FPGA LEDs
    output logic [31:0] debug_pc,          // Current Program Counter
    output logic [31:0] debug_instruction, // Current Fetched Instruction
    output logic [31:0] debug_reg_wdata,   // Last data written to RegFile
    output logic [4:0]  debug_reg_waddr,   // Last destination register (rd) written
    output logic [31:0] debug_mem_wdata,   // Last data written to Data Memory / MMIO
    output logic [31:0] debug_mem_waddr    // Last address written in Data Memory / MMIO
);

/**
 * PROGRAM COUNTER
 */
reg [31:0] pc;
logic [31:0] pc_next;
logic [31:0] pc_plus_second_add;
logic [31:0] pc_target;
logic[31:0] pc_plus_four;
wire [31:0] immediate;
wire pc_source;
assign pc_target = pc + immediate;
assign pc_plus_four = pc+4;

always_comb begin : pcSelect
    case (pc_source)
        1'b0 : pc_next = pc_plus_four;
        1'b1: pc_next = pc_plus_second_add;
        default: pc_next = pc_plus_four;
    endcase
end

always_comb begin: second_add_sel
    case (second_add_source)
        1'b0 :pc_plus_second_add  = pc+immediate;
        1'b1 : pc_plus_second_add = immediate;
    endcase
end


always @(posedge clk) begin
    if(rst_n == 0) begin
        pc <= 32'b0;
    end else begin
        pc <= pc_next;
    end
end
/**
 * INSTRUCTION MEMORY
 */
// 1. Instruction Memory outputs to fetched_instruction instead of instruction
wire [31:0] fetched_instruction;
memory #(
    .mem_init("./test_imemory.hex")
) instruction_memory (
    .clk(clk),
    .address(pc),
    .write_data(32'b0),
    .write_enable(1'b0),
    .rst_n(1'b1),
    .read_data(fetched_instruction)
);

// 2. Decode SW[14:12] into 7-bit RV32I Opcode
wire       manual_mode = manual_sw[15];
wire       wr_arm      = manual_sw[2];
logic [6:0] syn_opcode;

always_comb begin
    case (manual_sw[14:12])
        3'b000:  syn_opcode = 7'b0110011; // R-Type (add, sub, and, or, slt, xor)
        3'b001:  syn_opcode = 7'b0000011; // I-Type Load (lw)
        3'b010:  syn_opcode = 7'b0100011; // S-Type Store (sw)
        3'b011:  syn_opcode = 7'b1100011; // B-Type Branch (beq)
        3'b100:  syn_opcode = 7'b1101111; // J-Type Jump (jal)
        default: syn_opcode = 7'b0010011; // I-Type ALU (addi, andi, ori)
    endcase
end

// 3. Assemble 32-bit RV32I Instruction:
//    - Bit [30] (func7[5]) = manual_sw[11] (0=ADD, 1=SUB)
//    - Bit [22] = 1'b1 gives a +4 byte immediate offset for lw/sw/beq/jal
//    - rs2 = x2 (5'd2), rs1 = x1 (5'd1)
//    - func3 = manual_sw[10:8], rd = manual_sw[7:3], opcode = syn_opcode
wire [31:0] synthetic_instruction = {
    1'b0, manual_sw[11], 5'b00000, // func7[6:0]
    5'd2,                          // rs2 = x2
    5'd1,                          // rs1 = x1
    manual_sw[10:8],               // func3[2:0]
    manual_sw[7:3],                // rd[4:0]
    syn_opcode                     // opcode[6:0]
};

// 4. Select between Memory Instruction and Switch-Built Instruction
wire [31:0] instruction = manual_mode ? synthetic_instruction : fetched_instruction;
/**
*CONTROL
*/
logic [6:0] op;
assign op = instruction[6:0];
logic [2:0] f3;
assign f3 = instruction[14:12];
logic [6:0] f7;
assign f7 = instruction[31:25];

wire alu_zero;

// Out of control unit
wire [3:0] alu_control;
wire [2:0] imm_source;
wire       ctrl_mem_write;
wire       ctrl_reg_write;
wire       alu_source;
wire [1:0] write_back_source;
wire       second_add_source;

control control_unit (
    .op(op),
    .func3(f3),
    .func7(f7),                  // FIXED: Was 7'b0; now passes instruction[31:25] for SUB/SRA
    .alu_zero(alu_zero),
    // Out
    .alu_control(alu_control),
    .imm_source(imm_source),
    .mem_write(ctrl_mem_write),  // Routed to intermediate wire for manual write gating
    .reg_write(ctrl_reg_write),  // Routed to intermediate wire for manual write gating
    .alu_source(alu_source),
    .write_back_source(write_back_source),
    .pc_source(pc_source),
    .second_add_source(second_add_source)
);

// Gate RegFile and Data Memory writes with SW[2] (wr_arm) only when SW[15] (manual_mode) is ON
wire reg_write = manual_mode ? (ctrl_reg_write & wr_arm) : ctrl_reg_write;
wire mem_write = manual_mode ? (ctrl_mem_write & wr_arm) : ctrl_mem_write;

/**
 * REGFILE
 */
logic [4:0] source_reg1;
assign source_reg1 = instruction[19:15];
logic [4:0] source_reg2;
assign source_reg2 = instruction[24:20];
logic [4:0] dest_reg;
assign dest_reg = instruction[11:7];
wire [31:0] read_reg1;
wire [31:0] read_reg2;
logic [31:0] write_back_data;
wire [31:0] mem_read;
wire [31:0] alu_result;

always_comb begin : write_back_source_select
   case(write_back_source)
     2'b00 :write_back_data = alu_result;
     2'b01 :write_back_data = mem_read;
     2'b10 :write_back_data = pc_plus_four;
     2'b11 :write_back_data= pc_plus_second_add;
     default: write_back_data = 32'b0;

   endcase
end

regfile regfile(
    .clk(clk),
    .rst_n(rst_n),
    .adr1(source_reg1),
    .adr2(source_reg2),
    .read_data1(read_reg1),
    .read_data2(read_reg2),
    .write_enable(reg_write),
    .write_data(write_back_data),
    .adr3(dest_reg)
);

/**
 * SIGN EXTEND
 */
logic [24:0] raw_imm;
assign raw_imm = instruction[31:7];
//wire [31:0] immediate;

signext sign_extender(
    .raw_src(raw_imm),
    .imm_source(imm_source),
    .immediate(immediate)
);

/**
 * ALU
 */
//wire [31:0] alu_result;
logic [31:0] alu_src2;

always_comb begin : alu_source_select
  case (alu_source)
    1'b1 :alu_src2 = immediate;
    default alu_src2 = read_reg2;
  endcase
end

alu alu_inst(
    .alu_control(alu_control),
    .src1(read_reg1),
    .src2(alu_src2),
    .alu_result(alu_result),
    .zero(alu_zero)
);

/**
 * DATA MEMORY
 */ 
// Expose internal PC and fetched instruction for Xilinx ILA waveform capture
assign debug_pc          = pc;
assign debug_instruction = instruction;

// Snoop Register File writes on rising clock edge (ignore writes to hardwired x0)
always_ff @(posedge clk) begin
    if (!rst_n) begin
        debug_reg_wdata <= 32'd0;
        debug_reg_waddr <= 5'd0;
    end else if (reg_write && (dest_reg != 5'd0)) begin
        debug_reg_wdata <= write_back_data;
        debug_reg_waddr <= dest_reg;
    end
end

// Snoop Data Memory / MMIO writes on rising clock edge
always_ff @(posedge clk) begin
    if (!rst_n) begin
        debug_mem_wdata <= 32'd0;
        debug_mem_waddr <= 32'd0;
    end else if (mem_write) begin
        debug_mem_wdata <= read_reg2;
        debug_mem_waddr <= alu_result;
    end
end

// Memory-Mapped I/O (MMIO): Store Word to 0x1000_0000 latches lower 4 bits onto physical LEDs
logic is_led_addr;
assign is_led_addr = (alu_result == 32'h1000_0000);

always_ff @(posedge clk) begin
    if (!rst_n) begin
        led_out <= 4'b0000;
    end else if (mem_write && is_led_addr) begin
        led_out <= read_reg2[3:0];
    end
end

memory #(
    .mem_init("test_dmemory.hex")
) data_memory (
    .clk(clk),
    .address(alu_result),
    .write_data(read_reg2),
    .write_enable(mem_write & ~is_led_addr),
    .rst_n(1'b1),
    .read_data(mem_read)
);

endmodule
