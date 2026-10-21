module ysyx_26060173_SystemReg #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,

  /* verilator lint_off UNUSEDSIGNAL */
  input rst,
  /* verilator lint_on UNUSEDSIGNAL */
  input [DATA_WIDTH-1:0] wdata,
  input [11:0] addr,
  input csr_wen,
  input ecall_wen,
  input [31:0] pc,
  output reg [DATA_WIDTH-1:0] rdata
);

wire [ADDR_WIDTH-1:0] addr_enc;

ysyx_26060173_SREncode #(ADDR_WIDTH) u0 (
  .addr(addr),
  .addr_enc(addr_enc)
);

/* verilator lint_off MULTIDRIVEN */
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  always @(posedge clk or posedge rst) begin
  // always @(posedge clk) begin
    if(rst) begin
      rf[3'd0] <= 32'h1800;   // mstatus
      rf[3'd6] <= 32'h79737978;   // mvendorid
      rf[3'd7] <= 32'h18DA58D;    // marchid
    end
    else begin
      if (csr_wen && addr_enc != 3'd4 && addr_enc != 3'd5) 
        begin
          rf[addr_enc] <= wdata;
        end
      if(ecall_wen)
        begin
          rf[3'd2] <= pc;    // mepc
          rf[3'd3] <= 'd11;  // mcause
        end
    end
  end
  assign rdata = rf[addr_enc]; // rdata1 = R[raddr1]

  /* counter */ 
  always @(posedge clk or posedge rst) begin
  // always @(posedge clk or posedge rst) begin
    if(rst) begin rf[3'd4] <= 0; rf[3'd5] <= 0; end 
    else
    begin
      {rf[3'd5], rf[3'd4]} <= {rf[3'd5], rf[3'd4]} + 64'd1;
    end
  end

  // always @(posedge clk) begin
  //   $display("cycle num: %x %x", rf[3'd5], rf[3'd4]);
  // end
  // always @(posedge clk) begin
  //   $display("mstatus: %x ", rf[3'd0]);
  //   $display("mstatus: %x ", rf[3'd1]);
  //   $display("mstatus: %x ", rf[3'd2]);
  //   $display("mstatus: %x ", rf[3'd3]);
  //   $display("mstatus: %x ", rf[3'd4]);
  // end

/* verilator lint_on MULTIDRIVEN */
endmodule
