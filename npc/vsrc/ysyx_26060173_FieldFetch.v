
`include "ysyx_26060173_defines.v"
module ysyx_26060173_FieldFetch (
    /* verilator lint_off UNUSEDSIGNAL */
    input [31:0] inst,
    /* verilator lint_on UNUSEDSIGNAL */

    input [6:0] opcode,
    input ebreak,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [31:0] imm
);

ysyx_26060173_MuxKey #(2, 1, 5) u0(
    .key(ebreak), .out(rs1), .lut({
        1'b0    , inst[19:15],
        1'b1    , 5'ha // To monitor a0
    })
);

assign rs2 = inst[24:20];
assign rd  = inst[11:7];

ysyx_26060173_MuxKey #(9, 7, 32) u1(
    .key(opcode), .out(imm), .lut({
        ysyx_26060173_lui   , {inst[31:12], 12'b0},
        ysyx_26060173_auipc , {inst[31:12], 12'b0},
        ysyx_26060173_jal   , {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0},
        ysyx_26060173_jalr  , {{20{inst[31]}}, inst[31:20]},
        ysyx_26060173_B_type, {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0},
        ysyx_26060173_load  , {{20{inst[31]}}, inst[31:20]},
        ysyx_26060173_store , {{20{inst[31]}}, inst[31:25], inst[11:7]},  
        ysyx_26060173_I_type, {{20{inst[31]}}, inst[31:20]},
        ysyx_26060173_R_type, 32'b0
    })
);
    
endmodule
