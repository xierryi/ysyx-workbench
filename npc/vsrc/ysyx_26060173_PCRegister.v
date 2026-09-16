module ysyx_26060173_PCRegister #(DATA_WIDTH = 32)(
    input clk,
    input rst,
    input wen,
    input [DATA_WIDTH-1:0] d_init,
    input [DATA_WIDTH-1:0] d_pcreg,
    output reg [DATA_WIDTH-1:0] pc
);

    import "DPI-C" function void difftest_step(input int pc, input int npc); 

    always @(posedge clk or posedge rst) begin
        if(rst) pc <= d_init;
        else if(wen) begin 
            pc <= d_pcreg;
            difftest_step(pc, d_pcreg);
        end
    end
endmodule 
