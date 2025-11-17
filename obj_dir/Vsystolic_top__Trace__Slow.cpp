// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_top__Syms.h"


//======================

void Vsystolic_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsystolic_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsystolic_top__Syms* __restrict vlSymsp = static_cast<Vsystolic_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsystolic_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsystolic_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vsystolic_top__Syms* __restrict vlSymsp = static_cast<Vsystolic_top__Syms*>(userp);
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vsystolic_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vsystolic_top__Syms* __restrict vlSymsp = static_cast<Vsystolic_top__Syms*>(userp);
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+192,"clk", false,-1);
        tracep->declBit(c+193,"rst_n", false,-1);
        tracep->declQuad(c+194,"a_in_raw", false,-1, 63,0);
        tracep->declQuad(c+196,"b_in_raw", false,-1, 63,0);
        tracep->declQuad(c+198,"sum_in_raw", false,-1, 63,0);
        tracep->declQuad(c+200,"sum_out", false,-1, 63,0);
        tracep->declBit(c+202,"mode", false,-1);
        tracep->declBit(c+203,"state", false,-1);
        tracep->declBus(c+208,"systolic_top DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top SUM_WIDTH", false,-1, 31,0);
        tracep->declBus(c+209,"systolic_top SYSTOLIC_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top clk", false,-1);
        tracep->declBit(c+193,"systolic_top rst_n", false,-1);
        tracep->declQuad(c+194,"systolic_top a_in_raw", false,-1, 63,0);
        tracep->declQuad(c+196,"systolic_top b_in_raw", false,-1, 63,0);
        tracep->declQuad(c+198,"systolic_top sum_in_raw", false,-1, 63,0);
        tracep->declQuad(c+200,"systolic_top sum_out", false,-1, 63,0);
        tracep->declBit(c+202,"systolic_top mode", false,-1);
        tracep->declBit(c+203,"systolic_top state", false,-1);
        tracep->declBus(c+1,"systolic_top sum_array(0)(0)", false,-1, 15,0);
        tracep->declBus(c+2,"systolic_top sum_array(0)(1)", false,-1, 15,0);
        tracep->declBus(c+3,"systolic_top sum_array(0)(2)", false,-1, 15,0);
        tracep->declBus(c+4,"systolic_top sum_array(0)(3)", false,-1, 15,0);
        tracep->declBus(c+5,"systolic_top sum_array(1)(0)", false,-1, 15,0);
        tracep->declBus(c+6,"systolic_top sum_array(1)(1)", false,-1, 15,0);
        tracep->declBus(c+7,"systolic_top sum_array(1)(2)", false,-1, 15,0);
        tracep->declBus(c+8,"systolic_top sum_array(1)(3)", false,-1, 15,0);
        tracep->declBus(c+9,"systolic_top sum_array(2)(0)", false,-1, 15,0);
        tracep->declBus(c+10,"systolic_top sum_array(2)(1)", false,-1, 15,0);
        tracep->declBus(c+11,"systolic_top sum_array(2)(2)", false,-1, 15,0);
        tracep->declBus(c+12,"systolic_top sum_array(2)(3)", false,-1, 15,0);
        tracep->declBus(c+13,"systolic_top sum_array(3)(0)", false,-1, 15,0);
        tracep->declBus(c+14,"systolic_top sum_array(3)(1)", false,-1, 15,0);
        tracep->declBus(c+15,"systolic_top sum_array(3)(2)", false,-1, 15,0);
        tracep->declBus(c+16,"systolic_top sum_array(3)(3)", false,-1, 15,0);
        tracep->declBus(c+17,"systolic_top a_reg_array(0)(0)", false,-1, 15,0);
        tracep->declBus(c+18,"systolic_top a_reg_array(0)(1)", false,-1, 15,0);
        tracep->declBus(c+19,"systolic_top a_reg_array(0)(2)", false,-1, 15,0);
        tracep->declBus(c+20,"systolic_top a_reg_array(0)(3)", false,-1, 15,0);
        tracep->declBus(c+21,"systolic_top a_reg_array(1)(0)", false,-1, 15,0);
        tracep->declBus(c+22,"systolic_top a_reg_array(1)(1)", false,-1, 15,0);
        tracep->declBus(c+23,"systolic_top a_reg_array(1)(2)", false,-1, 15,0);
        tracep->declBus(c+24,"systolic_top a_reg_array(1)(3)", false,-1, 15,0);
        tracep->declBus(c+25,"systolic_top a_reg_array(2)(0)", false,-1, 15,0);
        tracep->declBus(c+26,"systolic_top a_reg_array(2)(1)", false,-1, 15,0);
        tracep->declBus(c+27,"systolic_top a_reg_array(2)(2)", false,-1, 15,0);
        tracep->declBus(c+28,"systolic_top a_reg_array(2)(3)", false,-1, 15,0);
        tracep->declBus(c+29,"systolic_top a_reg_array(3)(0)", false,-1, 15,0);
        tracep->declBus(c+30,"systolic_top a_reg_array(3)(1)", false,-1, 15,0);
        tracep->declBus(c+31,"systolic_top a_reg_array(3)(2)", false,-1, 15,0);
        tracep->declBus(c+32,"systolic_top a_reg_array(3)(3)", false,-1, 15,0);
        tracep->declBus(c+33,"systolic_top b_reg_array(0)(0)", false,-1, 15,0);
        tracep->declBus(c+34,"systolic_top b_reg_array(0)(1)", false,-1, 15,0);
        tracep->declBus(c+35,"systolic_top b_reg_array(0)(2)", false,-1, 15,0);
        tracep->declBus(c+36,"systolic_top b_reg_array(0)(3)", false,-1, 15,0);
        tracep->declBus(c+37,"systolic_top b_reg_array(1)(0)", false,-1, 15,0);
        tracep->declBus(c+38,"systolic_top b_reg_array(1)(1)", false,-1, 15,0);
        tracep->declBus(c+39,"systolic_top b_reg_array(1)(2)", false,-1, 15,0);
        tracep->declBus(c+40,"systolic_top b_reg_array(1)(3)", false,-1, 15,0);
        tracep->declBus(c+41,"systolic_top b_reg_array(2)(0)", false,-1, 15,0);
        tracep->declBus(c+42,"systolic_top b_reg_array(2)(1)", false,-1, 15,0);
        tracep->declBus(c+43,"systolic_top b_reg_array(2)(2)", false,-1, 15,0);
        tracep->declBus(c+44,"systolic_top b_reg_array(2)(3)", false,-1, 15,0);
        tracep->declBus(c+45,"systolic_top b_reg_array(3)(0)", false,-1, 15,0);
        tracep->declBus(c+46,"systolic_top b_reg_array(3)(1)", false,-1, 15,0);
        tracep->declBus(c+47,"systolic_top b_reg_array(3)(2)", false,-1, 15,0);
        tracep->declBus(c+48,"systolic_top b_reg_array(3)(3)", false,-1, 15,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+49+i*1,"systolic_top a_reg_delayed", true,(i+0), 15,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+184+i*1,"systolic_top b_reg_delayed", true,(i+0), 15,0);}}
        tracep->declQuad(c+53,"systolic_top a_in", false,-1, 63,0);
        tracep->declQuad(c+55,"systolic_top b_in", false,-1, 63,0);
        tracep->declQuad(c+57,"systolic_top sum_in", false,-1, 63,0);
        tracep->declBus(c+208,"systolic_top input_split_loop[1] a_delay_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+210,"systolic_top input_split_loop[1] a_delay_inst DELAY_CYCLES", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top input_split_loop[1] a_delay_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top input_split_loop[1] a_delay_inst rst_n", false,-1);
        tracep->declBus(c+59,"systolic_top input_split_loop[1] a_delay_inst din", false,-1, 15,0);
        tracep->declBit(c+211,"systolic_top input_split_loop[1] a_delay_inst delay_switch", false,-1);
        tracep->declBus(c+60,"systolic_top input_split_loop[1] a_delay_inst dout", false,-1, 15,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+61+i*1,"systolic_top input_split_loop[1] a_delay_inst shift_reg", true,(i+0), 15,0);}}
        tracep->declBus(c+62,"systolic_top input_split_loop[1] a_delay_inst unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+63,"systolic_top input_split_loop[1] a_delay_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top input_split_loop[2] a_delay_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+212,"systolic_top input_split_loop[2] a_delay_inst DELAY_CYCLES", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top input_split_loop[2] a_delay_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top input_split_loop[2] a_delay_inst rst_n", false,-1);
        tracep->declBus(c+64,"systolic_top input_split_loop[2] a_delay_inst din", false,-1, 15,0);
        tracep->declBit(c+211,"systolic_top input_split_loop[2] a_delay_inst delay_switch", false,-1);
        tracep->declBus(c+65,"systolic_top input_split_loop[2] a_delay_inst dout", false,-1, 15,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+66+i*1,"systolic_top input_split_loop[2] a_delay_inst shift_reg", true,(i+0), 15,0);}}
        tracep->declBus(c+68,"systolic_top input_split_loop[2] a_delay_inst unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+69,"systolic_top input_split_loop[2] a_delay_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top input_split_loop[3] a_delay_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+213,"systolic_top input_split_loop[3] a_delay_inst DELAY_CYCLES", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top input_split_loop[3] a_delay_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top input_split_loop[3] a_delay_inst rst_n", false,-1);
        tracep->declBus(c+70,"systolic_top input_split_loop[3] a_delay_inst din", false,-1, 15,0);
        tracep->declBit(c+211,"systolic_top input_split_loop[3] a_delay_inst delay_switch", false,-1);
        tracep->declBus(c+71,"systolic_top input_split_loop[3] a_delay_inst dout", false,-1, 15,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+72+i*1,"systolic_top input_split_loop[3] a_delay_inst shift_reg", true,(i+0), 15,0);}}
        tracep->declBus(c+75,"systolic_top input_split_loop[3] a_delay_inst unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+76,"systolic_top input_split_loop[3] a_delay_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top input_split_loop_b[1] b_delay_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+210,"systolic_top input_split_loop_b[1] b_delay_inst DELAY_CYCLES", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top input_split_loop_b[1] b_delay_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top input_split_loop_b[1] b_delay_inst rst_n", false,-1);
        tracep->declBus(c+77,"systolic_top input_split_loop_b[1] b_delay_inst din", false,-1, 15,0);
        tracep->declBit(c+204,"systolic_top input_split_loop_b[1] b_delay_inst delay_switch", false,-1);
        tracep->declBus(c+205,"systolic_top input_split_loop_b[1] b_delay_inst dout", false,-1, 15,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+78+i*1,"systolic_top input_split_loop_b[1] b_delay_inst shift_reg", true,(i+0), 15,0);}}
        tracep->declBus(c+79,"systolic_top input_split_loop_b[1] b_delay_inst unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+80,"systolic_top input_split_loop_b[1] b_delay_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top input_split_loop_b[2] b_delay_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+212,"systolic_top input_split_loop_b[2] b_delay_inst DELAY_CYCLES", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top input_split_loop_b[2] b_delay_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top input_split_loop_b[2] b_delay_inst rst_n", false,-1);
        tracep->declBus(c+81,"systolic_top input_split_loop_b[2] b_delay_inst din", false,-1, 15,0);
        tracep->declBit(c+204,"systolic_top input_split_loop_b[2] b_delay_inst delay_switch", false,-1);
        tracep->declBus(c+206,"systolic_top input_split_loop_b[2] b_delay_inst dout", false,-1, 15,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+82+i*1,"systolic_top input_split_loop_b[2] b_delay_inst shift_reg", true,(i+0), 15,0);}}
        tracep->declBus(c+84,"systolic_top input_split_loop_b[2] b_delay_inst unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+85,"systolic_top input_split_loop_b[2] b_delay_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top input_split_loop_b[3] b_delay_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+213,"systolic_top input_split_loop_b[3] b_delay_inst DELAY_CYCLES", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top input_split_loop_b[3] b_delay_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top input_split_loop_b[3] b_delay_inst rst_n", false,-1);
        tracep->declBus(c+86,"systolic_top input_split_loop_b[3] b_delay_inst din", false,-1, 15,0);
        tracep->declBit(c+204,"systolic_top input_split_loop_b[3] b_delay_inst delay_switch", false,-1);
        tracep->declBus(c+207,"systolic_top input_split_loop_b[3] b_delay_inst dout", false,-1, 15,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+87+i*1,"systolic_top input_split_loop_b[3] b_delay_inst shift_reg", true,(i+0), 15,0);}}
        tracep->declBus(c+90,"systolic_top input_split_loop_b[3] b_delay_inst unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+91,"systolic_top input_split_loop_b[3] b_delay_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[0] col_loop[0] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[0] col_loop[0] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[0] col_loop[0] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[0] col_loop[0] pe_inst rst_n", false,-1);
        tracep->declBus(c+92,"systolic_top row_loop[0] col_loop[0] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+188,"systolic_top row_loop[0] col_loop[0] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+93,"systolic_top row_loop[0] col_loop[0] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+94,"systolic_top row_loop[0] col_loop[0] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+95,"systolic_top row_loop[0] col_loop[0] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+96,"systolic_top row_loop[0] col_loop[0] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[0] col_loop[0] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[0] col_loop[0] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[0] col_loop[1] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[0] col_loop[1] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[0] col_loop[1] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[0] col_loop[1] pe_inst rst_n", false,-1);
        tracep->declBus(c+97,"systolic_top row_loop[0] col_loop[1] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+189,"systolic_top row_loop[0] col_loop[1] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+98,"systolic_top row_loop[0] col_loop[1] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+99,"systolic_top row_loop[0] col_loop[1] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+100,"systolic_top row_loop[0] col_loop[1] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+101,"systolic_top row_loop[0] col_loop[1] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[0] col_loop[1] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[0] col_loop[1] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[0] col_loop[2] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[0] col_loop[2] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[0] col_loop[2] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[0] col_loop[2] pe_inst rst_n", false,-1);
        tracep->declBus(c+102,"systolic_top row_loop[0] col_loop[2] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+190,"systolic_top row_loop[0] col_loop[2] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+103,"systolic_top row_loop[0] col_loop[2] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+104,"systolic_top row_loop[0] col_loop[2] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+105,"systolic_top row_loop[0] col_loop[2] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+106,"systolic_top row_loop[0] col_loop[2] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[0] col_loop[2] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[0] col_loop[2] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[0] col_loop[3] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[0] col_loop[3] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[0] col_loop[3] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[0] col_loop[3] pe_inst rst_n", false,-1);
        tracep->declBus(c+107,"systolic_top row_loop[0] col_loop[3] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+191,"systolic_top row_loop[0] col_loop[3] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+108,"systolic_top row_loop[0] col_loop[3] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+109,"systolic_top row_loop[0] col_loop[3] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+110,"systolic_top row_loop[0] col_loop[3] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+111,"systolic_top row_loop[0] col_loop[3] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[0] col_loop[3] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[0] col_loop[3] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[1] col_loop[0] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[1] col_loop[0] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[1] col_loop[0] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[1] col_loop[0] pe_inst rst_n", false,-1);
        tracep->declBus(c+112,"systolic_top row_loop[1] col_loop[0] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+113,"systolic_top row_loop[1] col_loop[0] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+114,"systolic_top row_loop[1] col_loop[0] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+115,"systolic_top row_loop[1] col_loop[0] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+116,"systolic_top row_loop[1] col_loop[0] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+117,"systolic_top row_loop[1] col_loop[0] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[1] col_loop[0] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[1] col_loop[0] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[1] col_loop[1] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[1] col_loop[1] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[1] col_loop[1] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[1] col_loop[1] pe_inst rst_n", false,-1);
        tracep->declBus(c+118,"systolic_top row_loop[1] col_loop[1] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+119,"systolic_top row_loop[1] col_loop[1] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+120,"systolic_top row_loop[1] col_loop[1] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+121,"systolic_top row_loop[1] col_loop[1] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+122,"systolic_top row_loop[1] col_loop[1] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+123,"systolic_top row_loop[1] col_loop[1] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[1] col_loop[1] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[1] col_loop[1] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[1] col_loop[2] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[1] col_loop[2] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[1] col_loop[2] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[1] col_loop[2] pe_inst rst_n", false,-1);
        tracep->declBus(c+124,"systolic_top row_loop[1] col_loop[2] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+125,"systolic_top row_loop[1] col_loop[2] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+126,"systolic_top row_loop[1] col_loop[2] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+127,"systolic_top row_loop[1] col_loop[2] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+128,"systolic_top row_loop[1] col_loop[2] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+129,"systolic_top row_loop[1] col_loop[2] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[1] col_loop[2] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[1] col_loop[2] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[1] col_loop[3] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[1] col_loop[3] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[1] col_loop[3] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[1] col_loop[3] pe_inst rst_n", false,-1);
        tracep->declBus(c+130,"systolic_top row_loop[1] col_loop[3] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+131,"systolic_top row_loop[1] col_loop[3] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+132,"systolic_top row_loop[1] col_loop[3] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+133,"systolic_top row_loop[1] col_loop[3] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+134,"systolic_top row_loop[1] col_loop[3] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+135,"systolic_top row_loop[1] col_loop[3] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[1] col_loop[3] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[1] col_loop[3] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[2] col_loop[0] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[2] col_loop[0] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[2] col_loop[0] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[2] col_loop[0] pe_inst rst_n", false,-1);
        tracep->declBus(c+136,"systolic_top row_loop[2] col_loop[0] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+137,"systolic_top row_loop[2] col_loop[0] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+138,"systolic_top row_loop[2] col_loop[0] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+139,"systolic_top row_loop[2] col_loop[0] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+140,"systolic_top row_loop[2] col_loop[0] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+141,"systolic_top row_loop[2] col_loop[0] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[2] col_loop[0] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[2] col_loop[0] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[2] col_loop[1] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[2] col_loop[1] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[2] col_loop[1] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[2] col_loop[1] pe_inst rst_n", false,-1);
        tracep->declBus(c+142,"systolic_top row_loop[2] col_loop[1] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+143,"systolic_top row_loop[2] col_loop[1] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+144,"systolic_top row_loop[2] col_loop[1] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+145,"systolic_top row_loop[2] col_loop[1] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+146,"systolic_top row_loop[2] col_loop[1] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+147,"systolic_top row_loop[2] col_loop[1] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[2] col_loop[1] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[2] col_loop[1] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[2] col_loop[2] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[2] col_loop[2] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[2] col_loop[2] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[2] col_loop[2] pe_inst rst_n", false,-1);
        tracep->declBus(c+148,"systolic_top row_loop[2] col_loop[2] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+149,"systolic_top row_loop[2] col_loop[2] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+150,"systolic_top row_loop[2] col_loop[2] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+151,"systolic_top row_loop[2] col_loop[2] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+152,"systolic_top row_loop[2] col_loop[2] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+153,"systolic_top row_loop[2] col_loop[2] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[2] col_loop[2] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[2] col_loop[2] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[2] col_loop[3] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[2] col_loop[3] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[2] col_loop[3] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[2] col_loop[3] pe_inst rst_n", false,-1);
        tracep->declBus(c+154,"systolic_top row_loop[2] col_loop[3] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+155,"systolic_top row_loop[2] col_loop[3] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+156,"systolic_top row_loop[2] col_loop[3] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+157,"systolic_top row_loop[2] col_loop[3] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+158,"systolic_top row_loop[2] col_loop[3] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+159,"systolic_top row_loop[2] col_loop[3] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[2] col_loop[3] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[2] col_loop[3] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[3] col_loop[0] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[3] col_loop[0] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[3] col_loop[0] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[3] col_loop[0] pe_inst rst_n", false,-1);
        tracep->declBus(c+160,"systolic_top row_loop[3] col_loop[0] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+161,"systolic_top row_loop[3] col_loop[0] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+162,"systolic_top row_loop[3] col_loop[0] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+163,"systolic_top row_loop[3] col_loop[0] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+164,"systolic_top row_loop[3] col_loop[0] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+165,"systolic_top row_loop[3] col_loop[0] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[3] col_loop[0] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[3] col_loop[0] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[3] col_loop[1] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[3] col_loop[1] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[3] col_loop[1] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[3] col_loop[1] pe_inst rst_n", false,-1);
        tracep->declBus(c+166,"systolic_top row_loop[3] col_loop[1] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+167,"systolic_top row_loop[3] col_loop[1] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+168,"systolic_top row_loop[3] col_loop[1] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+169,"systolic_top row_loop[3] col_loop[1] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+170,"systolic_top row_loop[3] col_loop[1] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+171,"systolic_top row_loop[3] col_loop[1] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[3] col_loop[1] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[3] col_loop[1] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[3] col_loop[2] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[3] col_loop[2] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[3] col_loop[2] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[3] col_loop[2] pe_inst rst_n", false,-1);
        tracep->declBus(c+172,"systolic_top row_loop[3] col_loop[2] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+173,"systolic_top row_loop[3] col_loop[2] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+174,"systolic_top row_loop[3] col_loop[2] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+175,"systolic_top row_loop[3] col_loop[2] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+176,"systolic_top row_loop[3] col_loop[2] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+177,"systolic_top row_loop[3] col_loop[2] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[3] col_loop[2] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[3] col_loop[2] pe_inst state", false,-1);
        tracep->declBus(c+208,"systolic_top row_loop[3] col_loop[3] pe_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+208,"systolic_top row_loop[3] col_loop[3] pe_inst SUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+192,"systolic_top row_loop[3] col_loop[3] pe_inst clk", false,-1);
        tracep->declBit(c+193,"systolic_top row_loop[3] col_loop[3] pe_inst rst_n", false,-1);
        tracep->declBus(c+178,"systolic_top row_loop[3] col_loop[3] pe_inst a_wire", false,-1, 15,0);
        tracep->declBus(c+179,"systolic_top row_loop[3] col_loop[3] pe_inst b_wire", false,-1, 15,0);
        tracep->declBus(c+180,"systolic_top row_loop[3] col_loop[3] pe_inst sum_wire", false,-1, 15,0);
        tracep->declBus(c+181,"systolic_top row_loop[3] col_loop[3] pe_inst sum_out", false,-1, 15,0);
        tracep->declBus(c+182,"systolic_top row_loop[3] col_loop[3] pe_inst a_reg", false,-1, 15,0);
        tracep->declBus(c+183,"systolic_top row_loop[3] col_loop[3] pe_inst b_reg", false,-1, 15,0);
        tracep->declBit(c+202,"systolic_top row_loop[3] col_loop[3] pe_inst mode", false,-1);
        tracep->declBit(c+203,"systolic_top row_loop[3] col_loop[3] pe_inst state", false,-1);
    }
}

void Vsystolic_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsystolic_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vsystolic_top__Syms* __restrict vlSymsp = static_cast<Vsystolic_top__Syms*>(userp);
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vsystolic_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vsystolic_top__Syms* __restrict vlSymsp = static_cast<Vsystolic_top__Syms*>(userp);
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->systolic_top__DOT__sum_array
                                  [0U][0U]),16);
        tracep->fullSData(oldp+2,(vlTOPp->systolic_top__DOT__sum_array
                                  [0U][1U]),16);
        tracep->fullSData(oldp+3,(vlTOPp->systolic_top__DOT__sum_array
                                  [0U][2U]),16);
        tracep->fullSData(oldp+4,(vlTOPp->systolic_top__DOT__sum_array
                                  [0U][3U]),16);
        tracep->fullSData(oldp+5,(vlTOPp->systolic_top__DOT__sum_array
                                  [1U][0U]),16);
        tracep->fullSData(oldp+6,(vlTOPp->systolic_top__DOT__sum_array
                                  [1U][1U]),16);
        tracep->fullSData(oldp+7,(vlTOPp->systolic_top__DOT__sum_array
                                  [1U][2U]),16);
        tracep->fullSData(oldp+8,(vlTOPp->systolic_top__DOT__sum_array
                                  [1U][3U]),16);
        tracep->fullSData(oldp+9,(vlTOPp->systolic_top__DOT__sum_array
                                  [2U][0U]),16);
        tracep->fullSData(oldp+10,(vlTOPp->systolic_top__DOT__sum_array
                                   [2U][1U]),16);
        tracep->fullSData(oldp+11,(vlTOPp->systolic_top__DOT__sum_array
                                   [2U][2U]),16);
        tracep->fullSData(oldp+12,(vlTOPp->systolic_top__DOT__sum_array
                                   [2U][3U]),16);
        tracep->fullSData(oldp+13,(vlTOPp->systolic_top__DOT__sum_array
                                   [3U][0U]),16);
        tracep->fullSData(oldp+14,(vlTOPp->systolic_top__DOT__sum_array
                                   [3U][1U]),16);
        tracep->fullSData(oldp+15,(vlTOPp->systolic_top__DOT__sum_array
                                   [3U][2U]),16);
        tracep->fullSData(oldp+16,(vlTOPp->systolic_top__DOT__sum_array
                                   [3U][3U]),16);
        tracep->fullSData(oldp+17,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [0U][0U]),16);
        tracep->fullSData(oldp+18,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [0U][1U]),16);
        tracep->fullSData(oldp+19,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [0U][2U]),16);
        tracep->fullSData(oldp+20,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [0U][3U]),16);
        tracep->fullSData(oldp+21,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [1U][0U]),16);
        tracep->fullSData(oldp+22,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [1U][1U]),16);
        tracep->fullSData(oldp+23,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [1U][2U]),16);
        tracep->fullSData(oldp+24,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [1U][3U]),16);
        tracep->fullSData(oldp+25,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [2U][0U]),16);
        tracep->fullSData(oldp+26,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [2U][1U]),16);
        tracep->fullSData(oldp+27,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [2U][2U]),16);
        tracep->fullSData(oldp+28,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [2U][3U]),16);
        tracep->fullSData(oldp+29,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [3U][0U]),16);
        tracep->fullSData(oldp+30,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [3U][1U]),16);
        tracep->fullSData(oldp+31,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [3U][2U]),16);
        tracep->fullSData(oldp+32,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [3U][3U]),16);
        tracep->fullSData(oldp+33,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [0U][0U]),16);
        tracep->fullSData(oldp+34,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [0U][1U]),16);
        tracep->fullSData(oldp+35,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [0U][2U]),16);
        tracep->fullSData(oldp+36,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [0U][3U]),16);
        tracep->fullSData(oldp+37,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [1U][0U]),16);
        tracep->fullSData(oldp+38,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [1U][1U]),16);
        tracep->fullSData(oldp+39,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [1U][2U]),16);
        tracep->fullSData(oldp+40,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [1U][3U]),16);
        tracep->fullSData(oldp+41,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [2U][0U]),16);
        tracep->fullSData(oldp+42,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [2U][1U]),16);
        tracep->fullSData(oldp+43,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [2U][2U]),16);
        tracep->fullSData(oldp+44,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [2U][3U]),16);
        tracep->fullSData(oldp+45,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [3U][0U]),16);
        tracep->fullSData(oldp+46,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [3U][1U]),16);
        tracep->fullSData(oldp+47,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [3U][2U]),16);
        tracep->fullSData(oldp+48,(vlTOPp->systolic_top__DOT__b_reg_array
                                   [3U][3U]),16);
        tracep->fullSData(oldp+49,(vlTOPp->systolic_top__DOT__a_reg_delayed[0]),16);
        tracep->fullSData(oldp+50,(vlTOPp->systolic_top__DOT__a_reg_delayed[1]),16);
        tracep->fullSData(oldp+51,(vlTOPp->systolic_top__DOT__a_reg_delayed[2]),16);
        tracep->fullSData(oldp+52,(vlTOPp->systolic_top__DOT__a_reg_delayed[3]),16);
        tracep->fullQData(oldp+53,(vlTOPp->systolic_top__DOT__a_in),64);
        tracep->fullQData(oldp+55,(vlTOPp->systolic_top__DOT__b_in),64);
        tracep->fullQData(oldp+57,(vlTOPp->systolic_top__DOT__sum_in),64);
        tracep->fullSData(oldp+59,((0xffffU & (IData)(
                                                      (vlTOPp->systolic_top__DOT__a_in 
                                                       >> 0x10U)))),16);
        tracep->fullSData(oldp+60,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg
                                   [0U]),16);
        tracep->fullSData(oldp+61,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg[0]),16);
        tracep->fullIData(oldp+62,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+63,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+64,((0xffffU & (IData)(
                                                      (vlTOPp->systolic_top__DOT__a_in 
                                                       >> 0x20U)))),16);
        tracep->fullSData(oldp+65,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg
                                   [1U]),16);
        tracep->fullSData(oldp+66,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[0]),16);
        tracep->fullSData(oldp+67,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[1]),16);
        tracep->fullIData(oldp+68,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+69,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+70,((0xffffU & (IData)(
                                                      (vlTOPp->systolic_top__DOT__a_in 
                                                       >> 0x30U)))),16);
        tracep->fullSData(oldp+71,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg
                                   [2U]),16);
        tracep->fullSData(oldp+72,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[0]),16);
        tracep->fullSData(oldp+73,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[1]),16);
        tracep->fullSData(oldp+74,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[2]),16);
        tracep->fullIData(oldp+75,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+76,(vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+77,((0xffffU & (IData)(
                                                      (vlTOPp->systolic_top__DOT__b_in 
                                                       >> 0x10U)))),16);
        tracep->fullSData(oldp+78,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg[0]),16);
        tracep->fullIData(oldp+79,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+80,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+81,((0xffffU & (IData)(
                                                      (vlTOPp->systolic_top__DOT__b_in 
                                                       >> 0x20U)))),16);
        tracep->fullSData(oldp+82,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[0]),16);
        tracep->fullSData(oldp+83,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[1]),16);
        tracep->fullIData(oldp+84,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+85,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+86,((0xffffU & (IData)(
                                                      (vlTOPp->systolic_top__DOT__b_in 
                                                       >> 0x30U)))),16);
        tracep->fullSData(oldp+87,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[0]),16);
        tracep->fullSData(oldp+88,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[1]),16);
        tracep->fullSData(oldp+89,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[2]),16);
        tracep->fullIData(oldp+90,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+91,(vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+92,(vlTOPp->systolic_top__DOT__a_reg_delayed
                                   [0U]),16);
        tracep->fullSData(oldp+93,((0xffffU & (IData)(vlTOPp->systolic_top__DOT__sum_in))),16);
        tracep->fullSData(oldp+94,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+95,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+96,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+97,(vlTOPp->systolic_top__DOT__a_reg_array
                                   [0U][0U]),16);
        tracep->fullSData(oldp+98,((0xffffU & (IData)(
                                                      (vlTOPp->systolic_top__DOT__sum_in 
                                                       >> 0x10U)))),16);
        tracep->fullSData(oldp+99,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+100,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+101,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+102,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [0U][1U]),16);
        tracep->fullSData(oldp+103,((0xffffU & (IData)(
                                                       (vlTOPp->systolic_top__DOT__sum_in 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+104,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+105,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+106,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+107,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [0U][2U]),16);
        tracep->fullSData(oldp+108,((0xffffU & (IData)(
                                                       (vlTOPp->systolic_top__DOT__sum_in 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+109,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+110,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+111,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+112,(vlTOPp->systolic_top__DOT__a_reg_delayed
                                    [1U]),16);
        tracep->fullSData(oldp+113,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [0U][0U]),16);
        tracep->fullSData(oldp+114,(vlTOPp->systolic_top__DOT__sum_array
                                    [0U][0U]),16);
        tracep->fullSData(oldp+115,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+116,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+117,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+118,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [1U][0U]),16);
        tracep->fullSData(oldp+119,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [0U][1U]),16);
        tracep->fullSData(oldp+120,(vlTOPp->systolic_top__DOT__sum_array
                                    [0U][1U]),16);
        tracep->fullSData(oldp+121,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+122,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+123,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+124,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [1U][1U]),16);
        tracep->fullSData(oldp+125,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [0U][2U]),16);
        tracep->fullSData(oldp+126,(vlTOPp->systolic_top__DOT__sum_array
                                    [0U][2U]),16);
        tracep->fullSData(oldp+127,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+128,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+129,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+130,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [1U][2U]),16);
        tracep->fullSData(oldp+131,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [0U][3U]),16);
        tracep->fullSData(oldp+132,(vlTOPp->systolic_top__DOT__sum_array
                                    [0U][3U]),16);
        tracep->fullSData(oldp+133,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+134,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+135,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+136,(vlTOPp->systolic_top__DOT__a_reg_delayed
                                    [2U]),16);
        tracep->fullSData(oldp+137,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [1U][0U]),16);
        tracep->fullSData(oldp+138,(vlTOPp->systolic_top__DOT__sum_array
                                    [1U][0U]),16);
        tracep->fullSData(oldp+139,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+140,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+141,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+142,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [2U][0U]),16);
        tracep->fullSData(oldp+143,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [1U][1U]),16);
        tracep->fullSData(oldp+144,(vlTOPp->systolic_top__DOT__sum_array
                                    [1U][1U]),16);
        tracep->fullSData(oldp+145,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+146,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+147,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+148,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [2U][1U]),16);
        tracep->fullSData(oldp+149,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [1U][2U]),16);
        tracep->fullSData(oldp+150,(vlTOPp->systolic_top__DOT__sum_array
                                    [1U][2U]),16);
        tracep->fullSData(oldp+151,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+152,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+153,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+154,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [2U][2U]),16);
        tracep->fullSData(oldp+155,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [1U][3U]),16);
        tracep->fullSData(oldp+156,(vlTOPp->systolic_top__DOT__sum_array
                                    [1U][3U]),16);
        tracep->fullSData(oldp+157,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+158,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+159,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+160,(vlTOPp->systolic_top__DOT__a_reg_delayed
                                    [3U]),16);
        tracep->fullSData(oldp+161,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [2U][0U]),16);
        tracep->fullSData(oldp+162,(vlTOPp->systolic_top__DOT__sum_array
                                    [2U][0U]),16);
        tracep->fullSData(oldp+163,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+164,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+165,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+166,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [3U][0U]),16);
        tracep->fullSData(oldp+167,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [2U][1U]),16);
        tracep->fullSData(oldp+168,(vlTOPp->systolic_top__DOT__sum_array
                                    [2U][1U]),16);
        tracep->fullSData(oldp+169,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+170,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+171,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+172,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [3U][1U]),16);
        tracep->fullSData(oldp+173,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [2U][2U]),16);
        tracep->fullSData(oldp+174,(vlTOPp->systolic_top__DOT__sum_array
                                    [2U][2U]),16);
        tracep->fullSData(oldp+175,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+176,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+177,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+178,(vlTOPp->systolic_top__DOT__a_reg_array
                                    [3U][2U]),16);
        tracep->fullSData(oldp+179,(vlTOPp->systolic_top__DOT__b_reg_array
                                    [2U][3U]),16);
        tracep->fullSData(oldp+180,(vlTOPp->systolic_top__DOT__sum_array
                                    [2U][3U]),16);
        tracep->fullSData(oldp+181,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out),16);
        tracep->fullSData(oldp+182,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg),16);
        tracep->fullSData(oldp+183,(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg),16);
        tracep->fullSData(oldp+184,(vlTOPp->systolic_top__DOT__b_reg_delayed[0]),16);
        tracep->fullSData(oldp+185,(vlTOPp->systolic_top__DOT__b_reg_delayed[1]),16);
        tracep->fullSData(oldp+186,(vlTOPp->systolic_top__DOT__b_reg_delayed[2]),16);
        tracep->fullSData(oldp+187,(vlTOPp->systolic_top__DOT__b_reg_delayed[3]),16);
        tracep->fullSData(oldp+188,(vlTOPp->systolic_top__DOT__b_reg_delayed
                                    [0U]),16);
        tracep->fullSData(oldp+189,(vlTOPp->systolic_top__DOT__b_reg_delayed
                                    [1U]),16);
        tracep->fullSData(oldp+190,(vlTOPp->systolic_top__DOT__b_reg_delayed
                                    [2U]),16);
        tracep->fullSData(oldp+191,(vlTOPp->systolic_top__DOT__b_reg_delayed
                                    [3U]),16);
        tracep->fullBit(oldp+192,(vlTOPp->clk));
        tracep->fullBit(oldp+193,(vlTOPp->rst_n));
        tracep->fullQData(oldp+194,(vlTOPp->a_in_raw),64);
        tracep->fullQData(oldp+196,(vlTOPp->b_in_raw),64);
        tracep->fullQData(oldp+198,(vlTOPp->sum_in_raw),64);
        tracep->fullQData(oldp+200,(vlTOPp->sum_out),64);
        tracep->fullBit(oldp+202,(vlTOPp->mode));
        tracep->fullBit(oldp+203,(vlTOPp->state));
        tracep->fullBit(oldp+204,(((IData)(vlTOPp->state) 
                                   | (IData)(vlTOPp->mode))));
        tracep->fullSData(oldp+205,((0xffffU & (((IData)(vlTOPp->state) 
                                                 | (IData)(vlTOPp->mode))
                                                 ? 
                                                vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg
                                                [0U]
                                                 : (IData)(
                                                           (vlTOPp->systolic_top__DOT__b_in 
                                                            >> 0x10U))))),16);
        tracep->fullSData(oldp+206,((0xffffU & (((IData)(vlTOPp->state) 
                                                 | (IData)(vlTOPp->mode))
                                                 ? 
                                                vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg
                                                [1U]
                                                 : (IData)(
                                                           (vlTOPp->systolic_top__DOT__b_in 
                                                            >> 0x20U))))),16);
        tracep->fullSData(oldp+207,((0xffffU & (((IData)(vlTOPp->state) 
                                                 | (IData)(vlTOPp->mode))
                                                 ? 
                                                vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg
                                                [2U]
                                                 : (IData)(
                                                           (vlTOPp->systolic_top__DOT__b_in 
                                                            >> 0x30U))))),16);
        tracep->fullIData(oldp+208,(0x10U),32);
        tracep->fullIData(oldp+209,(4U),32);
        tracep->fullIData(oldp+210,(1U),32);
        tracep->fullBit(oldp+211,(1U));
        tracep->fullIData(oldp+212,(2U),32);
        tracep->fullIData(oldp+213,(3U),32);
    }
}
