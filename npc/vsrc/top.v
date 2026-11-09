module top(
    input clk,
    input rst_pc,
    // input wen_pc,
    input [31:0] d_init_pc

    `ifdef ysyx_26060173_SYNTHESIS
    ,
    // ---- 指令存储器接口（综合时对外）----
    output [31:0] imem_addr,
    input  [31:0] imem_rdata,
    // only for reg as M
    // input inst_wen, 
    // input [7:0] inst_waddr,
    // input [31:0] inst_wdata,

    // ---- 数据存储器接口（综合时对外）----
    output        dmem_ren,
    output        dmem_wen,
    // output [31:0] dmem_raddr,
    output [7:0] dmem_raddr,
    output [1:0]  dmem_rlen,
    // output [31:0] dmem_waddr,
    output [7:0] dmem_waddr,
    output [1:0]  dmem_wlen,
    output [31:0] dmem_wdata,
    // input  [31:0] dmem_rdata
    `endif
);

// handshake
wire ifu2idu_valid;
wire idu2ifu_ready;

wire idu2exu_valid;
wire exu2idu_ready;

wire exu2lsu_valid;
wire lsu2exu_ready;

wire lsu2exu_valid;
wire exu2lsu_ready;

wire exu2wbu_valid;
wire wbu2exu_ready;

wire wbu2ifu_valid;
wire ifu2wbu_ready;

// output of IFU module
wire [31:0] inst;
wire [31:0] pc;
wire ifu_arvalid;
wire ifu_arready;
wire ifu_rvalid;
wire ifu_rready;

// regfiles interfaces
wire R_SR_bus_en;
wire [3:0] waddr; 
wire [31:0] wdata;
wire [3:0] raddr1; 
wire [3:0] raddr2; 
wire [31:0] rdata1;
wire [31:0] rdata2;

// LSU interfaces
wire [31:0] M_waddr;
wire [1:0] M_wlen;
wire [31:0] M_wdata;
wire [31:0] M_rdata;
wire [31:0] M_raddr; 
wire [1:0] M_rlen;
wire lsu_arvalid;
wire lsu_arready;
wire lsu_rvalid;
wire lsu_rready;

wire lsu_awvalid;
wire lsu_awready;
wire lsu_wvalid;
wire lsu_wready;

// Control Signal
wire [1:0] Branch;
wire isB_type;
wire B_en;
wire [1:0] RegIn;
wire ALUIn1Sel;
wire ALUIn2Sel;
wire R_wen_main;
wire R_wen;
wire M_wen;
wire M_ren;

// EandCSR part
wire ebreak;
wire ecall;
wire mret;
wire csr;

// System Register
wire [11:0] SR_addr;
wire [31:0] SR_wdata;
wire SR_csr_wen;
wire SR_ecall_wen;
wire [31:0] SR_rdata;

wire [2:0] funct3;
wire inst_30;

wire [31:0] src1;
wire [31:0] src2;
wire [31:0] imm;

// input of WBU
wire [4:0] rd;
wire [31:0] dst;
wire [31:0] dnpc;
wire [31:0] SR_dst;

// output of WBU 
wire [31:0] d_pcreg;

`ifdef ysyx_26060173_SYNTHESIS
assign imem_addr = pc;
assign inst      = imem_rdata;

// 访存：把 LSU 的请求引出，把返回数据接回
assign dmem_ren   = M_ren;
assign dmem_wen   = M_wen;
assign dmem_raddr = M_raddr;
assign dmem_rlen  = M_rlen;
assign dmem_waddr = M_waddr;
assign dmem_wlen  = M_wlen;
assign dmem_wdata = M_wdata;
// assign M_rdata    = dmem_rdata;

`endif

ysyx_26060173_RegisterFile #(
    4,
    32
) u0(
    .clk(clk),
    .wdata(wdata),
    .waddr(waddr),
    .wen(R_wen & R_SR_bus_en),
    .raddr1(raddr1),
    .raddr2(raddr2),
    .rdata1(rdata1),
    .rdata2(rdata2)
);

ysyx_26060173_SystemReg #(
    3,
    32
) u1(
    .clk(clk),
    .rst(rst_pc),
    .pc(pc),
    .addr(SR_addr),
    .rdata(SR_rdata),
    .wdata(SR_wdata),
    .csr_wen(SR_csr_wen & R_SR_bus_en),
    .ecall_wen(SR_ecall_wen & R_SR_bus_en)
);

