module ysyx_26060173_PCRegister #(DATA_WIDTH = 32)(
    input clk,
    input wen,
    input [DATA_WIDTH-1:0] d_pcreg,
    output reg [DATA_WIDTH-1:0] pc
);
    always @(posedge clk) begin
        if(wen) pc <= d_pcreg;
    end
endmodule 
