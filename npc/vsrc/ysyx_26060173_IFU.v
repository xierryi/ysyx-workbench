module ysyx_26060173_IFU(
    input clk,
    input rst,
    input [31:0] d_init,
    input [31:0] d_pcreg,

    // simple bus
    output reg [31:0] ifu_raddr,
    output [31:0] ifu_rdata,
    output ifu_valid

    // async bus // implement later
    // input ready,    // IFU <- IDU
    // output valid    // IFU -> IDU

);
wire [31:0] pc;

ysyx_26060173_PCRegister #(32) u0(
    .clk(clk),
    .rst(rst),
    .wen(ifu_valid),
    .d_init(d_init),
    .d_pcreg(d_pcreg),
    .pc(pc)
);

// // bus status transfer
parameter s_idle        = 1'b0;
parameter s_wait        = 1'b1;

reg cur_state, next_state;

always @(posedge clk) begin
    cur_state <= next_state;
end

ysyx_26060173_MuxKey #(2,1, 1) ST_next_state(
    .key(cur_state), .out(next_state),.lut({
        s_idle      , s_wait,
        s_wait      , s_idle
    }) 
);

ysyx_26060173_MuxKey #(2,1, 1) validMux(
    .key(cur_state), .out(ifu_valid),.lut({
        s_idle      , 1'b0,
        s_wait      , 1'b1
    }) 
);

// ysyx_26060173_MuxKey #(2,1, 32) ifu_addrMux(
//     .key(cur_state), .out(ifu_raddr),.lut({
//         s_idle      , pc,
//         s_wait      , 32'b0
//     }) 
// );

assign ifu_raddr = pc;


`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function int vaddr_ifetch(input int raddr, input int len);
always @(posedge clk) begin
    ifu_rdata <= vaddr_ifetch(ifu_raddr, 4); 
end   
`endif

endmodule
