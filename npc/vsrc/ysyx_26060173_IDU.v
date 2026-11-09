`include "ysyx_26060173_defines.v"
module ysyx_26060173_IDU(
    input clk,
    // handshake: IFU<->IDU
    input [31:0] inst,
    input ifu2idu_valid,
    output idu2ifu_ready,

    // read from reg 
    input [31:0] rdata1,
    input [31:0] rdata2,
    output [3:0] raddr1,
    output [3:0] raddr2,

    // output operand and ctrl signal to EXU
    // handshake: IDU<->EXU
    output idu2exu_valid,
    input exu2idu_ready,

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
    output R_wen_main,
    output M_wen,
    output M_ren,
    // output EandCSR,
    output ebreak,
    output ecall,
    output mret,
    output csr,

    output [11:0] SR_addr,

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


// bus status transfer
parameter s_idle        = 2'b00;
// parameter s_busy        = 2'b01;
parameter s_wait        = 2'b10;

reg [1:0] cur_state, next_state;

always @(posedge clk) begin
    cur_state <= next_state;
    // $display("idu:cur_state:%x",cur_state);
end

ysyx_26060173_MuxKey #(2,2, 2) ST_next_state(
    .key(cur_state), .out(next_state),.lut({
        s_idle  , (ifu2idu_valid & idu2ifu_ready) ? s_wait : s_idle,
        // s_busy  , s_wait, 
        s_wait  , (idu2exu_valid & exu2idu_ready) ? s_idle : s_wait
    }) 
);

ysyx_26060173_MuxKey #(2,2, 1) idu2exu_validMUX(
    .key(cur_state), .out(idu2exu_valid),.lut({
        s_idle  , 1'b0,
        // s_busy  , 1'b0,
        s_wait  , 1'b1
    }) 
);

ysyx_26060173_MuxKey #(2,2, 1) idu2ifu_readyMUX(
    .key(cur_state), .out(idu2ifu_ready),.lut({
        s_idle  , 1'b1,
        // s_busy  , 1'b0,
        s_wait  , 1'b0
    }) 
);



/* TO DO!!! */
`ifdef ysyx_26060173_SIMULATION
`ifdef CONFIG_FTRACE
import "DPI-C" function void ftrace_get_addr(input int inst_addr, input int func_addr, input byte rs1, input byte rd, input int imm);
always @(*) begin
    if(Branch == 2'b10 && ifu_valid) begin
       ftrace_get_addr(pc, dnpc, {3'b0, rs1}, {3'b0, rd}, imm);
    end
end
`endif
`endif

endmodule
