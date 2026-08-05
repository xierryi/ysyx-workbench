module ysyx_26060173_EXU(
    input [3:0] op_encoded,
    input [31:0] operand1,
    // input [31:0] operand2,
    input [31:0] operand3,
    input [31:0] pc,

    output [31:0] result, // result -> wdata
    output [31:0] dnpc

);

parameter addi_encoded = 4'b0000;
parameter jalr_encoded = 4'b0001;

wire addi_en, jalr_en;

assign addi_en = (op_encoded == addi_encoded);
assign jalr_en = (op_encoded == jalr_encoded);

assign ebreak_en = (op_encoded == ebreak_encoded);

assign result = (operand1 + operand3) & {32{addi_en}}
              | (pc + 4) & {32{jalr_en}};

assign dnpc = (pc + 4) & {32{~jalr_en}}
            | ((operand1 + operand3) & 32'hFFFFFFFE) & {32{jalr_en}};

endmodule
