module ysyx_26060173_EandCSR(
    input [24:0] inst_31_7,
    input en,
    output ebreak
);

// ysyx_26060173_MuxKeyWithDefault #(1, 3, 1) u0(
//     .key(mode), .out(ebreak), .default_out(1'b0), .lut({
//         3'b000, 1
//     })
// );

ysyx_26060173_MuxKeyWithDefault #(1, 25, 1) u0(
    .key(inst_31_7), .out(ebreak), .default_out(1'b0), .lut({
        25'b10000000000000, en
    })
);
endmodule
