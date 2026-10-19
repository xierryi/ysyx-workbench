module ysyx_26060173_SystemReg #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [11:0] addr,
  input wen,
  output reg [DATA_WIDTH-1:0] rdata
);

wire [ADDR_WIDTH-1:0] addr_enc;

ysyx_26060173_SREncode #(ADDR_WIDTH) u0 (
  .addr(addr),
  .addr_enc(addr_enc)
);

  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (wen) 
      begin
        rf[addr_enc] <= wdata;
      end
  end

  assign rdata = rf[addr_enc]; // rdata1 = R[raddr1]

endmodule
