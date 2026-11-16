// src/memory.sv
module memory #( 
    parameter WORDS = 64, 
    parameter mem_init = "" 
) ( 
    input logic clk, 
    input logic [31:0] address, 
    input logic [31:0] write_data, 
    input logic [3:0] byte_enable = 4'b1111,
    input logic write_enable, 
    input logic rst_n, 
    output logic [31:0] read_data 
); 
    // Memory array of 32-bit words
    reg [31:0] mem [0:WORDS-1]; 

    initial begin 
        if (mem_init != "") begin 
            $readmemh(mem_init, mem); 
        end 
    end 

    // Write operation with byte enabling
    always @(posedge clk) begin 
        if (rst_n == 1'b0) begin 
            for (int i = 0; i < WORDS; i++) begin 
                mem[i] <= 32'b0; 
            end 
        end else if (write_enable) begin 
            if (address[1:0] != 2'b00) begin 
                $display("Misaligned write at address %h", address); 
            end else begin 
                for (int i = 0; i < 4; i++) begin 
                    if (write_enable) begin 
                        mem[address[7:2]] <= write_data; 
                    end 
                end 
            end 
        end 
    end 

    // Asynchronous read logic
    always_comb begin 
        read_data = mem[address[7:2]]; 
    end 
endmodule