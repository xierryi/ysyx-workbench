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

import "DPI-C" function int vaddr_ifetch(input int raddr, input int len);
always @(*) begin
    inst = wen ? vaddr_ifetch(pc, 4) : 0; 
end    

import "DPI-C" function void cpu_get_pc(input int pc);
always @(*) begin
    cpu_get_pc(pc);
end    

endmodule
