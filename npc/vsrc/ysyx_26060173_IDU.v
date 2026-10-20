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
    output ecall,
    output mret,
    output csr,

    output [11:0] SR_addr,
    output SR_csr_wen,
    output SR_ecall_wen,

    output [2:0] funct3,
    output inst_30,

    // decode signal from inst
    output [4:0] rd,

    // for ftrace
    /* verilator lint_off UNUSEDSIGNAL */
    input [31:0] pc,
    input [31:0] dnpc
    /* verilator lint_on UNUSEDSIGNAL */ 
);

wire [6:0] opcode;

assign opcode = inst[6:0];
assign funct3 = inst[14:12];
assign inst_30 = inst[30];

wire EandCSR;
wire R_wen_main;

ysyx_26060173_Control u0(
    .opcode(opcode),
    .B_en(B_en),
    .Branch(Branch),
    .isB_type(isB_type),
    .RegIn(RegIn),
    .ALUIn1Sel(ALUIn1Sel),
    .ALUIn2Sel(ALUIn2Sel),
    .R_wen(R_wen_main),
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
    .funct3(funct3),
    .en(EandCSR),
    .ebreak(ebreak),
    .ecall(ecall),
    .mret(mret),
    .csr(csr)
);

ysyx_26060173_FieldFetch u2(
    .inst(inst),
    .opcode(opcode),
    .ebreak(ebreak),
    .csr(csr),
    .ecall(ecall),
    .mret(mret),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .imm(imm),
    .SR_addr(SR_addr)
);

/* interfaces for GPR and EXU */
assign raddr1 = rs1[3:0];
assign src1 = rdata1;
assign raddr2 = rs2[3:0];
assign src2 = rdata2;

assign R_wen = R_wen_main | csr;

/* interfaces for SR */
assign SR_csr_wen = csr;
assign SR_ecall_wen = ecall;


/* TO DO!!! */
`ifdef ysyx_26060173_SIMULATION
`ifdef CONFIG_FTRACE
import "DPI-C" function void ftrace_get_addr(input int inst_addr, input int func_addr, input byte rs1, input byte rd, input int imm);
always @(*) begin
    if(Branch == 2'b10) begin
       ftrace_get_addr(pc, dnpc, {3'b0, rs1}, {3'b0, rd}, imm);
    end
end
`endif
`endif

endmodule
