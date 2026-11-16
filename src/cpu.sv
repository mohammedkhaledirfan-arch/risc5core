module cpu (
    input logic clk,
    input logic rst_n
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

always_comb begin: second_add_select
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
wire [31:0] instruction;

memory #(
    .mem_init("./test_imemory.hex")
) instruction_memory (
    .clk(clk),
    .address(pc),
    .write_data(32'b0),
    .write_enable(1'b0),
    .rst_n(1'b1),
    .read_data(instruction)
);
/**
*CONTROL
*/
logic [6:0] op;
wire second_add_source;
assign op = instruction[6:0];
logic [2:0] f3;
assign f3 =instruction [14:12];
wire alu_zero;
// out of control unit
wire [3:0]alu_control;
wire [2:0] imm_source;
wire mem_write;
wire reg_write;
wire alu_source; 
wire [1:0]write_back_source;

control control_unit(
    .op(op),
    .func3(f3),
    .func7(7'b0),
    .alu_zero(alu_zero),
    //out
    .alu_control(alu_control),
    .imm_source(imm_source),
    .mem_write(mem_write),
    .reg_write(reg_write),
    .alu_source(alu_source),  
    .write_back_source(write_back_source),
    .pc_source(pc_source),
    .second_add_source(second_add_source)
);

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
memory #(
    .mem_init("./test_dmemory.hex")
) data_memory (
    .clk(clk),
    .address(alu_result),
    .write_data(read_reg2),
    .write_enable(mem_write),
    .rst_n(1'b1),
    .read_data(mem_read)
);

endmodule