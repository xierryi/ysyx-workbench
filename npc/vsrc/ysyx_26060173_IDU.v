`include "ysyx_26060173_opcode_defs.vh"
`include "ysyx_26060173_optype_defs.vh"
module ysyx_26060173_IDU(
    input [31:0] inst,

    // reg write enable
    output wen,
    // read from reg 
    input [31:0] rdata1,
    input [31:0] rdata2,
    output [3:0] raddr1,
    output [3:0] raddr2,

    // output operand and ctrl signal to EXU
    output [31:0] src1,
    output [31:0] src2,
    output [31:0] imm,
    output [7:0] op_encoded,

    // decode signal from inst
    output [4:0] rd,

    // for ftrace
    input [31:0] pc,
    input [31:0] dnpc
);

/* opcode encoded module */

ysyx_26060173_OPENCODED #(8, 38) u0(
    .inst(inst),
    .op_encoded(op_encoded)
);

/* opcode type module */
wire [2:0] op_type;

ysyx_26060173_OPENTYPE_ENCODED #(8, 37) u1(
    .op_encoded(op_encoded),
    .op_type(op_type)
);

/* field fetch module */
/* verilator lint_off UNUSEDSIGNAL */
wire [4:0] rs1;
wire [4:0] rs2;
/* verilator lint_on UNUSEDSIGNAL */

ysyx_26060173_FILED_FETCH #(8) u2(
    .inst(inst),
    .op_type(op_type),
    .op_encoded(op_encoded),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .imm(imm)
);

/* interfaces for GPR and EXU */
assign raddr1 = rs1[3:0];
assign src1 = rdata1;
assign raddr2 = rs2[3:0];
assign src2 = rdata2;

/* interfaces for LSU */
assign wen = (op_type == R_type) || (op_type == I_type) || (op_type == U_type) || (op_type == J_type);

`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function void ftrace_get_addr(input int inst_addr, input int func_addr, input byte rs1, input byte rd, input int imm);
always @(*) begin
    if(op_encoded == jalr_encoded || op_encoded == jal_encoded) begin
       ftrace_get_addr(pc, dnpc, {3'b0, rs1}, {3'b0, rd}, imm);
    end
end
`endif

endmodule
