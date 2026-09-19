`include "ysyx_26060173_optype_defs.vh"
`include "ysyx_26060173_opcode_defs.vh"

module ysyx_26060173_OPENTYPE_ENCODED #(ENCODED_LEN = 4, NR_OP_HASTYPE = 45)(
    input [ENCODED_LEN-1:0] op_encoded,
    output [2:0] op_type   
);

ysyx_26060173_MuxKeyWithDefault #(NR_OP_HASTYPE,ENCODED_LEN, 3) u0 (
    .out(op_type), .key(op_encoded), .default_out(3'b111),
    .lut({
        lbu_encoded,   I_type,
        addi_encoded,  I_type,
        jalr_encoded,  I_type,
        lw_encoded,    I_type,
        sltiu_encoded, I_type,
        srai_encoded,  I_type,
        andi_encoded,  I_type,
        xori_encoded,  I_type,
        srli_encoded,  I_type,
        slli_encoded,  I_type,
        lh_encoded,    I_type,
        lhu_encoded,   I_type,
        lb_encoded,    I_type,
        ori_encoded,   I_type,
        slti_encoded,  I_type,

        auipc_encoded, U_type,
        lui_encoded,   U_type,

        sb_encoded,    S_type,
        sw_encoded,    S_type,
        sh_encoded,    S_type,

        jal_encoded,   J_type,

        bne_encoded,   B_type,
        beq_encoded,   B_type,
        bge_encoded,   B_type,
        bgeu_encoded,  B_type,
        blt_encoded,   B_type,
        bltu_encoded,  B_type,

        add_encoded,    R_type,
        sub_encoded,    R_type,
        sll_encoded,    R_type,
        sltu_encoded,   R_type,
        and_encoded,    R_type,
        or_encoded,     R_type,
        xor_encoded,    R_type,
        slt_encoded,    R_type,
        sra_encoded,    R_type,
        srl_encoded,    R_type
    })
);

endmodule
