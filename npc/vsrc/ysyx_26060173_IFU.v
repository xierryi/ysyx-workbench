module ysyx_26060173_IFU(
    input clk,
    input rst,
    input [31:0] d_init,
    input [31:0] d_pcreg,

    // simple bus
    output reg [31:0] araddr,   // -+
    output arvalid,             // AR
    input arready,              // -+

    output [31:0] rdata,        // -+
    // output rresp,               //  |
    input rvalid,               //  R
    input rready,               // -+

    output ifu_valid,

    input ifu_isload,
    input lsu2ifu_ready,

    output lsu_arvalid,
    input lsu_arready

    // async bus // implement later
    // input ready,    // IFU <- IDU
    // output valid    // IFU -> IDU

);
wire [31:0] pc;
// wire pc_wen;

ysyx_26060173_PCRegister #(32) u0(
    .clk(clk),
    .rst(rst),
    .wen(ifu_valid),
    .d_init(d_init),
    .d_pcreg(d_pcreg),
    .pc(pc)
);

// // bus status transfer
parameter s_idle        = 2'b00;
parameter s_wait_mem    = 2'b01;
parameter s_wait        = 2'b10;
parameter s_wait_lsu    = 2'b11;

reg [1:0] cur_state, next_state;

always @(posedge clk) begin
    cur_state <= next_state;
    // $display("ifu:cur_state:%x",cur_state);
    // $display("ifu_load:%x",ifu_isload);
    // $display("lsu_arready:%x",lsu_arready);
    // $display("lsu2ifu_ready:%x",lsu2ifu_ready);
end

ysyx_26060173_MuxKey #(4,2, 2) ST_next_state(
    .key(cur_state), .out(next_state),.lut({
        s_idle      , (arvalid & arready) ? s_wait_mem : s_idle,
        s_wait_mem  , (rvalid & rready) ? s_wait : s_wait_mem,
        s_wait      , ifu_isload ? (lsu_arready ? s_wait_lsu : s_wait) : s_idle, // TO DELETE
        s_wait_lsu  , lsu2ifu_ready ? s_idle : s_wait_lsu
    }) 
);

ysyx_26060173_MuxKey #(4,2, 1) arvalidMUX(
    .key(cur_state), .out(arvalid),.lut({
        s_idle      , 1'b1,
        s_wait_mem  , 1'b0,
        s_wait      , 1'b0,
        s_wait_lsu  , 1'b0
    }) 
);


ysyx_26060173_MuxKey #(4,2, 1) validMux(
    .key(cur_state), .out(ifu_valid),.lut({
        s_idle      , 1'b0,
        s_wait_mem  , 1'b0,
        s_wait      , ifu_isload ? 1'b0 : 1'b1,
        s_wait_lsu  , lsu2ifu_ready ? 1'b1 : 1'b0
    }) 
);

ysyx_26060173_MuxKey #(4,2, 1) lsu_arvalidMux(
    .key(cur_state), .out(lsu_arvalid),.lut({
        s_idle      , 1'b0,
        s_wait_mem  , 1'b0,
        s_wait      , ifu_isload ? 1'b1 : 1'b0,
        s_wait_lsu  , 1'b1
    }) 
);

// ysyx_26060173_MuxKey #(2,1, 32) ifu_addrMux(
//     .key(cur_state), .out(araddr),.lut({
//         s_idle      , pc,
//         s_wait      , 32'b0
//     }) 
// );

assign araddr = pc;


`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function int vaddr_ifetch(input int raddr, input int len);
always @(posedge clk) begin
    if(arvalid & arready) rdata <= vaddr_ifetch(araddr, 4); 
end   
`endif

endmodule
