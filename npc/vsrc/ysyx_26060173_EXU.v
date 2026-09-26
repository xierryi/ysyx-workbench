
module ysyx_26060173_EXU(
    input clk,
    
    // opcode encoded and operand from IDU
    input [1:0] Branch,
    input isB_type,
    output B_en,
    input [1:0] RegIn,
    input ALUIn1Sel,
    input ALUIn2Sel,
    input M_ren,
    input M_wen,
    // output EandCSR,
    input ebreak,

    input [2:0] funct3,
    input inst_30,

    input [31:0] src1,
    input [31:0] src2,
    input [31:0] imm,

    // input of execute for jalr and ebreak 
    input [31:0] pc,

    // Memory interfaces
    input [31:0] M_rdata,
    output [31:0] M_raddr,
    output [1:0] M_rlen,
    output [31:0] M_waddr,
    output [1:0] M_wlen,
    output [31:0] M_wdata,


    // input of WBU
    output [31:0] dst, // dst -> wdata
    output [31:0] dnpc

);

/* ALU Module */
wire [31:0] ALUIn1;
wire [31:0] ALUIn2;
wire [31:0] ALUResult;

ysyx_26060173_MuxKey #(2, 1, 32) ALUIn1MUX(
    .key(ALUIn1Sel), .out(ALUIn1), .lut({
        1'b0, src1, 
        1'b1, pc
    })
);

ysyx_26060173_MuxKey #(2, 1, 32) ALUIn2MUX(
    .key(ALUIn2Sel), .out(ALUIn2), .lut({
        1'b0, imm, 
        1'b1, src2
    })
);

ysyx_26060173_ALU ALU(
    .funct3(funct3),
    .inst_30(inst_30),
    .M_ren(M_ren),
    .M_wen(M_wen),
    .isB_type(isB_type),
    .ALUIn1Sel(ALUIn1Sel),
    .ALUIn2Sel(ALUIn2Sel),
    .ebreak(ebreak),
    .ALUIn1(ALUIn1),
    .ALUIn2(ALUIn2),
    .ALUResult(ALUResult)
);


/* M Part */
parameter M_LEN_1 = 2'b00;
parameter M_LEN_2 = 2'b01;
parameter M_LEN_4 = 2'b11;

assign M_raddr = ALUResult;
assign M_waddr = ALUResult;

ysyx_26060173_MuxKeyWithDefault #(3,2, 2) M_rlenMUX(
    .key(funct3[1:0]), .out(M_rlen), .default_out(2'b0), .lut({
        2'b00   , M_LEN_1,
        2'b01   , M_LEN_2,
        2'b10   , M_LEN_4
    })
);

assign M_wdata = src2;

ysyx_26060173_MuxKeyWithDefault #(3,2, 2) M_wlenMUX(
    .key(funct3[1:0]), .out(M_wlen), .default_out(2'b0), .lut({
        2'b00   , M_LEN_1,
        2'b01   , M_LEN_2,
        2'b10   , M_LEN_4
    })
);

wire [31:0] M_rdatatoReg;
ysyx_26060173_MuxKeyWithDefault #(2, 3, 32) M_rdataMUX(
    .key(funct3), .out(M_rdatatoReg), .default_out(M_rdata), .lut({
        3'b000  , {{24{M_rdata[7]}}, M_rdata[7:0]},
        3'b001  , {{16{M_rdata[15]}}, M_rdata[15:0]}
    })
); 

/* RegIn Part */
ysyx_26060173_MuxKey #(4, 2, 32) RegInMUX(
    .key(RegIn), .out(dst), .lut({
        2'b00   , ALUResult,
        2'b01   , M_rdatatoReg, 
        2'b10   , (pc + 4),
        2'b11   , imm
    })
);

/* Branch Part */

assign B_en = ALUResult[0];

ysyx_26060173_MuxKey #(3,2,32) BranchMUX(
    .key(Branch), .out(dnpc), .lut({
        2'b00    , (pc + 4)     ,        
        2'b01    , (pc + imm)   ,        
        2'b10    , ALUResult
    })
);

// always @(posedge clk) begin 
//     $display("ALUIn1: %x",ALUIn1);
//     $display("ALUIn2: %x",ALUIn2);
//     $display("ALUResult: %x",ALUResult);
//     // $display("logic:%x",~M_ren & ~M_wen & ~ebreak & ~isB_type );
// end

/* ebreak match and execute module */
`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function void npc_trap (input int pc, input int halt_ret);
always @(posedge clk) begin
    if(ebreak == 1'b1) begin
        // npc trap supported by DPI-C
        npc_trap(pc, src1);
    end
end
`endif

endmodule
