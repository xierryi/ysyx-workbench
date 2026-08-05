module top(
    input clk,
    input wen_pc,
    input [31:0] inst,
    output reg [31:0] pc
);

wire [31:0] d_pcreg;
wire [3:0] op_encoded;
wire [4:0] rd;
// wire [4:0] rs2;

// regfiles interfaces
wire [4:0] waddr; 
wire [31:0] wdata;
// wire wen;
wire [4:0] raddr1; 
wire [4:0] raddr2; 
wire [31:0] rdata1;
wire [31:0] rdata2;

wire [31:0] M_raddr; 
// output operand of IDU and 
// input operand of EXU
wire [31:0] operand1;
wire [31:0] operand2;
wire [31:0] operand3;

// result of EXU
wire [31:0] result;

// output of WBU 
wire [31:0] dnpc;

// output of LSU
wire [31:0] M_rdata;

ysyx_26060173_RegisterFile #(
    5,
    32
) u0(
    .clk(clk),
    .wdata(wdata),
    .waddr(waddr),
    // .wen(wen),
    .wen(1),
    .raddr1(raddr1),
    .raddr2(raddr2),
    .rdata1(rdata1),
    .rdata2(rdata2)
);

ysyx_26060173_IFU u1(
    .clk(clk), 
    .wen(wen_pc), 
    .d_pcreg(d_pcreg), 
    .pc(pc)
);

ysyx_26060173_IDU u2(
    .inst(inst),
    .rdata1(rdata1),
    .rdata2(rdata2),
    .raddr1(raddr1),
    .raddr2(raddr2),
    .operand1(operand1),
    .operand2(operand2),
    .operand3(operand3),
    .op_encoded(op_encoded),
    .rd(rd)
    // .rs2(rs2),
);

ysyx_26060173_EXU u3(
    .clk(clk),
    .op_encoded(op_encoded),
    .operand1(operand1),
    .operand2(operand2),
    .operand3(operand3),
    .pc(pc),
    .result(result),
    .M_raddr(M_raddr),
    .dnpc(dnpc)
);

ysyx_26060173_WBU u4(
    .dnpc(dnpc),
    .rd(rd),
    .op_encoded(op_encoded),
    .result(result),
    .M_rdata(M_rdata),
    .waddr(waddr),
    .wdata(wdata),
    .d_pcreg(d_pcreg)
);

ysyx_26060173_LSU u5(
    .valid(M_valid),
    .wen(M_wen),
    .waddr(_waddr),
    .wdata(M_wdata),
    .wmask(M_wdata),
    .raddr(M_raddr),
    .rdata(M_rdata)
);

always @(posedge clk) begin
    $display("PC: %x", pc);
    $display("rdata1: %x", rdata1);
    $display("raddr1: %x", raddr1);
    $display("operand3: %x", operand3);
    $display("waddr: %x", waddr);
    $display("wdata: %x", wdata);
    $display("   ");
end

endmodule
