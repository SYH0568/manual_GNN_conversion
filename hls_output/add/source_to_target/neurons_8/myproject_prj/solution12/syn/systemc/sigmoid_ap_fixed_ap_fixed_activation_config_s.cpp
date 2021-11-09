// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "sigmoid_ap_fixed_ap_fixed_activation_config_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_ST_fsm_pp0_stage0 = "1";
const bool sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_boolean_1 = true;
const sc_lv<32> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_boolean_0 = false;
const sc_lv<10> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv10_0 = "0000000000";
const sc_lv<32> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv32_2 = "10";
const sc_lv<32> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv32_F = "1111";
const sc_lv<26> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv26_3FFFFF1 = "11111111111111111111110001";
const sc_lv<6> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv6_0 = "000000";
const sc_lv<8> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv8_0 = "00000000";
const sc_lv<15> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv15_1 = "1";
const sc_lv<15> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv15_200 = "1000000000";
const sc_lv<14> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv14_200 = "1000000000";
const sc_lv<32> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv32_E = "1110";
const sc_lv<14> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv14_0 = "00000000000000";
const sc_lv<32> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv32_A = "1010";
const sc_lv<32> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv32_D = "1101";
const sc_lv<4> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv4_0 = "0000";
const sc_lv<10> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv10_3FF = "1111111111";
const sc_lv<32> sigmoid_ap_fixed_ap_fixed_activation_config_s::ap_const_lv32_9 = "1001";

