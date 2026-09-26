`ifndef __DEFINES_VH__
`define __DEFINES_VH__

parameter     ysyx_26060173_lui     =  7'b0110111;  // --               , --        , imm->reg  , pc = pc + 4
parameter     ysyx_26060173_auipc   =  7'b0010111;  // pc  , imm->ALU   , ALU->reg  , --        , pc = pc + 4
parameter     ysyx_26060173_jal     =  7'b1101111;  // pc  , imm->ALU   , ALU->dnpc , pc+4->reg,  pc = pc + 4
parameter     ysyx_26060173_jalr    =  7'b1100111;  // src1, imm->ALU   , ALU->dnpc , pc+4->reg , pc = dnpc
parameter     ysyx_26060173_B_type  =  7'b1100011;  // src1, src2->ALU  , ALU->b_fig, pc = b_fig ? pc + imm : pc + 4
parameter     ysyx_26060173_load    =  7'b0000011;  // src1, imm->ALU   , ALU->M    , M->reg    , pc = pc + 4
parameter     ysyx_26060173_store   =  7'b0100011;  // src1, imm->ALU   , ALU->M    , reg->M    , pc = pc + 4
parameter     ysyx_26060173_I_type  =  7'b0010011;  // src1, imm->ALU   , ALU->reg  , --        , pc = pc + 4
parameter     ysyx_26060173_R_type  =  7'b0110011;  // src1, src2->ALU  , ALU->reg  , --        , pc = pc + 4
parameter     ysyx_26060173_EandCSR =  7'b1110011; 

`endif
