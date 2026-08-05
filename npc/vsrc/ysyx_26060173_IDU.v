module ysyx_26060173_IDU(
    input [31:0] inst,

    // read from reg
    input [31:0] rdata1,
    // input [31:0] rdata2,
    output [4:0] raddr1,
    // output [4:0] raddr2,

    // output operand and ctrl signal to EXU
    output [31:0] operand1,
    // output [31:0] operand2,
    output [31:0] operand3,
    output [3:0] op_encoded,

    // decode signal from inst
    output [4:0] rd
    // output [4:0] rs2,
);

parameter addi_encoded = 4'b0000;
parameter jalr_encoded = 4'b0001;

parameter ebreak_encoded = 4'b1000;

wire [4:0] rs1;
// wire [4:0] rs2;
wire [31:0] imm;

assign rd = inst[11:7];
assign rs1 = inst[19:15];
// assign rs2 = inst[24:20];
assign imm = {{20{inst[31]}}, inst[31:20]};

assign op_encoded = {4{(inst[14:12] == 0) && (inst[6:0] == 7'b0010011)}} & addi_encoded
                  | {4{(inst[14:12] == 0) && (inst[6:0] == 7'b1100111)}} & jalr_encoded

                  | {4{(inst == 32'b100000000000001110011)}}             & ebreak_encoded;

assign raddr1 = rs1;
assign operand1 = rdata1;
assign operand3 = imm;
endmodule
