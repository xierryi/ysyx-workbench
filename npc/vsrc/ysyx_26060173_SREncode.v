module ysyx_26060173_SREncode #(ADDR_WIDTH = 1) (
  input [11:0] addr,
  output [ADDR_WIDTH-1:0] addr_enc
);

parameter ysyx_26060173_MSTATUS   = 12'h300;
parameter ysyx_26060173_MTVEC     = 12'h305;
parameter ysyx_26060173_MEPC      = 12'h341;
parameter ysyx_26060173_MCAUSE    = 12'h342;
parameter ysyx_26060173_MCYCLE    = 12'hB00;
parameter ysyx_26060173_MCYCLEH   = 12'hB80;
parameter ysyx_26060173_MVENDORID = 12'hF11;
parameter ysyx_26060173_MARCHID   = 12'hF12;


ysyx_26060173_MuxKeyWithDefault #(8, 12, ADDR_WIDTH) u1(
    .key(addr), .out(addr_enc), .default_out('b0), .lut({
      ysyx_26060173_MSTATUS,  'd0,
      ysyx_26060173_MTVEC,    'd1,
      ysyx_26060173_MEPC,     'd2,
      ysyx_26060173_MCAUSE,   'd3,
      ysyx_26060173_MCYCLE,   'd4,
      ysyx_26060173_MCYCLEH,  'd5,
      ysyx_26060173_MVENDORID,'d6,
      ysyx_26060173_MARCHID,  'd7
    })
);

endmodule
