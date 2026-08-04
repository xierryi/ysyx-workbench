module ysyx_26060173_IFU(
    input clk,
    input wen,
    input [31:0] d_pcreg,
    output reg [31:0] pc
);

ysyx_26060173_PCRegister #(32) u0(
    .clk(clk),
    .wen(wen),
    .d_pcreg(d_pcreg),
    .pc(pc)
);

endmodule
