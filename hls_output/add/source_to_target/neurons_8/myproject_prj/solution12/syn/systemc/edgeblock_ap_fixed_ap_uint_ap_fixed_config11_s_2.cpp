#include "edgeblock_ap_fixed_ap_uint_ap_fixed_config11_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void edgeblock_ap_fixed_ap_uint_ap_fixed_config11_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln464_fu_4884_p2.read(), ap_const_lv1_1))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter10 = ap_enable_reg_pp1_iter9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter11 = ap_enable_reg_pp1_iter10.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
            ap_enable_reg_pp1_iter11 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter3 = ap_enable_reg_pp1_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter4 = ap_enable_reg_pp1_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter5 = ap_enable_reg_pp1_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter6 = ap_enable_reg_pp1_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter7 = ap_enable_reg_pp1_iter6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter8 = ap_enable_reg_pp1_iter7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter9 = ap_enable_reg_pp1_iter8.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4369_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4369_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4369_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4369_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4376_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4376_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4376_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4376_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4383_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4383_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4383_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4383_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4390_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4390_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4390_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4390_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4397_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4397_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4397_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4397_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4404_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4404_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4404_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4404_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4411_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4411_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4411_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4411_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4418_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4418_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4418_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4418_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4425_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4425_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4425_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4425_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4432_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4432_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4432_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4432_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4439_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4439_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4439_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4439_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4446_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4446_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4446_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4446_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4453_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_16495_pp1_iter8_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4453_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4453_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4453_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4460_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_16495_pp1_iter8_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4460_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4460_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4460_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4467_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_16495_pp1_iter8_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4467_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4467_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4467_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4474_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_16495_pp1_iter8_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4474_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4474_ap_ready.read())) {
            grp_sigmoid_ap_fixed_ap_fixed_activation_config_s_fu_4474_ap_start_reg = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        i7_0_i_0_reg_4134 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_fu_4884_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        i7_0_i_0_reg_4134 = add_ln464_fu_4890_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        indvars_iv1913_reg_4112 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln437_fu_4481_p2.read(), ap_const_lv1_0))) {
        indvars_iv1913_reg_4112 = add_ln437_2_fu_4487_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        j_0_i_0_reg_4123 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln437_fu_4481_p2.read(), ap_const_lv1_0))) {
        j_0_i_0_reg_4123 = add_ln437_fu_4555_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) {
        edge_update_0_V_11_reg_18074 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4173_ap_return.read();
        edge_update_0_V_12_reg_18079 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4187_ap_return.read();
        edge_update_0_V_13_reg_18084 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4201_ap_return.read();
        edge_update_0_V_14_reg_18089 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4215_ap_return.read();
        edge_update_0_V_15_reg_18094 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4229_ap_return.read();
        edge_update_0_V_16_reg_18099 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4243_ap_return.read();
        edge_update_0_V_17_reg_18104 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4257_ap_return.read();
        edge_update_0_V_18_reg_18109 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4271_ap_return.read();
        edge_update_0_V_19_reg_18114 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4285_ap_return.read();
        edge_update_0_V_20_reg_18119 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4299_ap_return.read();
        edge_update_0_V_21_reg_18069 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4159_ap_return.read();
        edge_update_0_V_reg_18064 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4145_ap_return.read();
        icmp_ln464_reg_16495_pp1_iter10_reg = icmp_ln464_reg_16495_pp1_iter9_reg.read();
        icmp_ln464_reg_16495_pp1_iter2_reg = icmp_ln464_reg_16495_pp1_iter1_reg.read();
        icmp_ln464_reg_16495_pp1_iter3_reg = icmp_ln464_reg_16495_pp1_iter2_reg.read();
        icmp_ln464_reg_16495_pp1_iter4_reg = icmp_ln464_reg_16495_pp1_iter3_reg.read();
        icmp_ln464_reg_16495_pp1_iter5_reg = icmp_ln464_reg_16495_pp1_iter4_reg.read();
        icmp_ln464_reg_16495_pp1_iter6_reg = icmp_ln464_reg_16495_pp1_iter5_reg.read();
        icmp_ln464_reg_16495_pp1_iter7_reg = icmp_ln464_reg_16495_pp1_iter6_reg.read();
        icmp_ln464_reg_16495_pp1_iter8_reg = icmp_ln464_reg_16495_pp1_iter7_reg.read();
        icmp_ln464_reg_16495_pp1_iter9_reg = icmp_ln464_reg_16495_pp1_iter8_reg.read();
        phi_input_0_V_31_reg_17619 = phi_input_0_V_31_fu_6432_p1.read();
        phi_input_0_V_32_reg_17649 = phi_input_0_V_32_fu_7070_p1.read();
        phi_input_0_V_33_reg_17679 = phi_input_0_V_33_fu_7708_p1.read();
        phi_input_0_V_34_reg_17709 = phi_input_0_V_34_fu_8346_p1.read();
        phi_input_0_V_35_reg_17739 = phi_input_0_V_35_fu_8984_p1.read();
        phi_input_0_V_36_reg_17769 = phi_input_0_V_36_fu_9622_p1.read();
        phi_input_0_V_37_reg_17799 = phi_input_0_V_37_fu_10260_p1.read();
        phi_input_0_V_38_reg_17829 = phi_input_0_V_38_fu_10898_p1.read();
        phi_input_0_V_39_reg_17859 = phi_input_0_V_39_fu_11536_p1.read();
        phi_input_0_V_40_reg_17889 = phi_input_0_V_40_fu_12174_p1.read();
        phi_input_0_V_41_reg_17919 = phi_input_0_V_41_fu_12812_p1.read();
        phi_input_0_V_reg_17589 = phi_input_0_V_fu_5794_p1.read();
        phi_input_1_V_31_reg_17629 = phi_input_1_V_31_fu_6636_p1.read();
        phi_input_1_V_32_reg_17659 = phi_input_1_V_32_fu_7274_p1.read();
        phi_input_1_V_33_reg_17689 = phi_input_1_V_33_fu_7912_p1.read();
        phi_input_1_V_34_reg_17719 = phi_input_1_V_34_fu_8550_p1.read();
        phi_input_1_V_35_reg_17749 = phi_input_1_V_35_fu_9188_p1.read();
        phi_input_1_V_36_reg_17779 = phi_input_1_V_36_fu_9826_p1.read();
        phi_input_1_V_37_reg_17809 = phi_input_1_V_37_fu_10464_p1.read();
        phi_input_1_V_38_reg_17839 = phi_input_1_V_38_fu_11102_p1.read();
        phi_input_1_V_39_reg_17869 = phi_input_1_V_39_fu_11740_p1.read();
        phi_input_1_V_40_reg_17899 = phi_input_1_V_40_fu_12378_p1.read();
        phi_input_1_V_41_reg_17929 = phi_input_1_V_41_fu_13016_p1.read();
        phi_input_1_V_reg_17599 = phi_input_1_V_fu_5998_p1.read();
        phi_input_2_V_31_reg_17639 = phi_input_2_V_31_fu_6840_p1.read();
        phi_input_2_V_32_reg_17669 = phi_input_2_V_32_fu_7478_p1.read();
        phi_input_2_V_33_reg_17699 = phi_input_2_V_33_fu_8116_p1.read();
        phi_input_2_V_34_reg_17729 = phi_input_2_V_34_fu_8754_p1.read();
        phi_input_2_V_35_reg_17759 = phi_input_2_V_35_fu_9392_p1.read();
        phi_input_2_V_36_reg_17789 = phi_input_2_V_36_fu_10030_p1.read();
        phi_input_2_V_37_reg_17819 = phi_input_2_V_37_fu_10668_p1.read();
        phi_input_2_V_38_reg_17849 = phi_input_2_V_38_fu_11306_p1.read();
        phi_input_2_V_39_reg_17879 = phi_input_2_V_39_fu_11944_p1.read();
        phi_input_2_V_40_reg_17909 = phi_input_2_V_40_fu_12582_p1.read();
        phi_input_2_V_41_reg_17939 = phi_input_2_V_41_fu_13220_p1.read();
        phi_input_2_V_reg_17609 = phi_input_2_V_fu_6202_p1.read();
        phi_input_3_V_31_reg_17614 = phi_input_3_V_31_fu_6317_p1.read();
        phi_input_3_V_32_reg_17644 = phi_input_3_V_32_fu_6955_p1.read();
        phi_input_3_V_33_reg_17674 = phi_input_3_V_33_fu_7593_p1.read();
        phi_input_3_V_34_reg_17704 = phi_input_3_V_34_fu_8231_p1.read();
        phi_input_3_V_35_reg_17734 = phi_input_3_V_35_fu_8869_p1.read();
        phi_input_3_V_36_reg_17764 = phi_input_3_V_36_fu_9507_p1.read();
        phi_input_3_V_37_reg_17794 = phi_input_3_V_37_fu_10145_p1.read();
        phi_input_3_V_38_reg_17824 = phi_input_3_V_38_fu_10783_p1.read();
        phi_input_3_V_39_reg_17854 = phi_input_3_V_39_fu_11421_p1.read();
        phi_input_3_V_40_reg_17884 = phi_input_3_V_40_fu_12059_p1.read();
        phi_input_3_V_41_reg_17914 = phi_input_3_V_41_fu_12697_p1.read();
        phi_input_3_V_reg_17584 = phi_input_3_V_fu_5679_p1.read();
        phi_input_4_V_31_reg_17624 = phi_input_4_V_31_fu_6534_p1.read();
        phi_input_4_V_32_reg_17654 = phi_input_4_V_32_fu_7172_p1.read();
        phi_input_4_V_33_reg_17684 = phi_input_4_V_33_fu_7810_p1.read();
        phi_input_4_V_34_reg_17714 = phi_input_4_V_34_fu_8448_p1.read();
        phi_input_4_V_35_reg_17744 = phi_input_4_V_35_fu_9086_p1.read();
        phi_input_4_V_36_reg_17774 = phi_input_4_V_36_fu_9724_p1.read();
        phi_input_4_V_37_reg_17804 = phi_input_4_V_37_fu_10362_p1.read();
        phi_input_4_V_38_reg_17834 = phi_input_4_V_38_fu_11000_p1.read();
        phi_input_4_V_39_reg_17864 = phi_input_4_V_39_fu_11638_p1.read();
        phi_input_4_V_40_reg_17894 = phi_input_4_V_40_fu_12276_p1.read();
        phi_input_4_V_41_reg_17924 = phi_input_4_V_41_fu_12914_p1.read();
        phi_input_4_V_reg_17594 = phi_input_4_V_fu_5896_p1.read();
        phi_input_5_V_31_reg_17634 = phi_input_5_V_31_fu_6738_p1.read();
        phi_input_5_V_32_reg_17664 = phi_input_5_V_32_fu_7376_p1.read();
        phi_input_5_V_33_reg_17694 = phi_input_5_V_33_fu_8014_p1.read();
        phi_input_5_V_34_reg_17724 = phi_input_5_V_34_fu_8652_p1.read();
        phi_input_5_V_35_reg_17754 = phi_input_5_V_35_fu_9290_p1.read();
        phi_input_5_V_36_reg_17784 = phi_input_5_V_36_fu_9928_p1.read();
        phi_input_5_V_37_reg_17814 = phi_input_5_V_37_fu_10566_p1.read();
        phi_input_5_V_38_reg_17844 = phi_input_5_V_38_fu_11204_p1.read();
        phi_input_5_V_39_reg_17874 = phi_input_5_V_39_fu_11842_p1.read();
        phi_input_5_V_40_reg_17904 = phi_input_5_V_40_fu_12480_p1.read();
        phi_input_5_V_41_reg_17934 = phi_input_5_V_41_fu_13118_p1.read();
        phi_input_5_V_reg_17604 = phi_input_5_V_fu_6100_p1.read();
        phi_input_6_V_31_reg_16684_pp1_iter2_reg = phi_input_6_V_31_reg_16684.read();
        phi_input_6_V_32_reg_16744_pp1_iter2_reg = phi_input_6_V_32_reg_16744.read();
        phi_input_6_V_33_reg_16804_pp1_iter2_reg = phi_input_6_V_33_reg_16804.read();
        phi_input_6_V_34_reg_16864_pp1_iter2_reg = phi_input_6_V_34_reg_16864.read();
        phi_input_6_V_35_reg_16924_pp1_iter2_reg = phi_input_6_V_35_reg_16924.read();
        phi_input_6_V_36_reg_16984_pp1_iter2_reg = phi_input_6_V_36_reg_16984.read();
        phi_input_6_V_37_reg_17044_pp1_iter2_reg = phi_input_6_V_37_reg_17044.read();
        phi_input_6_V_38_reg_17104_pp1_iter2_reg = phi_input_6_V_38_reg_17104.read();
        phi_input_6_V_39_reg_17164_pp1_iter2_reg = phi_input_6_V_39_reg_17164.read();
        phi_input_6_V_40_reg_17224_pp1_iter2_reg = phi_input_6_V_40_reg_17224.read();
        phi_input_6_V_41_reg_17284_pp1_iter2_reg = phi_input_6_V_41_reg_17284.read();
        phi_input_6_V_42_reg_17344_pp1_iter2_reg = phi_input_6_V_42_reg_17344.read();
        phi_input_6_V_43_reg_17404_pp1_iter2_reg = phi_input_6_V_43_reg_17404.read();
        phi_input_6_V_44_reg_17464_pp1_iter2_reg = phi_input_6_V_44_reg_17464.read();
        phi_input_6_V_45_reg_17524_pp1_iter2_reg = phi_input_6_V_45_reg_17524.read();
        phi_input_6_V_reg_16624_pp1_iter2_reg = phi_input_6_V_reg_16624.read();
        phi_input_7_V_16_reg_16689_pp1_iter2_reg = phi_input_7_V_16_reg_16689.read();
        phi_input_7_V_17_reg_16749_pp1_iter2_reg = phi_input_7_V_17_reg_16749.read();
        phi_input_7_V_18_reg_16809_pp1_iter2_reg = phi_input_7_V_18_reg_16809.read();
        phi_input_7_V_19_reg_16869_pp1_iter2_reg = phi_input_7_V_19_reg_16869.read();
        phi_input_7_V_20_reg_16929_pp1_iter2_reg = phi_input_7_V_20_reg_16929.read();
        phi_input_7_V_21_reg_16989_pp1_iter2_reg = phi_input_7_V_21_reg_16989.read();
        phi_input_7_V_22_reg_17049_pp1_iter2_reg = phi_input_7_V_22_reg_17049.read();
        phi_input_7_V_23_reg_17109_pp1_iter2_reg = phi_input_7_V_23_reg_17109.read();
        phi_input_7_V_24_reg_17169_pp1_iter2_reg = phi_input_7_V_24_reg_17169.read();
        phi_input_7_V_25_reg_17229_pp1_iter2_reg = phi_input_7_V_25_reg_17229.read();
        phi_input_7_V_26_reg_17289_pp1_iter2_reg = phi_input_7_V_26_reg_17289.read();
        phi_input_7_V_27_reg_17349_pp1_iter2_reg = phi_input_7_V_27_reg_17349.read();
        phi_input_7_V_28_reg_17409_pp1_iter2_reg = phi_input_7_V_28_reg_17409.read();
        phi_input_7_V_29_reg_17469_pp1_iter2_reg = phi_input_7_V_29_reg_17469.read();
        phi_input_7_V_30_reg_17529_pp1_iter2_reg = phi_input_7_V_30_reg_17529.read();
        phi_input_7_V_reg_16629_pp1_iter2_reg = phi_input_7_V_reg_16629.read();
        phi_input_8_V_16_reg_16694_pp1_iter2_reg = phi_input_8_V_16_reg_16694.read();
        phi_input_8_V_17_reg_16754_pp1_iter2_reg = phi_input_8_V_17_reg_16754.read();
        phi_input_8_V_18_reg_16814_pp1_iter2_reg = phi_input_8_V_18_reg_16814.read();
        phi_input_8_V_19_reg_16874_pp1_iter2_reg = phi_input_8_V_19_reg_16874.read();
        phi_input_8_V_20_reg_16934_pp1_iter2_reg = phi_input_8_V_20_reg_16934.read();
        phi_input_8_V_21_reg_16994_pp1_iter2_reg = phi_input_8_V_21_reg_16994.read();
        phi_input_8_V_22_reg_17054_pp1_iter2_reg = phi_input_8_V_22_reg_17054.read();
        phi_input_8_V_23_reg_17114_pp1_iter2_reg = phi_input_8_V_23_reg_17114.read();
        phi_input_8_V_24_reg_17174_pp1_iter2_reg = phi_input_8_V_24_reg_17174.read();
        phi_input_8_V_25_reg_17234_pp1_iter2_reg = phi_input_8_V_25_reg_17234.read();
        phi_input_8_V_26_reg_17294_pp1_iter2_reg = phi_input_8_V_26_reg_17294.read();
        phi_input_8_V_27_reg_17354_pp1_iter2_reg = phi_input_8_V_27_reg_17354.read();
        phi_input_8_V_28_reg_17414_pp1_iter2_reg = phi_input_8_V_28_reg_17414.read();
        phi_input_8_V_29_reg_17474_pp1_iter2_reg = phi_input_8_V_29_reg_17474.read();
        phi_input_8_V_30_reg_17534_pp1_iter2_reg = phi_input_8_V_30_reg_17534.read();
        phi_input_8_V_reg_16634_pp1_iter2_reg = phi_input_8_V_reg_16634.read();
        phi_input_9_V_16_reg_16699_pp1_iter2_reg = phi_input_9_V_16_reg_16699.read();
        phi_input_9_V_17_reg_16759_pp1_iter2_reg = phi_input_9_V_17_reg_16759.read();
        phi_input_9_V_18_reg_16819_pp1_iter2_reg = phi_input_9_V_18_reg_16819.read();
        phi_input_9_V_19_reg_16879_pp1_iter2_reg = phi_input_9_V_19_reg_16879.read();
        phi_input_9_V_20_reg_16939_pp1_iter2_reg = phi_input_9_V_20_reg_16939.read();
        phi_input_9_V_21_reg_16999_pp1_iter2_reg = phi_input_9_V_21_reg_16999.read();
        phi_input_9_V_22_reg_17059_pp1_iter2_reg = phi_input_9_V_22_reg_17059.read();
        phi_input_9_V_23_reg_17119_pp1_iter2_reg = phi_input_9_V_23_reg_17119.read();
        phi_input_9_V_24_reg_17179_pp1_iter2_reg = phi_input_9_V_24_reg_17179.read();
        phi_input_9_V_25_reg_17239_pp1_iter2_reg = phi_input_9_V_25_reg_17239.read();
        phi_input_9_V_26_reg_17299_pp1_iter2_reg = phi_input_9_V_26_reg_17299.read();
        phi_input_9_V_27_reg_17359_pp1_iter2_reg = phi_input_9_V_27_reg_17359.read();
        phi_input_9_V_28_reg_17419_pp1_iter2_reg = phi_input_9_V_28_reg_17419.read();
        phi_input_9_V_29_reg_17479_pp1_iter2_reg = phi_input_9_V_29_reg_17479.read();
        phi_input_9_V_30_reg_17539_pp1_iter2_reg = phi_input_9_V_30_reg_17539.read();
        phi_input_9_V_reg_16639_pp1_iter2_reg = phi_input_9_V_reg_16639.read();
        zext_ln203_reg_16115_pp1_iter10_reg = zext_ln203_reg_16115_pp1_iter9_reg.read();
        zext_ln203_reg_16115_pp1_iter2_reg = zext_ln203_reg_16115_pp1_iter1_reg.read();
        zext_ln203_reg_16115_pp1_iter3_reg = zext_ln203_reg_16115_pp1_iter2_reg.read();
        zext_ln203_reg_16115_pp1_iter4_reg = zext_ln203_reg_16115_pp1_iter3_reg.read();
        zext_ln203_reg_16115_pp1_iter5_reg = zext_ln203_reg_16115_pp1_iter4_reg.read();
        zext_ln203_reg_16115_pp1_iter6_reg = zext_ln203_reg_16115_pp1_iter5_reg.read();
        zext_ln203_reg_16115_pp1_iter7_reg = zext_ln203_reg_16115_pp1_iter6_reg.read();
        zext_ln203_reg_16115_pp1_iter8_reg = zext_ln203_reg_16115_pp1_iter7_reg.read();
        zext_ln203_reg_16115_pp1_iter9_reg = zext_ln203_reg_16115_pp1_iter8_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_16495_pp1_iter8_reg.read()))) {
        edge_update_0_V_22_reg_18124 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4313_ap_return.read();
        edge_update_0_V_23_reg_18129 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4327_ap_return.read();
        edge_update_0_V_24_reg_18134 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4341_ap_return.read();
        edge_update_0_V_25_reg_18139 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_config11_s_fu_4355_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        empty_102_reg_16649 = empty_102_fu_4913_p1.read();
        empty_104_reg_16659 = empty_104_fu_4934_p1.read();
        empty_107_reg_16709 = empty_107_fu_4955_p1.read();
        empty_109_reg_16719 = empty_109_fu_4976_p1.read();
        empty_111_reg_16769 = empty_111_fu_4997_p1.read();
        empty_113_reg_16779 = empty_113_fu_5018_p1.read();
        empty_115_reg_16829 = empty_115_fu_5039_p1.read();
        empty_117_reg_16839 = empty_117_fu_5060_p1.read();
        empty_119_reg_16889 = empty_119_fu_5081_p1.read();
        empty_121_reg_16899 = empty_121_fu_5102_p1.read();
        empty_123_reg_16949 = empty_123_fu_5123_p1.read();
        empty_125_reg_16959 = empty_125_fu_5144_p1.read();
        empty_127_reg_17009 = empty_127_fu_5165_p1.read();
        empty_129_reg_17019 = empty_129_fu_5186_p1.read();
        empty_131_reg_17069 = empty_131_fu_5207_p1.read();
        empty_133_reg_17079 = empty_133_fu_5228_p1.read();
        empty_135_reg_17129 = empty_135_fu_5249_p1.read();
        empty_137_reg_17139 = empty_137_fu_5270_p1.read();
        empty_139_reg_17189 = empty_139_fu_5291_p1.read();
        empty_141_reg_17199 = empty_141_fu_5312_p1.read();
        empty_143_reg_17249 = empty_143_fu_5333_p1.read();
        empty_145_reg_17259 = empty_145_fu_5354_p1.read();
        empty_147_reg_17309 = empty_147_fu_5375_p1.read();
        empty_149_reg_17319 = empty_149_fu_5396_p1.read();
        icmp_ln464_reg_16495 = icmp_ln464_fu_4884_p2.read();
        icmp_ln464_reg_16495_pp1_iter1_reg = icmp_ln464_reg_16495.read();
        phi_input_6_V_31_reg_16684 = edge_attr_1D_4_V_q0.read();
        phi_input_6_V_32_reg_16744 = edge_attr_1D_8_V_q0.read();
        phi_input_6_V_33_reg_16804 = edge_attr_1D_12_V_q0.read();
        phi_input_6_V_34_reg_16864 = edge_attr_1D_16_V_q0.read();
        phi_input_6_V_35_reg_16924 = edge_attr_1D_20_V_q0.read();
        phi_input_6_V_36_reg_16984 = edge_attr_1D_24_V_q0.read();
        phi_input_6_V_37_reg_17044 = edge_attr_1D_28_V_q0.read();
        phi_input_6_V_38_reg_17104 = edge_attr_1D_32_V_q0.read();
        phi_input_6_V_39_reg_17164 = edge_attr_1D_36_V_q0.read();
        phi_input_6_V_40_reg_17224 = edge_attr_1D_40_V_q0.read();
        phi_input_6_V_41_reg_17284 = edge_attr_1D_44_V_q0.read();
        phi_input_6_V_reg_16624 = edge_attr_1D_0_V_q0.read();
        phi_input_7_V_16_reg_16689 = edge_attr_1D_5_V_q0.read();
        phi_input_7_V_17_reg_16749 = edge_attr_1D_9_V_q0.read();
        phi_input_7_V_18_reg_16809 = edge_attr_1D_13_V_q0.read();
        phi_input_7_V_19_reg_16869 = edge_attr_1D_17_V_q0.read();
        phi_input_7_V_20_reg_16929 = edge_attr_1D_21_V_q0.read();
        phi_input_7_V_21_reg_16989 = edge_attr_1D_25_V_q0.read();
        phi_input_7_V_22_reg_17049 = edge_attr_1D_29_V_q0.read();
        phi_input_7_V_23_reg_17109 = edge_attr_1D_33_V_q0.read();
        phi_input_7_V_24_reg_17169 = edge_attr_1D_37_V_q0.read();
        phi_input_7_V_25_reg_17229 = edge_attr_1D_41_V_q0.read();
        phi_input_7_V_26_reg_17289 = edge_attr_1D_45_V_q0.read();
        phi_input_7_V_reg_16629 = edge_attr_1D_1_V_q0.read();
        phi_input_8_V_16_reg_16694 = edge_attr_1D_6_V_q0.read();
        phi_input_8_V_17_reg_16754 = edge_attr_1D_10_V_q0.read();
        phi_input_8_V_18_reg_16814 = edge_attr_1D_14_V_q0.read();
        phi_input_8_V_19_reg_16874 = edge_attr_1D_18_V_q0.read();
        phi_input_8_V_20_reg_16934 = edge_attr_1D_22_V_q0.read();
        phi_input_8_V_21_reg_16994 = edge_attr_1D_26_V_q0.read();
        phi_input_8_V_22_reg_17054 = edge_attr_1D_30_V_q0.read();
        phi_input_8_V_23_reg_17114 = edge_attr_1D_34_V_q0.read();
        phi_input_8_V_24_reg_17174 = edge_attr_1D_38_V_q0.read();
        phi_input_8_V_25_reg_17234 = edge_attr_1D_42_V_q0.read();
        phi_input_8_V_26_reg_17294 = edge_attr_1D_46_V_q0.read();
        phi_input_8_V_reg_16634 = edge_attr_1D_2_V_q0.read();
        phi_input_9_V_16_reg_16699 = edge_attr_1D_7_V_q0.read();
        phi_input_9_V_17_reg_16759 = edge_attr_1D_11_V_q0.read();
        phi_input_9_V_18_reg_16819 = edge_attr_1D_15_V_q0.read();
        phi_input_9_V_19_reg_16879 = edge_attr_1D_19_V_q0.read();
        phi_input_9_V_20_reg_16939 = edge_attr_1D_23_V_q0.read();
        phi_input_9_V_21_reg_16999 = edge_attr_1D_27_V_q0.read();
        phi_input_9_V_22_reg_17059 = edge_attr_1D_31_V_q0.read();
        phi_input_9_V_23_reg_17119 = edge_attr_1D_35_V_q0.read();
        phi_input_9_V_24_reg_17179 = edge_attr_1D_39_V_q0.read();
        phi_input_9_V_25_reg_17239 = edge_attr_1D_43_V_q0.read();
        phi_input_9_V_26_reg_17299 = edge_attr_1D_47_V_q0.read();
        phi_input_9_V_reg_16639 = edge_attr_1D_3_V_q0.read();
        zext_ln203_reg_16115 = zext_ln203_fu_4778_p1.read();
        zext_ln203_reg_16115_pp1_iter1_reg = zext_ln203_reg_16115.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_16495.read()))) {
        empty_152_reg_17369 = empty_152_fu_5417_p1.read();
        empty_154_reg_17379 = empty_154_fu_5438_p1.read();
        empty_156_reg_17429 = empty_156_fu_5459_p1.read();
        empty_158_reg_17439 = empty_158_fu_5480_p1.read();
        empty_160_reg_17489 = empty_160_fu_5501_p1.read();
        empty_162_reg_17499 = empty_162_fu_5522_p1.read();
        empty_164_reg_17549 = empty_164_fu_5543_p1.read();
        empty_166_reg_17559 = empty_166_fu_5564_p1.read();
        phi_input_6_V_42_reg_17344 = edge_attr_1D_48_V_q0.read();
        phi_input_6_V_43_reg_17404 = edge_attr_1D_52_V_q0.read();
        phi_input_6_V_44_reg_17464 = edge_attr_1D_56_V_q0.read();
        phi_input_6_V_45_reg_17524 = edge_attr_1D_60_V_q0.read();
        phi_input_7_V_27_reg_17349 = edge_attr_1D_49_V_q0.read();
        phi_input_7_V_28_reg_17409 = edge_attr_1D_53_V_q0.read();
        phi_input_7_V_29_reg_17469 = edge_attr_1D_57_V_q0.read();
        phi_input_7_V_30_reg_17529 = edge_attr_1D_61_V_q0.read();
        phi_input_8_V_27_reg_17354 = edge_attr_1D_50_V_q0.read();
        phi_input_8_V_28_reg_17414 = edge_attr_1D_54_V_q0.read();
        phi_input_8_V_29_reg_17474 = edge_attr_1D_58_V_q0.read();
        phi_input_8_V_30_reg_17534 = edge_attr_1D_62_V_q0.read();
        phi_input_9_V_27_reg_17359 = edge_attr_1D_51_V_q0.read();
        phi_input_9_V_28_reg_17419 = edge_attr_1D_55_V_q0.read();
        phi_input_9_V_29_reg_17479 = edge_attr_1D_59_V_q0.read();
        phi_input_9_V_30_reg_17539 = edge_attr_1D_63_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln437_reg_15856 = icmp_ln437_fu_4481_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln437_fu_4481_p2.read(), ap_const_lv1_0))) {
        lshr_ln203_s_reg_15870 = j_0_i_0_reg_4123.read().range(6, 4);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_16495_pp1_iter1_reg.read()))) {
        phi_input_0_V_42_reg_17949 = phi_input_0_V_42_fu_13450_p1.read();
        phi_input_0_V_43_reg_17979 = phi_input_0_V_43_fu_14088_p1.read();
        phi_input_0_V_44_reg_18009 = phi_input_0_V_44_fu_14726_p1.read();
        phi_input_0_V_45_reg_18039 = phi_input_0_V_45_fu_15364_p1.read();
        phi_input_1_V_42_reg_17959 = phi_input_1_V_42_fu_13654_p1.read();
        phi_input_1_V_43_reg_17989 = phi_input_1_V_43_fu_14292_p1.read();
        phi_input_1_V_44_reg_18019 = phi_input_1_V_44_fu_14930_p1.read();
        phi_input_1_V_45_reg_18049 = phi_input_1_V_45_fu_15568_p1.read();
        phi_input_2_V_42_reg_17969 = phi_input_2_V_42_fu_13858_p1.read();
        phi_input_2_V_43_reg_17999 = phi_input_2_V_43_fu_14496_p1.read();
        phi_input_2_V_44_reg_18029 = phi_input_2_V_44_fu_15134_p1.read();
        phi_input_2_V_45_reg_18059 = phi_input_2_V_45_fu_15772_p1.read();
        phi_input_3_V_42_reg_17944 = phi_input_3_V_42_fu_13335_p1.read();
        phi_input_3_V_43_reg_17974 = phi_input_3_V_43_fu_13973_p1.read();
        phi_input_3_V_44_reg_18004 = phi_input_3_V_44_fu_14611_p1.read();
        phi_input_3_V_45_reg_18034 = phi_input_3_V_45_fu_15249_p1.read();
        phi_input_4_V_42_reg_17954 = phi_input_4_V_42_fu_13552_p1.read();
        phi_input_4_V_43_reg_17984 = phi_input_4_V_43_fu_14190_p1.read();
        phi_input_4_V_44_reg_18014 = phi_input_4_V_44_fu_14828_p1.read();
        phi_input_4_V_45_reg_18044 = phi_input_4_V_45_fu_15466_p1.read();
        phi_input_5_V_42_reg_17964 = phi_input_5_V_42_fu_13756_p1.read();
        phi_input_5_V_43_reg_17994 = phi_input_5_V_43_fu_14394_p1.read();
        phi_input_5_V_44_reg_18024 = phi_input_5_V_44_fu_15032_p1.read();
        phi_input_5_V_45_reg_18054 = phi_input_5_V_45_fu_15670_p1.read();
    }
}

void edgeblock_ap_fixed_ap_uint_ap_fixed_config11_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln437_fu_4481_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln437_fu_4481_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            break;
        case 8 : 
            if (!(esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter10.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter10.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state17;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