sigmoid_ap_fixed_ap_fixed_activation_config_s::sigmoid_ap_fixed_ap_fixed_activation_config_s(sc_module_name name) : sc_module(name), mVcdFile(0) {
    sigmoid_table1_U = new sigmoid_ap_fixed_ap_fixed_activation_config_s_sigmoid_tabXh4("sigmoid_table1_U");
    sigmoid_table1_U->clk(ap_clk);
    sigmoid_table1_U->reset(ap_rst);
    sigmoid_table1_U->address0(sigmoid_table1_address0);
    sigmoid_table1_U->ce0(sigmoid_table1_ce0);
    sigmoid_table1_U->q0(sigmoid_table1_q0);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln167_1_fu_165_p2);
    sensitive << ( trunc_ln167_fu_155_p1 );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_block_state1_pp0_stage0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter1);

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_enable_reg_pp0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_idle_pp0_0to0);
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_reset_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_idle_pp0_0to0 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( sigmoid_table1_q0 );

    SC_METHOD(thread_icmp_ln169_fu_201_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( tmp_3_fu_191_p4 );

    SC_METHOD(thread_icmp_ln851_fu_127_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( p_Result_2_fu_119_p3 );

    SC_METHOD(thread_index_fu_159_p2);
    sensitive << ( select_ln850_fu_147_p3 );

    SC_METHOD(thread_p_Result_2_fu_119_p3);
    sensitive << ( trunc_ln851_fu_115_p1 );

    SC_METHOD(thread_p_Result_s_fu_109_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( r_V_fu_87_p3 );

    SC_METHOD(thread_r_V_fu_87_p3);
    sensitive << ( data_V_read );

    SC_METHOD(thread_ret_V_fu_133_p2);
    sensitive << ( sext_ln835_fu_105_p1 );

    SC_METHOD(thread_select_ln168_fu_179_p3);
    sensitive << ( tmp_2_fu_171_p3 );
    sensitive << ( add_ln167_1_fu_165_p2 );

    SC_METHOD(thread_select_ln169_fu_207_p3);
    sensitive << ( icmp_ln169_fu_201_p2 );
    sensitive << ( trunc_ln168_fu_187_p1 );

    SC_METHOD(thread_select_ln850_fu_147_p3);
    sensitive << ( sext_ln835_fu_105_p1 );
    sensitive << ( p_Result_s_fu_109_p2 );
    sensitive << ( select_ln851_fu_139_p3 );

    SC_METHOD(thread_select_ln851_fu_139_p3);
    sensitive << ( sext_ln835_fu_105_p1 );
    sensitive << ( icmp_ln851_fu_127_p2 );
    sensitive << ( ret_V_fu_133_p2 );

    SC_METHOD(thread_sext_ln835_fu_105_p1);
    sensitive << ( tmp_1_fu_95_p4 );

    SC_METHOD(thread_sigmoid_table1_address0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln170_fu_215_p1 );

    SC_METHOD(thread_sigmoid_table1_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_tmp_1_fu_95_p4);
    sensitive << ( data_V_read );

    SC_METHOD(thread_tmp_2_fu_171_p3);
    sensitive << ( index_fu_159_p2 );

    SC_METHOD(thread_tmp_3_fu_191_p4);
    sensitive << ( select_ln168_fu_179_p3 );

    SC_METHOD(thread_trunc_ln167_fu_155_p1);
    sensitive << ( select_ln850_fu_147_p3 );

    SC_METHOD(thread_trunc_ln168_fu_187_p1);
    sensitive << ( select_ln168_fu_179_p3 );

    SC_METHOD(thread_trunc_ln851_fu_115_p1);
    sensitive << ( data_V_read );

    SC_METHOD(thread_zext_ln170_fu_215_p1);
    sensitive << ( select_ln169_fu_207_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_reset_idle_pp0 );

    ap_CS_fsm = "1";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "sigmoid_ap_fixed_ap_fixed_activation_config_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, data_V_read, "(port)data_V_read");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_block_state1_pp0_stage0_iter0, "ap_block_state1_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter1, "ap_block_state2_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, sigmoid_table1_address0, "sigmoid_table1_address0");
    sc_trace(mVcdFile, sigmoid_table1_ce0, "sigmoid_table1_ce0");
    sc_trace(mVcdFile, sigmoid_table1_q0, "sigmoid_table1_q0");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, zext_ln170_fu_215_p1, "zext_ln170_fu_215_p1");
    sc_trace(mVcdFile, tmp_1_fu_95_p4, "tmp_1_fu_95_p4");
    sc_trace(mVcdFile, r_V_fu_87_p3, "r_V_fu_87_p3");
    sc_trace(mVcdFile, trunc_ln851_fu_115_p1, "trunc_ln851_fu_115_p1");
    sc_trace(mVcdFile, p_Result_2_fu_119_p3, "p_Result_2_fu_119_p3");
    sc_trace(mVcdFile, sext_ln835_fu_105_p1, "sext_ln835_fu_105_p1");
    sc_trace(mVcdFile, icmp_ln851_fu_127_p2, "icmp_ln851_fu_127_p2");
    sc_trace(mVcdFile, ret_V_fu_133_p2, "ret_V_fu_133_p2");
    sc_trace(mVcdFile, p_Result_s_fu_109_p2, "p_Result_s_fu_109_p2");
    sc_trace(mVcdFile, select_ln851_fu_139_p3, "select_ln851_fu_139_p3");
    sc_trace(mVcdFile, select_ln850_fu_147_p3, "select_ln850_fu_147_p3");
    sc_trace(mVcdFile, trunc_ln167_fu_155_p1, "trunc_ln167_fu_155_p1");
    sc_trace(mVcdFile, index_fu_159_p2, "index_fu_159_p2");
    sc_trace(mVcdFile, tmp_2_fu_171_p3, "tmp_2_fu_171_p3");
    sc_trace(mVcdFile, add_ln167_1_fu_165_p2, "add_ln167_1_fu_165_p2");
    sc_trace(mVcdFile, select_ln168_fu_179_p3, "select_ln168_fu_179_p3");
    sc_trace(mVcdFile, tmp_3_fu_191_p4, "tmp_3_fu_191_p4");
    sc_trace(mVcdFile, icmp_ln169_fu_201_p2, "icmp_ln169_fu_201_p2");
    sc_trace(mVcdFile, trunc_ln168_fu_187_p1, "trunc_ln168_fu_187_p1");
    sc_trace(mVcdFile, select_ln169_fu_207_p3, "select_ln169_fu_207_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0_0to0, "ap_idle_pp0_0to0");
    sc_trace(mVcdFile, ap_reset_idle_pp0, "ap_reset_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

sigmoid_ap_fixed_ap_fixed_activation_config_s::~sigmoid_ap_fixed_ap_fixed_activation_config_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete sigmoid_table1_U;
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        }
    }
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_add_ln167_1_fu_165_p2() {
    add_ln167_1_fu_165_p2 = (!ap_const_lv14_200.is_01() || !trunc_ln167_fu_155_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(ap_const_lv14_200) + sc_biguint<14>(trunc_ln167_fu_155_p1.read()));
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()));
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()));
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_idle_pp0_0to0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read())) {
        ap_idle_pp0_0to0 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to0 = ap_const_logic_0;
    }
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to0.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_return() {
    ap_return = sigmoid_table1_q0.read().range(9, 2);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_icmp_ln169_fu_201_p2() {
    icmp_ln169_fu_201_p2 = (!tmp_3_fu_191_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_191_p4.read() != ap_const_lv4_0);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_icmp_ln851_fu_127_p2() {
    icmp_ln851_fu_127_p2 = (!p_Result_2_fu_119_p3.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_2_fu_119_p3.read() == ap_const_lv8_0);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_index_fu_159_p2() {
    index_fu_159_p2 = (!ap_const_lv15_200.is_01() || !select_ln850_fu_147_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_200) + sc_biguint<15>(select_ln850_fu_147_p3.read()));
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_p_Result_2_fu_119_p3() {
    p_Result_2_fu_119_p3 = esl_concat<2,6>(trunc_ln851_fu_115_p1.read(), ap_const_lv6_0);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_p_Result_s_fu_109_p2() {
    p_Result_s_fu_109_p2 = (!r_V_fu_87_p3.read().is_01() || !ap_const_lv26_3FFFFF1.is_01())? sc_lv<1>(): (sc_bigint<26>(r_V_fu_87_p3.read()) < sc_bigint<26>(ap_const_lv26_3FFFFF1));
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_r_V_fu_87_p3() {
    r_V_fu_87_p3 = esl_concat<16,10>(data_V_read.read(), ap_const_lv10_0);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ret_V_fu_133_p2() {
    ret_V_fu_133_p2 = (!ap_const_lv15_1.is_01() || !sext_ln835_fu_105_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_1) + sc_bigint<15>(sext_ln835_fu_105_p1.read()));
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_select_ln168_fu_179_p3() {
    select_ln168_fu_179_p3 = (!tmp_2_fu_171_p3.read()[0].is_01())? sc_lv<14>(): ((tmp_2_fu_171_p3.read()[0].to_bool())? ap_const_lv14_0: add_ln167_1_fu_165_p2.read());
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_select_ln169_fu_207_p3() {
    select_ln169_fu_207_p3 = (!icmp_ln169_fu_201_p2.read()[0].is_01())? sc_lv<10>(): ((icmp_ln169_fu_201_p2.read()[0].to_bool())? ap_const_lv10_3FF: trunc_ln168_fu_187_p1.read());
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_select_ln850_fu_147_p3() {
    select_ln850_fu_147_p3 = (!p_Result_s_fu_109_p2.read()[0].is_01())? sc_lv<15>(): ((p_Result_s_fu_109_p2.read()[0].to_bool())? select_ln851_fu_139_p3.read(): sext_ln835_fu_105_p1.read());
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_select_ln851_fu_139_p3() {
    select_ln851_fu_139_p3 = (!icmp_ln851_fu_127_p2.read()[0].is_01())? sc_lv<15>(): ((icmp_ln851_fu_127_p2.read()[0].to_bool())? sext_ln835_fu_105_p1.read(): ret_V_fu_133_p2.read());
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_sext_ln835_fu_105_p1() {
    sext_ln835_fu_105_p1 = esl_sext<15,14>(tmp_1_fu_95_p4.read());
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_sigmoid_table1_address0() {
    sigmoid_table1_address0 =  (sc_lv<10>) (zext_ln170_fu_215_p1.read());
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_sigmoid_table1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sigmoid_table1_ce0 = ap_const_logic_1;
    } else {
        sigmoid_table1_ce0 = ap_const_logic_0;
    }
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_tmp_1_fu_95_p4() {
    tmp_1_fu_95_p4 = data_V_read.read().range(15, 2);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_tmp_2_fu_171_p3() {
    tmp_2_fu_171_p3 = index_fu_159_p2.read().range(14, 14);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_tmp_3_fu_191_p4() {
    tmp_3_fu_191_p4 = select_ln168_fu_179_p3.read().range(13, 10);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_trunc_ln167_fu_155_p1() {
    trunc_ln167_fu_155_p1 = select_ln850_fu_147_p3.read().range(14-1, 0);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_trunc_ln168_fu_187_p1() {
    trunc_ln168_fu_187_p1 = select_ln168_fu_179_p3.read().range(10-1, 0);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_trunc_ln851_fu_115_p1() {
    trunc_ln851_fu_115_p1 = data_V_read.read().range(2-1, 0);
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_zext_ln170_fu_215_p1() {
    zext_ln170_fu_215_p1 = esl_zext<64,10>(select_ln169_fu_207_p3.read());
}

void sigmoid_ap_fixed_ap_fixed_activation_config_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

