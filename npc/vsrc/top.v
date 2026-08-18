module top(
    input clk,
    input rst_pc,
    input wen_pc,
    input [31:0] d_init_pc
);
// output of IFU module
wire [31:0] inst;
wire [31:0] pc;

// regfiles interfaces
wire [4:0] waddr; 
wire [31:0] wdata;
wire wen;
wire [4:0] raddr1; 
wire [4:0] raddr2; 
wire [31:0] rdata1;
wire [31:0] rdata2;

// LSU interfaces
wire M_ren;
wire M_wen;
wire [31:0] M_waddr;
wire [31:0] M_wdata;
wire [7:0] M_wmask;
wire [31:0] M_rdata;
wire [31:0] M_raddr; 

// input operand of EXU
wire [3:0] op_encoded;
wire [31:0] operand1;
wire [31:0] operand2;
wire [31:0] operand3;

// input of WBU
wire [4:0] rd;
wire [31:0] result;
wire [31:0] dnpc;

// output of WBU 
wire [31:0] d_pcreg;

ysyx_26060173_RegisterFile #(
    5,
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
    .operand1(operand1),
    .operand2(operand2),
    .operand3(operand3),
    .op_encoded(op_encoded),
    .rd(rd)
);

ysyx_26060173_EXU u3(
    .clk(clk),
    .op_encoded(op_encoded),
    .operand1(operand1),
    .operand2(operand2),
    .operand3(operand3),
    .pc(pc),
    .M_rdata(M_rdata),
    .result(result),
    .M_ren(M_ren),
    .M_wen(M_wen),
    .M_raddr(M_raddr),
    .M_waddr(M_waddr),
    .M_wdata(M_wdata),
    .M_wmask(M_wmask),
    .dnpc(dnpc)
);

ysyx_26060173_WBU u4(
    .dnpc(dnpc),
    .rd(rd),
    .result(result),
    .waddr(waddr),
    .wdata(wdata),
    .d_pcreg(d_pcreg)
);

ysyx_26060173_LSU u5(
    .ren(M_ren),
    .wen(M_wen),
    .waddr(M_waddr),
    .wdata(M_wdata),
    .wmask(M_wmask),
    .raddr(M_raddr),
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

    // $display("dnpc: %x", dnpc);
    // $display("M_waddr: %x", M_waddr);
    // $display("M_wdata: %x", M_wdata);
    // $display("op_encoded: %d", op_encoded);

    // $display("   ");
end

endmodule
