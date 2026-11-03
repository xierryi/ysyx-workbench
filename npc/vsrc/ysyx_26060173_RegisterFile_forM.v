module ysyx_26060173_RegisterFile_forM #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr,
  output reg [DATA_WIDTH-1:0] rdata
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (wen) 
      begin
        rf[waddr] <= wdata;
      end
  end

  assign rdata = rf[raddr];

endmodule
