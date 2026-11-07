module ysyx_26060173_DelayCreate (
    input clk,
    input start_frame, // start delay at end of start_frame (high level is enable )
    input [31:0] delay_cycle,
    output reg out
);

integer i;

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
            state <= IDLE;
        end
        else begin
            out <= 1'b0;
            state <= BUSY; 
        end
        i <= i + 32'b1;
    end
end

endmodule
