// src/regfile.sv
module regfile (
    input logic clk,
    input logic rst_n,
    input logic write_enable,
    input logic [4:0] adr1,      // Read address 1 (rs1)
    input logic [4:0] adr2,      // Read address 2 (rs2)
    input logic [4:0] adr3,      // Write address (rd)
    input logic [31:0] write_data, // Data to write (wd3)
    output logic [31:0] read_data1,// Read data 1 (rd1)
    output logic [31:0] read_data2 // Read data 2 (rd2)
);

    // 32 registers, each 32 bits wide
    reg [31:0] registers [0:31];

    // Write logic (synchronous), x0 is hardwired to 0
    always @(posedge clk) begin
        if (!rst_n) begin
            for (int i = 0; i < 32; i++) begin
                registers[i] <= 32'b0;
            end
        end else if (write_enable && (adr3 != 5'b00000)) begin
            registers[adr3] <= write_data;
        end
    end

    // Read logic (combinational). x0 always returns 0.
    always_comb begin
        read_data1 = (adr1 == 5'b00000) ? 32'b0 : registers[adr1];
        read_data2 = (adr2 == 5'b00000) ? 32'b0 : registers[adr2];
    end

endmodule