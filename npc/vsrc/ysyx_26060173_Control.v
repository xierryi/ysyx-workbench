`include "ysyx_26060173_defines.v"

module ysyx_26060173_Control(
    input [6:0] opcode,
    input B_en,
    output [1:0] Branch,
    output isB_type,
    output [1:0] RegIn,
    output ALUIn1Sel,
    output ALUIn2Sel,
    output R_wen,
    output M_ren,
    output M_wen,
    output EandCSR
);

ysyx_26060173_MuxKeyWithDefault #(3, 7, 2) BranchEnc(
    .key(opcode), .out(Branch), .default_out(2'b0), .lut({
        ysyx_26060173_jal   , 2'b10,
        ysyx_26060173_jalr  , 2'b10,
        ysyx_26060173_B_type, {1'b0, B_en}
    }) 
);

ysyx_26060173_MuxKeyWithDefault #(1, 7, 1) isB_typeEnc(
    .key(opcode), .out(isB_type), .default_out(1'b0), .lut({
        ysyx_26060173_B_type    , 1'b1 
    }) 
);

ysyx_26060173_MuxKeyWithDefault #(4, 7, 2) RegInEnc(
    .key(opcode), .out(RegIn), .default_out(2'b00), .lut({
        ysyx_26060173_load  , 2'b01,
        ysyx_26060173_jal   , 2'b10,
        ysyx_26060173_jalr  , 2'b10,
        ysyx_26060173_lui   , 2'b11
    }) 
);

ysyx_26060173_MuxKeyWithDefault #(2, 7, 1) ALUIn1SelEnc(
    .key(opcode), .out(ALUIn1Sel), .default_out(1'b0), .lut({
        ysyx_26060173_auipc , 1'b1,
        ysyx_26060173_jal   , 1'b1
    }) 
);

ysyx_26060173_MuxKeyWithDefault #(2, 7, 1) ALUIn2SelEnc(
    .key(opcode), .out(ALUIn2Sel), .default_out(1'b0), .lut({
        ysyx_26060173_B_type, 1'b1,
        ysyx_26060173_R_type, 1'b1
    }) 
);

ysyx_26060173_MuxKeyWithDefault #(7, 7, 1) R_wenEnc(
    .key(opcode), .out(R_wen), .default_out(1'b0), .lut({
        ysyx_26060173_lui   ,  1'b1,
        ysyx_26060173_auipc ,  1'b1,
        ysyx_26060173_jal   ,  1'b1,
        ysyx_26060173_jalr  ,  1'b1,
        ysyx_26060173_load  ,  1'b1,
        ysyx_26060173_I_type,  1'b1,
        ysyx_26060173_R_type,  1'b1
    })    
);
    
ysyx_26060173_MuxKeyWithDefault #(1, 7, 1) M_renEnc(
    .key(opcode), .out(M_ren), .default_out(1'b0), .lut({
        ysyx_26060173_load, 1'b1
    }) 
);

ysyx_26060173_MuxKeyWithDefault #(1, 7, 1) M_wenEnc(
    .key(opcode), .out(M_wen), .default_out(1'b0), .lut({
        ysyx_26060173_store, 1'b1
    }) 
);

ysyx_26060173_MuxKeyWithDefault #(1, 7, 1) EandCSREnc(
    .key(opcode), .out(EandCSR), .default_out(1'b0), .lut({
        ysyx_26060173_EandCSR, 1'b1
    })
);

endmodule
