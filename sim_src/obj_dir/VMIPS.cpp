// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS.h for the primary calling header

#include "VMIPS.h"             // For This
#include "VMIPS__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS) {
    VMIPS__Syms* __restrict vlSymsp = __VlSymsp = new VMIPS__Syms(this, name());
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (v, VMIPS_MIPS);
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
    __Vclklast__TOP__CLK = VL_RAND_RESET_I(1);
    __Vclklast__TOP__RESET = VL_RAND_RESET_I(1);
}

void VMIPS::__Vconfigure(VMIPS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS::~VMIPS() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMIPS::eval() {
    VMIPS__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VMIPS::eval\n"); );
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VMIPS::_eval_initial_loop(VMIPS__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VMIPS::_settle__TOP__1(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_settle__TOP__1\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dBlkWrite = vlSymsp->TOP__v.dBlkWrite;
    vlTOPp->block_write_2DM[0] = vlSymsp->TOP__v.block_write_2DM[0];
    vlTOPp->block_write_2DM[1] = vlSymsp->TOP__v.block_write_2DM[1];
    vlTOPp->block_write_2DM[2] = vlSymsp->TOP__v.block_write_2DM[2];
    vlTOPp->block_write_2DM[3] = vlSymsp->TOP__v.block_write_2DM[3];
    vlTOPp->block_write_2DM[4] = vlSymsp->TOP__v.block_write_2DM[4];
    vlTOPp->block_write_2DM[5] = vlSymsp->TOP__v.block_write_2DM[5];
    vlTOPp->block_write_2DM[6] = vlSymsp->TOP__v.block_write_2DM[6];
    vlTOPp->block_write_2DM[7] = vlSymsp->TOP__v.block_write_2DM[7];
    vlTOPp->block_write_2IM[0] = vlSymsp->TOP__v.block_write_2IM[0];
    vlTOPp->block_write_2IM[1] = vlSymsp->TOP__v.block_write_2IM[1];
    vlTOPp->block_write_2IM[2] = vlSymsp->TOP__v.block_write_2IM[2];
    vlTOPp->block_write_2IM[3] = vlSymsp->TOP__v.block_write_2IM[3];
    vlTOPp->block_write_2IM[4] = vlSymsp->TOP__v.block_write_2IM[4];
    vlTOPp->block_write_2IM[5] = vlSymsp->TOP__v.block_write_2IM[5];
    vlTOPp->block_write_2IM[6] = vlSymsp->TOP__v.block_write_2IM[6];
    vlTOPp->block_write_2IM[7] = vlSymsp->TOP__v.block_write_2IM[7];
    vlTOPp->R2_output = vlSymsp->TOP__v.R2_output;
    vlTOPp->iBlkWrite = vlSymsp->TOP__v.iBlkWrite;
}

void VMIPS::_sequent__TOP__2(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_sequent__TOP__2\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->iBlkRead = (8 == (IData)(vlSymsp->TOP__v.__PVT__iCache1__DOT__waitCount));
    vlTOPp->dBlkRead = (8 == (IData)(vlSymsp->TOP__v.__PVT__dCache1__DOT__waitCount));
}

void VMIPS::_sequent__TOP__4(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_sequent__TOP__4\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MemWrite = vlSymsp->TOP__v.MemWrite1_EXEM;
    vlTOPp->MemRead = vlSymsp->TOP__v.MemRead1_EXEM;
    vlTOPp->data_address_2DM = vlSymsp->TOP__v.aluResult1_EXEM;
}

void VMIPS::_settle__TOP__6(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_settle__TOP__6\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_write_2DM = vlSymsp->TOP__v.data_write_2DM;
}

void VMIPS::_eval(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_eval\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlSymsp->TOP__v._sequent__TOP__v__2(vlSymsp);
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((~ (IData)(vlTOPp->RESET)) & (IData)(vlTOPp->__Vclklast__TOP__RESET)))) {
	vlSymsp->TOP__v._sequent__TOP__v__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((IData)(vlTOPp->RESET) & (~ (IData)(vlTOPp->__Vclklast__TOP__RESET))))) {
	vlSymsp->TOP__v._sequent__TOP__v__4(vlSymsp);
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlSymsp->TOP__v._sequent__TOP__v__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((~ (IData)(vlTOPp->RESET)) & (IData)(vlTOPp->__Vclklast__TOP__RESET)))) {
	vlSymsp->TOP__v._sequent__TOP__v__7(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((IData)(vlTOPp->RESET) & (~ (IData)(vlTOPp->__Vclklast__TOP__RESET))))) {
	vlSymsp->TOP__v._sequent__TOP__v__9(vlSymsp);
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlSymsp->TOP__v._sequent__TOP__v__10(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((~ (IData)(vlTOPp->RESET)) & (IData)(vlTOPp->__Vclklast__TOP__RESET)))) {
	vlSymsp->TOP__v._sequent__TOP__v__11(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((IData)(vlTOPp->RESET) ^ (IData)(vlTOPp->__Vclklast__TOP__RESET)))) {
	vlSymsp->TOP__v._multiclk__TOP__v__13(vlSymsp);
    }
    vlSymsp->TOP__v._combo__TOP__v__14(vlSymsp);
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((IData)(vlTOPp->RESET) ^ (IData)(vlTOPp->__Vclklast__TOP__RESET)))) {
	vlSymsp->TOP__v._multiclk__TOP__v__16(vlSymsp);
	vlTOPp->_settle__TOP__6(vlSymsp);
    }
    vlSymsp->TOP__v._combo__TOP__v__17(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__19(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__21(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RESET = vlTOPp->RESET;
}

void VMIPS::_eval_initial(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_eval_initial\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._initial__TOP__v(vlSymsp);
}

void VMIPS::final() {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::final\n"); );
    // Variables
    VMIPS__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMIPS::_eval_settle(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_eval_settle\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._settle__TOP__v__1(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->_sequent__TOP__2(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__5(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__8(vlSymsp);
    vlTOPp->_sequent__TOP__4(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__12(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__15(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__18(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__20(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__22(vlSymsp);
}

IData VMIPS::_change_request(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_change_request\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    return __req;
}
