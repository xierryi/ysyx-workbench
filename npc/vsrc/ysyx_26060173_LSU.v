module ysyx_26060173_LSU(
    input clk,
    input ren,
    input wen,
    // input [31:0] waddr,
    input [7:0] waddr,
    input [1:0] wlen,
    input [31:0] wdata,
    // input [31:0] raddr,
    input [7:0] raddr,
    input [1:0] rlen,
    output reg [31:0] rdata
);

parameter LEN_1 = 2'b00;
parameter LEN_2 = 2'b01;
parameter LEN_4 = 2'b11;

/* verilator lint_off UNUSEDSIGNAL */
wire [31:0] rlen_num;
ysyx_26060173_MuxKey #(3, 2, 32) u0(
    .key(rlen), .out(rlen_num), .lut({
        LEN_1, 32'd1,
        LEN_2, 32'd2,
        LEN_4, 32'd4
    })
);

wire [31:0] wlen_num;
ysyx_26060173_MuxKey #(3, 2, 32) u1(
    .key(wlen), .out(wlen_num), .lut({
        LEN_1, 32'd1,
        LEN_2, 32'd2,
        LEN_4, 32'd4
    })
);

wire [31:0] rdata_;

(* keep *) ysyx_26060173_RegisterFile_forM #(8, 32) u2(
    .clk(clk),
    .raddr(raddr),
    .rdata(rdata_),
    .waddr(waddr),
    .wen(wen),
    .wdata(wdata)
);

assign rdata = ren ? rdata_ : 0;

/* verilator lint_on UNUSEDSIGNAL */
`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function int vaddr_read(input int raddr, input int len);
import "DPI-C" function void vaddr_write(
  input int waddr, input int wdata, input int len);

always @(*) begin
    if(ren) begin
        rdata = vaddr_read(raddr, rlen_num);
    end
    else begin
        rdata = 0;
    end
    if(wen) begin
        vaddr_write(waddr, wdata, wlen_num);
    end
end
`endif

endmodule
