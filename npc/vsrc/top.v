module top(
    input clk,
    input rst_pc,
    input wen_pc,
    input [31:0] d_init_pc

    `ifdef ysyx_26060173_SYNTHESIS
    ,
    // ---- 指令存储器接口（综合时对外）----
    output [31:0] imem_addr,
    input  [31:0] imem_rdata,
    // ---- 数据存储器接口（综合时对外）----
    output        dmem_ren,
    output        dmem_wen,
    output [31:0] dmem_raddr,
    output [1:0]  dmem_rlen,
    output [31:0] dmem_waddr,
    output [1:0]  dmem_wlen,
    output [31:0] dmem_wdata,
    input  [31:0] dmem_rdata
    `endif
);
// output of IFU module
wire [31:0] inst;
wire [31:0] pc;

// regfiles interfaces
wire [3:0] waddr; 
wire [31:0] wdata;
wire wen;
wire [3:0] raddr1; 
wire [3:0] raddr2; 
wire [31:0] rdata1;
wire [31:0] rdata2;

// LSU interfaces
wire M_ren;
wire M_wen;
wire [31:0] M_waddr;
wire [1:0] M_wlen;
wire [31:0] M_wdata;
wire [31:0] M_rdata;
wire [31:0] M_raddr; 
wire [1:0] M_rlen;

// input operand of EXU
wire [7:0] op_encoded;
wire [31:0] src1;
wire [31:0] src2;
wire [31:0] imm;

// input of WBU
wire [4:0] rd;
wire [31:0] dst;
wire [31:0] dnpc;

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
assign M_rdata    = dmem_rdata;

`endif

ysyx_26060173_RegisterFile #(
    4,
    32
) u0(
    .clk(clk),
    .wdata(wdata),
    .waddr(waddr),
    .wen(wen),
    .raddr1(raddr1),
    .raddr2(raddr2),
    .rdata1(rdata1),
    .rdata2(rdata2)
);

ysyx_26060173_IFU u1(
    .clk(clk), 
    .rst(rst_pc),
    .wen(wen_pc), 
    .d_init(d_init_pc),
    .d_pcreg(d_pcreg), 
    .pc(pc),
    .inst(inst)
);

ysyx_26060173_IDU u2(
    .inst(inst),
    .wen(wen),
    .rdata1(rdata1),
    .rdata2(rdata2),
    .raddr1(raddr1),
    .raddr2(raddr2),
    .src1(src1),
    .src2(src2),
    .imm(imm),
    .op_encoded(op_encoded),
    .rd(rd),
    .pc(pc),
    .dnpc(dnpc)
);

ysyx_26060173_EXU u3(
    .clk(clk),
    .op_encoded(op_encoded),
    .src1(src1),
    .src2(src2),
    .imm(imm),
    .pc(pc),
    .M_rdata(M_rdata),
    .dst(dst),
    .M_ren(M_ren),
    .M_wen(M_wen),
    .M_raddr(M_raddr),
    .M_rlen(M_rlen),
    .M_waddr(M_waddr),
    .M_wlen(M_wlen),
    .M_wdata(M_wdata),
    .dnpc(dnpc)
);

ysyx_26060173_WBU u4(
    .dnpc(dnpc),
    .rd(rd),
    .dst(dst),
    .waddr(waddr),
    .wdata(wdata),
    .d_pcreg(d_pcreg)
);

ysyx_26060173_LSU u5(
    .ren(M_ren),
    .wen(M_wen),
    .waddr(M_waddr),
    .wlen(M_wlen),
    .wdata(M_wdata),
    .raddr(M_raddr),
    .rlen(M_rlen),
    .rdata(M_rdata)
);

/* test module */
always @(posedge clk) begin
    // $display("PC: %x", pc);
    // $display("inst: %x", inst);
    // $display("rdata1: %x", rdata1);
    // $display("rdata2: %x", rdata2);
    // $display("raddr1: %x", raddr1);
    // $display("raddr2: %x", raddr2);
    // $display("operand3: %x", operand3);
    // $display("operand1: %x", operand1);
    // $display("operand2: %x", operand2);
    // $display("waddr: %x", waddr);
    // $display("wdata: %x", wdata);
    // $display("M_rdata: %x", M_rdata);
    // $display("M_raddr: %x", M_raddr);
    // $display("rlen: %x", M_rlen);

    // $display("dnpc: %x", dnpc);
    // $display("M_waddr: %x", M_waddr);
    // $display("M_wen: %x", M_wen);
    // $display("M_wdata: %x", M_wdata);
    // $display("op_encoded: %d", op_encoded);

    // $display("   ");
end

endmodule
