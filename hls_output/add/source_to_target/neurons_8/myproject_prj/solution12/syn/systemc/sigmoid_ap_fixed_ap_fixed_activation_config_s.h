// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sigmoid_ap_fixed_ap_fixed_activation_config_s_HH_
#define _sigmoid_ap_fixed_ap_fixed_activation_config_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sigmoid_ap_fixed_ap_fixed_activation_config_s_sigmoid_tabXh4.h"

namespace ap_rtl {

struct sigmoid_ap_fixed_ap_fixed_activation_config_s : public sc_module {
    // Port declarations 8
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > data_V_read;
    sc_out< sc_lv<8> > ap_return;


    // Module declarations
    sigmoid_ap_fixed_ap_fixed_activation_config_s(sc_module_name name);
    SC_HAS_PROCESS(sigmoid_ap_fixed_ap_fixed_activation_config_s);

    ~sigmoid_ap_fixed_ap_fixed_activation_config_s();

    sc_trace_file* mVcdFile;

    sigmoid_ap_fixed_ap_fixed_activation_config_s_sigmoid_tabXh4* sigmoid_table1_U;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > sigmoid_table1_address0;
    sc_signal< sc_logic > sigmoid_table1_ce0;
    sc_signal< sc_lv<10> > sigmoid_table1_q0;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_lv<64> > zext_ln170_fu_215_p1;
    sc_signal< sc_lv<14> > tmp_1_fu_95_p4;
    sc_signal< sc_lv<26> > r_V_fu_87_p3;
    sc_signal< sc_lv<2> > trunc_ln851_fu_115_p1;
    sc_signal< sc_lv<8> > p_Result_2_fu_119_p3;
    sc_signal< sc_lv<15> > sext_ln835_fu_105_p1;
    sc_signal< sc_lv<1> > icmp_ln851_fu_127_p2;
    sc_signal< sc_lv<15> > ret_V_fu_133_p2;
    sc_signal< sc_lv<1> > p_Result_s_fu_109_p2;
    sc_signal< sc_lv<15> > select_ln851_fu_139_p3;
    sc_signal< sc_lv<15> > select_ln850_fu_147_p3;
    sc_signal< sc_lv<14> > trunc_ln167_fu_155_p1;
    sc_signal< sc_lv<15> > index_fu_159_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_171_p3;
    sc_signal< sc_lv<14> > add_ln167_1_fu_165_p2;
    sc_signal< sc_lv<14> > select_ln168_fu_179_p3;
    sc_signal< sc_lv<4> > tmp_3_fu_191_p4;
    sc_signal< sc_lv<1> > icmp_ln169_fu_201_p2;
    sc_signal< sc_lv<10> > trunc_ln168_fu_187_p1;
    sc_signal< sc_lv<10> > select_ln169_fu_207_p3;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to0;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<26> ap_const_lv26_3FFFFF1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<15> ap_const_lv15_200;
    static const sc_lv<14> ap_const_lv14_200;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<10> ap_const_lv10_3FF;
    static const sc_lv<32> ap_const_lv32_9;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln167_1_fu_165_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to0();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_return();
    void thread_icmp_ln169_fu_201_p2();
    void thread_icmp_ln851_fu_127_p2();
    void thread_index_fu_159_p2();
    void thread_p_Result_2_fu_119_p3();
    void thread_p_Result_s_fu_109_p2();
    void thread_r_V_fu_87_p3();
    void thread_ret_V_fu_133_p2();
    void thread_select_ln168_fu_179_p3();
    void thread_select_ln169_fu_207_p3();
    void thread_select_ln850_fu_147_p3();
    void thread_select_ln851_fu_139_p3();
    void thread_sext_ln835_fu_105_p1();
    void thread_sigmoid_table1_address0();
    void thread_sigmoid_table1_ce0();
    void thread_tmp_1_fu_95_p4();
    void thread_tmp_2_fu_171_p3();
    void thread_tmp_3_fu_191_p4();
    void thread_trunc_ln167_fu_155_p1();
    void thread_trunc_ln168_fu_187_p1();
    void thread_trunc_ln851_fu_115_p1();
    void thread_zext_ln170_fu_215_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif