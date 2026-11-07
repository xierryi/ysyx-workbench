module ysyx_26060173_LSU(
    input clk,
    input lsu_ren,
    input lsu_wen,
    input [31:0] lsu_waddr,
    input [1:0] lsu_wlen,
    input [31:0] lsu_wdata,
    input [31:0] lsu_raddr,
    input [1:0] lsu_rlen,
    input ifu2lsu_rvalid,
    // input ifu_valid,
    output lsu2ifu_ready,
    output reg [31:0] lsu_rdata,

    input lsu_respValid
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

wire lsu_reqValid;

assign lsu_reqValid = ifu2lsu_rvalid;

// bus status transfer
parameter s_idle        = 1'b0;
parameter s_wait        = 1'b1;

reg cur_state, next_state;

always @(posedge clk) begin
    cur_state <= next_state;
    // $display("cur_state: %x",cur_state);
end

ysyx_26060173_MuxKey #(2,1, 1) ST_next_state(
    .key(cur_state), .out(next_state),.lut({
        s_idle      , lsu_reqValid ? s_wait : s_idle,
        s_wait      , lsu_respValid ? s_idle : s_wait
    }) 
);

ysyx_26060173_MuxKey #(2,1, 1) lsu2ifu_readyMUX(
    .key(cur_state), .out(lsu2ifu_ready),.lut({
        s_idle      , 1'b0,
        s_wait      , lsu_respValid ? 1'b1 : 1'b0
    }) 
);

/* verilator lint_on UNUSEDSIGNAL */
`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function int vaddr_read(input int raddr, input int len);
import "DPI-C" function void vaddr_write(
  input int waddr, input int wdata, input int len);

always @(posedge clk) begin
    lsu_rdata <= (!lsu_wen & lsu_ren & lsu_reqValid) ? vaddr_read(lsu_raddr, lsu_rlen_num) : 32'b0;
    if(lsu_wen) begin
        vaddr_write(lsu_waddr, lsu_wdata, lsu_wlen_num);
    end
end

`endif

endmodule
