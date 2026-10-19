module ysyx_26060173_EandCSR(
    input [24:0] inst_31_7,
    input [2:0] funct3,
    input en,
    output ebreak,
    output ecall,
    output mret,
    output csr
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

ysyx_26060173_MuxKeyWithDefault #(1, 25, 1) u1(
    .key(inst_31_7), .out(ecall), .default_out(1'b0), .lut({
        25'b0, en
    })
);

ysyx_26060173_MuxKeyWithDefault #(1, 25, 1) u2(
    .key(inst_31_7), .out(mret), .default_out(1'b0), .lut({
        25'b0011000000100000000000000, en
    })
);

ysyx_26060173_MuxKeyWithDefault #(1, 1, 1) u3(
    .key(1'b1), .out(csr), .default_out(1'b0), .lut({
        (funct3[0] | funct3[1] | funct3[2]), en
    })
);


endmodule
