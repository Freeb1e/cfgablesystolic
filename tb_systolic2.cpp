#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsystolic_top.h"
#include "Vsystolic_top__Syms.h"

#define MAX_SIM_TIME 50
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    Vsystolic_top *dut = new Vsystolic_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    uint16_t a_array[4][4] = { {12, 23, 31, 41},
                            {43, 51, 63, 71},
                            {73, 81, 92, 102},
                            {112,121,132,143} };
    uint16_t b_array[4][4] = { {93, 82, 71, 60},
                            {64, 52, 44, 36},
                            {31, 22, 14, 8},
                            {7, 5, 3, 1} };
    int cnt=0;
    while (sim_time < MAX_SIM_TIME) {
        dut->clk ^= 1;
        if(sim_time==1) {
            dut->rst_n = 1;
        }
        if(sim_time==2) {
            dut->rst_n = 0; 
        }
        if(sim_time==3) {
            dut->rst_n = 1; 
            dut->state = 0;
            dut->mode =0;
        }
        if(sim_time>=3&&sim_time<=10){
            
            if(dut->clk==0){
                // dut->a_in_raw = (uint64_t(a_array[3][cnt]) << 48) |(uint64_t(a_array[2][cnt]) << 32) | (uint64_t(a_array[1][cnt]) << 16) | uint64_t(a_array[0][cnt]);
                dut->b_in_raw = (uint64_t(b_array[3-cnt][3]) << 48) |(uint64_t(b_array[3-cnt][2]) << 32) | (uint64_t(b_array[3-cnt][1]) << 16) | uint64_t(b_array[3-cnt][0]);
                cnt++;
            }
        }else{
            dut->b_in_raw = 0;
        }
        if(sim_time==14) 
        {
            cnt=0;
            dut->state=1;
        }
        if(sim_time>=15 && sim_time<=22){
            dut->sum_in_raw=0;
            if(dut->clk==0){
            dut->a_in_raw = (uint64_t(a_array[cnt][3]) << 48) |(uint64_t(a_array[cnt][2]) << 32) | (uint64_t(a_array[cnt][1]) << 16) | uint64_t(a_array[cnt][0]);   
            cnt++;}
        }
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}