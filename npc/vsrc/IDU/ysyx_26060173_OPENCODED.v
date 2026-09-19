`include "ysyx_26060173_opcode_defs.vh"

module ysyx_26060173_OPENCODED #(ENCODED_LEN = 4, NR_OPCODE = 9)(
    input [31:0] inst,
    output [ENCODED_LEN-1:0] op_encoded
);

wire [6:0] funct7;
wire [2:0] funct3;
wire [6:0] opcode;

assign funct7 = inst[31:25];
assign funct3 = inst[14:12];
assign opcode = inst[6:0];

ysyx_26060173_MuxKey #(NR_OPCODE, 1, ENCODED_LEN) u0 (
   .key(1'b1), .out(op_encoded), .lut({
                                  (funct3 == 3'b000) && (opcode == 7'b0000011), lb_encoded      ,
                                  (funct3 == 3'b100) && (opcode == 7'b0000011), lbu_encoded     ,
                                  (funct3 == 3'b001) && (opcode == 7'b0000011), lh_encoded      ,
                                  (funct3 == 3'b101) && (opcode == 7'b0000011), lhu_encoded     ,
                                  (funct3 == 3'b010) && (opcode == 7'b0000011), lw_encoded      ,
                                  (funct3 == 3'b000) && (opcode == 7'b0010011), addi_encoded    ,
        (funct7 == 7'b0000000) && (funct3 == 3'b001) && (opcode == 7'b0010011), slli_encoded    ,
                                  (funct3 == 3'b010) && (opcode == 7'b0010011), slti_encoded    ,
                                  (funct3 == 3'b011) && (opcode == 7'b0010011), sltiu_encoded   ,
                                  (funct3 == 3'b100) && (opcode == 7'b0010011), xori_encoded    ,
        (funct7 == 7'b0000000) && (funct3 == 3'b101) && (opcode == 7'b0010011), srli_encoded    ,
        (funct7 == 7'b0100000) && (funct3 == 3'b101) && (opcode == 7'b0010011), srai_encoded    ,
                                  (funct3 == 3'b110) && (opcode == 7'b0010011), ori_encoded     ,
                                  (funct3 == 3'b111) && (opcode == 7'b0010011), andi_encoded    ,
                                  (funct3 == 3'b000) && (opcode == 7'b1100111), jalr_encoded    ,

                                                        (opcode == 7'b0010111), auipc_encoded   ,
                                                        (opcode == 7'b0110111), lui_encoded     ,

                                  (funct3 == 3'b000) && (opcode == 7'b0100011), sb_encoded      ,
                                  (funct3 == 3'b001) && (opcode == 7'b0100011), sh_encoded      ,
                                  (funct3 == 3'b010) && (opcode == 7'b0100011), sw_encoded      ,

                                                        (opcode == 7'b1101111), jal_encoded     ,

                                  (funct3 == 3'b000) && (opcode == 7'b1100011), beq_encoded     ,
                                  (funct3 == 3'b001) && (opcode == 7'b1100011), bne_encoded     ,
                                  (funct3 == 3'b100) && (opcode == 7'b1100011), blt_encoded     ,
                                  (funct3 == 3'b101) && (opcode == 7'b1100011), bge_encoded     ,
                                  (funct3 == 3'b110) && (opcode == 7'b1100011), bltu_encoded    ,
                                  (funct3 == 3'b111) && (opcode == 7'b1100011), bgeu_encoded    ,

        (funct7 == 7'b0000000) && (funct3 == 3'b000) && (opcode == 7'b0110011), add_encoded     ,
        (funct7 == 7'b0100000) && (funct3 == 3'b000) && (opcode == 7'b0110011), sub_encoded     ,
        (funct7 == 7'b0000000) && (funct3 == 3'b001) && (opcode == 7'b0110011), sll_encoded     ,
        (funct7 == 7'b0000000) && (funct3 == 3'b010) && (opcode == 7'b0110011), slt_encoded     ,
        (funct7 == 7'b0000000) && (funct3 == 3'b011) && (opcode == 7'b0110011), sltu_encoded    ,
        (funct7 == 7'b0000000) && (funct3 == 3'b100) && (opcode == 7'b0110011), xor_encoded     ,
        (funct7 == 7'b0000000) && (funct3 == 3'b101) && (opcode == 7'b0110011), srl_encoded     ,
        (funct7 == 7'b0100000) && (funct3 == 3'b101) && (opcode == 7'b0110011), sra_encoded     ,
        (funct7 == 7'b0000000) && (funct3 == 3'b110) && (opcode == 7'b0110011), or_encoded      ,
        (funct7 == 7'b0000000) && (funct3 == 3'b111) && (opcode == 7'b0110011), and_encoded     ,

        (inst == 32'b100000000000001110011)                                   , ebreak_encoded  
   }) 
);

endmodule
