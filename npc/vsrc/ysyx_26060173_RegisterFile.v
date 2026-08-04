module ysyx_26060173_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr1,
  // input [ADDR_WIDTH-1:0] raddr2,
  output reg [DATA_WIDTH-1:0] rdata1
  // output reg [DATA_WIDTH-1:0] rdata2
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (wen) 
      begin
        if(waddr != 0) rf[waddr] <= wdata;
      end
  end

  assign rf[0] = 0; // R[0] = 0
  assign rdata1 = rf[raddr1]; // rdata1 = R[raddr1]
  // assign rdata2 = rf[raddr2]; // rdata2 = R[raddr2]

endmodule
