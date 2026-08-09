module ysyx_26060173_LSU(
    input ren,
    input wen,
    input [31:0] waddr,
    input [31:0] wdata,
    input [7:0] wmask,
    input [31:0] raddr,
    output reg [31:0] rdata
);

import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);

always @(*) begin
    if(ren) begin
        rdata = pmem_read(raddr);
    end
    else begin
        rdata = 0;
    end
    if(wen) begin
        pmem_write(waddr, wdata, wmask);
    end
end

endmodule
