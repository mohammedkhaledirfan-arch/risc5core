module memory #(
    parameter WORDS = 64,
    parameter mem_init = ""
) (
    input  logic        clk,
    input  logic [31:0] address,
    input  logic [31:0] write_data,
    input  logic        write_enable,
    input  logic        rst_n,
    output logic [31:0] read_data
);
    // Force Xilinx SLICEM Distributed LUTRAM for 0-cycle combinational read latency
    (* ram_style = "distributed" *) reg [31:0] mem [0:WORDS-1];

    initial begin
        if (mem_init != "") begin
            $readmemh(mem_init, mem);
        end
    end

    // Word-aligned asynchronous read (drops byte-offset bits [1:0])
    assign read_data = mem[address[$clog2(WORDS)+1 : 2]];

    // Synchronous word write on rising clock edge
    always_ff @(posedge clk) begin
        if (write_enable) begin
            mem[address[$clog2(WORDS)+1 : 2]] <= write_data;
        end
    end
endmodule
