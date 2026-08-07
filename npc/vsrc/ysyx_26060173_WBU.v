module ysyx_26060173_WBU(
    input [31:0] dnpc,
    input [4:0] rd,
    // input [3:0] op_encoded,
    input [31:0] result,
    // input [31:0] M_rdata,

    // write into reg
    output [4:0] waddr,
    output [31:0] wdata,

    // update pc
    output [31:0] d_pcreg
);

// parameter add_encoded  = 4'b0000;
// parameter addi_encoded = 4'b0001;
// parameter lui_encoded  = 4'b0010;
// parameter lw_encoded   = 4'b0011;
// parameter lbu_encoded  = 4'b0100;
// parameter sw_encoded   = 4'b0101;
// parameter sb_encoded   = 4'b0110;
// parameter jalr_encoded = 4'b0111;

// wire add_en, addi_en, jalr_en, lui_en, lw_en ;

// assign add_en  = (op_encoded == add_encoded);
// assign addi_en = (op_encoded == addi_encoded);
// assign lui_en  = (op_encoded == lui_encoded);
// assign lw_en   = (op_encoded == lw_encoded);
// assign lbu_en  = (op_encoded == lbu_encoded);
// assign jalr_en = (op_encoded == jalr_encoded);

assign waddr = rd;
// assign wdata = result & {32{add_en | addi_en | lui_en | jalr_en}} 
//              | M_rdata & {32{lw_en}};
assign wdata = result;

assign d_pcreg = dnpc;

endmodule
