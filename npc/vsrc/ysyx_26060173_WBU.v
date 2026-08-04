module ysyx_26060173_WBU(
    input [31:0] dnpc,
    input [4:0] rd,
    input [31:0] result,

    // write into reg
    output [4:0] waddr,
    output [31:0] wdata,

    // update pc
    output [31:0] d_pcreg
);

assign waddr = rd;
assign wdata = result;

assign d_pcreg = dnpc;

endmodule
