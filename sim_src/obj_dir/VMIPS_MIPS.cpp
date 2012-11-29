// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS.h for the primary calling header

#include "VMIPS_MIPS.h"        // For This
#include "VMIPS__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS_MIPS) {
    // Reset internal values
    // Reset structure values
    R2_output = VL_RAND_RESET_I(32);
    data_address_2DM = VL_RAND_RESET_I(32);
    data_write_2DM = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256,block_write_2DM);
    VL_RAND_RESET_W(256,block_write_2IM);
    MemRead = VL_RAND_RESET_I(1);
    MemWrite = VL_RAND_RESET_I(1);
    dBlkRead = VL_RAND_RESET_I(1);
    dBlkWrite = VL_RAND_RESET_I(1);
    iBlkRead = VL_RAND_RESET_I(1);
    iBlkWrite = VL_RAND_RESET_I(1);
    PC_init = VL_RAND_RESET_I(32);
    R2_input = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256,block_read_fDM);
    VL_RAND_RESET_W(256,block_read_fIM);
    CLK = VL_RAND_RESET_I(1);
    RESET = VL_RAND_RESET_I(1);
    R2_output_ID = VL_RAND_RESET_I(32);
    Instr_fMEM = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    Reg_ID[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Instr_address_2IM = VL_RAND_RESET_I(32);
    CIA_IFID = VL_RAND_RESET_I(32);
    PCA_IFID = VL_RAND_RESET_I(32);
    nextInstruction_address_IDIF = VL_RAND_RESET_I(32);
    no_fetch = VL_RAND_RESET_I(1);
    SYS = VL_RAND_RESET_I(1);
    writeData1_WBID = VL_RAND_RESET_I(32);
    writeData2_WBID = VL_RAND_RESET_I(32);
    writeData1_WBEXE = VL_RAND_RESET_I(32);
    writeData2_WBEXE = VL_RAND_RESET_I(32);
    writeData1_MID = VL_RAND_RESET_I(32);
    writeData2_MID = VL_RAND_RESET_I(32);
    Dest_Value1_IDEXE = VL_RAND_RESET_I(32);
    Dest_Value2_IDEXE = VL_RAND_RESET_I(32);
    Dest_Value1_EXEM = VL_RAND_RESET_I(32);
    Dest_Value2_EXEM = VL_RAND_RESET_I(32);
    Instr1_IDEXE = VL_RAND_RESET_I(32);
    Instr2_IDEXE = VL_RAND_RESET_I(32);
    Instr1_EXEM = VL_RAND_RESET_I(32);
    Instr2_EXEM = VL_RAND_RESET_I(32);
    Instr1_IFID = VL_RAND_RESET_I(32);
    Instr2_IFID = VL_RAND_RESET_I(32);
    Operand_A1_IDEXE = VL_RAND_RESET_I(32);
    Operand_A2_IDEXE = VL_RAND_RESET_I(32);
    Operand_B1_IDEXE = VL_RAND_RESET_I(32);
    Operand_B2_IDEXE = VL_RAND_RESET_I(32);
    aluResult1_EXEM = VL_RAND_RESET_I(32);
    aluResult2_EXEM = VL_RAND_RESET_I(32);
    aluResult1_EXEID = VL_RAND_RESET_I(32);
    aluResult2_EXEID = VL_RAND_RESET_I(32);
    aluResult1_MEMW = VL_RAND_RESET_I(32);
    aluResult2_MEMW = VL_RAND_RESET_I(32);
    aluResult1_WBID = VL_RAND_RESET_I(32);
    aluResult2_WBID = VL_RAND_RESET_I(32);
    data_read1_MEMW = VL_RAND_RESET_I(32);
    data_read2_MEMW = VL_RAND_RESET_I(32);
    readDataB1_IDEXE = VL_RAND_RESET_I(32);
    readDataB2_IDEXE = VL_RAND_RESET_I(32);
    readDataB1_EXEM = VL_RAND_RESET_I(32);
    readDataB2_EXEM = VL_RAND_RESET_I(32);
    ALU_control1_IDEXE = VL_RAND_RESET_I(6);
    ALU_control2_IDEXE = VL_RAND_RESET_I(6);
    ALU_control1_EXEM = VL_RAND_RESET_I(6);
    ALU_control2_EXEM = VL_RAND_RESET_I(6);
    writeRegister1_IDEXE = VL_RAND_RESET_I(5);
    writeRegister2_IDEXE = VL_RAND_RESET_I(5);
    writeRegister1_EXEM = VL_RAND_RESET_I(5);
    writeRegister2_EXEM = VL_RAND_RESET_I(5);
    writeRegister1_MEMW = VL_RAND_RESET_I(5);
    writeRegister2_MEMW = VL_RAND_RESET_I(5);
    writeRegister1_WBID = VL_RAND_RESET_I(5);
    writeRegister2_WBID = VL_RAND_RESET_I(5);
    writeRegister1_WBEXE = VL_RAND_RESET_I(5);
    writeRegister2_WBEXE = VL_RAND_RESET_I(5);
    Instr1_10_6_IDEXE = VL_RAND_RESET_I(5);
    Instr2_10_6_IDEXE = VL_RAND_RESET_I(5);
    readRegisterA2_IDEXE = VL_RAND_RESET_I(5);
    readRegisterA1_IDEXE = VL_RAND_RESET_I(5);
    readRegisterB1_IDEXE = VL_RAND_RESET_I(5);
    readRegisterB2_IDEXE = VL_RAND_RESET_I(5);
    MemtoReg1_IDEXE = VL_RAND_RESET_I(1);
    MemtoReg2_IDEXE = VL_RAND_RESET_I(1);
    MemtoReg1_EXEM = VL_RAND_RESET_I(1);
    MemtoReg2_EXEM = VL_RAND_RESET_I(1);
    MemtoReg1_MEMW = VL_RAND_RESET_I(1);
    MemtoReg2_MEMW = VL_RAND_RESET_I(1);
    MemRead1_IDEXE = VL_RAND_RESET_I(1);
    MemRead2_IDEXE = VL_RAND_RESET_I(1);
    MemRead1_EXEM = VL_RAND_RESET_I(1);
    MemRead2_EXEM = VL_RAND_RESET_I(1);
    MemWrite1_IDEXE = VL_RAND_RESET_I(1);
    MemWrite2_IDEXE = VL_RAND_RESET_I(1);
    MemWrite1_EXEM = VL_RAND_RESET_I(1);
    MemWrite2_EXEM = VL_RAND_RESET_I(1);
    do_writeback1_WBID = VL_RAND_RESET_I(1);
    do_writeback2_WBID = VL_RAND_RESET_I(1);
    do_writeback1_IDEXE = VL_RAND_RESET_I(1);
    do_writeback2_IDEXE = VL_RAND_RESET_I(1);
    do_writeback1_MEMW = VL_RAND_RESET_I(1);
    do_writeback2_MEMW = VL_RAND_RESET_I(1);
    do_writeback1_EXEM = VL_RAND_RESET_I(1);
    do_writeback2_EXEM = VL_RAND_RESET_I(1);
    do_writeback1_WBEXE = VL_RAND_RESET_I(1);
    do_writeback2_WBEXE = VL_RAND_RESET_I(1);
    taken_branch1_IDIF = VL_RAND_RESET_I(1);
    taken_branch2_IDIF = VL_RAND_RESET_I(1);
    fetchNull1_fID = VL_RAND_RESET_I(1);
    fetchNull2_fID = VL_RAND_RESET_I(1);
    ALUSrc1_IDEXE = VL_RAND_RESET_I(1);
    ALUSrc2_IDEXE = VL_RAND_RESET_I(1);
    ALUSrc1_EXEM = VL_RAND_RESET_I(1);
    ALUSrc2_EXEM = VL_RAND_RESET_I(1);
    FREEZE = VL_RAND_RESET_I(1);
    Instr1_fIC = VL_RAND_RESET_I(32);
    Instr2_fIC = VL_RAND_RESET_I(32);
    MVECT = VL_RAND_RESET_I(2);
    __PVT__DataWriteMode = VL_RAND_RESET_I(2);
    __PVT__data_read_fDC = VL_RAND_RESET_I(32);
    __PVT__IMISS = VL_RAND_RESET_I(1);
    __PVT__DMISS = VL_RAND_RESET_I(1);
    __PVT__wQ_IFID_pushReq = VL_RAND_RESET_I(1);
    __PVT__wQ_IFID_popReq = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96,__PVT__wQ_IFID_pushData);
    VL_RAND_RESET_W(96,__PVT__wQ_IFID_popData);
    __PVT__wFreezeID = VL_RAND_RESET_I(1);
    __PVT__wQ_IDREN_pushReq = VL_RAND_RESET_I(1);
    __PVT__wQ_IDREN_popReq = VL_RAND_RESET_I(1);
    __PVT__wQ_IDREN_popData = VL_RAND_RESET_I(32);
    __PVT__iCache1__DOT__hit1 = VL_RAND_RESET_I(1);
    __PVT__iCache1__DOT__hit2 = VL_RAND_RESET_I(1);
    __PVT__iCache1__DOT__waitCount = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(1024,__PVT__iCache1__DOT__cc0__DOT__valid);
    VL_RAND_RESET_W(1024,__PVT__iCache1__DOT__cc0__DOT__dirty);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    __PVT__iCache1__DOT__cc0__DOT__tags[__Vi0] = VL_RAND_RESET_I(17);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__iCache1__DOT__cc0__DOT__blocks[__Vi0]);
    }}
    VL_RAND_RESET_W(256,__PVT__iCache1__DOT__cc0__DOT__block_out1);
    VL_RAND_RESET_W(256,__PVT__iCache1__DOT__cc0__DOT__block_out2);
    __PVT__dCache1__DOT__hit0 = VL_RAND_RESET_I(1);
    __PVT__dCache1__DOT__hit1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256,__PVT__dCache1__DOT__block_out0);
    VL_RAND_RESET_W(256,__PVT__dCache1__DOT__block_out1);
    __PVT__dCache1__DOT__waitCount = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(257,__PVT__dCache1__DOT__policy);
    dCache1__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512,__PVT__dCache1__DOT__cc0__DOT__valid);
    VL_RAND_RESET_W(512,__PVT__dCache1__DOT__cc0__DOT__dirty);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__dCache1__DOT__cc0__DOT__tags[__Vi0] = VL_RAND_RESET_I(18);
    }}
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__dCache1__DOT__cc0__DOT__blocks[__Vi0]);
    }}
    VL_RAND_RESET_W(512,__PVT__dCache1__DOT__cc1__DOT__valid);
    VL_RAND_RESET_W(512,__PVT__dCache1__DOT__cc1__DOT__dirty);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__dCache1__DOT__cc1__DOT__tags[__Vi0] = VL_RAND_RESET_I(18);
    }}
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__dCache1__DOT__cc1__DOT__blocks[__Vi0]);
    }}
    __PVT__IF1__DOT__PC = VL_RAND_RESET_I(32);
    __PVT__IF1__DOT__FPC = VL_RAND_RESET_I(32);
    __PVT__IF1__DOT__wCarryOn = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    VL_RAND_RESET_W(96,__PVT__Q_IFID__DOT__buffer[__Vi0]);
    }}
    __PVT__Q_IFID__DOT__head = VL_RAND_RESET_I(3);
    __PVT__Q_IFID__DOT__tail = VL_RAND_RESET_I(3);
    __PVT__Q_IFID__DOT__count = VL_RAND_RESET_I(4);
    __PVT__Q_IFID__DOT__validPush = VL_RAND_RESET_I(1);
    __PVT__Q_IFID__DOT__validPop = VL_RAND_RESET_I(1);
    __PVT__Q_IFID__DOT__shortIdx = VL_RAND_RESET_I(3);
    __PVT__ID1__DOT__com_OpA1 = VL_RAND_RESET_I(32);
    __PVT__ID1__DOT__com_OpB1 = VL_RAND_RESET_I(32);
    __PVT__ID1__DOT__signExtended_output1 = VL_RAND_RESET_I(32);
    __PVT__ID1__DOT__R2_output = VL_RAND_RESET_I(32);
    __PVT__ID1__DOT__readDataA1 = VL_RAND_RESET_I(32);
    __PVT__ID1__DOT__readDataB1 = VL_RAND_RESET_I(32);
    __PVT__ID1__DOT__Operand_B1 = VL_RAND_RESET_I(32);
    __PVT__ID1__DOT__ALU_control1 = VL_RAND_RESET_I(6);
    __PVT__ID1__DOT__opcode1 = VL_RAND_RESET_I(6);
    __PVT__ID1__DOT__funct1 = VL_RAND_RESET_I(6);
    __PVT__ID1__DOT__format1 = VL_RAND_RESET_I(5);
    __PVT__ID1__DOT__rt1 = VL_RAND_RESET_I(5);
    __PVT__ID1__DOT__writeRegister1 = VL_RAND_RESET_I(5);
    __PVT__ID1__DOT__taken_branch1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__link1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__RegDst1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__jump1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__MemRead1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__MemtoReg1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__MemWrite1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__ALUSrc1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__RegWrite1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__jumpRegister_Flag1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__sign_or_zero_Flag1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__syscal1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__wInstr1 = VL_RAND_RESET_I(32);
    __PVT__ID1__DOT__wPCA = VL_RAND_RESET_I(32);
    __PVT__ID1__DOT__syscalBubbleCounter = VL_RAND_RESET_I(2);
    __PVT__ID1__DOT__comment1 = VL_RAND_RESET_I(1);
    __PVT__ID1__DOT__comment3 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    __PVT__Q_IDREN__DOT__buffer[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__Q_IDREN__DOT__head = VL_RAND_RESET_I(3);
    __PVT__Q_IDREN__DOT__tail = VL_RAND_RESET_I(3);
    __PVT__Q_IDREN__DOT__count = VL_RAND_RESET_I(4);
    __PVT__Q_IDREN__DOT__validPush = VL_RAND_RESET_I(1);
    __PVT__Q_IDREN__DOT__validPop = VL_RAND_RESET_I(1);
    __PVT__Q_IDREN__DOT__shortIdx = VL_RAND_RESET_I(3);
    __PVT__EXE1__DOT__aluResult1 = VL_RAND_RESET_I(32);
    __PVT__EXE1__DOT__OpA1 = VL_RAND_RESET_I(32);
    __PVT__EXE1__DOT__OpB1 = VL_RAND_RESET_I(32);
    __PVT__EXE1__DOT__Dst1 = VL_RAND_RESET_I(32);
    __PVT__EXE1__DOT__HI = VL_RAND_RESET_I(32);
    __PVT__EXE1__DOT__LO = VL_RAND_RESET_I(32);
    __PVT__EXE1__DOT__ALU1__DOT__temp = VL_RAND_RESET_Q(64);
    __PVT__EXE1__DOT__ALU1__DOT__i = VL_RAND_RESET_I(5);
    __PVT__MEM1__DOT__data_read_aligned = VL_RAND_RESET_I(32);
    __PVT__MEM1__DOT__aluResult = VL_RAND_RESET_I(32);
    __PVT__MEM1__DOT__ALU_control = VL_RAND_RESET_I(6);
    __PVT__MEM1__DOT__select1_WB = VL_RAND_RESET_I(1);
    __Vdly__iCache1__DOT__waitCount = VL_RAND_RESET_I(4);
    __Vdly__dCache1__DOT__waitCount = VL_RAND_RESET_I(4);
    __Vdly__Q_IFID__DOT__count = VL_RAND_RESET_I(4);
    __Vdly__Q_IFID__DOT__tail = VL_RAND_RESET_I(3);
    __Vdly__Q_IFID__DOT__head = VL_RAND_RESET_I(3);
    __Vdlyvdim0__Q_IFID__DOT__buffer__v0 = 0;
    VL_ZERO_RESET_W(96,__Vdlyvval__Q_IFID__DOT__buffer__v0);
    __Vdlyvset__Q_IFID__DOT__buffer__v0 = 0;
    __Vdlyvdim0__Q_IFID__DOT__buffer__v1 = 0;
    __Vdlyvset__Q_IFID__DOT__buffer__v1 = 0;
    __Vdly__Q_IDREN__DOT__count = VL_RAND_RESET_I(4);
    __Vdly__Q_IDREN__DOT__tail = VL_RAND_RESET_I(3);
    __Vdly__Q_IDREN__DOT__head = VL_RAND_RESET_I(3);
    __Vdlyvdim0__Q_IDREN__DOT__buffer__v0 = 0;
    __Vdlyvval__Q_IDREN__DOT__buffer__v0 = 0;
    __Vdlyvset__Q_IDREN__DOT__buffer__v0 = 0;
    __Vdlyvdim0__Q_IDREN__DOT__buffer__v1 = 0;
    __Vdlyvset__Q_IDREN__DOT__buffer__v1 = 0;
    __Vdly__Instr2_IFID = VL_RAND_RESET_I(32);
    __Vdly__IF1__DOT__FPC = VL_RAND_RESET_I(32);
    __Vdly__IF1__DOT__PC = VL_RAND_RESET_I(32);
    __Vdly__ID1__DOT__syscalBubbleCounter = VL_RAND_RESET_I(2);
    __Vdly__writeRegister1_MEMW = VL_RAND_RESET_I(5);
    __Vdly__do_writeback1_MEMW = VL_RAND_RESET_I(1);
}

