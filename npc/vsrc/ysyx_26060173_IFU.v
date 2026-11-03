module ysyx_26060173_IFU(
    input clk,
    input rst,
    input wen,
    input [31:0] d_init,
    input [31:0] d_pcreg,
    output reg [31:0] pc,
    output [31:0] inst

    // async bus // implement later
    // input ready,    // IFU <- IDU
    // output valid    // IFU -> IDU

    // only for reg as M
    // ,
    // input inst_wen, 
    // input [7:0] inst_waddr,
    // input [31:0] inst_wdata
);

ysyx_26060173_PCRegister #(32) u0(
    .clk(clk),
    .rst(rst),
    .wen(wen),
    .d_init(d_init),
    .d_pcreg(d_pcreg),
    .pc(pc)
);

// // bus status transfer
// parameter s_idle        = 1'b0;
// parameter s_wait_ready  = 1'b1;

// reg cur_state, next_state;

// always @(posedge clk) begin

//     cur_state <= next_state;
// end

// ysyx_26060173_MuxKey #(2,1, 1) u0(
//     .key(cur_state), .out(next_state),lut({
//         s_idle      , valid ? s_wait_ready : s_idle, 
//         s_wait_ready, ready ? s_idle : s_wait_ready 
//     }) 
// );

// wire [31:0] inst_;

// ysyx_26060173_RegisterFile_forM #(8, 32) u2(
//     .clk(clk),
//     .wen(1'b1),
//     .waddr(8'b0),
//     .wdata(32'b0),
//     .raddr(pc[7:0]),
//     .rdata(inst_)
// );

// assign inst = wen ? inst_ : 0;

`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function int vaddr_ifetch(input int raddr, input int len);
always @(*) begin
    inst = wen ? vaddr_ifetch(pc, 4) : 0; 
end    

`endif

endmodule
