module ysyx_26060173_ALU(
    input [2:0] funct3,
    input inst_30,
    input M_ren,
    input M_wen,
    input isB_type,
    input ALUIn1Sel, 
    input ALUIn2Sel,
    input ebreak,
    input [31:0] ALUIn1,
    input [31:0] ALUIn2,
    output [31:0] ALUResult
);

wire isM;
assign isM = M_ren | M_wen;

/* ADDER PART DEFINES */
wire [31:0] ADDERIn1;
wire [31:0] ADDERIn2;

/* ADDSUB Module */
wire ADDSUB;
wire ADDSUBfunct3;
wire ADDSUBSuben;
wire [31:0] ADDSUBADDERIn2;
wire [31:0] ADDSUBResult;

assign ADDSUBfunct3 = (funct3 == 3'b000);
assign ADDSUBSuben = inst_30 & ALUIn2Sel;

ysyx_26060173_MuxKeyWithDefault #(3, 1, 1) u0(
    .key(1'b1), .out(ADDSUB), .default_out(1'b0), .lut({
        isM                                     , 1'b1,
        ALUIn1Sel                               , 1'b1,
        (~ebreak & ~isB_type & ADDSUBfunct3)    , 1'b1
    }) 
);

ysyx_26060173_MuxKey #(2, 1, 32) SUBMux(
    .key(ADDSUBSuben), .out(ADDSUBADDERIn2), .lut({
        1'b0, ALUIn2,
        1'b1, ~ALUIn2
    })
);

/* COMP Module */
wire COMP;
wire COMPfunct3;
wire [31:0] COMPADDERIn2;
wire [31:0] COMPResult;
assign COMPfunct3 = (funct3[2:1] == 2'b01);

assign COMPADDERIn2 = ~ALUIn2;

ysyx_26060173_MuxKeyWithDefault #(2, 1, 1) u1(
    .key(1'b1), .out(COMP), .default_out(1'b0), .lut({
        isB_type , 1'b1,
        (~isM & ~ebreak & ~ALUIn1Sel & COMPfunct3), 1'b1    // I_type and R_Type
    }) 
);

/* ADDER PART */
wire [31:0] ADDERResult;
wire ADDEROverflow;

assign ADDERIn1 = ALUIn1;
ysyx_26060173_MuxKey #(2, 1, 32) ADDERIn2MUX(
    .key(1'b1), .out(ADDERIn2), .lut({
        ADDSUB  , ADDSUBADDERIn2, 
        COMP    , COMPADDERIn2 
    })
);

assign {ADDEROverflow, ADDERResult} = ADDERIn1 + ADDERIn2 + {31'b0, (ADDSUBSuben & ADDSUB | COMP)}; // Must shared with COMP

assign ADDSUBResult = ADDERResult;

assign COMPResult[31:1] = 31'b0;
ysyx_26060173_MuxKeyWithDefault #(8, 3,1) COMPResultMUX(
    .key(funct3), .out(COMPResult[0]), .default_out(1'b0), .lut({
        3'b000  ,  (ADDERResult == 32'b0)   ,  
        3'b001  , ~(ADDERResult == 32'b0)   ,  
        3'b010  ,  ((ALUIn1[31] ^ ALUIn2[31]) ? (ALUIn1[31] > ALUIn2[31]) : (ADDERResult[31]))  ,  
        3'b011  , ~(ADDEROverflow)          ,  
        3'b100  ,  ((ALUIn1[31] ^ ALUIn2[31]) ? (ALUIn1[31] > ALUIn2[31]) : (ADDERResult[31]))  ,  
        3'b101  , ~((ALUIn1[31] ^ ALUIn2[31]) ? (ALUIn1[31] > ALUIn2[31]) : (ADDERResult[31]))  ,  
        3'b110  , ~(ADDEROverflow)        ,  
        3'b111  ,  (ADDEROverflow)
    })
);


/* SHIFT Module */
wire SHIFT;
wire [31:0] SHIFTResult;
wire SHIFTfunct3;

ysyx_26060173_MuxKeyWithDefault #(1, 2, 1) u2(
    .key(funct3[1:0]), .out(SHIFTfunct3), .default_out(1'b0), .lut({
        2'b01, 1'b1
    }) 
);

assign SHIFT = ~isM & ~ebreak & ~isB_type & ~ALUIn1Sel & SHIFTfunct3;

ysyx_26060173_Barrelshifter ShiftModule(
    .R_L(funct3[2]),
    .L_A(inst_30),
    .load(ALUIn1),
    .shift(ALUIn2[4:0]),
    .out(SHIFTResult)
);

/* LOGIC Module */
wire LOGIC;
wire [31:0] LOGICResult;
wire LOGICfunct3;

ysyx_26060173_MuxKeyWithDefault #(3, 3, 1) u3(
    .key(funct3), .out(LOGICfunct3), .default_out(1'b0), .lut({
        3'b100, 1'b1,
        3'b110, 1'b1,
        3'b111, 1'b1
    }) 
);

assign LOGIC = ~isM & ~ebreak & ~isB_type &  ~ALUIn1Sel & LOGICfunct3;

ysyx_26060173_MuxKeyWithDefault #(3, 3, 32) LogicModule(
    .key(funct3), .out(LOGICResult), .default_out(32'b0), .lut({
        3'b100,  (ALUIn1 ^ ALUIn2),
        3'b110,  (ALUIn1 | ALUIn2),
        3'b111,  (ALUIn1 & ALUIn2)
    })
);

ysyx_26060173_MuxKeyWithDefault #(4, 1, 32) ResultMux (
    .key(1'b1), .out(ALUResult), .default_out(32'b0), .lut({
        ADDSUB  , ADDSUBResult,
        COMP    , COMPResult,
        SHIFT   , SHIFTResult,
        LOGIC   , LOGICResult
    })
);

endmodule
