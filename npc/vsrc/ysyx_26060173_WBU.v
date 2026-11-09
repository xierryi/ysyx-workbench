module ysyx_26060173_WBU(
    input clk,
    // handshake EXU<->WBU
    input exu2wbu_valid,
    output wbu2exu_ready,

    output R_SR_bus_en,
    // pc reg write interface
    // handshake WBU<->IFU
    output wbu2ifu_valid,
    input ifu2wbu_ready,
    input [31:0] dnpc,

    // gpr write interfaces
/* verilator lint_off UNUSEDSIGNAL */
    input [4:0] rd,
/* verilator lint_on UNUSEDSIGNAL */
    input [31:0] dst,

    input [31:0] SR_dst,

    // write into reg
    output [3:0] waddr,
    output [31:0] wdata,

    // update pc
    output [31:0] d_pcreg,

    // write into SR 
    output [31:0] SR_wdata
);
assign waddr = rd[3:0];
assign wdata = dst;
assign d_pcreg = dnpc;

assign SR_wdata = SR_dst;


// bus status transfer
parameter s_idle        = 2'b00;
// parameter s_busy        = 2'b01;
parameter s_wait        = 2'b10;

reg [1:0] cur_state, next_state;

always @(posedge clk) begin
    cur_state <= next_state;
    // $display("wbu:cur_state:%x",cur_state);
end

ysyx_26060173_MuxKey #(2,2, 2) ST_next_state(
    .key(cur_state), .out(next_state),.lut({
        s_idle  , (exu2wbu_valid & wbu2exu_ready) ? s_wait : s_idle,
        s_wait  , (wbu2ifu_valid & ifu2wbu_ready) ? s_idle : s_wait 
    }) 
);

ysyx_26060173_MuxKey #(2,2, 1) R_SR_bus_enMUX(
    .key(cur_state), .out(R_SR_bus_en),.lut({
        s_idle  , 1'b0,
        s_wait  , (wbu2ifu_valid & ifu2wbu_ready) ? 1'b1 : 1'b0
    }) 
);

ysyx_26060173_MuxKey #(2,2, 1) wbu2ifu_validMUX(
    .key(cur_state), .out(wbu2ifu_valid),.lut({
        s_idle  , 1'b0,
        s_wait  , 1'b1
    }) 
);

ysyx_26060173_MuxKey #(2,2, 1) wbu2exu_readyMUX(
    .key(cur_state), .out(wbu2exu_ready),.lut({
        s_idle  , 1'b1,
        s_wait  , 1'b0
    }) 
);

endmodule
