module ysyx_26060173_EXU(
    input clk,
    input [3:0] op_encoded,
    input [31:0] operand1,
    input [31:0] operand2,
    input [31:0] operand3,
    input [31:0] pc,

    input [31:0] M_rdata,

    output M_valid,
    output M_wen,
    output [31:0] M_raddr,
    output [31:0] M_waddr,
    output [31:0] M_wdata,
    output [7:0] M_wmask,

    output [31:0] result, // result -> wdata
    output [31:0] dnpc

);

parameter add_encoded  = 4'b0000;
parameter addi_encoded = 4'b0001;
parameter lui_encoded  = 4'b0010;
parameter lw_encoded   = 4'b0011;
parameter lbu_encoded  = 4'b0100;
parameter sw_encoded   = 4'b0101;
parameter sb_encoded   = 4'b0110;
parameter jalr_encoded = 4'b0111;

parameter ebreak_encoded = 4'b1000;

wire add_en, addi_en, lui_en, lw_en, lbu_en, sw_en, sb_en, jalr_en, ebreak_en;
wire [4:0] M_raddr_shiftbit;

assign add_en  = (op_encoded == add_encoded);
assign addi_en = (op_encoded == addi_encoded);
assign lui_en  = (op_encoded == lui_encoded);
assign lw_en   = (op_encoded == lw_encoded);
assign lbu_en  = (op_encoded == lbu_encoded);
assign sw_en   = (op_encoded == sw_encoded);
assign sb_en   = (op_encoded == sb_encoded);
assign jalr_en = (op_encoded == jalr_encoded);

assign ebreak_en = (op_encoded == ebreak_encoded);

/* M interfaces */
assign M_valid = lw_en | lbu_en | sw_en | sb_en;
// M_raddr handle module 
assign M_raddr = (operand1 + operand3) & {32{lw_en | lbu_en}};
assign M_raddr_shiftbit = M_raddr[1:0] << 3;
// M_wxxxx handle module
assign M_wen = sw_en | sb_en;
assign M_waddr = (operand1 + operand3) & {32{sw_en | sb_en}};
assign M_wdata = operand2 & {32{sw_en | sb_en}};
assign M_wmask = 8'b1111 & {8{sw_en}}
               | (8'b0001 & {8{(M_waddr[1:0] == 2'b00)}} 
                | 8'b0010 & {8{(M_waddr[1:0] == 2'b01)}} 
                | 8'b0100 & {8{(M_waddr[1:0] == 2'b10)}} 
                | 8'b1000 & {8{(M_waddr[1:0] == 2'b11)}}) & {8{sb_en}};


/* result and dnpc handle module */
assign result = (operand1 + operand2)                  & {32{add_en}}
              | (operand1 + operand3)                  & {32{addi_en}}
              | (pc + 4)                               & {32{jalr_en}} 
              | operand3                               & {32{lui_en}}
              | M_rdata                                & {32{lw_en}}
              | (M_rdata >> M_raddr_shiftbit) & 32'hFF & {32{lbu_en}};

assign dnpc = (pc + 4) & {32{~jalr_en}}
            | ((operand1 + operand3) & 32'hFFFFFFFE) & {32{jalr_en}};



/* ebreak match and execute module */
import "DPI-C" function void npc_trap (input int pc);
always @(posedge clk) begin
    if(ebreak_en) begin
        // npc trap supported by DPI-C
        npc_trap(pc);
    end
end

endmodule
