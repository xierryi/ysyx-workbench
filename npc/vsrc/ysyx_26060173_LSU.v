module ysyx_26060173_LSU(
    input ren,
    input wen,
    input [31:0] waddr,
    input [1:0] wlen,
    input [31:0] wdata,
    input [7:0] wmask,
    input [31:0] raddr,
    input [1:0] rlen,
    output reg [31:0] rdata
);

parameter LEN_1 = 2'b00;
parameter LEN_2 = 2'b01;
parameter LEN_4 = 2'b11;

/* verilator lint_off UNUSEDSIGNAL */
wire [31:0] rlen_num;
assign rlen_num = 'd1 & {32{(rlen == LEN_1)}} |
                  'd2 & {32{(rlen == LEN_2)}} |
                  'd4 & {32{(rlen == LEN_4)}}; 
wire [31:0] wlen_num;
assign wlen_num = 'd1 & {32{(wlen == LEN_1)}} |
                  'd2 & {32{(wlen == LEN_2)}} |
                  'd4 & {32{(wlen == LEN_4)}}; 
/* verilator lint_on UNUSEDSIGNAL */

import "DPI-C" function int vaddr_read(input int raddr, input int len);
import "DPI-C" function void vaddr_write(
  input int waddr, input int wdata, input int len, input byte wmask);

always @(*) begin
    if(ren) begin
        rdata = vaddr_read(raddr, rlen_num);
    end
    else begin
        rdata = 0;
    end
    if(wen) begin
        vaddr_write(waddr, wdata, wlen_num, wmask);
    end
end

endmodule
