module ysyx_26060173_Shifter(
    input [7:0] op_encoded,
    input [31:0] src1,
    input [4:0] src2_4_0,
    input [4:0] imm_4_0,
    output [31:0] dst
);

wire shift_en;
wire [1:0] shift_mode;

parameter logic_left  = 2'b00;
parameter logic_right = 2'b01;
parameter arith_right = 2'b11;

wire [31:0] load;
wire [4:0] shift;

ysyx_26060173_Barrelshifter u0(
    .L_A(shift_mode[1]),
    .R_L(shift_mode[0]),
    .load(load),
    .shift(shift),
    .out(dst)
);

ysyx_26060173_MuxKeyWithDefault #(6, 8, 1) u1(
    .key(op_encoded), .out(shift_en), .default_out(1'b0), .lut({
        slli_encoded, 1'b1, 
        srli_encoded, 1'b1, 
        srai_encoded, 1'b1, 
        sll_encoded , 1'b1, 
        srl_encoded , 1'b1, 
        sra_encoded , 1'b1 
    })
);

ysyx_26060173_MuxKeyWithDefault #(6, 8, 2) u2(
    .key(op_encoded), .out(shift_mode), .default_out(2'b00), .lut({
        slli_encoded, logic_left, 
        srli_encoded, logic_right,
        srai_encoded, arith_right,
        sll_encoded , logic_left, 
        srl_encoded , logic_right,
        sra_encoded , arith_right
    })
);

assign load = src1 & {32{shift_en}};

ysyx_26060173_MuxKeyWithDefault #(6, 8, 5) u3(
    .key(op_encoded), .out(shift), .default_out(5'b0), .lut({
        slli_encoded, imm_4_0, 
        srli_encoded, imm_4_0,
        srai_encoded, imm_4_0,
        sll_encoded , src2_4_0,  
        srl_encoded , src2_4_0,
        sra_encoded , src2_4_0
    })
);

endmodule
