module ysyx_26060173_PCRegister #(DATA_WIDTH = 32)(
    input clk,
    input rst,
    input wen,
    input [DATA_WIDTH-1:0] d_init,
    input [DATA_WIDTH-1:0] d_pcreg,
    output reg [DATA_WIDTH-1:0] pc
);

`ifdef ysyx_26060173_SIMULATION
    import "DPI-C" function void difftest_step(input int pc, input int npc); 
`endif

    always @(posedge clk or posedge rst) begin
        if(rst) pc <= d_init;
        else if(wen) begin 
            pc <= d_pcreg;
`ifdef ysyx_26060173_SIMULATION
            difftest_step(pc, d_pcreg);
`endif
        end
    end

endmodule 
