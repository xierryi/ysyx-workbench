module ysyx_26060173_DelayCreate (
    input clk,
    input start_frame, // start delay at end of start_frame (high level is enable )
    input [31:0] delay_cycle,
    input [31:0] out_cycle, // greater than 0
    output reg out
);

integer i, j;

parameter IDLE = 1'b0;
parameter BUSY = 1'b1;

reg state;

reg start_last;

always @(posedge clk) begin
    start_last <= start_frame;
end

always @(posedge clk) begin
    if(state == IDLE) begin 
        if(start_frame & !start_last) begin
            if(delay_cycle == 0) begin
                out <= 1'b1;
            end
            else begin
                out <= 1'b0;
                state <= BUSY;
                i <= 0;
            end
        end
        else begin 
            state <= IDLE;
            out <= 1'b0;
        end
    end
    else begin
        if(i == delay_cycle - 32'b1) begin
            out <= 1'b1;
            j <= j + 32'b1;
            if(j == out_cycle - 32'b1) begin 
                state <= IDLE;
            end
        end
        else begin
            out <= 1'b0;
            j <= 32'b0;
            i <= i + 32'b1;
            state <= BUSY; 
        end
    end
end

endmodule
