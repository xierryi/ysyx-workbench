
`include "ysyx_26060173_opcode_defs.vh"
module ysyx_26060173_EXU(
    input clk,
    
    // opcode encoded and operand from IDU
    input [7:0] op_encoded,
    input [31:0] src1,
    input [31:0] src2,
    input [31:0] imm,

    // input of execute for jalr and ebreak 
    input [31:0] pc,

    // Memory interfaces
    input [31:0] M_rdata,
    output M_ren,
    output M_wen,
    output [31:0] M_raddr,
    output [1:0] M_rlen,
    output [31:0] M_waddr,
    output [1:0] M_wlen,
    output [31:0] M_wdata,

    // input of WBU
    output [31:0] dst, // dst -> wdata
    output [31:0] dnpc

);

/* M interfaces */
parameter M_LEN_1 = 2'b00;
parameter M_LEN_2 = 2'b01;
parameter M_LEN_4 = 2'b11;

// M_rxx handle module 
ysyx_26060173_MuxKeyWithDefault #(5, 8, 1) u0(
    .key(op_encoded), .out(M_ren), .default_out(1'b0), .lut({
        lb_encoded  , 1'b1,
        lbu_encoded , 1'b1,
        lh_encoded  , 1'b1,
        lhu_encoded , 1'b1,
        lw_encoded  , 1'b1
    })
);

ysyx_26060173_MuxKeyWithDefault #(5, 8, 32) u1(
    .key(op_encoded), .out(M_raddr), .default_out(32'b0), .lut({
        lb_encoded  , (src1 + imm),
        lbu_encoded , (src1 + imm),
        lh_encoded  , (src1 + imm),
        lhu_encoded , (src1 + imm),
        lw_encoded  , (src1 + imm)
    })
);

ysyx_26060173_MuxKeyWithDefault #(5, 8, 2) u2(
    .key(op_encoded), .out(M_rlen), .default_out(2'b0), .lut({
        lb_encoded  , M_LEN_1,
        lbu_encoded , M_LEN_1,
        lh_encoded  , M_LEN_2,
        lhu_encoded , M_LEN_2,
        lw_encoded  , M_LEN_4
    })
);

// M_wxxxx handle module
ysyx_26060173_MuxKeyWithDefault #(3, 8, 1) u3(
    .key(op_encoded), .out(M_wen), .default_out(1'b0), .lut({
        sb_encoded  , 1'b1,
        sh_encoded  , 1'b1,
        sw_encoded  , 1'b1
    })
);

ysyx_26060173_MuxKeyWithDefault #(3, 8, 32) u4(
    .key(op_encoded), .out(M_waddr), .default_out(32'b0), .lut({
        sb_encoded  , (src1 + imm),
        sh_encoded  , (src1 + imm),
        sw_encoded  , (src1 + imm)
    })
);

ysyx_26060173_MuxKeyWithDefault #(3, 8, 32) u5(
    .key(op_encoded), .out(M_wdata), .default_out(32'b0), .lut({
        sb_encoded  , src2,
        sh_encoded  , src2,
        sw_encoded  , src2
    })
);

ysyx_26060173_MuxKeyWithDefault #(3, 8, 2) u6(
    .key(op_encoded), .out(M_wlen), .default_out(2'b0), .lut({
        sb_encoded  , M_LEN_1,
        sh_encoded  , M_LEN_2,
        sw_encoded  , M_LEN_4
    })
);

/* dst and dnpc handle module */
wire [31:0] dst_shift;
wire [31:0] dst_common;

assign dst = dst_shift | dst_common;

ysyx_26060173_Shifter u7(
    .op_encoded(op_encoded),
    .src1(src1),
    .src2_4_0(src2[4:0]),
    .imm_4_0(imm[4:0]),
    .dst(dst_shift)
);

ysyx_26060173_MuxKey #(22,8, 32) u8(
    .key(op_encoded), .out(dst_common), .lut({
        lb_encoded      , {{24{M_rdata[7]}}, M_rdata[7:0]}      ,
        lbu_encoded     , M_rdata                               ,
        lh_encoded      , {{16{M_rdata[15]}}, M_rdata[15:0]}    ,
        lhu_encoded     , M_rdata                               ,
        lw_encoded      , M_rdata                               ,
        addi_encoded    , (src1 + imm)                          ,
        slti_encoded    , (((src1[31] ^ imm[31]) ? (src1[31] > imm[31]) : (src1 < imm)) ? 32'b1 : 32'b0),
        sltiu_encoded   , ((src1 < imm) ? 32'b1 : 32'b0)        ,
        xori_encoded    , (src1 ^ imm)                          ,
        ori_encoded     , (src1 | imm)                          ,
        andi_encoded    , (src1 & imm)                          ,
        jalr_encoded    , (pc + 4)                              ,

        auipc_encoded   , (pc + imm)                            ,
        lui_encoded     , imm                                   ,

        jal_encoded     , (pc + 4)                              ,

        add_encoded     , (src1 + src2)                         ,
        sub_encoded     , (src1 - src2)                         ,
        slt_encoded     , (((src1[31] ^ src2[31]) ? (src1[31] > src2[31]) : (src1 < src2)) ? 32'b1 : 32'b0),
        sltu_encoded    , ((src1 < src2) ? 32'b1 : 32'b0)       ,
        xor_encoded     , (src1 ^ src2)                         ,
        or_encoded      , (src1 | src2)                         ,                        
        and_encoded     , (src1 & src2)                                                                          
    })
);

ysyx_26060173_MuxKeyWithDefault #(8, 8, 32) u9(
    .key(op_encoded), .out(dnpc), .default_out(pc + 4), .lut({
        jalr_encoded  , (src1 + imm) & 32'hFFFFFFFE             ,

        jal_encoded   , (pc + imm)                              ,

        beq_encoded   , ((src1 == src2) ? (pc + imm) : (pc + 4))  ,
        bne_encoded   , ((src1 != src2) ? (pc + imm) : (pc + 4))  ,
        blt_encoded   , (((src1[31] ^ src2[31]) ? (src1[31] > src2[31]) : (src1 < src2)) ? (pc + imm) : (pc + 4)) ,
        bge_encoded   , (((src1[31] ^ src2[31]) ? (src1[31] <= src2[31]) : (src1 >= src2)) ? (pc + imm) : (pc + 4)),
        bltu_encoded  , (src1 < src2) ? (pc + imm) : (pc + 4)   ,
        bgeu_encoded  , (src1 >= src2) ? (pc + imm) : (pc + 4)  
    })
);

/* ebreak match and execute module */
import "DPI-C" function void npc_trap (input int pc, input int halt_ret);
always @(posedge clk) begin
    if(op_encoded == ebreak_encoded) begin
        // npc trap supported by DPI-C
        npc_trap(pc, src1);
    end
end

endmodule
