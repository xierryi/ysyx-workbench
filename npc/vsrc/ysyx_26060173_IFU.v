module ysyx_26060173_IFU(
    input clk,
    input wen,
    input [31:0] d_pcreg,
    output reg [31:0] pc,
    output [31:0] inst 
);

ysyx_26060173_PCRegister #(32) u0(
    .clk(clk),
    .wen(wen),
    .d_pcreg(d_pcreg),
    .pc(pc)
);

import "DPI-C" function int pmem_read(input int raddr);
always @(*) begin
    inst = pmem_read(pc);
end    

endmodule