ysyx_26060173_IFU u2(
    .clk(clk), 
    .rst(rst_pc),
    // .pc_wen_out(wen_pc), 
    .d_init(d_init_pc),
    .d_pcreg(d_pcreg), 
    .R_SR_bus_en(R_SR_bus_en),
    .ifu2wbu_ready(ifu2wbu_ready),
    .wbu2ifu_valid(wbu2ifu_valid),
    .araddr(pc),
    .arvalid(ifu_arvalid),
    .arready(ifu_arready),
    .rdata(inst),
    .rvalid(ifu_rvalid),
    .rready(ifu_rready),
    .ifu2idu_valid(ifu2idu_valid),
    .idu2ifu_ready(idu2ifu_ready)
);

ysyx_26060173_IDU u3(
    .clk(clk),
    .inst(inst),
    .ifu2idu_valid(ifu2idu_valid),
    .idu2ifu_ready(idu2ifu_ready),
    .rdata1(rdata1),
    .rdata2(rdata2),
    .raddr1(raddr1),
    .raddr2(raddr2),
    .idu2exu_valid(idu2exu_valid),
    .exu2idu_ready(exu2idu_ready),
    .src1(src1),
    .src2(src2),
    .imm(imm),
    .B_en(B_en),
    .Branch(Branch),
    .isB_type(isB_type),
    .RegIn(RegIn),
    .ALUIn1Sel(ALUIn1Sel),
    .ALUIn2Sel(ALUIn2Sel),
    .R_wen_main(R_wen_main),
    .M_ren(M_ren),
    .M_wen(M_wen),
    .ebreak(ebreak),
    .ecall(ecall),
    .mret(mret),
    .csr(csr),
    .SR_addr(SR_addr),
    .funct3(funct3),
    .inst_30(inst_30),
    .rd(rd),
    .pc(pc),
    .dnpc(dnpc)
);

ysyx_26060173_EXU u4(
    .clk(clk),
    .idu2exu_valid(idu2exu_valid),
    .exu2idu_ready(exu2idu_ready),
    .R_wen_main(R_wen_main),
    .R_wen(R_wen),
    .SR_csr_wen(SR_csr_wen),
    .SR_ecall_wen(SR_ecall_wen),
    .Branch(Branch),
    .isB_type(isB_type),
    .B_en(B_en),
    .RegIn(RegIn),
    .ALUIn1Sel(ALUIn1Sel),
    .ALUIn2Sel(ALUIn2Sel),
    .M_ren(M_ren),
    .M_wen(M_wen),
    .ebreak(ebreak),
    .ecall(ecall),
    .mret(mret),
    .csr(csr),
    .SR_rdata(SR_rdata),
    .funct3(funct3),
    .inst_30(inst_30),
    .src1(src1),
    .src2(src2),
    .imm(imm),
    .pc(pc),
    .exu2lsu_valid(exu2lsu_valid),
    .lsu2exu_ready(lsu2exu_ready),
    .exu2lsu_ready(exu2lsu_ready),
    .lsu2exu_valid(lsu2exu_valid),
    .M_rdata(M_rdata),
    .M_raddr(M_raddr),
    .M_rlen(M_rlen),
    .M_waddr(M_waddr),
    .M_wlen(M_wlen),
    .M_wdata(M_wdata),
    .exu2wbu_valid(exu2wbu_valid),
    .wbu2exu_ready(wbu2exu_ready),
    .dst(dst),
    .dnpc(dnpc),
    .SR_dst(SR_dst)
);

ysyx_26060173_WBU u5(
    .clk(clk),
    .exu2wbu_valid(exu2wbu_valid),
    .wbu2exu_ready(wbu2exu_ready),
    .R_SR_bus_en(R_SR_bus_en),
    .wbu2ifu_valid(wbu2ifu_valid),
    .ifu2wbu_ready(ifu2wbu_ready),
    .dnpc(dnpc),
    .rd(rd),
    .dst(dst),
    .SR_dst(SR_dst),
    .waddr(waddr),
    .wdata(wdata),
    .d_pcreg(d_pcreg),
    .SR_wdata(SR_wdata)
);

ysyx_26060173_LSU u6(
    .clk(clk),
    .lsu_wlen(M_wlen),
    .wdata(M_wdata),
    .lsu_rlen(M_rlen),
    .M_ren(M_ren),
    .M_wen(M_wen),
    .exu2lsu_valid(exu2lsu_valid),
    .lsu2exu_ready(lsu2exu_ready),
    .lsu2exu_valid(lsu2exu_valid),
    .exu2lsu_ready(exu2lsu_ready),
    .araddr(M_raddr),
    .arvalid(lsu_arvalid),
    .arready(lsu_arready),
    .rdata(M_rdata),
    .rvalid(lsu_rvalid),
    .rready(lsu_rready),
    .awaddr(M_waddr),
    .awvalid(lsu_awvalid),
    .awready(lsu_awready),
    .wvalid(lsu_wvalid),
    .wready(lsu_wready)
    // .ifu_valid(ifu_valid),
);

