module ysyx_26060173_FILED_FETCH #(ENCODED_LEN = 4)(
    /* verilator lint_off UNUSEDSIGNAL */
    input [31:0] inst,
    /* verilator lint_on UNUSEDSIGNAL */
    input [ENCODED_LEN-1:0] op_encoded,
    input [2:0] op_type,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [31:0] imm
);

assign rd  = inst[11:7];

ysyx_26060173_MuxKeyWithDefault #(1, 8, 5) u0(
    .key(op_encoded), .out(rs1), .default_out(inst[19:15]), .lut({
        ebreak_encoded, 5'ha // To monitor a0
    })
);

assign rs2 = inst[24:20];

ysyx_26060173_MuxKey #(5, 3, 32) u1(
    .key(op_type), .out(imm), .lut({
        I_type, {{20{inst[31]}}, inst[31:20]},
        S_type, {{20{inst[31]}}, inst[31:25], inst[11:7]},  
        J_type, {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0},
        B_type, {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0},
        U_type, {inst[31:12], 12'b0}
    })
);
    
endmodule