void VMIPS_MIPS::__Vconfigure(VMIPS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS_MIPS::~VMIPS_MIPS() {
}

//--------------------
// Internal Methods

void VMIPS_MIPS::_initial__TOP__v(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_initial__TOP__v\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at queue.v:143
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[0][0] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[0][1] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[0][2] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[1][0] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[1][1] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[1][2] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[2][0] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[2][1] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[2][2] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[3][0] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[3][1] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[3][2] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[4][0] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[4][1] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[4][2] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[5][0] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[5][1] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[5][2] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[6][0] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[6][1] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[6][2] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[7][0] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[7][1] = 0;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[7][2] = 0;
    // INITIAL at ID.v:171
    vlSymsp->TOP__v.__PVT__ID1__DOT__comment1 = 0;
    vlSymsp->TOP__v.__PVT__ID1__DOT__comment3 = 0;
    // INITIAL at queue.v:143
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[0] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[1] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[2] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[3] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[4] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[5] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[6] = 0xbad;
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[7] = 0xbad;
}

void VMIPS_MIPS::_settle__TOP__v__1(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__1\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at EXE.v:156
    // ALWAYS at WB.v:65
    // ALWAYS at dCache.v:93
    // ALWAYS at iCache.v:86
}

void VMIPS_MIPS::_sequent__TOP__v__2(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__2\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__Vdly__iCache1__DOT__waitCount 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__waitCount;
    vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__tail = vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail;
    vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__head = vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head;
    vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__tail = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail;
    vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__head = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head;
    vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__count = vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count;
    vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__count = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count;
    vlSymsp->TOP__v.__Vdlyvset__Q_IDREN__DOT__buffer__v0 = 0;
    vlSymsp->TOP__v.__Vdlyvset__Q_IDREN__DOT__buffer__v1 = 0;
    vlSymsp->TOP__v.__Vdlyvset__Q_IFID__DOT__buffer__v0 = 0;
    vlSymsp->TOP__v.__Vdlyvset__Q_IFID__DOT__buffer__v1 = 0;
    vlSymsp->TOP__v.__Vdly__dCache1__DOT__waitCount 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__waitCount;
    // ALWAYS at instr_cache_core.v:191
    if ((1 & ((~ (IData)(vlTOPp->RESET)) | (IData)(vlSymsp->TOP__v.SYS)))) {
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[1] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[2] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[3] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[4] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[5] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[6] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[7] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[8] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[9] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0xa] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0xb] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0xc] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0xd] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0xe] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0xf] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x10] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x11] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x12] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x13] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x14] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x15] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x16] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x17] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x18] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x19] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x1a] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x1b] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x1c] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x1d] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x1e] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[0x1f] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[1] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[2] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[3] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[4] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[5] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[6] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[7] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[8] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[9] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0xa] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0xb] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0xc] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0xd] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0xe] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0xf] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x10] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x11] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x12] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x13] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x14] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x15] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x16] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x17] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x18] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x19] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x1a] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x1b] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x1c] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x1d] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x1e] = 0;
	vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[0x1f] = 0;
    } else {
	if ((9 == (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__waitCount))) {
	    if (vlSymsp->TOP__v.__PVT__iCache1__DOT__hit1) {
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__tags[(0x3ff 
								     & (vlSymsp->TOP__v.Instr_address_2IM 
									>> 5))] 
		    = (0x1ffff & (vlSymsp->TOP__v.Instr_address_2IM 
				  >> 0xf));
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[(0x1f 
								      & (vlSymsp->TOP__v.Instr_address_2IM 
									 >> 0xa))] 
		    = ((~ ((IData)(1) << (0x1f & (vlSymsp->TOP__v.Instr_address_2IM 
						  >> 5)))) 
		       & vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[
		       (0x1f & (vlSymsp->TOP__v.Instr_address_2IM 
				>> 0xa))]);
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[(0x1f 
								      & (vlSymsp->TOP__v.Instr_address_2IM 
									 >> 0xa))] 
		    = (vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[
		       (0x1f & (vlSymsp->TOP__v.Instr_address_2IM 
				>> 0xa))] | ((IData)(1) 
					     << (0x3ff 
						 & (vlSymsp->TOP__v.Instr_address_2IM 
						    >> 5))));
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][0] 
		    = vlTOPp->block_read_fIM[0];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][1] 
		    = vlTOPp->block_read_fIM[1];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][2] 
		    = vlTOPp->block_read_fIM[2];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][3] 
		    = vlTOPp->block_read_fIM[3];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][4] 
		    = vlTOPp->block_read_fIM[4];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][5] 
		    = vlTOPp->block_read_fIM[5];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][6] 
		    = vlTOPp->block_read_fIM[6];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][7] 
		    = vlTOPp->block_read_fIM[7];
	    } else {
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__tags[(0x3ff 
								     & (vlSymsp->TOP__v.Instr_address_2IM 
									>> 5))] 
		    = (0x1ffff & (vlSymsp->TOP__v.Instr_address_2IM 
				  >> 0xf));
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[(0x1f 
								      & (vlSymsp->TOP__v.Instr_address_2IM 
									 >> 0xa))] 
		    = ((~ ((IData)(1) << (0x1f & (vlSymsp->TOP__v.Instr_address_2IM 
						  >> 5)))) 
		       & vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__dirty[
		       (0x1f & (vlSymsp->TOP__v.Instr_address_2IM 
				>> 0xa))]);
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[(0x1f 
								      & (vlSymsp->TOP__v.Instr_address_2IM 
									 >> 0xa))] 
		    = (vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[
		       (0x1f & (vlSymsp->TOP__v.Instr_address_2IM 
				>> 0xa))] | ((IData)(1) 
					     << (0x3ff 
						 & (vlSymsp->TOP__v.Instr_address_2IM 
						    >> 5))));
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][0] 
		    = vlTOPp->block_read_fIM[0];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][1] 
		    = vlTOPp->block_read_fIM[1];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][2] 
		    = vlTOPp->block_read_fIM[2];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][3] 
		    = vlTOPp->block_read_fIM[3];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][4] 
		    = vlTOPp->block_read_fIM[4];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][5] 
		    = vlTOPp->block_read_fIM[5];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][6] 
		    = vlTOPp->block_read_fIM[6];
		vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks[(0x3ff 
								       & (vlSymsp->TOP__v.Instr_address_2IM 
									  >> 5))][7] 
		    = vlTOPp->block_read_fIM[7];
	    }
	}
    }
    // ALWAYS at ID.v:362
    if (vlSymsp->TOP__v.do_writeback1_WBID) {
	vlSymsp->TOP__v.Reg_ID[(IData)(vlSymsp->TOP__v.writeRegister1_WBID)] 
	    = vlSymsp->TOP__v.writeData1_WBID;
    }
    // ALWAYS at ID.v:410
    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment3)) {
	VL_WRITEF("[ID]:\tPCA:%x\n",32,vlSymsp->TOP__v.__PVT__ID1__DOT__wPCA);
	VL_WRITEF("[ID]:\tCIA:%x\n",32,((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq)
					 ? vlSymsp->TOP__v.__PVT__wQ_IFID_popData[1]
					 : 0));
	VL_WRITEF("[ID]:\tInstr1:%x\n",32,vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1);
    }
    // ALWAYS at cache_core.v:125
    if ((1 & ((~ (IData)(vlTOPp->RESET)) | (IData)(vlSymsp->TOP__v.SYS)))) {
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[0] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[1] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[2] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[3] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[4] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[5] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[6] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[7] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[8] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[9] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[0xa] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[0xb] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[0xc] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[0xd] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[0xe] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[0xf] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[0] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[1] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[2] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[3] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[4] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[5] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[6] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[7] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[8] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[9] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[0xa] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[0xb] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[0xc] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[0xd] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[0xe] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[0xf] = 0;
    } else {
	if (((IData)(vlSymsp->TOP__v.MemWrite1_EXEM) 
	     & (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__hit1))) {
	    if ((0x10 & vlSymsp->TOP__v.aluResult1_EXEM)) {
		if ((8 & vlSymsp->TOP__v.aluResult1_EXEM)) {
		    if ((4 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][0]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][0]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][0]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][0]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][0]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][0]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    } else {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][1]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][1]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][1]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][1]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][1]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][1]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    }
		} else {
		    if ((4 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][2]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][2]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][2]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][2]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][2]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][2]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    } else {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][3]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][3]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][3]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][3]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][3]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][3]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((8 & vlSymsp->TOP__v.aluResult1_EXEM)) {
		    if ((4 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][4]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][4]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][4]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][4]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][4]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][4]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    } else {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][5]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][5]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][5]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][5]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][5]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][5]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    }
		} else {
		    if ((4 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][6]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][6]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][6]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][6]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][6]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][6]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    } else {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][7]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][7]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][7]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][7]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][7]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][7]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    }
		}
	    }
	    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[(0xf 
								  & (vlSymsp->TOP__v.aluResult1_EXEM 
								     >> 0xa))] 
		= (vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[
		   (0xf & (vlSymsp->TOP__v.aluResult1_EXEM 
			   >> 0xa))] | ((IData)(1) 
					<< (0x1ff & 
					    (vlSymsp->TOP__v.aluResult1_EXEM 
					     >> 5))));
	} else {
	    if (((((0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
			     >> 5)) <= 0x100) & (vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[
						 (0xf 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 0xa))] 
						 >> 
						 (0x1f 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5)))) 
		 & (9 == (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__waitCount)))) {
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__tags[(0x1ff 
								     & (vlSymsp->TOP__v.aluResult1_EXEM 
									>> 5))] 
		    = (0x3ffff & (vlSymsp->TOP__v.aluResult1_EXEM 
				  >> 0xe));
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[(0xf 
								      & (vlSymsp->TOP__v.aluResult1_EXEM 
									 >> 0xa))] 
		    = ((~ ((IData)(1) << (0x1f & (vlSymsp->TOP__v.aluResult1_EXEM 
						  >> 5)))) 
		       & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__dirty[
		       (0xf & (vlSymsp->TOP__v.aluResult1_EXEM 
			       >> 0xa))]);
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[(0xf 
								      & (vlSymsp->TOP__v.aluResult1_EXEM 
									 >> 0xa))] 
		    = (vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[
		       (0xf & (vlSymsp->TOP__v.aluResult1_EXEM 
			       >> 0xa))] | ((IData)(1) 
					    << (0x1ff 
						& (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))));
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][0] 
		    = vlTOPp->block_read_fDM[0];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][1] 
		    = vlTOPp->block_read_fDM[1];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][2] 
		    = vlTOPp->block_read_fDM[2];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][3] 
		    = vlTOPp->block_read_fDM[3];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][4] 
		    = vlTOPp->block_read_fDM[4];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][5] 
		    = vlTOPp->block_read_fDM[5];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][6] 
		    = vlTOPp->block_read_fDM[6];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][7] 
		    = vlTOPp->block_read_fDM[7];
	    }
	}
    }
    // ALWAYS at cache_core.v:125
    if ((1 & ((~ (IData)(vlTOPp->RESET)) | (IData)(vlSymsp->TOP__v.SYS)))) {
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[0] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[1] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[2] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[3] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[4] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[5] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[6] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[7] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[8] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[9] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[0xa] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[0xb] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[0xc] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[0xd] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[0xe] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[0xf] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[0] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[1] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[2] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[3] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[4] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[5] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[6] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[7] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[8] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[9] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[0xa] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[0xb] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[0xc] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[0xd] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[0xe] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[0xf] = 0;
    } else {
	if (((IData)(vlSymsp->TOP__v.MemWrite1_EXEM) 
	     & (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__hit0))) {
	    if ((0x10 & vlSymsp->TOP__v.aluResult1_EXEM)) {
		if ((8 & vlSymsp->TOP__v.aluResult1_EXEM)) {
		    if ((4 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][0]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][0]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][0]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][0]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][0]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][0]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][0] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    } else {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][1]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][1]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][1]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][1]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][1]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][1]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][1] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    }
		} else {
		    if ((4 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][2]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][2]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][2]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][2]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][2]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][2]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][2] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    } else {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][3]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][3]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][3]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][3]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][3]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][3]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][3] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((8 & vlSymsp->TOP__v.aluResult1_EXEM)) {
		    if ((4 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][4]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][4]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][4]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][4]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][4]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][4]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][4] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    } else {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][5]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][5]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][5]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][5]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][5]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][5]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][5] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    }
		} else {
		    if ((4 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][6]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][6]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][6]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][6]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][6]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][6]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][6] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    } else {
			if ((2 & vlSymsp->TOP__v.aluResult1_EXEM)) {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][7]) 
				       | (0xff & vlSymsp->TOP__v.data_write_2DM));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					= ((0xffff00ff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][7]) 
					   | (0xff00 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 8)));
				} else {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][7]) 
					   | (0xffff 
					      & vlSymsp->TOP__v.data_write_2DM));
				}
			    }
			} else {
			    if ((1 & vlSymsp->TOP__v.aluResult1_EXEM)) {
				vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
				    = ((0xff00ffff 
					& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))][7]) 
				       | (0xff0000 
					  & (vlSymsp->TOP__v.data_write_2DM 
					     << 0x10)));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
				    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					= ((0xffffff 
					    & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
					    [(0x1ff 
					      & (vlSymsp->TOP__v.aluResult1_EXEM 
						 >> 5))][7]) 
					   | (0xff000000 
					      & (vlSymsp->TOP__v.data_write_2DM 
						 << 0x18)));
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v.__PVT__DataWriteMode))) {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
						[(0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))][7]) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.data_write_2DM 
						     << 0x10)));
				    } else {
					vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
										& (vlSymsp->TOP__v.aluResult1_EXEM 
										>> 5))][7] 
					    = vlSymsp->TOP__v.data_write_2DM;
				    }
				}
			    }
			}
		    }
		}
	    }
	    vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[(0xf 
								  & (vlSymsp->TOP__v.aluResult1_EXEM 
								     >> 0xa))] 
		= (vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[
		   (0xf & (vlSymsp->TOP__v.aluResult1_EXEM 
			   >> 0xa))] | ((IData)(1) 
					<< (0x1ff & 
					    (vlSymsp->TOP__v.aluResult1_EXEM 
					     >> 5))));
	} else {
	    if (((~ (((0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
				>> 5)) <= 0x100) & 
		     (vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[
		      (0xf & (vlSymsp->TOP__v.aluResult1_EXEM 
			      >> 0xa))] >> (0x1f & 
					    (vlSymsp->TOP__v.aluResult1_EXEM 
					     >> 5))))) 
		 & (9 == (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__waitCount)))) {
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__tags[(0x1ff 
								     & (vlSymsp->TOP__v.aluResult1_EXEM 
									>> 5))] 
		    = (0x3ffff & (vlSymsp->TOP__v.aluResult1_EXEM 
				  >> 0xe));
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[(0xf 
								      & (vlSymsp->TOP__v.aluResult1_EXEM 
									 >> 0xa))] 
		    = ((~ ((IData)(1) << (0x1f & (vlSymsp->TOP__v.aluResult1_EXEM 
						  >> 5)))) 
		       & vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__dirty[
		       (0xf & (vlSymsp->TOP__v.aluResult1_EXEM 
			       >> 0xa))]);
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[(0xf 
								      & (vlSymsp->TOP__v.aluResult1_EXEM 
									 >> 0xa))] 
		    = (vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[
		       (0xf & (vlSymsp->TOP__v.aluResult1_EXEM 
			       >> 0xa))] | ((IData)(1) 
					    << (0x1ff 
						& (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5))));
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][0] 
		    = vlTOPp->block_read_fDM[0];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][1] 
		    = vlTOPp->block_read_fDM[1];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][2] 
		    = vlTOPp->block_read_fDM[2];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][3] 
		    = vlTOPp->block_read_fDM[3];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][4] 
		    = vlTOPp->block_read_fDM[4];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][5] 
		    = vlTOPp->block_read_fDM[5];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][6] 
		    = vlTOPp->block_read_fDM[6];
		vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks[(0x1ff 
								       & (vlSymsp->TOP__v.aluResult1_EXEM 
									  >> 5))][7] 
		    = vlTOPp->block_read_fDM[7];
	    }
	}
    }
    // ALWAYS at iCache.v:66
    if (VL_LIKELY(vlTOPp->RESET)) {
	vlSymsp->TOP__v.__Vdly__iCache1__DOT__waitCount 
	    = (0xf & ((IData)(vlSymsp->TOP__v.__PVT__IMISS)
		       ? ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__waitCount))
		       : 0));
    } else {
	VL_WRITEF("RESET I$ ...\n");
	vlSymsp->TOP__v.__Vdly__iCache1__DOT__waitCount = 0;
    }
    // ALWAYS at IF.v:84
    vlSymsp->TOP__v.__PVT__wQ_IFID_pushReq = ((IData)(vlSymsp->TOP__v.__PVT__IF1__DOT__wCarryOn) 
					      & (IData)(vlTOPp->RESET));
    // ALWAYS at queue.v:85
    if (vlTOPp->RESET) {
	if (vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush) {
	    vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__tail 
		= (7 & ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)));
	}
	if (vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop) {
	    vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__head 
		= (7 & ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)));
	}
    } else {
	vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__tail = 0;
	vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__head = 0;
    }
    // ALWAYS at ID.v:153
    vlSymsp->TOP__v.__PVT__wQ_IDREN_pushReq = ((~ (IData)(vlSymsp->TOP__v.__PVT__wFreezeID)) 
					       & (IData)(vlTOPp->RESET));
    // ALWAYS at queue.v:85
    if (vlTOPp->RESET) {
	if (vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush) {
	    vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__tail 
		= (7 & ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)));
	}
	if (vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop) {
	    vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__head 
		= (7 & ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)));
	}
    } else {
	vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__tail = 0;
	vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__head = 0;
    }
    // ALWAYS at queue.v:71
    if (vlTOPp->RESET) {
	if (((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush) 
	     & (~ (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop)))) {
	    vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__count 
		= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count)));
	}
	if (((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop) 
	     & (~ (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush)))) {
	    vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__count 
		= (0xf & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count) 
			  - (IData)(1)));
	}
    } else {
	vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__count = 0;
    }
    // ALWAYS at queue.v:71
    if (vlTOPp->RESET) {
	if (((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush) 
	     & (~ (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop)))) {
	    vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__count 
		= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count)));
	}
	if (((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop) 
	     & (~ (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush)))) {
	    vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__count 
		= (0xf & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count) 
			  - (IData)(1)));
	}
    } else {
	vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__count = 0;
    }
    // ALWAYS at queue.v:99
    if (vlTOPp->RESET) {
	if ((8 != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count))) {
	    vlSymsp->TOP__v.__Vdlyvval__Q_IDREN__DOT__buffer__v0 
		= vlSymsp->TOP__v.Instr1_IDEXE;
	    vlSymsp->TOP__v.__Vdlyvset__Q_IDREN__DOT__buffer__v0 = 1;
	    vlSymsp->TOP__v.__Vdlyvdim0__Q_IDREN__DOT__buffer__v0 
		= vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail;
	}
    } else {
	vlSymsp->TOP__v.__Vdlyvset__Q_IDREN__DOT__buffer__v1 = 1;
	vlSymsp->TOP__v.__Vdlyvdim0__Q_IDREN__DOT__buffer__v1 
	    = vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail;
    }
    // ALWAYS at queue.v:99
    if (vlTOPp->RESET) {
	if ((8 != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count))) {
	    vlSymsp->TOP__v.__Vdlyvval__Q_IFID__DOT__buffer__v0[0] 
		= vlSymsp->TOP__v.__PVT__wQ_IFID_pushData[0];
	    vlSymsp->TOP__v.__Vdlyvval__Q_IFID__DOT__buffer__v0[1] 
		= vlSymsp->TOP__v.__PVT__wQ_IFID_pushData[1];
	    vlSymsp->TOP__v.__Vdlyvval__Q_IFID__DOT__buffer__v0[2] 
		= vlSymsp->TOP__v.__PVT__wQ_IFID_pushData[2];
	    vlSymsp->TOP__v.__Vdlyvset__Q_IFID__DOT__buffer__v0 = 1;
	    vlSymsp->TOP__v.__Vdlyvdim0__Q_IFID__DOT__buffer__v0 
		= vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail;
	}
    } else {
	vlSymsp->TOP__v.__Vdlyvset__Q_IFID__DOT__buffer__v1 = 1;
	vlSymsp->TOP__v.__Vdlyvdim0__Q_IFID__DOT__buffer__v1 
	    = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail;
    }
    vlSymsp->TOP__v.__PVT__iCache1__DOT__waitCount 
	= vlSymsp->TOP__v.__Vdly__iCache1__DOT__waitCount;
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head = vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__head;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head = vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__head;
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail = vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__tail;
    // ALWAYSPOST at queue.v:103
    if (vlSymsp->TOP__v.__Vdlyvset__Q_IDREN__DOT__buffer__v0) {
	vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__Q_IDREN__DOT__buffer__v0)] 
	    = vlSymsp->TOP__v.__Vdlyvval__Q_IDREN__DOT__buffer__v0;
    }
    if (vlSymsp->TOP__v.__Vdlyvset__Q_IDREN__DOT__buffer__v1) {
	vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__Q_IDREN__DOT__buffer__v1)] = 0;
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count = vlSymsp->TOP__v.__Vdly__Q_IDREN__DOT__count;
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail = vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__tail;
    // ALWAYSPOST at queue.v:103
    if (vlSymsp->TOP__v.__Vdlyvset__Q_IFID__DOT__buffer__v0) {
	vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__Q_IFID__DOT__buffer__v0)][0] 
	    = vlSymsp->TOP__v.__Vdlyvval__Q_IFID__DOT__buffer__v0[0];
	vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__Q_IFID__DOT__buffer__v0)][1] 
	    = vlSymsp->TOP__v.__Vdlyvval__Q_IFID__DOT__buffer__v0[1];
	vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__Q_IFID__DOT__buffer__v0)][2] 
	    = vlSymsp->TOP__v.__Vdlyvval__Q_IFID__DOT__buffer__v0[2];
    }
    if (vlSymsp->TOP__v.__Vdlyvset__Q_IFID__DOT__buffer__v1) {
	vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__Q_IFID__DOT__buffer__v1)][0] = 0;
	vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__Q_IFID__DOT__buffer__v1)][1] = 0;
	vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__Q_IFID__DOT__buffer__v1)][2] = 0;
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count = vlSymsp->TOP__v.__Vdly__Q_IFID__DOT__count;
    // ALWAYS at dCache.v:68
    if (vlTOPp->RESET) {
	vlSymsp->TOP__v.__Vdly__dCache1__DOT__waitCount 
	    = (0xf & ((IData)(vlSymsp->TOP__v.__PVT__DMISS)
		       ? ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__waitCount))
		       : 0));
	if (((IData)(vlSymsp->TOP__v.MemRead1_EXEM) 
	     | (IData)(vlSymsp->TOP__v.MemWrite1_EXEM))) {
	    vlSymsp->TOP__v.dCache1__DOT____Vlvbound1 
		= vlSymsp->TOP__v.__PVT__dCache1__DOT__hit0;
	    if (((0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
			   >> 5)) <= 0x100)) {
		vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[(0xf 
							     & (vlSymsp->TOP__v.aluResult1_EXEM 
								>> 0xa))] 
		    = (((~ ((IData)(1) << (0x1f & (vlSymsp->TOP__v.aluResult1_EXEM 
						   >> 5)))) 
			& vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[
			(0xf & (vlSymsp->TOP__v.aluResult1_EXEM 
				>> 0xa))]) | ((IData)(vlSymsp->TOP__v.dCache1__DOT____Vlvbound1) 
					      << (0x1ff 
						  & (vlSymsp->TOP__v.aluResult1_EXEM 
						     >> 5))));
	    }
	}
    } else {
	vlSymsp->TOP__v.__Vdly__dCache1__DOT__waitCount = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[0] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[1] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[2] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[3] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[4] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[5] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[6] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[7] = 0;
	vlSymsp->TOP__v.__PVT__dCache1__DOT__policy[8] = 0;
    }
    vlSymsp->TOP__v.__PVT__wQ_IDREN_popData = vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
	[(IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)];
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush 
	= ((8 != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count)) 
	   & (IData)(vlSymsp->TOP__v.__PVT__wQ_IDREN_pushReq));
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop = 
	((0 != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count)) 
	 & (IData)(vlSymsp->TOP__v.__PVT__wQ_IDREN_popReq));
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush = 
	((8 != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count)) 
	 & (IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_pushReq));
    vlSymsp->TOP__v.__PVT__dCache1__DOT__waitCount 
	= vlSymsp->TOP__v.__Vdly__dCache1__DOT__waitCount;
}

