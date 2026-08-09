module ysyx_26060173_IFU(
    input clk,
    input rst,
    input wen,
    input [31:0] d_init,
    input [31:0] d_pcreg,
    output reg [31:0] pc,
    output [31:0] inst 
);

ysyx_26060173_PCRegister #(32) u0(
    .clk(clk),
    .rst(rst),
    .wen(wen),
    .d_init(d_init),
    .d_pcreg(d_pcreg),
    .pc(pc)
);

import "DPI-C" function int pmem_read(input int raddr);
always @(*) begin
    inst = wen ? pmem_read(pc) : 0; 
end    

endmodule
