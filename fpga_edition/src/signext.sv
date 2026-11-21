// src/signext.sv
module signext (
    input logic [24:0] raw_src,
    input logic [2:0] imm_source, // MUST be 3 bits to support all 5 instruction types
    output logic [31:0] immediate
);

    logic [11:0] gathered_imm;

    always_comb begin
        case (imm_source)
            // For I-Types
            3'b000: immediate = {{20{raw_src[24]}}, raw_src[24:13]};
            
            // For S-Types
            3'b001: immediate = {{20{raw_src[24]}}, raw_src[24:18], raw_src[4:0]};
            
            // For B-Types
            3'b010: immediate = {{20{raw_src[24]}}, raw_src[0], raw_src[23:18], raw_src[4:1], 1'b0};
            
            // For J-Types
            3'b011: immediate = {{12{raw_src[24]}}, raw_src[12:5], raw_src[13], raw_src[23:14], 1'b0};

            // for u types
            3'b100: immediate ={raw_src[24:5], 12'b000000000000};

            
            
            default: immediate = 32'b0;
        endcase
    end

   // assign immediate = (imm_source==2'b10) ?
     //                  {{20{raw_src[24]}},immediate}:
       //                  {{20{immediate[11]}}, immediate};


endmodule