void VMIPS_MIPS::_sequent__TOP__v__3(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__3\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__Vdly__IF1__DOT__FPC = vlSymsp->TOP__v.__PVT__IF1__DOT__FPC;
    vlSymsp->TOP__v.__Vdly__Instr2_IFID = vlSymsp->TOP__v.Instr2_IFID;
    vlSymsp->TOP__v.__Vdly__IF1__DOT__PC = vlSymsp->TOP__v.__PVT__IF1__DOT__PC;
    vlSymsp->TOP__v.__Vdly__ID1__DOT__syscalBubbleCounter 
	= vlSymsp->TOP__v.__PVT__ID1__DOT__syscalBubbleCounter;
    // ALWAYS at IF.v:61
    if (vlTOPp->RESET) {
	if (vlSymsp->TOP__v.__PVT__IF1__DOT__wCarryOn) {
	    vlSymsp->TOP__v.Instr1_IFID = vlSymsp->TOP__v.Instr2_IFID;
	    vlSymsp->TOP__v.__Vdly__Instr2_IFID = vlSymsp->TOP__v.Instr1_fIC;
	    vlSymsp->TOP__v.PCA_IFID = vlSymsp->TOP__v.__PVT__IF1__DOT__PC;
	    vlSymsp->TOP__v.CIA_IFID = vlSymsp->TOP__v.__PVT__IF1__DOT__FPC;
	    vlSymsp->TOP__v.__Vdly__IF1__DOT__FPC = vlSymsp->TOP__v.Instr_address_2IM;
	    vlSymsp->TOP__v.__Vdly__IF1__DOT__PC = 
		((IData)(4) + vlSymsp->TOP__v.Instr_address_2IM);
	}
    } else {
	vlSymsp->TOP__v.Instr1_IFID = 0;
	vlSymsp->TOP__v.__Vdly__IF1__DOT__FPC = 0;
	vlSymsp->TOP__v.__Vdly__Instr2_IFID = 0;
	vlSymsp->TOP__v.PCA_IFID = 0;
	vlSymsp->TOP__v.CIA_IFID = 0;
	vlSymsp->TOP__v.__Vdly__IF1__DOT__PC = vlTOPp->PC_init;
    }
    // ALWAYS at ID.v:345
    if (vlTOPp->RESET) {
	if ((1 & (~ (IData)(vlSymsp->TOP__v.__PVT__wFreezeID)))) {
	    vlSymsp->TOP__v.__Vdly__ID1__DOT__syscalBubbleCounter 
		= (3 & ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1)
			 ? ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscalBubbleCounter) 
			    - (IData)(1)) : 3));
	    vlSymsp->TOP__v.R2_output_ID = ((IData)(vlSymsp->TOP__v.no_fetch)
					     ? 0 : vlSymsp->TOP__v.__PVT__ID1__DOT__R2_output);
	    vlSymsp->TOP__v.nextInstruction_address_IDIF 
		= ((IData)(vlSymsp->TOP__v.no_fetch)
		    ? 0 : ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__jump1)
			    ? ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1)
			        ? ((0xf0000000 & ((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq)
						   ? 
						  vlSymsp->TOP__v.__PVT__wQ_IFID_popData[1]
						   : 0)) 
				   | (0xffffffc & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						   << 2)))
			        : vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1)
			    : ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__taken_branch1)
			        ? (vlSymsp->TOP__v.__PVT__ID1__DOT__wPCA 
				   + (vlSymsp->TOP__v.__PVT__ID1__DOT__signExtended_output1 
				      << 2)) : vlSymsp->TOP__v.__PVT__ID1__DOT__wPCA)));
	}
    } else {
	vlSymsp->TOP__v.__Vdly__ID1__DOT__syscalBubbleCounter = 3;
	vlSymsp->TOP__v.R2_output_ID = 0;
	vlSymsp->TOP__v.nextInstruction_address_IDIF = 0;
    }
    vlSymsp->TOP__v.__PVT__IF1__DOT__FPC = vlSymsp->TOP__v.__Vdly__IF1__DOT__FPC;
    vlSymsp->TOP__v.Instr2_IFID = vlSymsp->TOP__v.__Vdly__Instr2_IFID;
    vlSymsp->TOP__v.__PVT__IF1__DOT__PC = vlSymsp->TOP__v.__Vdly__IF1__DOT__PC;
    vlSymsp->TOP__v.__PVT__ID1__DOT__syscalBubbleCounter 
	= vlSymsp->TOP__v.__Vdly__ID1__DOT__syscalBubbleCounter;
    vlSymsp->TOP__v.__PVT__wQ_IFID_pushData[0] = vlSymsp->TOP__v.Instr1_IFID;
    vlSymsp->TOP__v.__PVT__wQ_IFID_pushData[1] = (IData)(
							 (((QData)((IData)(vlSymsp->TOP__v.PCA_IFID)) 
							   << 0x20) 
							  | (QData)((IData)(vlSymsp->TOP__v.CIA_IFID))));
    vlSymsp->TOP__v.__PVT__wQ_IFID_pushData[2] = (IData)(
							 ((((QData)((IData)(vlSymsp->TOP__v.PCA_IFID)) 
							    << 0x20) 
							   | (QData)((IData)(vlSymsp->TOP__v.CIA_IFID))) 
							  >> 0x20));
    vlSymsp->TOP__v.Instr_address_2IM = vlSymsp->TOP__v.__PVT__IF1__DOT__PC;
}

void VMIPS_MIPS::_sequent__TOP__v__4(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__4\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__Vdly__writeRegister1_MEMW = vlSymsp->TOP__v.writeRegister1_MEMW;
    vlSymsp->TOP__v.__Vdly__do_writeback1_MEMW = vlSymsp->TOP__v.do_writeback1_MEMW;
    // ALWAYS at MEM.v:153
    if (vlTOPp->RESET) {
	if ((1 & (~ (IData)(vlSymsp->TOP__v.FREEZE)))) {
	    vlSymsp->TOP__v.MemtoReg1_MEMW = vlSymsp->TOP__v.MemtoReg1_EXEM;
	    vlSymsp->TOP__v.__Vdly__writeRegister1_MEMW 
		= vlSymsp->TOP__v.writeRegister1_EXEM;
	    vlSymsp->TOP__v.aluResult1_MEMW = vlSymsp->TOP__v.aluResult1_EXEM;
	    vlSymsp->TOP__v.data_read1_MEMW = vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned;
	    vlSymsp->TOP__v.__Vdly__do_writeback1_MEMW 
		= vlSymsp->TOP__v.do_writeback1_EXEM;
	}
    } else {
	vlSymsp->TOP__v.MemtoReg1_MEMW = 0;
	vlSymsp->TOP__v.__Vdly__writeRegister1_MEMW = 0;
	vlSymsp->TOP__v.aluResult1_MEMW = 0;
	vlSymsp->TOP__v.data_read1_MEMW = 0;
	vlSymsp->TOP__v.__Vdly__do_writeback1_MEMW = 0;
    }
    vlSymsp->TOP__v.aluResult1_WBID = vlSymsp->TOP__v.aluResult1_MEMW;
}

void VMIPS_MIPS::_settle__TOP__v__5(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__5\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__wQ_IDREN_popData = vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
	[(IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)];
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush 
	= ((8 != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count)) 
	   & (IData)(vlSymsp->TOP__v.__PVT__wQ_IDREN_pushReq));
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop = 
	((0 != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count)) 
	 & (IData)(vlSymsp->TOP__v.__PVT__wQ_IDREN_popReq));
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush = 
	((8 != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count)) 
	 & (IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_pushReq));
    vlSymsp->TOP__v.__PVT__ID1__DOT__R2_output = vlSymsp->TOP__v.Reg_ID
	[2];
    vlSymsp->TOP__v.__PVT__wQ_IFID_popData[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	[(IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)][0];
    vlSymsp->TOP__v.__PVT__wQ_IFID_popData[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	[(IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)][1];
    vlSymsp->TOP__v.__PVT__wQ_IFID_popData[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	[(IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)][2];
    vlSymsp->TOP__v.__PVT__wQ_IFID_pushData[0] = vlSymsp->TOP__v.Instr1_IFID;
    vlSymsp->TOP__v.__PVT__wQ_IFID_pushData[1] = (IData)(
							 (((QData)((IData)(vlSymsp->TOP__v.PCA_IFID)) 
							   << 0x20) 
							  | (QData)((IData)(vlSymsp->TOP__v.CIA_IFID))));
    vlSymsp->TOP__v.__PVT__wQ_IFID_pushData[2] = (IData)(
							 ((((QData)((IData)(vlSymsp->TOP__v.PCA_IFID)) 
							    << 0x20) 
							   | (QData)((IData)(vlSymsp->TOP__v.CIA_IFID))) 
							  >> 0x20));
    vlSymsp->TOP__v.Instr_address_2IM = vlSymsp->TOP__v.__PVT__IF1__DOT__PC;
    vlSymsp->TOP__v.aluResult1_WBID = vlSymsp->TOP__v.aluResult1_MEMW;
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][0];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][1];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][2];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][3];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][4];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][5];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][6];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][7];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][0];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][1];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][2];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][3];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][4];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][5];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][6];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][7];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__hit1 = ((vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__tags
						  [
						  (0x3ff 
						   & (vlSymsp->TOP__v.Instr_address_2IM 
						      >> 5))] 
						  == 
						  (0x1ffff 
						   & (vlSymsp->TOP__v.Instr_address_2IM 
						      >> 0xf))) 
						 & (vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[
						    (0x1f 
						     & (vlSymsp->TOP__v.Instr_address_2IM 
							>> 0xa))] 
						    >> 
						    (0x1f 
						     & (vlSymsp->TOP__v.Instr_address_2IM 
							>> 5))));
    vlSymsp->TOP__v.__PVT__iCache1__DOT__hit2 = (((
						   vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__tags
						   [
						   (0x3ff 
						    & (vlSymsp->TOP__v.Instr_address_2IM 
						       >> 5))] 
						   == 
						   (0x1ffff 
						    & (vlSymsp->TOP__v.Instr_address_2IM 
						       >> 0xf))) 
						  & (vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[
						     (0x1f 
						      & (vlSymsp->TOP__v.Instr_address_2IM 
							 >> 0xa))] 
						     >> 
						     (0x1f 
						      & (vlSymsp->TOP__v.Instr_address_2IM 
							 >> 5)))) 
						 | ((0x3ff 
						     & (vlSymsp->TOP__v.Instr_address_2IM 
							>> 5)) 
						    == 
						    (0x3ff 
						     & (vlSymsp->TOP__v.Instr_address_2IM 
							>> 5))));
}

