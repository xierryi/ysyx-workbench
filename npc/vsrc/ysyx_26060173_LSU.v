module ysyx_26060173_LSU(
    input clk,
    input [1:0] lsu_rlen,
    input M_ren,
    input M_wen,

    // handshake EXU<->LSU
    input exu2lsu_valid,
    output lsu2exu_ready,
    output lsu2exu_valid,
    input exu2lsu_ready,

    input [31:0] araddr,    // -+
    output arvalid,          // AR   //ifu2lsu_rvalid
    input arready,          // -+

    // input ifu_valid,

    output reg [31:0] rdata,// -+
    // output rresp,        //  |
    input rvalid,           //  R
    input rready,           // -+ 

    input [31:0] awaddr,    // -+
    output awvalid,         // AW
    input awready,          // -+

    input [31:0] wdata,     // -+
    input [1:0] lsu_wlen,   //  |
    input wvalid,           //  W
    input wready            // -+

    // input bresp,            // -+
    // input bvalid,           //  B
    // output bready,          // -+

);

parameter LEN_1 = 2'b00;
parameter LEN_2 = 2'b01;
parameter LEN_4 = 2'b11;

/* verilator lint_off UNUSEDSIGNAL */
wire [31:0] lsu_rlen_num;
ysyx_26060173_MuxKey #(3, 2, 32) u0(
    .key(lsu_rlen), .out(lsu_rlen_num), .lut({
        LEN_1, 32'd1,
        LEN_2, 32'd2,
        LEN_4, 32'd4
    })
);

wire [31:0] lsu_wlen_num;
ysyx_26060173_MuxKey #(3, 2, 32) u1(
    .key(lsu_wlen), .out(lsu_wlen_num), .lut({
        LEN_1, 32'd1,
        LEN_2, 32'd2,
        LEN_4, 32'd4
    })
);

// bus status transfer
parameter s_idle        = 3'b000;
parameter s_busy        = 3'b001;
parameter s_wait_r      = 3'b010;
parameter s_wait_w      = 3'b011;
parameter s_wait_exu    = 3'b100;

reg [2:0] cur_state, next_state;

always @(posedge clk) begin
    cur_state <= next_state;
    // $display("lsu:cur_state:%x",cur_state);
    // $display("cur_state: %x",cur_state);
    // $display("arvalid: %x",arvalid);
    // $display("arready: %x",arready);
    
end

ysyx_26060173_MuxKey #(5,3, 3) ST_next_state(
    .key(cur_state), .out(next_state),.lut({
        s_idle      , (exu2lsu_valid & lsu2exu_ready) ? s_busy : s_idle,
        s_busy      , (arvalid & arready) ? s_wait_r : ((awvalid & awready) ? s_wait_w : s_busy),
        s_wait_r    , (rvalid & rready) ? s_wait_exu : s_wait_r,
        s_wait_w    , (wvalid & wready) ? s_wait_exu : s_wait_w,
        s_wait_exu  , (lsu2exu_valid & exu2lsu_ready) ? s_idle : s_wait_exu
    }) 
);

ysyx_26060173_MuxKey #(5,3, 1) lsu2exu_validMUX(
    .key(cur_state), .out(lsu2exu_valid),.lut({
        s_idle      , 1'b0,
        s_busy      , 1'b0,
        s_wait_r    , 1'b0,
        s_wait_w    , 1'b0,
        s_wait_exu  , 1'b1
    }) 
);

ysyx_26060173_MuxKey #(5,3, 1) lsu2exu_readyMUX(
    .key(cur_state), .out(lsu2exu_ready),.lut({
        s_idle      , 1'b1,
        s_busy      , 1'b0,
        s_wait_r    , 1'b0,
        s_wait_w    , 1'b0,
        s_wait_exu  , 1'b0
    }) 
);

ysyx_26060173_MuxKey #(5,3, 1) arvalidMUX(
    .key(cur_state), .out(arvalid),.lut({
        s_idle      , 1'b0,
        s_busy      , M_ren,
        s_wait_r    , M_ren,
        s_wait_w    , 1'b0,
        s_wait_exu  , 1'b0
    }) 
);

ysyx_26060173_MuxKey #(5,3, 1) awvalidMUX(
    .key(cur_state), .out(awvalid),.lut({
        s_idle      , 1'b0,
        s_busy      , M_wen,
        s_wait_r    , 1'b0,
        s_wait_w    , 1'b0,
        s_wait_exu  , 1'b0
    }) 
);
// ysyx_26060173_MuxKey #(3,2, 1) awvalidMUX(
//     .key(cur_state), .out(awvalid),.lut({
//         s_idle      , 1'b0,
//         s_busy      , M_wen,
//         s_wait      , M_wen
//     }) 
// );
// ysyx_26060173_MuxKey #(2,1, 1) ST_next_state(
//     .key(cur_state), .out(next_state),.lut({
//         s_idle      , (arvalid & arready) ? s_wait : s_idle,
//         s_wait      , (rvalid & rready) ? s_idle : s_wait
//     }) 
// );

// ysyx_26060173_MuxKey #(2,1, 1) lsu2ifu_readyMUX(
//     .key(cur_state), .out(lsu2ifu_ready),.lut({
//         s_idle      , 1'b0,
//         s_wait      , (rvalid & rready) ? 1'b1 : 1'b0
//     }) 
// );

/* verilator lint_on UNUSEDSIGNAL */
`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function int vaddr_read(input int raddr, input int len);
import "DPI-C" function void vaddr_write(
  input int waddr, input int wdata, input int len);

always @(posedge clk) begin
    if(awvalid & awready) begin
        vaddr_write(awaddr, wdata, lsu_wlen_num);
    end
    else if(arvalid) begin
        rdata <= vaddr_read(araddr, lsu_rlen_num);
    end
end

`endif

endmodule
