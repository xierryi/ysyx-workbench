module ysyx_26060173_Barrelshifter(
    input R_L,
    input L_A,
    input [31:0] load,
    input [4:0] shift,
    output [31:0] out
);

parameter shift_left  = 1'b0;
parameter shift_right = 1'b1;

parameter shift_logic = 1'b0;
parameter shift_arith = 1'b1;

wire shift_fillbit;

ysyx_26060173_MuxKey #(2, 1, 1) u0 (
    .key(L_A), .out(shift_fillbit), .lut({
        shift_logic, 1'b0,       
        shift_arith, load[31]
    })
);

wire [31:0] lvl1;

ysyx_26060173_MuxKey #(4, 2, 32) u1 (
    .key({R_L, shift[0]}), .out(lvl1), .lut({
        {shift_left , 1'b0}, load,
        {shift_right, 1'b0}, load,
        {shift_left , 1'b1}, {load[30:0], 1'b0},
        {shift_right, 1'b1}, {shift_fillbit, load[31:1] }
    })
);

wire [31:0] lvl2;

ysyx_26060173_MuxKey #(4, 2, 32) u2 (
    .key({R_L, shift[1]}), .out(lvl2), .lut({
        {shift_left , 1'b0}, lvl1,
        {shift_right, 1'b0}, lvl1,
        {shift_left , 1'b1}, {lvl1[29:0], 2'b0},
        {shift_right, 1'b1}, {{2{shift_fillbit}}, lvl1[31:2]}
    })
);

wire [31:0] lvl3;

ysyx_26060173_MuxKey #(4, 2, 32) u3 (
    .key({R_L, shift[2]}), .out(lvl3), .lut({
        {shift_left , 1'b0}, lvl2,
        {shift_right, 1'b0}, lvl2,
        {shift_left , 1'b1}, {lvl2[27:0], 4'b0},
        {shift_right, 1'b1}, {{4{shift_fillbit}}, lvl2[31:4] }
    })
);

wire [31:0] lvl4;

ysyx_26060173_MuxKey #(4, 2, 32) u4 (
    .key({R_L, shift[3]}), .out(lvl4), .lut({
        {shift_left , 1'b0}, lvl3,
        {shift_right, 1'b0}, lvl3,
        {shift_left , 1'b1}, {lvl3[23:0], 8'b0},
        {shift_right, 1'b1}, {{8{shift_fillbit}}, lvl3[31:8] }
    })
);

ysyx_26060173_MuxKey #(4, 2, 32) u5 (
    .key({R_L, shift[4]}), .out(out), .lut({
        {shift_left , 1'b0}, lvl4,
        {shift_right, 1'b0}, lvl4,
        {shift_left , 1'b1}, {lvl4[15:0], 16'b0},
        {shift_right, 1'b1}, {{16{shift_fillbit}}, lvl4[31:16] }
    })
);
endmodule
