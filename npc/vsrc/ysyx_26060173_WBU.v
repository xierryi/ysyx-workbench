module ysyx_26060173_WBU(
    // pc reg write interface
    input [31:0] dnpc,

    // gpr write interfaces
/* verilator lint_off UNUSEDSIGNAL */
    input [4:0] rd,
/* verilator lint_on UNUSEDSIGNAL */
    input [31:0] dst,

    // write into reg
    output [3:0] waddr,
    output [31:0] wdata,

    // update pc
    output [31:0] d_pcreg
);
assign waddr = rd[3:0];
assign wdata = dst;
assign d_pcreg = dnpc;

endmodule
