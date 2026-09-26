`include "ysyx_26060173_defines.v"
module ysyx_26060173_IDU(
    input [31:0] inst,

    // read from reg 
    input [31:0] rdata1,
    input [31:0] rdata2,
    output [3:0] raddr1,
    output [3:0] raddr2,

    // output operand and ctrl signal to EXU
    output [31:0] src1,
    output [31:0] src2,
    output [31:0] imm,

    // ctrl signal
    input B_en,
    output [1:0] Branch,
    output isB_type,
    output [1:0] RegIn,
    output ALUIn1Sel,
    output ALUIn2Sel,
    output R_wen,
    output M_wen,
    output M_ren,
    // output EandCSR,
    output ebreak,

    output [2:0] funct3,
    output inst_30,

    // decode signal from inst
    output [4:0] rd,

    // for ftrace
    input [31:0] pc,
    input [31:0] dnpc
);

wire [6:0] opcode;

assign opcode = inst[6:0];
assign funct3 = inst[14:12];
assign inst_30 = inst[30];

wire EandCSR;
ysyx_26060173_Control u0(
    .opcode(opcode),
    .B_en(B_en),
    .Branch(Branch),
    .isB_type(isB_type),
    .RegIn(RegIn),
    .ALUIn1Sel(ALUIn1Sel),
    .ALUIn2Sel(ALUIn2Sel),
    .R_wen(R_wen),
    .M_ren(M_ren),
    .M_wen(M_wen),
    .EandCSR(EandCSR)
);

/* field fetch module */
/* verilator lint_off UNUSEDSIGNAL */
wire [4:0] rs1;
wire [4:0] rs2;
/* verilator lint_on UNUSEDSIGNAL */

ysyx_26060173_EandCSR u1(
    .inst_31_7(inst[31:7]),
    .en(EandCSR),
    .ebreak(ebreak)
);

ysyx_26060173_FieldFetch u2(
    .inst(inst),
    .opcode(opcode),
    .ebreak(ebreak),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .imm(imm)
);

/* interfaces for GPR and EXU */
assign raddr1 = rs1[3:0];
assign src1 = rdata1;
assign raddr2 = rs2[3:0];
assign src2 = rdata2;

/* TO DO!!! */
`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function void ftrace_get_addr(input int inst_addr, input int func_addr, input byte rs1, input byte rd, input int imm);
always @(*) begin
    if(Branch == 2'b10) begin
       ftrace_get_addr(pc, dnpc, {3'b0, rs1}, {3'b0, rd}, imm);
    end
end
`endif

endmodule