void VMIPS_MIPS::_sequent__TOP__v__6(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__6\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__ID1__DOT__R2_output = vlSymsp->TOP__v.Reg_ID
	[2];
    vlSymsp->TOP__v.__PVT__wQ_IFID_popData[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	[(IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)][0];
    vlSymsp->TOP__v.__PVT__wQ_IFID_popData[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	[(IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)][1];
    vlSymsp->TOP__v.__PVT__wQ_IFID_popData[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	[(IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)][2];
}

void VMIPS_MIPS::_sequent__TOP__v__7(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__7\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp23,87,0,3);
    // Body
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][0];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][1];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][2];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][3];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][4];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][5];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][6];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][7];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][0];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][1];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][2];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][3];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][4];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][5];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][6];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7] 
	= vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__blocks
	[(0x3ff & (vlSymsp->TOP__v.Instr_address_2IM 
		   >> 5))][7];
    vlSymsp->TOP__v.__PVT__iCache1__DOT__hit1 = ((vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__tags
						  [
						  (0x3ff 
						   & (vlSymsp->TOP__v.Instr_address_2IM 
						      >> 5))] 
						  == 
						  (0x1ffff 
						   & (vlSymsp->TOP__v.Instr_address_2IM 
						      >> 0xf))) 
						 & (vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[
						    (0x1f 
						     & (vlSymsp->TOP__v.Instr_address_2IM 
							>> 0xa))] 
						    >> 
						    (0x1f 
						     & (vlSymsp->TOP__v.Instr_address_2IM 
							>> 5))));
    vlSymsp->TOP__v.__PVT__iCache1__DOT__hit2 = (((
						   vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__tags
						   [
						   (0x3ff 
						    & (vlSymsp->TOP__v.Instr_address_2IM 
						       >> 5))] 
						   == 
						   (0x1ffff 
						    & (vlSymsp->TOP__v.Instr_address_2IM 
						       >> 0xf))) 
						  & (vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__valid[
						     (0x1f 
						      & (vlSymsp->TOP__v.Instr_address_2IM 
							 >> 0xa))] 
						     >> 
						     (0x1f 
						      & (vlSymsp->TOP__v.Instr_address_2IM 
							 >> 5)))) 
						 | ((0x3ff 
						     & (vlSymsp->TOP__v.Instr_address_2IM 
							>> 5)) 
						    == 
						    (0x3ff 
						     & (vlSymsp->TOP__v.Instr_address_2IM 
							>> 5))));
    // ALWAYS at EXE.v:124
    if (vlTOPp->RESET) {
	if ((1 & (~ (IData)(vlSymsp->TOP__v.FREEZE)))) {
	    vlSymsp->TOP__v.MemtoReg1_EXEM = vlSymsp->TOP__v.MemtoReg1_IDEXE;
	    vlSymsp->TOP__v.readDataB1_EXEM = (((IData)(vlSymsp->TOP__v.do_writeback1_MEMW) 
						& ((IData)(vlSymsp->TOP__v.writeRegister1_MEMW) 
						   == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
					        ? vlSymsp->TOP__v.writeData1_WBID
					        : (
						   ((IData)(vlSymsp->TOP__v.do_writeback1_WBEXE) 
						    & ((IData)(vlSymsp->TOP__v.writeRegister1_WBEXE) 
						       == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
						    ? vlSymsp->TOP__v.writeData1_WBEXE
						    : vlSymsp->TOP__v.readDataB1_IDEXE));
	    vlSymsp->TOP__v.aluResult1_EXEM = vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1;
	    vlSymsp->TOP__v.MemRead1_EXEM = vlSymsp->TOP__v.MemRead1_IDEXE;
	    vlSymsp->TOP__v.MemWrite1_EXEM = vlSymsp->TOP__v.MemWrite1_IDEXE;
	    vlSymsp->TOP__v.writeRegister1_EXEM = vlSymsp->TOP__v.writeRegister1_IDEXE;
	    vlSymsp->TOP__v.do_writeback1_EXEM = vlSymsp->TOP__v.do_writeback1_IDEXE;
	    vlSymsp->TOP__v.ALU_control1_EXEM = vlSymsp->TOP__v.ALU_control1_IDEXE;
	    vlSymsp->TOP__v.Dest_Value1_EXEM = vlSymsp->TOP__v.__PVT__EXE1__DOT__Dst1;
	    vlSymsp->TOP__v.Instr1_EXEM = vlSymsp->TOP__v.Instr1_IDEXE;
	    vlSymsp->TOP__v.ALUSrc1_EXEM = vlSymsp->TOP__v.ALUSrc1_IDEXE;
	}
    } else {
	vlSymsp->TOP__v.MemtoReg1_EXEM = 0;
	vlSymsp->TOP__v.MemRead1_EXEM = 0;
	vlSymsp->TOP__v.MemWrite1_EXEM = 0;
	vlSymsp->TOP__v.aluResult1_EXEM = 0;
	vlSymsp->TOP__v.writeRegister1_EXEM = 0;
	vlSymsp->TOP__v.do_writeback1_EXEM = 0;
	vlSymsp->TOP__v.ALU_control1_EXEM = 0;
	vlSymsp->TOP__v.readDataB1_EXEM = 0;
	vlSymsp->TOP__v.Dest_Value1_EXEM = 0;
	vlSymsp->TOP__v.Instr1_EXEM = 0;
	vlSymsp->TOP__v.ALUSrc1_EXEM = 0;
    }
    // ALWAYS at instr_cache_core.v:142
    vlSymsp->TOP__v.Instr2_fIC = ((0x10 & vlSymsp->TOP__v.Instr_address_2IM)
				   ? ((8 & vlSymsp->TOP__v.Instr_address_2IM)
				       ? ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1])))
				       : ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3]))))
				   : ((8 & vlSymsp->TOP__v.Instr_address_2IM)
				       ? ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5])))
				       : ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7])))));
    // ALWAYS at instr_cache_core.v:86
    vlSymsp->TOP__v.Instr1_fIC = ((0x10 & vlSymsp->TOP__v.Instr_address_2IM)
				   ? ((8 & vlSymsp->TOP__v.Instr_address_2IM)
				       ? ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1])))
				       : ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3]))))
				   : ((8 & vlSymsp->TOP__v.Instr_address_2IM)
				       ? ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5])))
				       : ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7])))));
    vlSymsp->TOP__v.MVECT = ((2 & ((~ (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__hit2)) 
				   << 1)) | (1 & (~ (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__hit1))));
    vlSymsp->TOP__v.Instr_fMEM = vlSymsp->TOP__v.Instr1_EXEM;
    vlSymsp->TOP__v.__PVT__dCache1__DOT__hit1 = ((vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__tags
						  [
						  (0x1ff 
						   & (vlSymsp->TOP__v.aluResult1_EXEM 
						      >> 5))] 
						  == 
						  (0x3ffff 
						   & (vlSymsp->TOP__v.aluResult1_EXEM 
						      >> 0xe))) 
						 & (vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[
						    (0xf 
						     & (vlSymsp->TOP__v.aluResult1_EXEM 
							>> 0xa))] 
						    >> 
						    (0x1f 
						     & (vlSymsp->TOP__v.aluResult1_EXEM 
							>> 5))));
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][0];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][1];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][2];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][3];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][4];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][5];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][6];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][7];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][0];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][1];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][2];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][3];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][4];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][5];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][6];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][7];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__hit0 = ((vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__tags
						  [
						  (0x1ff 
						   & (vlSymsp->TOP__v.aluResult1_EXEM 
						      >> 5))] 
						  == 
						  (0x3ffff 
						   & (vlSymsp->TOP__v.aluResult1_EXEM 
						      >> 0xe))) 
						 & (vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[
						    (0xf 
						     & (vlSymsp->TOP__v.aluResult1_EXEM 
							>> 0xa))] 
						    >> 
						    (0x1f 
						     & (vlSymsp->TOP__v.aluResult1_EXEM 
							>> 5))));
    // ALWAYS at WB.v:51
    if (vlTOPp->RESET) {
	if ((1 & (~ (IData)(vlSymsp->TOP__v.FREEZE)))) {
	    vlSymsp->TOP__v.writeData1_WBEXE = vlSymsp->TOP__v.writeData1_WBID;
	    vlSymsp->TOP__v.writeRegister1_WBEXE = vlSymsp->TOP__v.writeRegister1_MEMW;
	    vlSymsp->TOP__v.do_writeback1_WBEXE = vlSymsp->TOP__v.do_writeback1_MEMW;
	}
    } else {
	vlSymsp->TOP__v.writeData1_WBEXE = 0;
	vlSymsp->TOP__v.writeRegister1_WBEXE = 0;
	vlSymsp->TOP__v.do_writeback1_WBEXE = 0;
    }
    // ALWAYS at ID.v:369
    if ((1 & ((~ (IData)(vlTOPp->RESET)) | (IData)(vlSymsp->TOP__v.no_fetch)))) {
	vlSymsp->TOP__v.Operand_A1_IDEXE = 0;
	vlSymsp->TOP__v.Operand_B1_IDEXE = 0;
	vlSymsp->TOP__v.writeRegister1_IDEXE = 0;
	vlSymsp->TOP__v.taken_branch1_IDIF = 0;
	vlSymsp->TOP__v.MemRead1_IDEXE = 0;
	vlSymsp->TOP__v.MemtoReg1_IDEXE = 0;
	vlSymsp->TOP__v.MemWrite1_IDEXE = 0;
	vlSymsp->TOP__v.ALU_control1_IDEXE = 0;
	vlSymsp->TOP__v.readRegisterA1_IDEXE = 0;
	vlSymsp->TOP__v.readRegisterB1_IDEXE = 0;
	vlSymsp->TOP__v.do_writeback1_IDEXE = 0;
	vlSymsp->TOP__v.Instr1_10_6_IDEXE = 0;
	vlSymsp->TOP__v.readDataB1_IDEXE = 0;
	vlSymsp->TOP__v.Dest_Value1_IDEXE = 0;
	vlSymsp->TOP__v.Instr1_IDEXE = 0;
	vlSymsp->TOP__v.ALUSrc1_IDEXE = 0;
    } else {
	if ((1 & (~ (IData)(vlSymsp->TOP__v.__PVT__wFreezeID)))) {
	    vlSymsp->TOP__v.Operand_A1_IDEXE = ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__link1)
						 ? vlSymsp->TOP__v.__PVT__ID1__DOT__wPCA
						 : 
						((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1)
						  ? vlTOPp->R2_input
						  : vlSymsp->TOP__v.__PVT__ID1__DOT__readDataA1));
	    vlSymsp->TOP__v.Operand_B1_IDEXE = ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__link1)
						 ? 4
						 : 
						((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1)
						  ? 0
						  : vlSymsp->TOP__v.__PVT__ID1__DOT__Operand_B1));
	    vlSymsp->TOP__v.writeRegister1_IDEXE = vlSymsp->TOP__v.__PVT__ID1__DOT__writeRegister1;
	    vlSymsp->TOP__v.taken_branch1_IDIF = vlSymsp->TOP__v.__PVT__ID1__DOT__taken_branch1;
	    vlSymsp->TOP__v.MemRead1_IDEXE = vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1;
	    vlSymsp->TOP__v.MemtoReg1_IDEXE = vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1;
	    vlSymsp->TOP__v.MemWrite1_IDEXE = vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1;
	    vlSymsp->TOP__v.ALU_control1_IDEXE = vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1;
	    vlSymsp->TOP__v.readRegisterA1_IDEXE = 
		(0x1f & (((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__link1) 
			  | (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1))
			  ? 0 : (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
				 >> 0x15)));
	    vlSymsp->TOP__v.readRegisterB1_IDEXE = 
		(0x1f & ((((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1) 
			   | (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__link1)) 
			  | (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1))
			  ? 0 : (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
				 >> 0x10)));
	    vlSymsp->TOP__v.do_writeback1_IDEXE = (
						   (((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1) 
						     & (0 
							!= (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__writeRegister1))) 
						    & (0x34 
						       != (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1))) 
						   | (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1));
	    vlSymsp->TOP__v.Instr1_10_6_IDEXE = (0x1f 
						 & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						    >> 6));
	    vlSymsp->TOP__v.readDataB1_IDEXE = vlSymsp->TOP__v.__PVT__ID1__DOT__readDataB1;
	    vlSymsp->TOP__v.Dest_Value1_IDEXE = vlSymsp->TOP__v.Reg_ID
		[(IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__writeRegister1)];
	    vlSymsp->TOP__v.Instr1_IDEXE = vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1;
	    vlSymsp->TOP__v.ALUSrc1_IDEXE = vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1;
	}
    }
    // ALWAYS at queue.v:118
    VL_WRITEF("----------------Q: IDREN------------------\n");
    VL_WRITEF("Count: %2u %s%s\n",4,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count,
	      48,((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count))
		   ? VL_ULL(0x454d50545921) : VL_ULL(0x20)),
	      40,((8 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count))
		   ? VL_ULL(0x46554c4c21) : VL_ULL(0x20)));
    __Vtemp23[0] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop))
		     ? 0x48504f50 : 0x20202020);
    __Vtemp23[1] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop))
		     ? 0x2d505553 : 0x202020);
    __Vtemp23[2] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop))
		     ? 0x3c2d2d : 0);
    VL_WRITEF("Push: %s(%x) Pop: %s(%x) %s\n",8,((IData)(vlSymsp->TOP__v.__PVT__wQ_IDREN_pushReq)
						  ? 0x59
						  : 0x4e),
	      32,vlSymsp->TOP__v.Instr1_IDEXE,8,((IData)(vlSymsp->TOP__v.__PVT__wQ_IDREN_popReq)
						  ? 0x59
						  : 0x4e),
	      32,vlSymsp->TOP__v.__PVT__wQ_IDREN_popData,
	      88,__Vtemp23);
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 0;
    if (VL_UNLIKELY(((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          0]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [0]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          0]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [0]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          0]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [0]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          0]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [0]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 1;
    if (VL_UNLIKELY(((1 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (1 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          1]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [1]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          1]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [1]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          1]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [1]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          1]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [1]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 2;
    if (VL_UNLIKELY(((2 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (2 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          2]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [2]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          2]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [2]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          2]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [2]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          2]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [2]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 3;
    if (VL_UNLIKELY(((3 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (3 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          3]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [3]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          3]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [3]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          3]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [3]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          3]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [3]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 4;
    if (VL_UNLIKELY(((4 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (4 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          4]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [4]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          4]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [4]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          4]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [4]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          4]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [4]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 5;
    if (VL_UNLIKELY(((5 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (5 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          5]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [5]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          5]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [5]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          5]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [5]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          5]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [5]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 6;
    if (VL_UNLIKELY(((6 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (6 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          6]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [6]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          6]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [6]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          6]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [6]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          6]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [6]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 7;
    if (VL_UNLIKELY(((7 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (7 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          7]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [7]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          7]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [7]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          7]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [7]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          7]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [7]);
    }
}

void VMIPS_MIPS::_settle__TOP__v__8(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__8\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp29,87,0,3);
    // Body
    // ALWAYS at instr_cache_core.v:142
    vlSymsp->TOP__v.Instr2_fIC = ((0x10 & vlSymsp->TOP__v.Instr_address_2IM)
				   ? ((8 & vlSymsp->TOP__v.Instr_address_2IM)
				       ? ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[0]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[1])))
				       : ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[2]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[3]))))
				   : ((8 & vlSymsp->TOP__v.Instr_address_2IM)
				       ? ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[4]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[5])))
				       : ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[6]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out2[7])))));
    // ALWAYS at instr_cache_core.v:86
    vlSymsp->TOP__v.Instr1_fIC = ((0x10 & vlSymsp->TOP__v.Instr_address_2IM)
				   ? ((8 & vlSymsp->TOP__v.Instr_address_2IM)
				       ? ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[0]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[1])))
				       : ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[2]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[3]))))
				   : ((8 & vlSymsp->TOP__v.Instr_address_2IM)
				       ? ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[4]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[5])))
				       : ((4 & vlSymsp->TOP__v.Instr_address_2IM)
					   ? ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[6]))
					   : ((2 & vlSymsp->TOP__v.Instr_address_2IM)
					       ? ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7])
					       : ((1 
						   & vlSymsp->TOP__v.Instr_address_2IM)
						   ? 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7]
						   : 
						  vlSymsp->TOP__v.__PVT__iCache1__DOT__cc0__DOT__block_out1[7])))));
    vlSymsp->TOP__v.MVECT = ((2 & ((~ (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__hit2)) 
				   << 1)) | (1 & (~ (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__hit1))));
    vlSymsp->TOP__v.Instr_fMEM = vlSymsp->TOP__v.Instr1_EXEM;
    vlSymsp->TOP__v.__PVT__dCache1__DOT__hit1 = ((vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__tags
						  [
						  (0x1ff 
						   & (vlSymsp->TOP__v.aluResult1_EXEM 
						      >> 5))] 
						  == 
						  (0x3ffff 
						   & (vlSymsp->TOP__v.aluResult1_EXEM 
						      >> 0xe))) 
						 & (vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__valid[
						    (0xf 
						     & (vlSymsp->TOP__v.aluResult1_EXEM 
							>> 0xa))] 
						    >> 
						    (0x1f 
						     & (vlSymsp->TOP__v.aluResult1_EXEM 
							>> 5))));
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][0];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][1];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][2];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][3];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][4];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][5];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][6];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][7];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][0];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][1];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][2];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][3];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][4];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][5];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][6];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7] 
	= vlSymsp->TOP__v.__PVT__dCache1__DOT__cc1__DOT__blocks
	[(0x1ff & (vlSymsp->TOP__v.aluResult1_EXEM 
		   >> 5))][7];
    vlSymsp->TOP__v.__PVT__dCache1__DOT__hit0 = ((vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__tags
						  [
						  (0x1ff 
						   & (vlSymsp->TOP__v.aluResult1_EXEM 
						      >> 5))] 
						  == 
						  (0x3ffff 
						   & (vlSymsp->TOP__v.aluResult1_EXEM 
						      >> 0xe))) 
						 & (vlSymsp->TOP__v.__PVT__dCache1__DOT__cc0__DOT__valid[
						    (0xf 
						     & (vlSymsp->TOP__v.aluResult1_EXEM 
							>> 0xa))] 
						    >> 
						    (0x1f 
						     & (vlSymsp->TOP__v.aluResult1_EXEM 
							>> 5))));
    vlSymsp->TOP__v.writeData1_WBID = ((IData)(vlSymsp->TOP__v.MemtoReg1_MEMW)
				        ? vlSymsp->TOP__v.data_read1_MEMW
				        : vlSymsp->TOP__v.aluResult1_MEMW);
    vlSymsp->TOP__v.__PVT__wFreezeID = ((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count)) 
					| (8 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count)));
    // ALWAYS at queue.v:118
    VL_WRITEF("----------------Q: IDREN------------------\n");
    VL_WRITEF("Count: %2u %s%s\n",4,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count,
	      48,((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count))
		   ? VL_ULL(0x454d50545921) : VL_ULL(0x20)),
	      40,((8 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count))
		   ? VL_ULL(0x46554c4c21) : VL_ULL(0x20)));
    __Vtemp29[0] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop))
		     ? 0x48504f50 : 0x20202020);
    __Vtemp29[1] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop))
		     ? 0x2d505553 : 0x202020);
    __Vtemp29[2] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__validPop))
		     ? 0x3c2d2d : 0);
    VL_WRITEF("Push: %s(%x) Pop: %s(%x) %s\n",8,((IData)(vlSymsp->TOP__v.__PVT__wQ_IDREN_pushReq)
						  ? 0x59
						  : 0x4e),
	      32,vlSymsp->TOP__v.Instr1_IDEXE,8,((IData)(vlSymsp->TOP__v.__PVT__wQ_IDREN_popReq)
						  ? 0x59
						  : 0x4e),
	      32,vlSymsp->TOP__v.__PVT__wQ_IDREN_popData,
	      88,__Vtemp29);
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 0;
    if (VL_UNLIKELY(((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          0]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [0]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          0]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [0]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          0]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [0]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          0]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [0]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 1;
    if (VL_UNLIKELY(((1 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (1 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          1]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [1]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          1]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [1]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          1]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [1]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          1]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [1]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 2;
    if (VL_UNLIKELY(((2 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (2 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          2]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [2]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          2]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [2]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          2]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [2]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          2]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [2]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 3;
    if (VL_UNLIKELY(((3 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (3 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          3]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [3]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          3]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [3]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          3]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [3]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          3]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [3]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 4;
    if (VL_UNLIKELY(((4 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (4 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          4]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [4]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          4]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [4]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          4]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [4]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          4]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [4]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 5;
    if (VL_UNLIKELY(((5 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (5 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          5]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [5]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          5]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [5]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          5]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [5]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          5]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [5]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 6;
    if (VL_UNLIKELY(((6 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (6 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          6]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [6]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          6]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [6]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          6]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [6]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          6]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [6]);
    }
    vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx = 7;
    if (VL_UNLIKELY(((7 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & (7 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          7]: %x <--HEAD <--TAIL\n",
		  32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [7]);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head)))) {
	    VL_WRITEF("BUF[          7]: %x <--HEAD\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [7]);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)))) {
	    VL_WRITEF("BUF[          7]: %x         <--TAIL\n",
		      32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		      [7]);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__head))))) {
	VL_WRITEF("BUF[          7]: %x  \n",32,vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__buffer
		  [7]);
    }
    vlSymsp->TOP__v.__PVT__DataWriteMode = ((0x28 == 
					     (0x3f 
					      & (vlSymsp->TOP__v.Instr_fMEM 
						 >> 0x1a)))
					     ? 1 : 
					    ((0x29 
					      == (0x3f 
						  & (vlSymsp->TOP__v.Instr_fMEM 
						     >> 0x1a)))
					      ? 2 : 0));
    vlSymsp->TOP__v.__PVT__DMISS = (((IData)(vlSymsp->TOP__v.MemRead1_EXEM) 
				     | (IData)(vlSymsp->TOP__v.MemWrite1_EXEM)) 
				    & ((~ (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__hit0)) 
				       & (~ (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__hit1))));
    vlSymsp->TOP__v.__PVT__data_read_fDC = ((IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__hit0)
					     ? ((0x10 
						 & vlSymsp->TOP__v.aluResult1_EXEM)
						 ? 
						((8 
						  & vlSymsp->TOP__v.aluResult1_EXEM)
						  ? 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1])))
						  : 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3]))))
						 : 
						((8 
						  & vlSymsp->TOP__v.aluResult1_EXEM)
						  ? 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5])))
						  : 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7])))))
					     : ((0x10 
						 & vlSymsp->TOP__v.aluResult1_EXEM)
						 ? 
						((8 
						  & vlSymsp->TOP__v.aluResult1_EXEM)
						  ? 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1])))
						  : 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3]))))
						 : 
						((8 
						  & vlSymsp->TOP__v.aluResult1_EXEM)
						  ? 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5])))
						  : 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7]))))));
}

void VMIPS_MIPS::_sequent__TOP__v__9(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__9\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.writeRegister1_MEMW = vlSymsp->TOP__v.__Vdly__writeRegister1_MEMW;
    vlSymsp->TOP__v.do_writeback1_MEMW = vlSymsp->TOP__v.__Vdly__do_writeback1_MEMW;
    vlSymsp->TOP__v.writeData1_WBID = ((IData)(vlSymsp->TOP__v.MemtoReg1_MEMW)
				        ? vlSymsp->TOP__v.data_read1_MEMW
				        : vlSymsp->TOP__v.aluResult1_MEMW);
    vlSymsp->TOP__v.writeRegister1_WBID = vlSymsp->TOP__v.writeRegister1_MEMW;
    vlSymsp->TOP__v.do_writeback1_WBID = vlSymsp->TOP__v.do_writeback1_MEMW;
}

void VMIPS_MIPS::_sequent__TOP__v__10(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__10\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__wFreezeID = ((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count)) 
					| (8 == (IData)(vlSymsp->TOP__v.__PVT__Q_IDREN__DOT__count)));
}

void VMIPS_MIPS::_sequent__TOP__v__11(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__11\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__DataWriteMode = ((0x28 == 
					     (0x3f 
					      & (vlSymsp->TOP__v.Instr_fMEM 
						 >> 0x1a)))
					     ? 1 : 
					    ((0x29 
					      == (0x3f 
						  & (vlSymsp->TOP__v.Instr_fMEM 
						     >> 0x1a)))
					      ? 2 : 0));
    vlSymsp->TOP__v.__PVT__DMISS = (((IData)(vlSymsp->TOP__v.MemRead1_EXEM) 
				     | (IData)(vlSymsp->TOP__v.MemWrite1_EXEM)) 
				    & ((~ (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__hit0)) 
				       & (~ (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__hit1))));
    vlSymsp->TOP__v.__PVT__data_read_fDC = ((IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__hit0)
					     ? ((0x10 
						 & vlSymsp->TOP__v.aluResult1_EXEM)
						 ? 
						((8 
						  & vlSymsp->TOP__v.aluResult1_EXEM)
						  ? 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[0]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[1])))
						  : 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[2]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[3]))))
						 : 
						((8 
						  & vlSymsp->TOP__v.aluResult1_EXEM)
						  ? 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[4]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[5])))
						  : 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[6]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out0[7])))))
					     : ((0x10 
						 & vlSymsp->TOP__v.aluResult1_EXEM)
						 ? 
						((8 
						  & vlSymsp->TOP__v.aluResult1_EXEM)
						  ? 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[0]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[1])))
						  : 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[2]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[3]))))
						 : 
						((8 
						  & vlSymsp->TOP__v.aluResult1_EXEM)
						  ? 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[4]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[5])))
						  : 
						 ((4 
						   & vlSymsp->TOP__v.aluResult1_EXEM)
						   ? 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[6]))
						   : 
						  ((2 
						    & vlSymsp->TOP__v.aluResult1_EXEM)
						    ? 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7])
						    : 
						   ((1 
						     & vlSymsp->TOP__v.aluResult1_EXEM)
						     ? 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7]
						     : 
						    vlSymsp->TOP__v.__PVT__dCache1__DOT__block_out1[7]))))));
}