/* MEM simulation */
/* ifu */
ysyx_26060173_DelayCreate ifu_arready_gen(
    .clk(clk),
    .delay_cycle('d0),
    .out_cycle('d1),
    .start_frame(ifu_arvalid),
    .out(ifu_arready)
);

ysyx_26060173_DelayCreate ifu_rvalid_gen(
    .clk(clk),
    .delay_cycle('d1),
    .out_cycle('d2),
    .start_frame(ifu_arvalid),
    .out(ifu_rvalid)
);

ysyx_26060173_DelayCreate ifu_rready_gen(
    .clk(clk),
    .delay_cycle('d2),
    .out_cycle('d1),
    .start_frame(ifu_arvalid),
    .out(ifu_rready)
);
/* lsu */
ysyx_26060173_DelayCreate lsu_arready_gen(
    .clk(clk),
    .delay_cycle('d2),
    .out_cycle('d1),
    .start_frame(lsu_arvalid),
    .out(lsu_arready)
);

ysyx_26060173_DelayCreate lsu_rready_gen(
    .clk(clk),
    .delay_cycle('d4),
    .out_cycle('d1),
    .start_frame(lsu_arvalid),
    .out(lsu_rready)
);

ysyx_26060173_DelayCreate lsu_rvalid_gen(
    .clk(clk),
    .delay_cycle('d3),
    .out_cycle('d2),
    .start_frame(lsu_arvalid),
    .out(lsu_rvalid)
); 

ysyx_26060173_DelayCreate lsu_awready_gen(
    .clk(clk),
    .delay_cycle('d2),
    .out_cycle('d1),
    .start_frame(lsu_awvalid),
    .out(lsu_awready)
);

ysyx_26060173_DelayCreate lsu_wready_gen(
    .clk(clk),
    .delay_cycle('d4),
    .out_cycle('d1),
    .start_frame(lsu_awvalid),
    .out(lsu_wready)
);

ysyx_26060173_DelayCreate lsu_wvalid_gen(
    .clk(clk),
    .delay_cycle('d3),
    .out_cycle('d2),
    .start_frame(lsu_awvalid),
    .out(lsu_wvalid)
); 

/* test module */
// always @(posedge clk) begin
//     $display("PC: %x", pc);
//     $display("ifu2idu_valid:%x",ifu2idu_valid);
//     $display("idu2ifu_ready:%x",idu2ifu_ready);
//     $display("---");
//     $display("idu2exu_valid:%x",idu2exu_valid);
//     $display("exu2idu_ready:%x",exu2idu_ready);
//     $display("---");
//     $display("exu2lsu_valid:%x",exu2lsu_valid);
//     $display("lsu2exu_ready:%x",lsu2exu_ready);
//     $display("---");
//     $display("lsu2exu_valid:%x",lsu2exu_valid);
//     $display("exu2lsu_ready:%x",exu2lsu_ready);
//     $display("---");
//     $display("exu2wbu_valid:%x",exu2wbu_valid);
//     $display("wbu2exu_ready:%x",wbu2exu_ready);
//     $display("---");
//     $display("wbu2ifu_valid:%x",wbu2ifu_valid);
//     $display("ifu2wbu_ready:%x",ifu2wbu_ready);


//     $display("arready:%x",arready);
//     $display("rvalid:%x",rvalid);
    // $display("inst: %x", inst);
    // $display("rdata1: %x", rdata1);
    // $display("rdata2: %x", rdata2);
    // $display("raddr1: %x", raddr1);
    // $display("raddr2: %x", raddr2);
    // $display("imm: %x", imm);
    // $display("src1: %x", src1);
    // $display("src2: %x", src2);
    // $display("waddr: %x", waddr);
    // $display("wdata: %x", wdata);
    // $display("M_rdata: %x", M_rdata);
    // $display("M_raddr: %x", M_raddr);
    // $display("rlen: %x", M_rlen);
    // $display("M_ren: %x", M_ren);
    // $display("ifu_valid: %x", ifu_valid);
    // $display("arvalid: %x", arvalid);
    // $display("rvalid:%x", rvalid);
    // $display("lsu2ifu_ready: %x", lsu2ifu_ready);
    // $display("R_wen: %x", R_wen);

    // $display("dnpc: %x", dnpc);
    // $display("M_waddr: %x", M_waddr);
    // $display("M_wen: %x", M_wen);
    // $display("M_wdata: %x", M_wdata);
    // $display("op_encoded: %d", op_encoded);
    // $display("ebreak: %x", ebreak);
//     $display("SR_addr: %x", SR_addr);
//     $display("SR_en: %x", SR_csr_wen);
//     $display("SR_rdata: %x", SR_rdata);
//     $display("SR_wdata: %x", SR_wdata);

//     $display("   ");
// end

endmodule
