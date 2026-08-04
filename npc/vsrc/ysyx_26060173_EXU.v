module ysyx_26060173_EXU(
    input op_type,
    input [31:0] operand1,
    // input [31:0] operand2,
    input [31:0] operand3,
    input [31:0] pc,

    output [31:0] result,
    output [31:0] dnpc

);

assign result = (operand1 + operand3) & {32{op_type}};
assign dnpc = pc + 4;

endmodule