void VMIPS_MIPS::_settle__TOP__v__12(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__12\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.writeRegister1_WBID = vlSymsp->TOP__v.writeRegister1_MEMW;
    vlSymsp->TOP__v.do_writeback1_WBID = vlSymsp->TOP__v.do_writeback1_MEMW;
    // ALWAYS at EXE.v:92
    vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 = (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
					       & ((IData)(vlSymsp->TOP__v.writeRegister1_EXEM) 
						  == (IData)(vlSymsp->TOP__v.readRegisterA1_IDEXE)))
					       ? vlSymsp->TOP__v.aluResult1_EXEM
					       : (((IData)(vlSymsp->TOP__v.do_writeback1_MEMW) 
						   & ((IData)(vlSymsp->TOP__v.writeRegister1_MEMW) 
						      == (IData)(vlSymsp->TOP__v.readRegisterA1_IDEXE)))
						   ? vlSymsp->TOP__v.writeData1_WBID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBEXE) 
						    & ((IData)(vlSymsp->TOP__v.writeRegister1_WBEXE) 
						       == (IData)(vlSymsp->TOP__v.readRegisterA1_IDEXE)))
						    ? vlSymsp->TOP__v.writeData1_WBEXE
						    : vlSymsp->TOP__v.Operand_A1_IDEXE)));
    vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 = (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
					       & ((IData)(vlSymsp->TOP__v.writeRegister1_EXEM) 
						  == (IData)(vlSymsp->TOP__v.readRegisterB1_IDEXE)))
					       ? vlSymsp->TOP__v.aluResult1_EXEM
					       : (((IData)(vlSymsp->TOP__v.do_writeback1_MEMW) 
						   & ((IData)(vlSymsp->TOP__v.writeRegister1_MEMW) 
						      == (IData)(vlSymsp->TOP__v.readRegisterB1_IDEXE)))
						   ? vlSymsp->TOP__v.writeData1_WBID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBEXE) 
						    & ((IData)(vlSymsp->TOP__v.writeRegister1_WBEXE) 
						       == (IData)(vlSymsp->TOP__v.readRegisterB1_IDEXE)))
						    ? vlSymsp->TOP__v.writeData1_WBEXE
						    : vlSymsp->TOP__v.Operand_B1_IDEXE)));
    vlSymsp->TOP__v.__PVT__EXE1__DOT__Dst1 = (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
					       & ((IData)(vlSymsp->TOP__v.writeRegister1_EXEM) 
						  == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
					       ? vlSymsp->TOP__v.aluResult1_EXEM
					       : (((IData)(vlSymsp->TOP__v.do_writeback1_MEMW) 
						   & ((IData)(vlSymsp->TOP__v.writeRegister1_MEMW) 
						      == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
						   ? vlSymsp->TOP__v.writeData1_WBID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBEXE) 
						    & ((IData)(vlSymsp->TOP__v.writeRegister1_WBEXE) 
						       == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
						    ? vlSymsp->TOP__v.writeData1_WBEXE
						    : vlSymsp->TOP__v.Dest_Value1_IDEXE)));
    vlSymsp->TOP__v.__PVT__wQ_IFID_popReq = ((~ (IData)(vlSymsp->TOP__v.__PVT__wFreezeID)) 
					     & (IData)(vlTOPp->RESET));
    vlSymsp->TOP__v.__PVT__MEM1__DOT__select1_WB = 
	((IData)(vlSymsp->TOP__v.do_writeback1_WBID) 
	 & ((IData)(vlSymsp->TOP__v.writeRegister1_WBID) 
	    == (IData)(vlSymsp->TOP__v.writeRegister1_EXEM)));
}

void VMIPS_MIPS::_multiclk__TOP__v__13(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_multiclk__TOP__v__13\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at EXE.v:92
    vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 = (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
					       & ((IData)(vlSymsp->TOP__v.writeRegister1_EXEM) 
						  == (IData)(vlSymsp->TOP__v.readRegisterA1_IDEXE)))
					       ? vlSymsp->TOP__v.aluResult1_EXEM
					       : (((IData)(vlSymsp->TOP__v.do_writeback1_MEMW) 
						   & ((IData)(vlSymsp->TOP__v.writeRegister1_MEMW) 
						      == (IData)(vlSymsp->TOP__v.readRegisterA1_IDEXE)))
						   ? vlSymsp->TOP__v.writeData1_WBID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBEXE) 
						    & ((IData)(vlSymsp->TOP__v.writeRegister1_WBEXE) 
						       == (IData)(vlSymsp->TOP__v.readRegisterA1_IDEXE)))
						    ? vlSymsp->TOP__v.writeData1_WBEXE
						    : vlSymsp->TOP__v.Operand_A1_IDEXE)));
    vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 = (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
					       & ((IData)(vlSymsp->TOP__v.writeRegister1_EXEM) 
						  == (IData)(vlSymsp->TOP__v.readRegisterB1_IDEXE)))
					       ? vlSymsp->TOP__v.aluResult1_EXEM
					       : (((IData)(vlSymsp->TOP__v.do_writeback1_MEMW) 
						   & ((IData)(vlSymsp->TOP__v.writeRegister1_MEMW) 
						      == (IData)(vlSymsp->TOP__v.readRegisterB1_IDEXE)))
						   ? vlSymsp->TOP__v.writeData1_WBID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBEXE) 
						    & ((IData)(vlSymsp->TOP__v.writeRegister1_WBEXE) 
						       == (IData)(vlSymsp->TOP__v.readRegisterB1_IDEXE)))
						    ? vlSymsp->TOP__v.writeData1_WBEXE
						    : vlSymsp->TOP__v.Operand_B1_IDEXE)));
    vlSymsp->TOP__v.__PVT__EXE1__DOT__Dst1 = (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
					       & ((IData)(vlSymsp->TOP__v.writeRegister1_EXEM) 
						  == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
					       ? vlSymsp->TOP__v.aluResult1_EXEM
					       : (((IData)(vlSymsp->TOP__v.do_writeback1_MEMW) 
						   & ((IData)(vlSymsp->TOP__v.writeRegister1_MEMW) 
						      == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
						   ? vlSymsp->TOP__v.writeData1_WBID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBEXE) 
						    & ((IData)(vlSymsp->TOP__v.writeRegister1_WBEXE) 
						       == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
						    ? vlSymsp->TOP__v.writeData1_WBEXE
						    : vlSymsp->TOP__v.Dest_Value1_IDEXE)));
    vlSymsp->TOP__v.__PVT__MEM1__DOT__select1_WB = 
	((IData)(vlSymsp->TOP__v.do_writeback1_WBID) 
	 & ((IData)(vlSymsp->TOP__v.writeRegister1_WBID) 
	    == (IData)(vlSymsp->TOP__v.writeRegister1_EXEM)));
    // ALWAYS at ALU.v:18
    if ((0x20 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
	vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
	    = ((0x10 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
	        ? ((8 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		    ? ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		        ? ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? ((vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				    > vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
				    ? 0 : ((vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					    == vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
					    ? 0 : 1))
			        : 0) : ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
					 ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					    + ((0xffff0000 
						& (VL_NEGATE_I((IData)(
								       (1 
									& (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
									   >> 0xf)))) 
						   << 0x10)) 
					       | (0xffff 
						  & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
					 : 0)) : ((2 
						   & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						   ? 0
						   : 
						  ((1 
						    & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						    ? 
						   (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						    + 
						    ((0xffff0000 
						      & (VL_NEGATE_I((IData)(
									     (1 
									      & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
										>> 0xf)))) 
							 << 0x10)) 
						     | (0xffff 
							& vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
						    : vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
		    : ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		        ? ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   + vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
			        : 0) : ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
					 ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					    + vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
					 : vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))
		        : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
			   + ((0xffff0000 & (VL_NEGATE_I((IData)(
								 (1 
								  & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
								     >> 0xf)))) 
					     << 0x10)) 
			      | (0xffff & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))))
	        : ((8 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		    ? ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		        ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
			   + ((0xffff0000 & (VL_NEGATE_I((IData)(
								 (1 
								  & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
								     >> 0xf)))) 
					     << 0x10)) 
			      | (0xffff & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
		        : ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
			       + ((0xffff0000 & (VL_NEGATE_I((IData)(
								     (1 
								      & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
									 >> 0xf)))) 
						 << 0x10)) 
				  | (0xffff & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
			    : 0)) : ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
				      ? 0 : ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
					      ? 0 : 
					     ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
					       ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						  + 
						  ((0xffff0000 
						    & (VL_NEGATE_I((IData)(
									   (1 
									    & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
									       >> 0xf)))) 
						       << 0x10)) 
						   | (0xffff 
						      & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
					       : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						  ^ vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))))));
    } else {
	if ((0x10 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
	    if ((8 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		if ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
			    = ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   ^ vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
			        : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   - vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1));
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   - vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1);
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((VL_ULL(0xffffffff00000000) 
				    & vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				   | (IData)((IData)(
						     (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
						      >> 
						      (0x1f 
						       & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1)))));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp);
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
				   >> (IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE));
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((VL_ULL(0xfffffffe00000000) 
				    & vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				   | (((QData)((IData)(
						       (1 
							& (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
							   >> 0x1f)))) 
				       << 0x20) | (QData)((IData)(
								  (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
								   >> 
								   (0x1f 
								    & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1))))));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i = 0;
			    while (((IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i) 
				    <= (0x1f & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1))) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = (((~ (VL_ULL(1) 
					    << (0x3f 
						& ((IData)(0x1f) 
						   - (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i))))) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << (0x3f 
					      & ((IData)(0x1f) 
						 - (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i)))));
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i 
				    = (0x1f & ((IData)(1) 
					       + (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i)));
			    }
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp);
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((VL_ULL(0xfffffffe00000000) 
				    & vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				   | (((QData)((IData)(
						       (1 
							& (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
							   >> 0x1f)))) 
				       << 0x20) | (QData)((IData)(
								  (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
								   >> (IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE))))));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((VL_ULL(0xffffffff7fffffff) 
				    & vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				   | ((QData)((IData)(
						      (1 
						       & (IData)(
								 (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								  >> 0x20))))) 
				      << 0x1f));
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 1)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffbfffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1e));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 2)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffdfffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1d));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 3)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffefffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1c));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 4)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffff7ffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1b));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 5)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffbffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1a));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 6)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffdffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x19));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 7)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffeffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x18));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 8)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffff7fffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x17));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 9)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffbfffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x16));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xa)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffdfffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x15));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xb)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffefffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x14));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xc)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffff7ffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x13));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xd)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffbffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x12));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xe)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffdffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x11));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xf)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffeffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x10));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x10)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffff7fff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xf));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x11)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffbfff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xe));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x12)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffdfff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xd));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x13)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffefff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xc));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x14)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffff7ff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xb));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x15)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffbff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xa));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x16)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffdff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 9));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x17)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffeff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 8));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x18)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffff7f) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 7));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x19)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffbf) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 6));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1a)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffdf) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 5));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1b)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffef) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 4));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1c)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffff7) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 3));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1d)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffb) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 2));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1e)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffd) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 1));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1f)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffe) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | (IData)((IData)(
							 (1 
							  & (IData)(
								    (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								     >> 0x20))))));
			    }
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp);
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 = 0;
			}
		    }
		}
	    } else {
		vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
		    = ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		        ? ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? 0 : ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
				    ? (((1 & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					      >> 0x1f)) 
					< (1 & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
						>> 0x1f)))
				        ? 0 : (((0x7fffffff 
						 & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1) 
						> (0x7fffffff 
						   & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))
					        ? 0
					        : (
						   (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						    == vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
						    ? 0
						    : 1)))
				    : ((vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					<= 0x1f) ? 
				       (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
					<< vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1)
				        : 0))) : ((2 
						   & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						   ? 
						  ((1 
						    & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						    ? 
						   (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
						    << (IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE))
						    : 0)
						   : 
						  ((1 
						    & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						    ? 0
						    : 
						   (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						    | vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))));
	    }
	} else {
	    if ((8 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		if ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
			    = ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? (~ (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				      | vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))
			        : 0);
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((QData)((IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1)) 
				   * (QData)((IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__HI 
				= (IData)((vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
					   >> 0x20));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__LO 
				= (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp);
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__LO 
				= vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1;
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__HI 
				= vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1;
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= vlSymsp->TOP__v.__PVT__EXE1__DOT__LO;
			}
		    } else {
			vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
			    = ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? vlSymsp->TOP__v.__PVT__EXE1__DOT__HI
			        : (0xffff0000 & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
						 << 0x10)));
		    }
		}
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 = 0;
			} else {
			    if ((0 != vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__LO 
				    = VL_DIV_III(32, vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1, vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1);
				vlSymsp->TOP__v.__PVT__EXE1__DOT__HI 
				    = VL_MODDIV_III(32, vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1, vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1);
			    }
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    if ((0 != vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__LO 
				    = ((0x80000000 
					& (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					   | vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)) 
				       | (0x7fffffff 
					  & VL_DIV_III(31, 
						       (0x7fffffff 
							& vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1), 
						       (0x7fffffff 
							& vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))));
				vlSymsp->TOP__v.__PVT__EXE1__DOT__HI 
				    = ((0x80000000 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__HI) 
				       | (0x7fffffff 
					  & VL_MODDIV_III(31, 
							  (0x7fffffff 
							   & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1), 
							  (0x7fffffff 
							   & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))));
			    }
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1);
			}
		    }
		} else {
		    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
			= ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? 0 : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				       + vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))
			    : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
			       + vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1));
		}
	    }
	}
    }
    vlSymsp->TOP__v.data_write_2DM = ((IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__select1_WB)
				       ? vlSymsp->TOP__v.writeData1_WBID
				       : vlSymsp->TOP__v.readDataB1_EXEM);
    // ALWAYS at MEM.v:92
    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
	= ((IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__select1_WB)
	    ? vlSymsp->TOP__v.writeData1_WBID : vlSymsp->TOP__v.Dest_Value1_EXEM);
    vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control = vlSymsp->TOP__v.ALU_control1_EXEM;
    vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult = vlSymsp->TOP__v.aluResult1_EXEM;
    if ((0x20 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
	if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
	    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
		= vlSymsp->TOP__v.__PVT__data_read_fDC;
	} else {
	    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				= vlSymsp->TOP__v.__PVT__data_read_fDC;
			} else {
			    if ((0 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
				       | (0xff & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						  >> 0x18)));
			    } else {
				if ((1 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
					   | (0xffff 
					      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						 >> 0x10)));
				} else {
				    if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					    = ((0xff000000 
						& vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
					       | (0xffffff 
						  & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						     >> 8)));
				    } else {
					if ((3 == (3 
						   & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
						= vlSymsp->TOP__v.__PVT__data_read_fDC;
					}
				    }
				}
			    }
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			    if ((0 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = vlSymsp->TOP__v.__PVT__data_read_fDC;
			    } else {
				if ((1 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= ((0xff & vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
					   | (0xffffff00 
					      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						 << 8)));
				} else {
				    if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						     << 0x10)));
				    } else {
					if ((3 == (3 
						   & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
						= (
						   (0xffffff 
						    & vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
						   | (0xff000000 
						      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
							 << 0x18)));
					}
				    }
				}
			    }
			} else {
			    if ((0 == VL_MODDIV_III(32, vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult, (IData)(4)))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = (0xffff & vlSymsp->TOP__v.__PVT__data_read_fDC);
			    } else {
				if ((2 == VL_MODDIV_III(32, vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult, (IData)(4)))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= (0xffff & 
					   (vlSymsp->TOP__v.__PVT__data_read_fDC 
					    >> 0x10));
				}
			    }
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			    if ((0 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = ((0xffff0000 
					& (VL_NEGATE_I((IData)(
							       (1 
								& (vlSymsp->TOP__v.__PVT__data_read_fDC 
								   >> 0xf)))) 
					   << 0x10)) 
				       | (0xffff & vlSymsp->TOP__v.__PVT__data_read_fDC));
			    } else {
				if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= ((0xffff0000 
					    & (VL_NEGATE_I((IData)(
								   (1 
								    & (vlSymsp->TOP__v.__PVT__data_read_fDC 
								       >> 0x1f)))) 
					       << 0x10)) 
					   | (0xffff 
					      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						 >> 0x10)));
				}
			    }
			} else {
			    if ((0 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = (0xff & (vlSymsp->TOP__v.__PVT__data_read_fDC 
					       >> 0x18));
			    } else {
				if ((1 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= (0xff & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						   >> 0x10));
				} else {
				    if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					    = (0xff 
					       & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						  >> 8));
				    } else {
					if ((3 == (3 
						   & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
						= (0xff 
						   & vlSymsp->TOP__v.__PVT__data_read_fDC);
					}
				    }
				}
			    }
			}
		    } else {
			vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.__PVT__data_read_fDC;
		    }
		}
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
		    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
			= vlSymsp->TOP__v.__PVT__data_read_fDC;
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.__PVT__data_read_fDC;
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			    if ((3 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = ((0xffffff00 
					& (VL_NEGATE_I((IData)(
							       (1 
								& (vlSymsp->TOP__v.__PVT__data_read_fDC 
								   >> 7)))) 
					   << 8)) | 
				       (0xff & vlSymsp->TOP__v.__PVT__data_read_fDC));
			    } else {
				if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= ((0xffffff00 
					    & (VL_NEGATE_I((IData)(
								   (1 
								    & (vlSymsp->TOP__v.__PVT__data_read_fDC 
								       >> 0xf)))) 
					       << 8)) 
					   | (0xff 
					      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						 >> 8)));
				} else {
				    if ((1 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					    = ((0xffffff00 
						& (VL_NEGATE_I((IData)(
								       (1 
									& (vlSymsp->TOP__v.__PVT__data_read_fDC 
									   >> 0x17)))) 
						   << 8)) 
					       | (0xff 
						  & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						     >> 0x10)));
				    } else {
					if ((0 == (3 
						   & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
						= (
						   (0xffffff00 
						    & (VL_NEGATE_I((IData)(
									   (1 
									    & (vlSymsp->TOP__v.__PVT__data_read_fDC 
									       >> 0x1f)))) 
						       << 8)) 
						   | (0xff 
						      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
							 >> 0x18)));
					}
				    }
				}
			    }
			} else {
			    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				= vlSymsp->TOP__v.__PVT__data_read_fDC;
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
	    = vlSymsp->TOP__v.__PVT__data_read_fDC;
    }
}

void VMIPS_MIPS::_combo__TOP__v__14(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_combo__TOP__v__14\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__wQ_IFID_popReq = ((~ (IData)(vlSymsp->TOP__v.__PVT__wFreezeID)) 
					     & (IData)(vlTOPp->RESET));
    vlSymsp->TOP__v.__PVT__ID1__DOT__wPCA = ((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq)
					      ? vlSymsp->TOP__v.__PVT__wQ_IFID_popData[2]
					      : 0);
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop = 
	((0 != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count)) 
	 & (IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq));
    vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 = ((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq)
						 ? 
						vlSymsp->TOP__v.__PVT__wQ_IFID_popData[0]
						 : 0);
}

