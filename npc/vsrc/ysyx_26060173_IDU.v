module ysyx_26060173_IDU(
    input [31:0] inst,

    output wen,
    // read from reg and M
    input [31:0] rdata1,
    input [31:0] rdata2,
    output [4:0] raddr1,
    output [4:0] raddr2,
    // output [31:0] M_raddr,

    // output operand and ctrl signal to EXU
    output [31:0] operand1,
    output [31:0] operand2,
    output [31:0] operand3,
    output [3:0] op_encoded,

    // decode signal from inst
    output [4:0] rd
    // output [4:0] rs2,
);

/* opcode encoded module */
parameter add_encoded  = 4'b0000;
parameter addi_encoded = 4'b0001;
parameter lui_encoded  = 4'b0010;
parameter lw_encoded   = 4'b0011;
parameter lbu_encoded  = 4'b0100;
parameter sw_encoded   = 4'b0101;
parameter sb_encoded   = 4'b0110;
parameter jalr_encoded = 4'b0111;
parameter ebreak_encoded = 4'b1000;

assign op_encoded = {4{(inst[31:25] == 0) && (inst[14:12] == 0) && (inst[6:0] == 7'b0110011)}}  & add_encoded
                  | {4{(inst[14:12] == 0) && (inst[6:0] == 7'b0010011)}}                        & addi_encoded
                  | {4{(inst[6:0] == 7'b0110111)}}                                              & lui_encoded
                  | {4{(inst[14:12] == 3'b010) && (inst[6:0] == 7'b0000011)}}                   & lw_encoded
                  | {4{(inst[14:12] == 3'b100) && (inst[6:0] == 7'b0000011)}}                   & lbu_encoded
                  | {4{(inst[14:12] == 3'b010) && (inst[6:0] == 7'b0100011)}}                   & sw_encoded
                  | {4{(inst[14:12] == 3'b000) && (inst[6:0] == 7'b0100011)}}                   & sb_encoded
                  | {4{(inst[14:12] == 0) && (inst[6:0] == 7'b1100111)}}                        & jalr_encoded
                  | {4{(inst == 32'b100000000000001110011)}}                                    & ebreak_encoded;

/* opcode type module */
// parameter R_type = 3'b000;
parameter I_type = 3'b001;
parameter S_type = 3'b010;
// parameter B_type = 3'b011;
parameter U_type = 3'b100;
wire [2:0] op_type;

assign op_type = // R_type & {3{(op_encoded == add_encoded )}} 
                 I_type & {3{(op_encoded == addi_encoded) 
                           | (op_encoded == jalr_encoded) 
                           | (op_encoded == lw_encoded) 
                           | (op_encoded == lbu_encoded) 
                          }}
               | S_type & {3{(op_encoded == sw_encoded) 
                           | (op_encoded == sb_encoded)
                          }}
               | U_type & {3{(op_encoded == lui_encoded)}} 
               ;


/* field fetch module */
wire [4:0] rs1;
wire [4:0] rs2;
wire [31:0] imm;

assign rd = inst[11:7];
assign rs1 = inst[19:15];
assign rs2 = inst[24:20];

assign imm = {{20{inst[31]}}, inst[31:20]}             & {32{op_type == I_type}}

           | {{20{inst[31]}}, inst[31:25], inst[11:7]} & {32{op_type == S_type}}
           | {inst[31:12], 12'b0}                      & {32{op_type == U_type}}
;

/* interfaces for GPR and EXU */
assign raddr1 = rs1;
assign operand1 = rdata1;
assign raddr2 = rs2;
assign operand2 = rdata2;
assign operand3 = imm;

/* interfaces for LSU */
assign wen = (op_type == I_type) || (op_type == U_type);
endmodule
