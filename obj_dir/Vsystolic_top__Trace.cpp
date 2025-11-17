// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_top__Syms.h"


void Vsystolic_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vsystolic_top__Syms* __restrict vlSymsp = static_cast<Vsystolic_top__Syms*>(userp);
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vsystolic_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vsystolic_top__Syms* __restrict vlSymsp = static_cast<Vsystolic_top__Syms*>(userp);
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->systolic_top__DOT__sum_array
                                     [0U][0U]),16);
            tracep->chgSData(oldp+1,(vlTOPp->systolic_top__DOT__sum_array
                                     [0U][1U]),16);
            tracep->chgSData(oldp+2,(vlTOPp->systolic_top__DOT__sum_array
                                     [0U][2U]),16);
            tracep->chgSData(oldp+3,(vlTOPp->systolic_top__DOT__sum_array
                                     [0U][3U]),16);
            tracep->chgSData(oldp+4,(vlTOPp->systolic_top__DOT__sum_array
                                     [1U][0U]),16);
            tracep->chgSData(oldp+5,(vlTOPp->systolic_top__DOT__sum_array
                                     [1U][1U]),16);
            tracep->chgSData(oldp+6,(vlTOPp->systolic_top__DOT__sum_array
                                     [1U][2U]),16);
            tracep->chgSData(oldp+7,(vlTOPp->systolic_top__DOT__sum_array
                                     [1U][3U]),16);
            tracep->chgSData(oldp+8,(vlTOPp->systolic_top__DOT__sum_array
                                     [2U][0U]),16);
            tracep->chgSData(oldp+9,(vlTOPp->systolic_top__DOT__sum_array
                                     [2U][1U]),16);
            tracep->chgSData(oldp+10,(vlTOPp->systolic_top__DOT__sum_array
                                      [2U][2U]),16);
            tracep->chgSData(oldp+11,(vlTOPp->systolic_top__DOT__sum_array
                                      [2U][3U]),16);
            tracep->chgSData(oldp+12,(vlTOPp->systolic_top__DOT__sum_array
                                      [3U][0U]),16);
            tracep->chgSData(oldp+13,(vlTOPp->systolic_top__DOT__sum_array
                                      [3U][1U]),16);
            tracep->chgSData(oldp+14,(vlTOPp->systolic_top__DOT__sum_array
                                      [3U][2U]),16);
            tracep->chgSData(oldp+15,(vlTOPp->systolic_top__DOT__sum_array
                                      [3U][3U]),16);
            tracep->chgSData(oldp+16,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [0U][0U]),16);
            tracep->chgSData(oldp+17,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [0U][1U]),16);
            tracep->chgSData(oldp+18,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [0U][2U]),16);
            tracep->chgSData(oldp+19,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [0U][3U]),16);
            tracep->chgSData(oldp+20,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [1U][0U]),16);
            tracep->chgSData(oldp+21,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [1U][1U]),16);
            tracep->chgSData(oldp+22,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [1U][2U]),16);
            tracep->chgSData(oldp+23,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [1U][3U]),16);
            tracep->chgSData(oldp+24,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [2U][0U]),16);
            tracep->chgSData(oldp+25,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [2U][1U]),16);
            tracep->chgSData(oldp+26,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [2U][2U]),16);
            tracep->chgSData(oldp+27,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [2U][3U]),16);
            tracep->chgSData(oldp+28,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [3U][0U]),16);
            tracep->chgSData(oldp+29,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [3U][1U]),16);
            tracep->chgSData(oldp+30,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [3U][2U]),16);
            tracep->chgSData(oldp+31,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [3U][3U]),16);
            tracep->chgSData(oldp+32,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [0U][0U]),16);
            tracep->chgSData(oldp+33,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [0U][1U]),16);
            tracep->chgSData(oldp+34,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [0U][2U]),16);
            tracep->chgSData(oldp+35,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [0U][3U]),16);
            tracep->chgSData(oldp+36,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [1U][0U]),16);
            tracep->chgSData(oldp+37,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [1U][1U]),16);
            tracep->chgSData(oldp+38,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [1U][2U]),16);
            tracep->chgSData(oldp+39,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [1U][3U]),16);
            tracep->chgSData(oldp+40,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [2U][0U]),16);
            tracep->chgSData(oldp+41,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [2U][1U]),16);
            tracep->chgSData(oldp+42,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [2U][2U]),16);
            tracep->chgSData(oldp+43,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [2U][3U]),16);
            tracep->chgSData(oldp+44,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [3U][0U]),16);
            tracep->chgSData(oldp+45,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [3U][1U]),16);
            tracep->chgSData(oldp+46,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [3U][2U]),16);
            tracep->chgSData(oldp+47,(vlTOPp->systolic_top__DOT__b_reg_array
                                      [3U][3U]),16);
            tracep->chgSData(oldp+48,(vlTOPp->systolic_top__DOT__a_reg_delayed[0]),16);
            tracep->chgSData(oldp+49,(vlTOPp->systolic_top__DOT__a_reg_delayed[1]),16);
            tracep->chgSData(oldp+50,(vlTOPp->systolic_top__DOT__a_reg_delayed[2]),16);
            tracep->chgSData(oldp+51,(vlTOPp->systolic_top__DOT__a_reg_delayed[3]),16);
            tracep->chgQData(oldp+52,(vlTOPp->systolic_top__DOT__a_in),64);
            tracep->chgQData(oldp+54,(vlTOPp->systolic_top__DOT__b_in),64);
            tracep->chgQData(oldp+56,(vlTOPp->systolic_top__DOT__sum_in),64);
            tracep->chgSData(oldp+58,((0xffffU & (IData)(
                                                         (vlTOPp->systolic_top__DOT__a_in 
                                                          >> 0x10U)))),16);
            tracep->chgSData(oldp+59,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg
                                      [0U]),16);
            tracep->chgSData(oldp+60,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg[0]),16);
            tracep->chgIData(oldp+61,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+62,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i),32);
            tracep->chgSData(oldp+63,((0xffffU & (IData)(
                                                         (vlTOPp->systolic_top__DOT__a_in 
                                                          >> 0x20U)))),16);
            tracep->chgSData(oldp+64,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg
                                      [1U]),16);
            tracep->chgSData(oldp+65,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[0]),16);
            tracep->chgSData(oldp+66,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[1]),16);
            tracep->chgIData(oldp+67,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+68,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i),32);
            tracep->chgSData(oldp+69,((0xffffU & (IData)(
                                                         (vlTOPp->systolic_top__DOT__a_in 
                                                          >> 0x30U)))),16);
            tracep->chgSData(oldp+70,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg
                                      [2U]),16);
            tracep->chgSData(oldp+71,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[0]),16);
            tracep->chgSData(oldp+72,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[1]),16);
            tracep->chgSData(oldp+73,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[2]),16);
            tracep->chgIData(oldp+74,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+75,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i),32);
            tracep->chgSData(oldp+76,((0xffffU & (IData)(
                                                         (vlTOPp->systolic_top__DOT__b_in 
                                                          >> 0x10U)))),16);
            tracep->chgSData(oldp+77,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg[0]),16);
            tracep->chgIData(oldp+78,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+79,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i),32);
            tracep->chgSData(oldp+80,((0xffffU & (IData)(
                                                         (vlTOPp->systolic_top__DOT__b_in 
                                                          >> 0x20U)))),16);
            tracep->chgSData(oldp+81,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[0]),16);
            tracep->chgSData(oldp+82,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[1]),16);
            tracep->chgIData(oldp+83,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+84,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i),32);
            tracep->chgSData(oldp+85,((0xffffU & (IData)(
                                                         (vlTOPp->systolic_top__DOT__b_in 
                                                          >> 0x30U)))),16);
            tracep->chgSData(oldp+86,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[0]),16);
            tracep->chgSData(oldp+87,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[1]),16);
            tracep->chgSData(oldp+88,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[2]),16);
            tracep->chgIData(oldp+89,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+90,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i),32);
            tracep->chgSData(oldp+91,(vlTOPp->systolic_top__DOT__a_reg_delayed
                                      [0U]),16);
            tracep->chgSData(oldp+92,((0xffffU & (IData)(vlTOPp->systolic_top__DOT__sum_in))),16);
            tracep->chgSData(oldp+93,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+94,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+95,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+96,(vlTOPp->systolic_top__DOT__a_reg_array
                                      [0U][0U]),16);
            tracep->chgSData(oldp+97,((0xffffU & (IData)(
                                                         (vlTOPp->systolic_top__DOT__sum_in 
                                                          >> 0x10U)))),16);
            tracep->chgSData(oldp+98,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+99,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+100,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+101,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [0U][1U]),16);
            tracep->chgSData(oldp+102,((0xffffU & (IData)(
                                                          (vlTOPp->systolic_top__DOT__sum_in 
                                                           >> 0x20U)))),16);
            tracep->chgSData(oldp+103,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+104,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+105,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+106,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [0U][2U]),16);
            tracep->chgSData(oldp+107,((0xffffU & (IData)(
                                                          (vlTOPp->systolic_top__DOT__sum_in 
                                                           >> 0x30U)))),16);
            tracep->chgSData(oldp+108,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+109,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+110,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+111,(vlTOPp->systolic_top__DOT__a_reg_delayed
                                       [1U]),16);
            tracep->chgSData(oldp+112,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [0U][0U]),16);
            tracep->chgSData(oldp+113,(vlTOPp->systolic_top__DOT__sum_array
                                       [0U][0U]),16);
            tracep->chgSData(oldp+114,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+115,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+116,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+117,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [1U][0U]),16);
            tracep->chgSData(oldp+118,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [0U][1U]),16);
            tracep->chgSData(oldp+119,(vlTOPp->systolic_top__DOT__sum_array
                                       [0U][1U]),16);
            tracep->chgSData(oldp+120,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+121,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+122,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+123,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [1U][1U]),16);
            tracep->chgSData(oldp+124,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [0U][2U]),16);
            tracep->chgSData(oldp+125,(vlTOPp->systolic_top__DOT__sum_array
                                       [0U][2U]),16);
            tracep->chgSData(oldp+126,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+127,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+128,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+129,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [1U][2U]),16);
            tracep->chgSData(oldp+130,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [0U][3U]),16);
            tracep->chgSData(oldp+131,(vlTOPp->systolic_top__DOT__sum_array
                                       [0U][3U]),16);
            tracep->chgSData(oldp+132,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+133,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+134,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+135,(vlTOPp->systolic_top__DOT__a_reg_delayed
                                       [2U]),16);
            tracep->chgSData(oldp+136,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [1U][0U]),16);
            tracep->chgSData(oldp+137,(vlTOPp->systolic_top__DOT__sum_array
                                       [1U][0U]),16);
            tracep->chgSData(oldp+138,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+139,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+140,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+141,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [2U][0U]),16);
            tracep->chgSData(oldp+142,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [1U][1U]),16);
            tracep->chgSData(oldp+143,(vlTOPp->systolic_top__DOT__sum_array
                                       [1U][1U]),16);
            tracep->chgSData(oldp+144,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+145,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+146,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+147,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [2U][1U]),16);
            tracep->chgSData(oldp+148,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [1U][2U]),16);
            tracep->chgSData(oldp+149,(vlTOPp->systolic_top__DOT__sum_array
                                       [1U][2U]),16);
            tracep->chgSData(oldp+150,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+151,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+152,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+153,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [2U][2U]),16);
            tracep->chgSData(oldp+154,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [1U][3U]),16);
            tracep->chgSData(oldp+155,(vlTOPp->systolic_top__DOT__sum_array
                                       [1U][3U]),16);
            tracep->chgSData(oldp+156,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+157,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+158,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+159,(vlTOPp->systolic_top__DOT__a_reg_delayed
                                       [3U]),16);
            tracep->chgSData(oldp+160,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [2U][0U]),16);
            tracep->chgSData(oldp+161,(vlTOPp->systolic_top__DOT__sum_array
                                       [2U][0U]),16);
            tracep->chgSData(oldp+162,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+163,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+164,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+165,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [3U][0U]),16);
            tracep->chgSData(oldp+166,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [2U][1U]),16);
            tracep->chgSData(oldp+167,(vlTOPp->systolic_top__DOT__sum_array
                                       [2U][1U]),16);
            tracep->chgSData(oldp+168,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+169,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+170,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+171,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [3U][1U]),16);
            tracep->chgSData(oldp+172,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [2U][2U]),16);
            tracep->chgSData(oldp+173,(vlTOPp->systolic_top__DOT__sum_array
                                       [2U][2U]),16);
            tracep->chgSData(oldp+174,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+175,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+176,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg),16);
            tracep->chgSData(oldp+177,(vlTOPp->systolic_top__DOT__a_reg_array
                                       [3U][2U]),16);
            tracep->chgSData(oldp+178,(vlTOPp->systolic_top__DOT__b_reg_array
                                       [2U][3U]),16);
            tracep->chgSData(oldp+179,(vlTOPp->systolic_top__DOT__sum_array
                                       [2U][3U]),16);
            tracep->chgSData(oldp+180,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out),16);
            tracep->chgSData(oldp+181,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg),16);
            tracep->chgSData(oldp+182,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg),16);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgSData(oldp+183,(vlTOPp->systolic_top__DOT__b_reg_delayed[0]),16);
            tracep->chgSData(oldp+184,(vlTOPp->systolic_top__DOT__b_reg_delayed[1]),16);
            tracep->chgSData(oldp+185,(vlTOPp->systolic_top__DOT__b_reg_delayed[2]),16);
            tracep->chgSData(oldp+186,(vlTOPp->systolic_top__DOT__b_reg_delayed[3]),16);
            tracep->chgSData(oldp+187,(vlTOPp->systolic_top__DOT__b_reg_delayed
                                       [0U]),16);
            tracep->chgSData(oldp+188,(vlTOPp->systolic_top__DOT__b_reg_delayed
                                       [1U]),16);
            tracep->chgSData(oldp+189,(vlTOPp->systolic_top__DOT__b_reg_delayed
                                       [2U]),16);
            tracep->chgSData(oldp+190,(vlTOPp->systolic_top__DOT__b_reg_delayed
                                       [3U]),16);
        }
        tracep->chgBit(oldp+191,(vlTOPp->clk));
        tracep->chgBit(oldp+192,(vlTOPp->rst_n));
        tracep->chgQData(oldp+193,(vlTOPp->a_in_raw),64);
        tracep->chgQData(oldp+195,(vlTOPp->b_in_raw),64);
        tracep->chgQData(oldp+197,(vlTOPp->sum_in_raw),64);
        tracep->chgQData(oldp+199,(vlTOPp->sum_out),64);
        tracep->chgBit(oldp+201,(vlTOPp->mode));
        tracep->chgBit(oldp+202,(vlTOPp->state));
        tracep->chgBit(oldp+203,(((IData)(vlTOPp->state) 
                                  | (IData)(vlTOPp->mode))));
        tracep->chgSData(oldp+204,((0xffffU & (((IData)(vlTOPp->state) 
                                                | (IData)(vlTOPp->mode))
                                                ? vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg
                                               [0U]
                                                : (IData)(
                                                          (vlTOPp->systolic_top__DOT__b_in 
                                                           >> 0x10U))))),16);
        tracep->chgSData(oldp+205,((0xffffU & (((IData)(vlTOPp->state) 
                                                | (IData)(vlTOPp->mode))
                                                ? vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg
                                               [1U]
                                                : (IData)(
                                                          (vlTOPp->systolic_top__DOT__b_in 
                                                           >> 0x20U))))),16);
        tracep->chgSData(oldp+206,((0xffffU & (((IData)(vlTOPp->state) 
                                                | (IData)(vlTOPp->mode))
                                                ? vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg
                                               [2U]
                                                : (IData)(
                                                          (vlTOPp->systolic_top__DOT__b_in 
                                                           >> 0x30U))))),16);
    }
}

void Vsystolic_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vsystolic_top__Syms* __restrict vlSymsp = static_cast<Vsystolic_top__Syms*>(userp);
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