void VMIPS_MIPS::_settle__TOP__v__15(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__15\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp33,87,0,3);
    //char	__VpadToAlign340[4];
    VL_SIGW(__Vtemp34,95,0,3);
    //char	__VpadToAlign356[4];
    VL_SIGW(__Vtemp35,95,0,3);
    //char	__VpadToAlign372[4];
    VL_SIGW(__Vtemp36,95,0,3);
    //char	__VpadToAlign388[4];
    VL_SIGW(__Vtemp37,95,0,3);
    //char	__VpadToAlign404[4];
    VL_SIGW(__Vtemp38,95,0,3);
    //char	__VpadToAlign420[4];
    VL_SIGW(__Vtemp39,95,0,3);
    //char	__VpadToAlign436[4];
    VL_SIGW(__Vtemp40,95,0,3);
    //char	__VpadToAlign452[4];
    VL_SIGW(__Vtemp41,95,0,3);
    //char	__VpadToAlign468[4];
    VL_SIGW(__Vtemp42,95,0,3);
    //char	__VpadToAlign484[4];
    VL_SIGW(__Vtemp43,95,0,3);
    //char	__VpadToAlign500[4];
    VL_SIGW(__Vtemp44,95,0,3);
    //char	__VpadToAlign516[4];
    VL_SIGW(__Vtemp45,95,0,3);
    //char	__VpadToAlign532[4];
    VL_SIGW(__Vtemp46,95,0,3);
    //char	__VpadToAlign548[4];
    VL_SIGW(__Vtemp47,95,0,3);
    //char	__VpadToAlign564[4];
    VL_SIGW(__Vtemp48,95,0,3);
    //char	__VpadToAlign580[4];
    VL_SIGW(__Vtemp49,95,0,3);
    //char	__VpadToAlign596[4];
    VL_SIGW(__Vtemp50,95,0,3);
    //char	__VpadToAlign612[4];
    VL_SIGW(__Vtemp51,95,0,3);
    //char	__VpadToAlign628[4];
    VL_SIGW(__Vtemp52,95,0,3);
    //char	__VpadToAlign644[4];
    VL_SIGW(__Vtemp53,95,0,3);
    //char	__VpadToAlign660[4];
    VL_SIGW(__Vtemp54,95,0,3);
    //char	__VpadToAlign676[4];
    VL_SIGW(__Vtemp55,95,0,3);
    //char	__VpadToAlign692[4];
    VL_SIGW(__Vtemp56,95,0,3);
    //char	__VpadToAlign708[4];
    VL_SIGW(__Vtemp57,95,0,3);
    //char	__VpadToAlign724[4];
    VL_SIGW(__Vtemp58,95,0,3);
    //char	__VpadToAlign740[4];
    VL_SIGW(__Vtemp59,95,0,3);
    //char	__VpadToAlign756[4];
    VL_SIGW(__Vtemp60,95,0,3);
    //char	__VpadToAlign772[4];
    VL_SIGW(__Vtemp61,95,0,3);
    //char	__VpadToAlign788[4];
    VL_SIGW(__Vtemp62,95,0,3);
    //char	__VpadToAlign804[4];
    VL_SIGW(__Vtemp63,95,0,3);
    //char	__VpadToAlign820[4];
    VL_SIGW(__Vtemp64,95,0,3);
    //char	__VpadToAlign836[4];
    VL_SIGW(__Vtemp65,95,0,3);
    // Body
    // ALWAYS at ALU.v:18
    if ((0x20 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
	vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
	    = ((0x10 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
	        ? ((8 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		    ? ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		        ? ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? ((vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				    > vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
				    ? 0 : ((vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					    == vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
					    ? 0 : 1))
			        : 0) : ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
					 ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					    + ((0xffff0000 
						& (VL_NEGATE_I((IData)(
								       (1 
									& (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
									   >> 0xf)))) 
						   << 0x10)) 
					       | (0xffff 
						  & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
					 : 0)) : ((2 
						   & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						   ? 0
						   : 
						  ((1 
						    & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						    ? 
						   (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						    + 
						    ((0xffff0000 
						      & (VL_NEGATE_I((IData)(
									     (1 
									      & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
										>> 0xf)))) 
							 << 0x10)) 
						     | (0xffff 
							& vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
						    : vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
		    : ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		        ? ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   + vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
			        : 0) : ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
					 ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					    + vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
					 : vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))
		        : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
			   + ((0xffff0000 & (VL_NEGATE_I((IData)(
								 (1 
								  & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
								     >> 0xf)))) 
					     << 0x10)) 
			      | (0xffff & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))))
	        : ((8 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		    ? ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		        ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
			   + ((0xffff0000 & (VL_NEGATE_I((IData)(
								 (1 
								  & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
								     >> 0xf)))) 
					     << 0x10)) 
			      | (0xffff & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
		        : ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
			       + ((0xffff0000 & (VL_NEGATE_I((IData)(
								     (1 
								      & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
									 >> 0xf)))) 
						 << 0x10)) 
				  | (0xffff & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
			    : 0)) : ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
				      ? 0 : ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
					      ? 0 : 
					     ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
					       ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						  + 
						  ((0xffff0000 
						    & (VL_NEGATE_I((IData)(
									   (1 
									    & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
									       >> 0xf)))) 
						       << 0x10)) 
						   | (0xffff 
						      & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)))
					       : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						  ^ vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))))));
    } else {
	if ((0x10 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
	    if ((8 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		if ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
			    = ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   ^ vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
			        : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   - vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1));
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   - vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1);
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((VL_ULL(0xffffffff00000000) 
				    & vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				   | (IData)((IData)(
						     (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
						      >> 
						      (0x1f 
						       & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1)))));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp);
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
				   >> (IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE));
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((VL_ULL(0xfffffffe00000000) 
				    & vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				   | (((QData)((IData)(
						       (1 
							& (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
							   >> 0x1f)))) 
				       << 0x20) | (QData)((IData)(
								  (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
								   >> 
								   (0x1f 
								    & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1))))));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i = 0;
			    while (((IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i) 
				    <= (0x1f & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1))) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = (((~ (VL_ULL(1) 
					    << (0x3f 
						& ((IData)(0x1f) 
						   - (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i))))) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << (0x3f 
					      & ((IData)(0x1f) 
						 - (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i)))));
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i 
				    = (0x1f & ((IData)(1) 
					       + (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__i)));
			    }
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp);
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((VL_ULL(0xfffffffe00000000) 
				    & vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				   | (((QData)((IData)(
						       (1 
							& (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
							   >> 0x1f)))) 
				       << 0x20) | (QData)((IData)(
								  (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
								   >> (IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE))))));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((VL_ULL(0xffffffff7fffffff) 
				    & vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				   | ((QData)((IData)(
						      (1 
						       & (IData)(
								 (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								  >> 0x20))))) 
				      << 0x1f));
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 1)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffbfffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1e));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 2)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffdfffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1d));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 3)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffefffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1c));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 4)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffff7ffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1b));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 5)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffbffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x1a));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 6)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffdffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x19));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 7)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffeffffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x18));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 8)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffff7fffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x17));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 9)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffbfffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x16));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xa)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffdfffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x15));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xb)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffefffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x14));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xc)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffff7ffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x13));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xd)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffbffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x12));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xe)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffdffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x11));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0xf)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffeffff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0x10));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x10)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffff7fff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xf));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x11)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffbfff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xe));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x12)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffdfff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xd));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x13)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffefff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xc));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x14)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffff7ff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xb));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x15)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffbff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 0xa));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x16)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffdff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 9));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x17)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffeff) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 8));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x18)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffff7f) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 7));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x19)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffbf) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 6));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1a)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffdf) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 5));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1b)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffef) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 4));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1c)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffff7) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 3));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1d)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffb) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 2));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1e)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffd) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1 
							   & (IData)(
								     (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								      >> 0x20))))) 
					  << 1));
			    }
			    if (((IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE) 
				 >= 0x1f)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffe) 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp) 
				       | (IData)((IData)(
							 (1 
							  & (IData)(
								    (vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
								     >> 0x20))))));
			    }
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp);
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 = 0;
			}
		    }
		}
	    } else {
		vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
		    = ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
		        ? ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? 0 : ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
				    ? (((1 & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					      >> 0x1f)) 
					< (1 & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
						>> 0x1f)))
				        ? 0 : (((0x7fffffff 
						 & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1) 
						> (0x7fffffff 
						   & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))
					        ? 0
					        : (
						   (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						    == vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)
						    ? 0
						    : 1)))
				    : ((vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					<= 0x1f) ? 
				       (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
					<< vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1)
				        : 0))) : ((2 
						   & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						   ? 
						  ((1 
						    & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						    ? 
						   (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
						    << (IData)(vlSymsp->TOP__v.Instr1_10_6_IDEXE))
						    : 0)
						   : 
						  ((1 
						    & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
						    ? 0
						    : 
						   (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
						    | vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))));
	    }
	} else {
	    if ((8 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		if ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
			    = ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? (~ (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				      | vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))
			        : 0);
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
				= ((QData)((IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1)) 
				   * (QData)((IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__HI 
				= (IData)((vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp 
					   >> 0x20));
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__LO 
				= (IData)(vlSymsp->TOP__v.__PVT__EXE1__DOT__ALU1__DOT__temp);
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__LO 
				= vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1;
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__HI 
				= vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1;
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= vlSymsp->TOP__v.__PVT__EXE1__DOT__LO;
			}
		    } else {
			vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
			    = ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? vlSymsp->TOP__v.__PVT__EXE1__DOT__HI
			        : (0xffff0000 & (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1 
						 << 0x10)));
		    }
		}
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 = 0;
			} else {
			    if ((0 != vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__LO 
				    = VL_DIV_III(32, vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1, vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1);
				vlSymsp->TOP__v.__PVT__EXE1__DOT__HI 
				    = VL_MODDIV_III(32, vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1, vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1);
			    }
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))) {
			    if ((0 != vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)) {
				vlSymsp->TOP__v.__PVT__EXE1__DOT__LO 
				    = ((0x80000000 
					& (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
					   | vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1)) 
				       | (0x7fffffff 
					  & VL_DIV_III(31, 
						       (0x7fffffff 
							& vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1), 
						       (0x7fffffff 
							& vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))));
				vlSymsp->TOP__v.__PVT__EXE1__DOT__HI 
				    = ((0x80000000 
					& vlSymsp->TOP__v.__PVT__EXE1__DOT__HI) 
				       | (0x7fffffff 
					  & VL_MODDIV_III(31, 
							  (0x7fffffff 
							   & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1), 
							  (0x7fffffff 
							   & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))));
			    }
			} else {
			    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
				= (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				   & vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1);
			}
		    }
		} else {
		    vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1 
			= ((2 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			    ? ((1 & (IData)(vlSymsp->TOP__v.ALU_control1_IDEXE))
			        ? 0 : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
				       + vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1))
			    : (vlSymsp->TOP__v.__PVT__EXE1__DOT__OpA1 
			       + vlSymsp->TOP__v.__PVT__EXE1__DOT__OpB1));
		}
	    }
	}
    }
    vlSymsp->TOP__v.data_write_2DM = ((IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__select1_WB)
				       ? vlSymsp->TOP__v.writeData1_WBID
				       : vlSymsp->TOP__v.readDataB1_EXEM);
    // ALWAYS at MEM.v:92
    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
	= ((IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__select1_WB)
	    ? vlSymsp->TOP__v.writeData1_WBID : vlSymsp->TOP__v.Dest_Value1_EXEM);
    vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control = vlSymsp->TOP__v.ALU_control1_EXEM;
    vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult = vlSymsp->TOP__v.aluResult1_EXEM;
    if ((0x20 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
	if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
	    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
		= vlSymsp->TOP__v.__PVT__data_read_fDC;
	} else {
	    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				= vlSymsp->TOP__v.__PVT__data_read_fDC;
			} else {
			    if ((0 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = ((0xffffff00 
					& vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
				       | (0xff & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						  >> 0x18)));
			    } else {
				if ((1 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= ((0xffff0000 
					    & vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
					   | (0xffff 
					      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						 >> 0x10)));
				} else {
				    if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					    = ((0xff000000 
						& vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
					       | (0xffffff 
						  & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						     >> 8)));
				    } else {
					if ((3 == (3 
						   & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
						= vlSymsp->TOP__v.__PVT__data_read_fDC;
					}
				    }
				}
			    }
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			    if ((0 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = vlSymsp->TOP__v.__PVT__data_read_fDC;
			    } else {
				if ((1 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= ((0xff & vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
					   | (0xffffff00 
					      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						 << 8)));
				} else {
				    if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					    = ((0xffff 
						& vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
					       | (0xffff0000 
						  & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						     << 0x10)));
				    } else {
					if ((3 == (3 
						   & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
						= (
						   (0xffffff 
						    & vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned) 
						   | (0xff000000 
						      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
							 << 0x18)));
					}
				    }
				}
			    }
			} else {
			    if ((0 == VL_MODDIV_III(32, vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult, (IData)(4)))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = (0xffff & vlSymsp->TOP__v.__PVT__data_read_fDC);
			    } else {
				if ((2 == VL_MODDIV_III(32, vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult, (IData)(4)))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= (0xffff & 
					   (vlSymsp->TOP__v.__PVT__data_read_fDC 
					    >> 0x10));
				}
			    }
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			    if ((0 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = ((0xffff0000 
					& (VL_NEGATE_I((IData)(
							       (1 
								& (vlSymsp->TOP__v.__PVT__data_read_fDC 
								   >> 0xf)))) 
					   << 0x10)) 
				       | (0xffff & vlSymsp->TOP__v.__PVT__data_read_fDC));
			    } else {
				if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= ((0xffff0000 
					    & (VL_NEGATE_I((IData)(
								   (1 
								    & (vlSymsp->TOP__v.__PVT__data_read_fDC 
								       >> 0x1f)))) 
					       << 0x10)) 
					   | (0xffff 
					      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						 >> 0x10)));
				}
			    }
			} else {
			    if ((0 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = (0xff & (vlSymsp->TOP__v.__PVT__data_read_fDC 
					       >> 0x18));
			    } else {
				if ((1 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= (0xff & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						   >> 0x10));
				} else {
				    if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					    = (0xff 
					       & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						  >> 8));
				    } else {
					if ((3 == (3 
						   & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
						= (0xff 
						   & vlSymsp->TOP__v.__PVT__data_read_fDC);
					}
				    }
				}
			    }
			}
		    } else {
			vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.__PVT__data_read_fDC;
		    }
		}
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
		    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
			= vlSymsp->TOP__v.__PVT__data_read_fDC;
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.__PVT__data_read_fDC;
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__MEM1__DOT__ALU_control))) {
			    if ((3 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				    = ((0xffffff00 
					& (VL_NEGATE_I((IData)(
							       (1 
								& (vlSymsp->TOP__v.__PVT__data_read_fDC 
								   >> 7)))) 
					   << 8)) | 
				       (0xff & vlSymsp->TOP__v.__PVT__data_read_fDC));
			    } else {
				if ((2 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
				    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					= ((0xffffff00 
					    & (VL_NEGATE_I((IData)(
								   (1 
								    & (vlSymsp->TOP__v.__PVT__data_read_fDC 
								       >> 0xf)))) 
					       << 8)) 
					   | (0xff 
					      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						 >> 8)));
				} else {
				    if ((1 == (3 & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
					    = ((0xffffff00 
						& (VL_NEGATE_I((IData)(
								       (1 
									& (vlSymsp->TOP__v.__PVT__data_read_fDC 
									   >> 0x17)))) 
						   << 8)) 
					       | (0xff 
						  & (vlSymsp->TOP__v.__PVT__data_read_fDC 
						     >> 0x10)));
				    } else {
					if ((0 == (3 
						   & vlSymsp->TOP__v.__PVT__MEM1__DOT__aluResult))) {
					    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
						= (
						   (0xffffff00 
						    & (VL_NEGATE_I((IData)(
									   (1 
									    & (vlSymsp->TOP__v.__PVT__data_read_fDC 
									       >> 0x1f)))) 
						       << 8)) 
						   | (0xff 
						      & (vlSymsp->TOP__v.__PVT__data_read_fDC 
							 >> 0x18)));
					}
				    }
				}
			    }
			} else {
			    vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
				= vlSymsp->TOP__v.__PVT__data_read_fDC;
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned 
	    = vlSymsp->TOP__v.__PVT__data_read_fDC;
    }
    vlSymsp->TOP__v.__PVT__ID1__DOT__wPCA = ((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq)
					      ? vlSymsp->TOP__v.__PVT__wQ_IFID_popData[2]
					      : 0);
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop = 
	((0 != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count)) 
	 & (IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq));
    vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 = ((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq)
						 ? 
						vlSymsp->TOP__v.__PVT__wQ_IFID_popData[0]
						 : 0);
    vlSymsp->TOP__v.aluResult1_EXEID = vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1;
    vlSymsp->TOP__v.writeData1_MID = ((IData)(vlSymsp->TOP__v.MemRead1_EXEM)
				       ? vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned
				       : vlSymsp->TOP__v.aluResult1_EXEM);
    // ALWAYS at queue.v:118
    VL_WRITEF("----------------Q: IFID------------------\n");
    VL_WRITEF("Count: %2u %s%s\n",4,vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count,
	      48,((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count))
		   ? VL_ULL(0x454d50545921) : VL_ULL(0x20)),
	      40,((8 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count))
		   ? VL_ULL(0x46554c4c21) : VL_ULL(0x20)));
    __Vtemp33[0] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop))
		     ? 0x48504f50 : 0x20202020);
    __Vtemp33[1] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop))
		     ? 0x2d505553 : 0x202020);
    __Vtemp33[2] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop))
		     ? 0x3c2d2d : 0);
    VL_WRITEF("Push: %s(%x) Pop: %s(%x) %s\n",8,((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_pushReq)
						  ? 0x59
						  : 0x4e),
	      96,vlSymsp->TOP__v.__PVT__wQ_IFID_pushData,
	      8,((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq)
		  ? 0x59 : 0x4e),96,vlSymsp->TOP__v.__PVT__wQ_IFID_popData,
	      88,__Vtemp33);
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 0;
    if (VL_UNLIKELY(((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp34[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][0];
	__Vtemp34[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][1];
	__Vtemp34[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][2];
	VL_WRITEF("BUF[          0]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp34);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp35[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][0];
	    __Vtemp35[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][1];
	    __Vtemp35[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][2];
	    VL_WRITEF("BUF[          0]: %x <--HEAD\n",
		      96,__Vtemp35);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp36[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][0];
	    __Vtemp36[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][1];
	    __Vtemp36[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][2];
	    VL_WRITEF("BUF[          0]: %x         <--TAIL\n",
		      96,__Vtemp36);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp37[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][0];
	__Vtemp37[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][1];
	__Vtemp37[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][2];
	VL_WRITEF("BUF[          0]: %x  \n",96,__Vtemp37);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 1;
    if (VL_UNLIKELY(((1 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (1 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp38[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][0];
	__Vtemp38[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][1];
	__Vtemp38[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][2];
	VL_WRITEF("BUF[          1]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp38);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp39[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][0];
	    __Vtemp39[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][1];
	    __Vtemp39[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][2];
	    VL_WRITEF("BUF[          1]: %x <--HEAD\n",
		      96,__Vtemp39);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp40[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][0];
	    __Vtemp40[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][1];
	    __Vtemp40[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][2];
	    VL_WRITEF("BUF[          1]: %x         <--TAIL\n",
		      96,__Vtemp40);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp41[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][0];
	__Vtemp41[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][1];
	__Vtemp41[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][2];
	VL_WRITEF("BUF[          1]: %x  \n",96,__Vtemp41);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 2;
    if (VL_UNLIKELY(((2 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (2 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp42[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][0];
	__Vtemp42[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][1];
	__Vtemp42[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][2];
	VL_WRITEF("BUF[          2]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp42);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp43[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][0];
	    __Vtemp43[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][1];
	    __Vtemp43[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][2];
	    VL_WRITEF("BUF[          2]: %x <--HEAD\n",
		      96,__Vtemp43);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp44[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][0];
	    __Vtemp44[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][1];
	    __Vtemp44[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][2];
	    VL_WRITEF("BUF[          2]: %x         <--TAIL\n",
		      96,__Vtemp44);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp45[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][0];
	__Vtemp45[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][1];
	__Vtemp45[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][2];
	VL_WRITEF("BUF[          2]: %x  \n",96,__Vtemp45);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 3;
    if (VL_UNLIKELY(((3 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (3 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp46[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][0];
	__Vtemp46[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][1];
	__Vtemp46[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][2];
	VL_WRITEF("BUF[          3]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp46);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp47[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][0];
	    __Vtemp47[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][1];
	    __Vtemp47[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][2];
	    VL_WRITEF("BUF[          3]: %x <--HEAD\n",
		      96,__Vtemp47);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp48[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][0];
	    __Vtemp48[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][1];
	    __Vtemp48[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][2];
	    VL_WRITEF("BUF[          3]: %x         <--TAIL\n",
		      96,__Vtemp48);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp49[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][0];
	__Vtemp49[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][1];
	__Vtemp49[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][2];
	VL_WRITEF("BUF[          3]: %x  \n",96,__Vtemp49);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 4;
    if (VL_UNLIKELY(((4 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (4 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp50[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][0];
	__Vtemp50[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][1];
	__Vtemp50[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][2];
	VL_WRITEF("BUF[          4]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp50);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp51[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][0];
	    __Vtemp51[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][1];
	    __Vtemp51[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][2];
	    VL_WRITEF("BUF[          4]: %x <--HEAD\n",
		      96,__Vtemp51);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp52[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][0];
	    __Vtemp52[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][1];
	    __Vtemp52[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][2];
	    VL_WRITEF("BUF[          4]: %x         <--TAIL\n",
		      96,__Vtemp52);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp53[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][0];
	__Vtemp53[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][1];
	__Vtemp53[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][2];
	VL_WRITEF("BUF[          4]: %x  \n",96,__Vtemp53);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 5;
    if (VL_UNLIKELY(((5 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (5 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp54[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][0];
	__Vtemp54[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][1];
	__Vtemp54[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][2];
	VL_WRITEF("BUF[          5]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp54);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp55[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][0];
	    __Vtemp55[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][1];
	    __Vtemp55[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][2];
	    VL_WRITEF("BUF[          5]: %x <--HEAD\n",
		      96,__Vtemp55);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp56[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][0];
	    __Vtemp56[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][1];
	    __Vtemp56[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][2];
	    VL_WRITEF("BUF[          5]: %x         <--TAIL\n",
		      96,__Vtemp56);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp57[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][0];
	__Vtemp57[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][1];
	__Vtemp57[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][2];
	VL_WRITEF("BUF[          5]: %x  \n",96,__Vtemp57);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 6;
    if (VL_UNLIKELY(((6 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (6 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp58[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][0];
	__Vtemp58[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][1];
	__Vtemp58[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][2];
	VL_WRITEF("BUF[          6]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp58);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp59[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][0];
	    __Vtemp59[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][1];
	    __Vtemp59[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][2];
	    VL_WRITEF("BUF[          6]: %x <--HEAD\n",
		      96,__Vtemp59);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp60[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][0];
	    __Vtemp60[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][1];
	    __Vtemp60[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][2];
	    VL_WRITEF("BUF[          6]: %x         <--TAIL\n",
		      96,__Vtemp60);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp61[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][0];
	__Vtemp61[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][1];
	__Vtemp61[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][2];
	VL_WRITEF("BUF[          6]: %x  \n",96,__Vtemp61);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 7;
    if (VL_UNLIKELY(((7 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (7 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp62[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][0];
	__Vtemp62[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][1];
	__Vtemp62[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][2];
	VL_WRITEF("BUF[          7]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp62);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp63[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][0];
	    __Vtemp63[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][1];
	    __Vtemp63[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][2];
	    VL_WRITEF("BUF[          7]: %x <--HEAD\n",
		      96,__Vtemp63);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp64[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][0];
	    __Vtemp64[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][1];
	    __Vtemp64[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][2];
	    VL_WRITEF("BUF[          7]: %x         <--TAIL\n",
		      96,__Vtemp64);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp65[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][0];
	__Vtemp65[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][1];
	__Vtemp65[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][2];
	VL_WRITEF("BUF[          7]: %x  \n",96,__Vtemp65);
    }
    vlSymsp->TOP__v.__PVT__ID1__DOT__readDataA1 = vlSymsp->TOP__v.Reg_ID
	[(0x1f & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
		  >> 0x15))];
    vlSymsp->TOP__v.__PVT__ID1__DOT__readDataB1 = vlSymsp->TOP__v.Reg_ID
	[(0x1f & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
		  >> 0x10))];
    // ALWAYS at ID.v:228
    vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1 = (0x3f 
						& (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						   >> 0x1a));
    vlSymsp->TOP__v.__PVT__ID1__DOT__format1 = (0x1f 
						& (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						   >> 0x15));
    vlSymsp->TOP__v.__PVT__ID1__DOT__rt1 = (0x1f & 
					    (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
					     >> 0x10));
    vlSymsp->TOP__v.__PVT__ID1__DOT__funct1 = (0x3f 
					       & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1);
    if ((0x20 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
	if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
	    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		if (VL_UNLIKELY((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
		    VL_WRITEF("Not an Instruction!\n");
		} else {
		    if (VL_UNLIKELY((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			VL_WRITEF("Not an Instruction!\n");
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]swc1\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x39;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]swc0\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x31;
			}
		    }
		}
	    } else {
		if (VL_UNLIKELY((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
		    VL_WRITEF("Not an Instruction!\n");
		} else {
		    if (VL_UNLIKELY((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			VL_WRITEF("Not an Instruction!\n");
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lwc1\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x35;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lwc0\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3d;
			}
		    }
		}
	    }
	} else {
	    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if (VL_LIKELY((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			if (VL_UNLIKELY((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			    VL_WRITEF("Not an Instruction!\n");
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]swr\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x33;
			}
		    } else {
			VL_WRITEF("Not an Instruction!\n");
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]sw\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x31;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]swl\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x32;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]sh\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x30;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]sb\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2f;
			}
		    }
		}
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if (VL_UNLIKELY((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			    VL_WRITEF("Not an Instruction!\n");
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lwr\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2e;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lhu\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2c;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lbu\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2a;
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lw\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3d;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lwl\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2d;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lh\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2b;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lb\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x21;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
	    if (VL_UNLIKELY((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
		VL_WRITEF("Not an Instruction!\n");
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if (VL_UNLIKELY((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			    VL_WRITEF("Not an Instruction!\n");
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]blezl\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3b;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]bnel\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3c;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]beql\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3a;
			}
		    }
		} else {
		    if (VL_UNLIKELY((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			VL_WRITEF("Not an Instruction!\n");
		    } else {
			if (VL_LIKELY((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			    if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
				if (VL_UNLIKELY((8 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
				    VL_WRITEF("Not an Instruction!\n");
				} else {
				    if (VL_UNLIKELY(
						    (4 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
					VL_WRITEF("Not an Instruction!\n");
				    } else {
					if (VL_UNLIKELY(
							(2 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((1 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]fp cvt.s\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 8;
					    } else {
						if (
						    (3 
						     == 
						     (0xf 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							 >> 4)))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]fp c.cond\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1f;
						} else {
						    if (VL_UNLIKELY(
								    (0x20 
								     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
							VL_WRITEF("Not an Instruction!\n");
						    } else {
							if (VL_UNLIKELY(
									(0x10 
									 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
							    VL_WRITEF("Not an Instruction!\n");
							} else {
							    if (VL_UNLIKELY(
									    (8 
									     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
								VL_WRITEF("Not an Instruction!\n");
							    } else {
								if (
								    (4 
								     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp neg\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x10;
									} else {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp mov\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 4;
									}
								    } else {
									if (VL_LIKELY(
										(1 
										& (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp abs\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x37;
									} else {
									    VL_WRITEF("Not an Instruction!\n");
									}
								    }
								} else {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp div\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 5;
									} else {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp mul\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xd;
									}
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp sub\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0;
									} else {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp add\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1b;
									}
								    }
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
				    if (VL_UNLIKELY(
						    (4 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
					VL_WRITEF("Not an Instruction!\n");
				    } else {
					if (VL_UNLIKELY(
							(2 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (
						    (0x10000 
						     & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]bc1t\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1d;
						} else {
						    if (
							(1 
							 & (~ 
							    (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							     >> 0x10)))) {
							if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							    VL_WRITEF("[1]bc1f\n\n");
							}
							vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
							vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xf;
						    }
						}
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
					if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]ctc1\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x34;
					    }
					} else {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]mtc1\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x38;
					    }
					}
				    } else {
					if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]cfc1\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1a;
					    }
					} else {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]mfc1\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1c;
					    }
					}
				    }
				}
			    }
			} else {
			    VL_WRITEF("Not an Instruction!\n");
			}
		    }
		}
	    }
	} else {
	    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lui\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 8;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]xori\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x20;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]ori\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x10;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]andi\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 4;
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]sltiu\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x15;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]slti\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x15;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]addiu\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 2;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]addi\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
			}
		    }
		}
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]bgtz\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x25;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]blez\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x26;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]bne\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x29;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]beq\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x22;
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]jal\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]jump\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xe;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1))) {
				if (VL_UNLIKELY((8 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
				    VL_WRITEF("Not an Instruction!\n");
				} else {
				    if (VL_UNLIKELY(
						    (4 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
					VL_WRITEF("Not an Instruction!\n");
				    } else {
					if (VL_UNLIKELY(
							(2 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((1 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1))) {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]bgezal\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]bltzal\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
					    }
					}
				    }
				}
			    } else {
				if (VL_UNLIKELY((8 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
				    VL_WRITEF("Not an Instruction!\n");
				} else {
				    if (VL_UNLIKELY(
						    (4 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
					VL_WRITEF("Not an Instruction!\n");
				    } else {
					if (VL_UNLIKELY(
							(2 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((1 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1))) {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]bgez\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x23;
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]bltz\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x27;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x20 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
				if (VL_UNLIKELY((0x10 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
				    VL_WRITEF("Not an Instruction!\n");
				} else {
				    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					if (VL_UNLIKELY(
							(4 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if (VL_LIKELY(
							  (2 
							   & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sltu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3f;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]slt\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x15;
						}
					    } else {
						VL_WRITEF("Not an Instruction!\n");
					    }
					}
				    } else {
					if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]nor\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xf;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]xor\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1f;
						}
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]or\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x10;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]and\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 4;
						}
					    }
					} else {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]subu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1e;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sub\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1d;
						}
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]addu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x37;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]add\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0;
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
				    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					if (VL_UNLIKELY(
							(4 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]divu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 6;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]div\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 5;
						}
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]multu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xd;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mult\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xd;
						}
					    }
					}
				    } else {
					if (VL_UNLIKELY(
							(4 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mtlo\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xc;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mflo\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xa;
						}
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mthi\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xb;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mfhi\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 9;
						}
					    }
					}
				    }
				} else {
				    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					    if (VL_UNLIKELY(
							    (2 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]break\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x13;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]syscal1\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
						}
					    }
					} else {
					    if (VL_UNLIKELY(
							    (2 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]jalr\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]jr\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3e;
						}
					    }
					}
				    } else {
					if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]srav\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1a;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]srlv\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1c;
						}
					    } else {
						if (VL_UNLIKELY(
								(1 
								 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						    VL_WRITEF("Not an Instruction!\n");
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sllv\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x14;
						}
					    }
					} else {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sra\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x19;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]srl\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1b;
						}
					    } else {
						if (VL_UNLIKELY(
								(1 
								 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						    VL_WRITEF("Not an Instruction!\n");
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sll,nop\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x13;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void VMIPS_MIPS::_multiclk__TOP__v__16(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_multiclk__TOP__v__16\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.aluResult1_EXEID = vlSymsp->TOP__v.__PVT__EXE1__DOT__aluResult1;
    vlSymsp->TOP__v.writeData1_MID = ((IData)(vlSymsp->TOP__v.MemRead1_EXEM)
				       ? vlSymsp->TOP__v.__PVT__MEM1__DOT__data_read_aligned
				       : vlSymsp->TOP__v.aluResult1_EXEM);
}

void VMIPS_MIPS::_combo__TOP__v__17(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_combo__TOP__v__17\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign892[4];
    VL_SIGW(__Vtemp69,87,0,3);
    //char	__VpadToAlign908[4];
    VL_SIGW(__Vtemp70,95,0,3);
    //char	__VpadToAlign924[4];
    VL_SIGW(__Vtemp71,95,0,3);
    //char	__VpadToAlign940[4];
    VL_SIGW(__Vtemp72,95,0,3);
    //char	__VpadToAlign956[4];
    VL_SIGW(__Vtemp73,95,0,3);
    //char	__VpadToAlign972[4];
    VL_SIGW(__Vtemp74,95,0,3);
    //char	__VpadToAlign988[4];
    VL_SIGW(__Vtemp75,95,0,3);
    //char	__VpadToAlign1004[4];
    VL_SIGW(__Vtemp76,95,0,3);
    //char	__VpadToAlign1020[4];
    VL_SIGW(__Vtemp77,95,0,3);
    //char	__VpadToAlign1036[4];
    VL_SIGW(__Vtemp78,95,0,3);
    //char	__VpadToAlign1052[4];
    VL_SIGW(__Vtemp79,95,0,3);
    //char	__VpadToAlign1068[4];
    VL_SIGW(__Vtemp80,95,0,3);
    //char	__VpadToAlign1084[4];
    VL_SIGW(__Vtemp81,95,0,3);
    //char	__VpadToAlign1100[4];
    VL_SIGW(__Vtemp82,95,0,3);
    //char	__VpadToAlign1116[4];
    VL_SIGW(__Vtemp83,95,0,3);
    //char	__VpadToAlign1132[4];
    VL_SIGW(__Vtemp84,95,0,3);
    //char	__VpadToAlign1148[4];
    VL_SIGW(__Vtemp85,95,0,3);
    //char	__VpadToAlign1164[4];
    VL_SIGW(__Vtemp86,95,0,3);
    //char	__VpadToAlign1180[4];
    VL_SIGW(__Vtemp87,95,0,3);
    //char	__VpadToAlign1196[4];
    VL_SIGW(__Vtemp88,95,0,3);
    //char	__VpadToAlign1212[4];
    VL_SIGW(__Vtemp89,95,0,3);
    //char	__VpadToAlign1228[4];
    VL_SIGW(__Vtemp90,95,0,3);
    //char	__VpadToAlign1244[4];
    VL_SIGW(__Vtemp91,95,0,3);
    //char	__VpadToAlign1260[4];
    VL_SIGW(__Vtemp92,95,0,3);
    //char	__VpadToAlign1276[4];
    VL_SIGW(__Vtemp93,95,0,3);
    //char	__VpadToAlign1292[4];
    VL_SIGW(__Vtemp94,95,0,3);
    //char	__VpadToAlign1308[4];
    VL_SIGW(__Vtemp95,95,0,3);
    //char	__VpadToAlign1324[4];
    VL_SIGW(__Vtemp96,95,0,3);
    //char	__VpadToAlign1340[4];
    VL_SIGW(__Vtemp97,95,0,3);
    //char	__VpadToAlign1356[4];
    VL_SIGW(__Vtemp98,95,0,3);
    //char	__VpadToAlign1372[4];
    VL_SIGW(__Vtemp99,95,0,3);
    //char	__VpadToAlign1388[4];
    VL_SIGW(__Vtemp100,95,0,3);
    //char	__VpadToAlign1404[4];
    VL_SIGW(__Vtemp101,95,0,3);
    // Body
    // ALWAYS at queue.v:118
    VL_WRITEF("----------------Q: IFID------------------\n");
    VL_WRITEF("Count: %2u %s%s\n",4,vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count,
	      48,((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count))
		   ? VL_ULL(0x454d50545921) : VL_ULL(0x20)),
	      40,((8 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count))
		   ? VL_ULL(0x46554c4c21) : VL_ULL(0x20)));
    __Vtemp69[0] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop))
		     ? 0x48504f50 : 0x20202020);
    __Vtemp69[1] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop))
		     ? 0x2d505553 : 0x202020);
    __Vtemp69[2] = (((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPush) 
		     & (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__validPop))
		     ? 0x3c2d2d : 0);
    VL_WRITEF("Push: %s(%x) Pop: %s(%x) %s\n",8,((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_pushReq)
						  ? 0x59
						  : 0x4e),
	      96,vlSymsp->TOP__v.__PVT__wQ_IFID_pushData,
	      8,((IData)(vlSymsp->TOP__v.__PVT__wQ_IFID_popReq)
		  ? 0x59 : 0x4e),96,vlSymsp->TOP__v.__PVT__wQ_IFID_popData,
	      88,__Vtemp69);
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 0;
    if (VL_UNLIKELY(((0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (0 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp70[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][0];
	__Vtemp70[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][1];
	__Vtemp70[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][2];
	VL_WRITEF("BUF[          0]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp70);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp71[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][0];
	    __Vtemp71[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][1];
	    __Vtemp71[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][2];
	    VL_WRITEF("BUF[          0]: %x <--HEAD\n",
		      96,__Vtemp71);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp72[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][0];
	    __Vtemp72[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][1];
	    __Vtemp72[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[0][2];
	    VL_WRITEF("BUF[          0]: %x         <--TAIL\n",
		      96,__Vtemp72);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp73[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][0];
	__Vtemp73[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][1];
	__Vtemp73[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [0][2];
	VL_WRITEF("BUF[          0]: %x  \n",96,__Vtemp73);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 1;
    if (VL_UNLIKELY(((1 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (1 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp74[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][0];
	__Vtemp74[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][1];
	__Vtemp74[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][2];
	VL_WRITEF("BUF[          1]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp74);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp75[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][0];
	    __Vtemp75[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][1];
	    __Vtemp75[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][2];
	    VL_WRITEF("BUF[          1]: %x <--HEAD\n",
		      96,__Vtemp75);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp76[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][0];
	    __Vtemp76[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][1];
	    __Vtemp76[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[1][2];
	    VL_WRITEF("BUF[          1]: %x         <--TAIL\n",
		      96,__Vtemp76);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp77[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][0];
	__Vtemp77[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][1];
	__Vtemp77[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [1][2];
	VL_WRITEF("BUF[          1]: %x  \n",96,__Vtemp77);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 2;
    if (VL_UNLIKELY(((2 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (2 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp78[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][0];
	__Vtemp78[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][1];
	__Vtemp78[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][2];
	VL_WRITEF("BUF[          2]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp78);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp79[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][0];
	    __Vtemp79[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][1];
	    __Vtemp79[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][2];
	    VL_WRITEF("BUF[          2]: %x <--HEAD\n",
		      96,__Vtemp79);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp80[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][0];
	    __Vtemp80[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][1];
	    __Vtemp80[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[2][2];
	    VL_WRITEF("BUF[          2]: %x         <--TAIL\n",
		      96,__Vtemp80);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp81[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][0];
	__Vtemp81[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][1];
	__Vtemp81[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [2][2];
	VL_WRITEF("BUF[          2]: %x  \n",96,__Vtemp81);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 3;
    if (VL_UNLIKELY(((3 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (3 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp82[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][0];
	__Vtemp82[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][1];
	__Vtemp82[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][2];
	VL_WRITEF("BUF[          3]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp82);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp83[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][0];
	    __Vtemp83[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][1];
	    __Vtemp83[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][2];
	    VL_WRITEF("BUF[          3]: %x <--HEAD\n",
		      96,__Vtemp83);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp84[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][0];
	    __Vtemp84[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][1];
	    __Vtemp84[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[3][2];
	    VL_WRITEF("BUF[          3]: %x         <--TAIL\n",
		      96,__Vtemp84);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp85[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][0];
	__Vtemp85[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][1];
	__Vtemp85[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [3][2];
	VL_WRITEF("BUF[          3]: %x  \n",96,__Vtemp85);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 4;
    if (VL_UNLIKELY(((4 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (4 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp86[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][0];
	__Vtemp86[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][1];
	__Vtemp86[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][2];
	VL_WRITEF("BUF[          4]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp86);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp87[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][0];
	    __Vtemp87[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][1];
	    __Vtemp87[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][2];
	    VL_WRITEF("BUF[          4]: %x <--HEAD\n",
		      96,__Vtemp87);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp88[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][0];
	    __Vtemp88[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][1];
	    __Vtemp88[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[4][2];
	    VL_WRITEF("BUF[          4]: %x         <--TAIL\n",
		      96,__Vtemp88);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp89[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][0];
	__Vtemp89[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][1];
	__Vtemp89[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [4][2];
	VL_WRITEF("BUF[          4]: %x  \n",96,__Vtemp89);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 5;
    if (VL_UNLIKELY(((5 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (5 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp90[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][0];
	__Vtemp90[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][1];
	__Vtemp90[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][2];
	VL_WRITEF("BUF[          5]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp90);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp91[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][0];
	    __Vtemp91[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][1];
	    __Vtemp91[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][2];
	    VL_WRITEF("BUF[          5]: %x <--HEAD\n",
		      96,__Vtemp91);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp92[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][0];
	    __Vtemp92[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][1];
	    __Vtemp92[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[5][2];
	    VL_WRITEF("BUF[          5]: %x         <--TAIL\n",
		      96,__Vtemp92);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp93[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][0];
	__Vtemp93[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][1];
	__Vtemp93[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [5][2];
	VL_WRITEF("BUF[          5]: %x  \n",96,__Vtemp93);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 6;
    if (VL_UNLIKELY(((6 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (6 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp94[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][0];
	__Vtemp94[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][1];
	__Vtemp94[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][2];
	VL_WRITEF("BUF[          6]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp94);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp95[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][0];
	    __Vtemp95[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][1];
	    __Vtemp95[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][2];
	    VL_WRITEF("BUF[          6]: %x <--HEAD\n",
		      96,__Vtemp95);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp96[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][0];
	    __Vtemp96[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][1];
	    __Vtemp96[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[6][2];
	    VL_WRITEF("BUF[          6]: %x         <--TAIL\n",
		      96,__Vtemp96);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp97[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][0];
	__Vtemp97[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][1];
	__Vtemp97[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [6][2];
	VL_WRITEF("BUF[          6]: %x  \n",96,__Vtemp97);
    }
    vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx = 7;
    if (VL_UNLIKELY(((7 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & (7 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp98[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][0];
	__Vtemp98[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][1];
	__Vtemp98[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][2];
	VL_WRITEF("BUF[          7]: %x <--HEAD <--TAIL\n",
		  96,__Vtemp98);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head)))) {
	    __Vtemp99[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][0];
	    __Vtemp99[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][1];
	    __Vtemp99[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][2];
	    VL_WRITEF("BUF[          7]: %x <--HEAD\n",
		      96,__Vtemp99);
	}
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)))) {
	    __Vtemp100[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][0];
	    __Vtemp100[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][1];
	    __Vtemp100[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
		[7][2];
	    VL_WRITEF("BUF[          7]: %x         <--TAIL\n",
		      96,__Vtemp100);
	}
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
		      != (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__tail)) 
		     & ((IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__shortIdx) 
			!= (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__head))))) {
	__Vtemp101[0] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][0];
	__Vtemp101[1] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][1];
	__Vtemp101[2] = vlSymsp->TOP__v.__PVT__Q_IFID__DOT__buffer
	    [7][2];
	VL_WRITEF("BUF[          7]: %x  \n",96,__Vtemp101);
    }
    vlSymsp->TOP__v.__PVT__ID1__DOT__readDataA1 = vlSymsp->TOP__v.Reg_ID
	[(0x1f & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
		  >> 0x15))];
    vlSymsp->TOP__v.__PVT__ID1__DOT__readDataB1 = vlSymsp->TOP__v.Reg_ID
	[(0x1f & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
		  >> 0x10))];
    // ALWAYS at ID.v:228
    vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1 = (0x3f 
						& (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						   >> 0x1a));
    vlSymsp->TOP__v.__PVT__ID1__DOT__format1 = (0x1f 
						& (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						   >> 0x15));
    vlSymsp->TOP__v.__PVT__ID1__DOT__rt1 = (0x1f & 
					    (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
					     >> 0x10));
    vlSymsp->TOP__v.__PVT__ID1__DOT__funct1 = (0x3f 
					       & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1);
    if ((0x20 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
	if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
	    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		if (VL_UNLIKELY((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
		    VL_WRITEF("Not an Instruction!\n");
		} else {
		    if (VL_UNLIKELY((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			VL_WRITEF("Not an Instruction!\n");
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]swc1\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x39;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]swc0\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x31;
			}
		    }
		}
	    } else {
		if (VL_UNLIKELY((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
		    VL_WRITEF("Not an Instruction!\n");
		} else {
		    if (VL_UNLIKELY((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			VL_WRITEF("Not an Instruction!\n");
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lwc1\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x35;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lwc0\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3d;
			}
		    }
		}
	    }
	} else {
	    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if (VL_LIKELY((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			if (VL_UNLIKELY((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			    VL_WRITEF("Not an Instruction!\n");
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]swr\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x33;
			}
		    } else {
			VL_WRITEF("Not an Instruction!\n");
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]sw\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x31;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]swl\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x32;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]sh\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x30;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]sb\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2f;
			}
		    }
		}
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if (VL_UNLIKELY((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			    VL_WRITEF("Not an Instruction!\n");
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lwr\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2e;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lhu\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2c;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lbu\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2a;
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lw\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3d;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lwl\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2d;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lh\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x2b;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lb\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x21;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
	    if (VL_UNLIKELY((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
		VL_WRITEF("Not an Instruction!\n");
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if (VL_UNLIKELY((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			    VL_WRITEF("Not an Instruction!\n");
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]blezl\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3b;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]bnel\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3c;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]beql\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3a;
			}
		    }
		} else {
		    if (VL_UNLIKELY((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			VL_WRITEF("Not an Instruction!\n");
		    } else {
			if (VL_LIKELY((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1)))) {
			    if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
				if (VL_UNLIKELY((8 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
				    VL_WRITEF("Not an Instruction!\n");
				} else {
				    if (VL_UNLIKELY(
						    (4 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
					VL_WRITEF("Not an Instruction!\n");
				    } else {
					if (VL_UNLIKELY(
							(2 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((1 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]fp cvt.s\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 8;
					    } else {
						if (
						    (3 
						     == 
						     (0xf 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							 >> 4)))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]fp c.cond\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1f;
						} else {
						    if (VL_UNLIKELY(
								    (0x20 
								     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
							VL_WRITEF("Not an Instruction!\n");
						    } else {
							if (VL_UNLIKELY(
									(0x10 
									 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
							    VL_WRITEF("Not an Instruction!\n");
							} else {
							    if (VL_UNLIKELY(
									    (8 
									     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
								VL_WRITEF("Not an Instruction!\n");
							    } else {
								if (
								    (4 
								     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp neg\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x10;
									} else {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp mov\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 4;
									}
								    } else {
									if (VL_LIKELY(
										(1 
										& (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp abs\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x37;
									} else {
									    VL_WRITEF("Not an Instruction!\n");
									}
								    }
								} else {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp div\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 5;
									} else {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp mul\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xd;
									}
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp sub\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0;
									} else {
									    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
										VL_WRITEF("[1]fp add\n\n");
									    }
									    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
									    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1b;
									}
								    }
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
				    if (VL_UNLIKELY(
						    (4 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
					VL_WRITEF("Not an Instruction!\n");
				    } else {
					if (VL_UNLIKELY(
							(2 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (
						    (0x10000 
						     & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]bc1t\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1d;
						} else {
						    if (
							(1 
							 & (~ 
							    (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							     >> 0x10)))) {
							if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							    VL_WRITEF("[1]bc1f\n\n");
							}
							vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
							vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
							vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xf;
						    }
						}
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
					if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]ctc1\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x34;
					    }
					} else {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]mtc1\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x38;
					    }
					}
				    } else {
					if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1))) {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]cfc1\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1a;
					    }
					} else {
					    if (VL_UNLIKELY(
							    (1 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__format1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]mfc1\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1c;
					    }
					}
				    }
				}
			    }
			} else {
			    VL_WRITEF("Not an Instruction!\n");
			}
		    }
		}
	    }
	} else {
	    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]lui\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 8;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]xori\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x20;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]ori\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x10;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]andi\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 4;
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]sltiu\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x15;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]slti\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x15;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]addiu\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 2;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]addi\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
			}
		    }
		}
	    } else {
		if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]bgtz\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x25;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]blez\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x26;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]bne\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x29;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]beq\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x22;
			}
		    }
		} else {
		    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]jal\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
				VL_WRITEF("[1]jump\n\n");
			    }
			    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
			    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xe;
			}
		    } else {
			if ((1 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__opcode1))) {
			    if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1))) {
				if (VL_UNLIKELY((8 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
				    VL_WRITEF("Not an Instruction!\n");
				} else {
				    if (VL_UNLIKELY(
						    (4 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
					VL_WRITEF("Not an Instruction!\n");
				    } else {
					if (VL_UNLIKELY(
							(2 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((1 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1))) {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]bgezal\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]bltzal\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
					    }
					}
				    }
				}
			    } else {
				if (VL_UNLIKELY((8 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
				    VL_WRITEF("Not an Instruction!\n");
				} else {
				    if (VL_UNLIKELY(
						    (4 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
					VL_WRITEF("Not an Instruction!\n");
				    } else {
					if (VL_UNLIKELY(
							(2 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((1 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__rt1))) {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]bgez\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x23;
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
						    VL_WRITEF("[1]bltz\n\n");
						}
						vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x27;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x20 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
				if (VL_UNLIKELY((0x10 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
				    VL_WRITEF("Not an Instruction!\n");
				} else {
				    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					if (VL_UNLIKELY(
							(4 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if (VL_LIKELY(
							  (2 
							   & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sltu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3f;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]slt\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x15;
						}
					    } else {
						VL_WRITEF("Not an Instruction!\n");
					    }
					}
				    } else {
					if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]nor\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xf;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]xor\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1f;
						}
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]or\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x10;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]and\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 4;
						}
					    }
					} else {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]subu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1e;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sub\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1d;
						}
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]addu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x37;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]add\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0;
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x10 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
				    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					if (VL_UNLIKELY(
							(4 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]divu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 6;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]div\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 5;
						}
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]multu\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xd;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mult\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xd;
						}
					    }
					}
				    } else {
					if (VL_UNLIKELY(
							(4 
							 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
					    VL_WRITEF("Not an Instruction!\n");
					} else {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mtlo\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xc;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mflo\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xa;
						}
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mthi\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0xb;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]mfhi\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 9;
						}
					    }
					}
				    }
				} else {
				    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					    if (VL_UNLIKELY(
							    (2 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]break\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x13;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]syscal1\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
						}
					    }
					} else {
					    if (VL_UNLIKELY(
							    (2 
							     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						VL_WRITEF("Not an Instruction!\n");
					    } else {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]jalr\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 1;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]jr\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x3e;
						}
					    }
					}
				    } else {
					if ((4 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]srav\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1a;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]srlv\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1c;
						}
					    } else {
						if (VL_UNLIKELY(
								(1 
								 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						    VL_WRITEF("Not an Instruction!\n");
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sllv\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x14;
						}
					    }
					} else {
					    if ((2 
						 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						if (
						    (1 
						     & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1))) {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sra\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x19;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]srl\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x1b;
						}
					    } else {
						if (VL_UNLIKELY(
								(1 
								 & (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__funct1)))) {
						    VL_WRITEF("Not an Instruction!\n");
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__ID1__DOT__comment1)) {
							VL_WRITEF("[1]sll,nop\n\n");
						    }
						    vlSymsp->TOP__v.__PVT__ID1__DOT__link1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jump1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemRead1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemtoReg1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__MemWrite1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__RegWrite1 = 1;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__jumpRegister_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1 = 0;
						    vlSymsp->TOP__v.__PVT__ID1__DOT__ALU_control1 = 0x13;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v.__PVT__ID1__DOT__writeRegister1 
	= (0x1f & ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1)
		    ? (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
		       >> 0xb) : ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__link1)
				   ? 0x1f : ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1)
					      ? 0 : 
					     (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
					      >> 0x10)))));
    vlSymsp->TOP__v.SYS = ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1) 
			   & (0 == (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscalBubbleCounter)));
    vlSymsp->TOP__v.no_fetch = ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1) 
				& (0 != (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscalBubbleCounter)));
    vlSymsp->TOP__v.__PVT__ID1__DOT__signExtended_output1 
	= ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1)
	    ? ((0xffff0000 & (VL_NEGATE_I((IData)((1 
						   & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						      >> 0xf)))) 
			      << 0x10)) | (0xffff & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1))
	    : (0xffff & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1));
}

void VMIPS_MIPS::_settle__TOP__v__18(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__18\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__ID1__DOT__writeRegister1 
	= (0x1f & ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__RegDst1)
		    ? (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
		       >> 0xb) : ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__link1)
				   ? 0x1f : ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1)
					      ? 0 : 
					     (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
					      >> 0x10)))));
    vlSymsp->TOP__v.SYS = ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1) 
			   & (0 == (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscalBubbleCounter)));
    vlSymsp->TOP__v.no_fetch = ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscal1) 
				& (0 != (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__syscalBubbleCounter)));
    vlSymsp->TOP__v.__PVT__ID1__DOT__signExtended_output1 
	= ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__sign_or_zero_Flag1)
	    ? ((0xffff0000 & (VL_NEGATE_I((IData)((1 
						   & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						      >> 0xf)))) 
			      << 0x10)) | (0xffff & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1))
	    : (0xffff & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1));
    vlSymsp->TOP__v.__PVT__IMISS = (1 & (((~ (IData)(vlSymsp->TOP__v.no_fetch)) 
					  & ((~ (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__hit1)) 
					     | (~ (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__hit2)))) 
					 & (~ (IData)(vlSymsp->TOP__v.SYS))));
    vlSymsp->TOP__v.__PVT__ID1__DOT__Operand_B1 = ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1)
						    ? vlSymsp->TOP__v.__PVT__ID1__DOT__signExtended_output1
						    : vlSymsp->TOP__v.__PVT__ID1__DOT__readDataB1);
}

void VMIPS_MIPS::_combo__TOP__v__19(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_combo__TOP__v__19\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__IMISS = (1 & (((~ (IData)(vlSymsp->TOP__v.no_fetch)) 
					  & ((~ (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__hit1)) 
					     | (~ (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__hit2)))) 
					 & (~ (IData)(vlSymsp->TOP__v.SYS))));
    vlSymsp->TOP__v.__PVT__ID1__DOT__Operand_B1 = ((IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__ALUSrc1)
						    ? vlSymsp->TOP__v.__PVT__ID1__DOT__signExtended_output1
						    : vlSymsp->TOP__v.__PVT__ID1__DOT__readDataB1);
    vlSymsp->TOP__v.FREEZE = ((IData)(vlSymsp->TOP__v.__PVT__DMISS) 
			      | (IData)(vlSymsp->TOP__v.__PVT__IMISS));
    // ALWAYS at ID.v:196
    vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 = (((IData)(vlSymsp->TOP__v.do_writeback1_IDEXE) 
						  & ((0x1f 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							 >> 0x15)) 
						     == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
						  ? vlSymsp->TOP__v.aluResult1_EXEID
						  : 
						 (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
						   & ((0x1f 
						       & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							  >> 0x15)) 
						      == (IData)(vlSymsp->TOP__v.writeRegister1_EXEM)))
						   ? vlSymsp->TOP__v.writeData1_MID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBID) 
						    & ((0x1f 
							& (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							   >> 0x15)) 
						       == (IData)(vlSymsp->TOP__v.writeRegister1_WBID)))
						    ? vlSymsp->TOP__v.writeData1_WBID
						    : vlSymsp->TOP__v.__PVT__ID1__DOT__readDataA1)));
    vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpB1 = (((IData)(vlSymsp->TOP__v.do_writeback1_IDEXE) 
						  & ((0x1f 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							 >> 0x10)) 
						     == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
						  ? vlSymsp->TOP__v.aluResult1_EXEID
						  : 
						 (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
						   & ((0x1f 
						       & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							  >> 0x10)) 
						      == (IData)(vlSymsp->TOP__v.writeRegister1_EXEM)))
						   ? vlSymsp->TOP__v.writeData1_MID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBID) 
						    & ((0x1f 
							& (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							   >> 0x10)) 
						       == (IData)(vlSymsp->TOP__v.writeRegister1_WBID)))
						    ? vlSymsp->TOP__v.writeData1_WBID
						    : vlSymsp->TOP__v.__PVT__ID1__DOT__Operand_B1)));
}

void VMIPS_MIPS::_settle__TOP__v__20(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__20\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.FREEZE = ((IData)(vlSymsp->TOP__v.__PVT__DMISS) 
			      | (IData)(vlSymsp->TOP__v.__PVT__IMISS));
    // ALWAYS at ID.v:196
    vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 = (((IData)(vlSymsp->TOP__v.do_writeback1_IDEXE) 
						  & ((0x1f 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							 >> 0x15)) 
						     == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
						  ? vlSymsp->TOP__v.aluResult1_EXEID
						  : 
						 (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
						   & ((0x1f 
						       & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							  >> 0x15)) 
						      == (IData)(vlSymsp->TOP__v.writeRegister1_EXEM)))
						   ? vlSymsp->TOP__v.writeData1_MID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBID) 
						    & ((0x1f 
							& (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							   >> 0x15)) 
						       == (IData)(vlSymsp->TOP__v.writeRegister1_WBID)))
						    ? vlSymsp->TOP__v.writeData1_WBID
						    : vlSymsp->TOP__v.__PVT__ID1__DOT__readDataA1)));
    vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpB1 = (((IData)(vlSymsp->TOP__v.do_writeback1_IDEXE) 
						  & ((0x1f 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							 >> 0x10)) 
						     == (IData)(vlSymsp->TOP__v.writeRegister1_IDEXE)))
						  ? vlSymsp->TOP__v.aluResult1_EXEID
						  : 
						 (((IData)(vlSymsp->TOP__v.do_writeback1_EXEM) 
						   & ((0x1f 
						       & (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							  >> 0x10)) 
						      == (IData)(vlSymsp->TOP__v.writeRegister1_EXEM)))
						   ? vlSymsp->TOP__v.writeData1_MID
						   : 
						  (((IData)(vlSymsp->TOP__v.do_writeback1_WBID) 
						    & ((0x1f 
							& (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							   >> 0x10)) 
						       == (IData)(vlSymsp->TOP__v.writeRegister1_WBID)))
						    ? vlSymsp->TOP__v.writeData1_WBID
						    : vlSymsp->TOP__v.__PVT__ID1__DOT__Operand_B1)));
    // ALWAYS at IF.v:89
    VL_WRITEF("==IF=========================================================\n");
    VL_WRITEF("[IF]:Instr1:%x\t\t|Instr2:%x\n",32,vlSymsp->TOP__v.Instr2_IFID,
	      32,vlSymsp->TOP__v.Instr1_fIC);
    VL_WRITEF("[IF]:FREEZE:%x\tQ_IFID_FULL:%x\n",1,
	      ((IData)(vlSymsp->TOP__v.FREEZE) | (8 
						  == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count))),
	      1,(8 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count)));
    vlSymsp->TOP__v.__PVT__IF1__DOT__wCarryOn = (1 
						 & ((~ (IData)(vlSymsp->TOP__v.no_fetch)) 
						    & (~ 
						       ((IData)(vlSymsp->TOP__v.FREEZE) 
							| (8 
							   == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count))))));
    vlSymsp->TOP__v.__PVT__ID1__DOT__taken_branch1 
	= (((~ (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
		>> 0x1f)) & ((~ (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
				 >> 0x1e)) & ((~ (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						  >> 0x1d)) 
					      & ((0x10000000 
						  & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
						  ? 
						 ((0x8000000 
						   & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
						   ? 
						  ((0x4000000 
						    & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
						    ? 
						   ((0 
						     == 
						     (1 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
							 >> 0x1f))) 
						    & (0 
						       != vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1))
						    : 
						   ((1 
						     == 
						     (1 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
							 >> 0x1f))) 
						    | (0 
						       == vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1)))
						   : 
						  ((0x4000000 
						    & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
						    ? 
						   (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
						    != vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpB1)
						    : 
						   (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
						    == vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpB1)))
						  : 
						 ((~ 
						   (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						    >> 0x1b)) 
						  & ((vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						      >> 0x1a) 
						     & ((~ 
							 (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							  >> 0x13)) 
							& ((~ 
							    (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							     >> 0x12)) 
							   & ((~ 
							       (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
								>> 0x11)) 
							      & ((0x10000 
								  & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
								  ? 
								 (0 
								  == 
								  (1 
								   & (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
								      >> 0x1f)))
								  : 
								 (1 
								  == 
								  (1 
								   & (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
								      >> 0x1f))))))))))))) 
	   | (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__jump1));
}

void VMIPS_MIPS::_combo__TOP__v__21(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_combo__TOP__v__21\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at IF.v:89
    VL_WRITEF("==IF=========================================================\n");
    VL_WRITEF("[IF]:Instr1:%x\t\t|Instr2:%x\n",32,vlSymsp->TOP__v.Instr2_IFID,
	      32,vlSymsp->TOP__v.Instr1_fIC);
    VL_WRITEF("[IF]:FREEZE:%x\tQ_IFID_FULL:%x\n",1,
	      ((IData)(vlSymsp->TOP__v.FREEZE) | (8 
						  == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count))),
	      1,(8 == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count)));
    vlSymsp->TOP__v.__PVT__IF1__DOT__wCarryOn = (1 
						 & ((~ (IData)(vlSymsp->TOP__v.no_fetch)) 
						    & (~ 
						       ((IData)(vlSymsp->TOP__v.FREEZE) 
							| (8 
							   == (IData)(vlSymsp->TOP__v.__PVT__Q_IFID__DOT__count))))));
    vlSymsp->TOP__v.__PVT__ID1__DOT__taken_branch1 
	= (((~ (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
		>> 0x1f)) & ((~ (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
				 >> 0x1e)) & ((~ (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						  >> 0x1d)) 
					      & ((0x10000000 
						  & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
						  ? 
						 ((0x8000000 
						   & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
						   ? 
						  ((0x4000000 
						    & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
						    ? 
						   ((0 
						     == 
						     (1 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
							 >> 0x1f))) 
						    & (0 
						       != vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1))
						    : 
						   ((1 
						     == 
						     (1 
						      & (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
							 >> 0x1f))) 
						    | (0 
						       == vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1)))
						   : 
						  ((0x4000000 
						    & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
						    ? 
						   (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
						    != vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpB1)
						    : 
						   (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
						    == vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpB1)))
						  : 
						 ((~ 
						   (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						    >> 0x1b)) 
						  & ((vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
						      >> 0x1a) 
						     & ((~ 
							 (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							  >> 0x13)) 
							& ((~ 
							    (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
							     >> 0x12)) 
							   & ((~ 
							       (vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1 
								>> 0x11)) 
							      & ((0x10000 
								  & vlSymsp->TOP__v.__PVT__ID1__DOT__wInstr1)
								  ? 
								 (0 
								  == 
								  (1 
								   & (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
								      >> 0x1f)))
								  : 
								 (1 
								  == 
								  (1 
								   & (vlSymsp->TOP__v.__PVT__ID1__DOT__com_OpA1 
								      >> 0x1f))))))))))))) 
	   | (IData)(vlSymsp->TOP__v.__PVT__ID1__DOT__jump1));
    vlSymsp->TOP__v.fetchNull2_fID = vlSymsp->TOP__v.__PVT__ID1__DOT__taken_branch1;
}

void VMIPS_MIPS::_settle__TOP__v__22(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__22\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.fetchNull2_fID = vlSymsp->TOP__v.__PVT__ID1__DOT__taken_branch1;
}