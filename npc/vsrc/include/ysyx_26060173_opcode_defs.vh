`ifndef __OPCODE_DEFS__
`define __OPCODE_DEFS__

parameter [7:0] add_encoded   = 8'b00000000;
parameter [7:0] sub_encoded   = 8'b00000001;
parameter [7:0] sll_encoded   = 8'b00000010;
parameter [7:0] slt_encoded   = 8'b00000011;
parameter [7:0] sltu_encoded  = 8'b00000100;
parameter [7:0] xor_encoded   = 8'b00000101;
parameter [7:0] srl_encoded   = 8'b00000110;
parameter [7:0] sra_encoded   = 8'b00000111;
parameter [7:0] or_encoded    = 8'b00001000;
parameter [7:0] and_encoded   = 8'b00001001;

parameter [7:0] addi_encoded  = 8'b00001010;
parameter [7:0] slti_encoded  = 8'b00001011;
parameter [7:0] sltiu_encoded = 8'b00001100;
parameter [7:0] xori_encoded  = 8'b00001101;
parameter [7:0] ori_encoded   = 8'b00001110;
parameter [7:0] andi_encoded  = 8'b00001111;
parameter [7:0] slli_encoded  = 8'b00010000;
parameter [7:0] srli_encoded  = 8'b00010001;
parameter [7:0] srai_encoded  = 8'b00010010;

parameter [7:0] lb_encoded    = 8'b00010011;
parameter [7:0] lh_encoded    = 8'b00010100;
parameter [7:0] lw_encoded    = 8'b00010101;
parameter [7:0] lbu_encoded   = 8'b00010110;
parameter [7:0] lhu_encoded   = 8'b00010111;

parameter [7:0] sb_encoded    = 8'b00011000;
parameter [7:0] sh_encoded    = 8'b00011001;
parameter [7:0] sw_encoded    = 8'b00011010;

parameter [7:0] beq_encoded   = 8'b00011011;
parameter [7:0] bne_encoded   = 8'b00011100;
parameter [7:0] blt_encoded   = 8'b00011101;
parameter [7:0] bge_encoded   = 8'b00011110;
parameter [7:0] bltu_encoded  = 8'b00011111;
parameter [7:0] bgeu_encoded  = 8'b00100000;

parameter [7:0] jal_encoded   = 8'b00100001;
parameter [7:0] jalr_encoded  = 8'b00100010;

parameter [7:0] lui_encoded   = 8'b00100011;
parameter [7:0] auipc_encoded = 8'b00100100;

parameter [7:0] ebreak_encoded = 8'b00100110;

`endif
