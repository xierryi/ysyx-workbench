module ysyx_26060173_PCRegister #(DATA_WIDTH = 32)(
    input clk,
    input rst,
    input wen,
    input [DATA_WIDTH-1:0] d_init,
    input [DATA_WIDTH-1:0] d_pcreg,
    output reg [DATA_WIDTH-1:0] pc
);


    always @(posedge clk or posedge rst) begin
        if(rst) pc <= d_init;
        else if(wen) begin 
            pc <= d_pcreg;

        end
    end

`ifdef ysyx_26060173_SIMULATION
import "DPI-C" function void cpu_get_pc(input int pc);
always @(posedge clk) begin
    if(wen) begin
        cpu_get_pc(d_pcreg);
    end
end    
`endif

`ifdef ysyx_26060173_SIMULATION
`ifdef CONFIG_DIFFTEST
import "DPI-C" function void difftest_step(input int pc, input int npc, input byte clk, input byte wen); 
always @(*) begin
    difftest_step(pc, d_pcreg, {7'b0, clk}, {7'b0, wen});
end
`endif
`endif

endmodule 
