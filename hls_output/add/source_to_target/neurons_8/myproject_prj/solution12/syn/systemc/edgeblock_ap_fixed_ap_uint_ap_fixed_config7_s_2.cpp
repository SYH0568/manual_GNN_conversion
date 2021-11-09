#include "edgeblock_ap_fixed_ap_uint_ap_fixed_config7_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void edgeblock_ap_fixed_ap_uint_ap_fixed_config7_s::thread_ap_clk_no_reset_() {
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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
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
             esl_seteq<1,1,1>(icmp_ln464_fu_5488_p2.read(), ap_const_lv1_1))) {
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
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter12 = ap_enable_reg_pp1_iter11.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
            ap_enable_reg_pp1_iter12 = ap_const_logic_0;
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        i7_0_i_0_reg_4850 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_fu_5488_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        i7_0_i_0_reg_4850 = add_ln464_fu_5494_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        indvars_iv2201_reg_4828 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln437_fu_5085_p2.read(), ap_const_lv1_0))) {
        indvars_iv2201_reg_4828 = add_ln437_1_fu_5091_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        j_0_i_0_reg_4839 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln437_fu_5085_p2.read(), ap_const_lv1_0))) {
        j_0_i_0_reg_4839 = add_ln437_fu_5159_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) {
        edge_update_0_V_10_reg_19112 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5015_ap_return_0.read();
        edge_update_0_V_11_reg_19092 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5001_ap_return_0.read();
        edge_update_0_V_1_reg_18912 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4875_ap_return_0.read();
        edge_update_0_V_2_reg_18932 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4889_ap_return_0.read();
        edge_update_0_V_3_reg_18952 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4903_ap_return_0.read();
        edge_update_0_V_4_reg_18972 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4917_ap_return_0.read();
        edge_update_0_V_5_reg_18992 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4931_ap_return_0.read();
        edge_update_0_V_6_reg_19012 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4945_ap_return_0.read();
        edge_update_0_V_7_reg_19032 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4959_ap_return_0.read();
        edge_update_0_V_8_reg_19052 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4973_ap_return_0.read();
        edge_update_0_V_9_reg_19072 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4987_ap_return_0.read();
        edge_update_0_V_reg_18892 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4861_ap_return_0.read();
        edge_update_1_V_10_reg_19117 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5015_ap_return_1.read();
        edge_update_1_V_11_reg_19097 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5001_ap_return_1.read();
        edge_update_1_V_1_reg_18917 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4875_ap_return_1.read();
        edge_update_1_V_2_reg_18937 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4889_ap_return_1.read();
        edge_update_1_V_3_reg_18957 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4903_ap_return_1.read();
        edge_update_1_V_4_reg_18977 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4917_ap_return_1.read();
        edge_update_1_V_5_reg_18997 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4931_ap_return_1.read();
        edge_update_1_V_6_reg_19017 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4945_ap_return_1.read();
        edge_update_1_V_7_reg_19037 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4959_ap_return_1.read();
        edge_update_1_V_8_reg_19057 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4973_ap_return_1.read();
        edge_update_1_V_9_reg_19077 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4987_ap_return_1.read();
        edge_update_1_V_reg_18897 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4861_ap_return_1.read();
        edge_update_2_V_10_reg_19122 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5015_ap_return_2.read();
        edge_update_2_V_11_reg_19102 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5001_ap_return_2.read();
        edge_update_2_V_1_reg_18922 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4875_ap_return_2.read();
        edge_update_2_V_2_reg_18942 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4889_ap_return_2.read();
        edge_update_2_V_3_reg_18962 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4903_ap_return_2.read();
        edge_update_2_V_4_reg_18982 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4917_ap_return_2.read();
        edge_update_2_V_5_reg_19002 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4931_ap_return_2.read();
        edge_update_2_V_6_reg_19022 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4945_ap_return_2.read();
        edge_update_2_V_7_reg_19042 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4959_ap_return_2.read();
        edge_update_2_V_8_reg_19062 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4973_ap_return_2.read();
        edge_update_2_V_9_reg_19082 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4987_ap_return_2.read();
        edge_update_2_V_reg_18902 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4861_ap_return_2.read();
        edge_update_3_V_10_reg_19127 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5015_ap_return_3.read();
        edge_update_3_V_11_reg_19107 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5001_ap_return_3.read();
        edge_update_3_V_1_reg_18927 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4875_ap_return_3.read();
        edge_update_3_V_2_reg_18947 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4889_ap_return_3.read();
        edge_update_3_V_3_reg_18967 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4903_ap_return_3.read();
        edge_update_3_V_4_reg_18987 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4917_ap_return_3.read();
        edge_update_3_V_5_reg_19007 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4931_ap_return_3.read();
        edge_update_3_V_6_reg_19027 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4945_ap_return_3.read();
        edge_update_3_V_7_reg_19047 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4959_ap_return_3.read();
        edge_update_3_V_8_reg_19067 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4973_ap_return_3.read();
        edge_update_3_V_9_reg_19087 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4987_ap_return_3.read();
        edge_update_3_V_reg_18907 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_4861_ap_return_3.read();
        icmp_ln464_reg_17323_pp1_iter10_reg = icmp_ln464_reg_17323_pp1_iter9_reg.read();
        icmp_ln464_reg_17323_pp1_iter11_reg = icmp_ln464_reg_17323_pp1_iter10_reg.read();
        icmp_ln464_reg_17323_pp1_iter2_reg = icmp_ln464_reg_17323_pp1_iter1_reg.read();
        icmp_ln464_reg_17323_pp1_iter3_reg = icmp_ln464_reg_17323_pp1_iter2_reg.read();
        icmp_ln464_reg_17323_pp1_iter4_reg = icmp_ln464_reg_17323_pp1_iter3_reg.read();
        icmp_ln464_reg_17323_pp1_iter5_reg = icmp_ln464_reg_17323_pp1_iter4_reg.read();
        icmp_ln464_reg_17323_pp1_iter6_reg = icmp_ln464_reg_17323_pp1_iter5_reg.read();
        icmp_ln464_reg_17323_pp1_iter7_reg = icmp_ln464_reg_17323_pp1_iter6_reg.read();
        icmp_ln464_reg_17323_pp1_iter8_reg = icmp_ln464_reg_17323_pp1_iter7_reg.read();
        icmp_ln464_reg_17323_pp1_iter9_reg = icmp_ln464_reg_17323_pp1_iter8_reg.read();
        phi_input_0_V_16_reg_18447 = phi_input_0_V_16_fu_7036_p1.read();
        phi_input_0_V_17_reg_18477 = phi_input_0_V_17_fu_7674_p1.read();
        phi_input_0_V_18_reg_18507 = phi_input_0_V_18_fu_8312_p1.read();
        phi_input_0_V_19_reg_18537 = phi_input_0_V_19_fu_8950_p1.read();
        phi_input_0_V_20_reg_18567 = phi_input_0_V_20_fu_9588_p1.read();
        phi_input_0_V_21_reg_18597 = phi_input_0_V_21_fu_10226_p1.read();
        phi_input_0_V_22_reg_18627 = phi_input_0_V_22_fu_10864_p1.read();
        phi_input_0_V_23_reg_18657 = phi_input_0_V_23_fu_11502_p1.read();
        phi_input_0_V_24_reg_18687 = phi_input_0_V_24_fu_12140_p1.read();
        phi_input_0_V_25_reg_18717 = phi_input_0_V_25_fu_12778_p1.read();
        phi_input_0_V_26_reg_18747 = phi_input_0_V_26_fu_13416_p1.read();
        phi_input_0_V_reg_18417 = phi_input_0_V_fu_6398_p1.read();
        phi_input_1_V_16_reg_18457 = phi_input_1_V_16_fu_7240_p1.read();
        phi_input_1_V_17_reg_18487 = phi_input_1_V_17_fu_7878_p1.read();
        phi_input_1_V_18_reg_18517 = phi_input_1_V_18_fu_8516_p1.read();
        phi_input_1_V_19_reg_18547 = phi_input_1_V_19_fu_9154_p1.read();
        phi_input_1_V_20_reg_18577 = phi_input_1_V_20_fu_9792_p1.read();
        phi_input_1_V_21_reg_18607 = phi_input_1_V_21_fu_10430_p1.read();
        phi_input_1_V_22_reg_18637 = phi_input_1_V_22_fu_11068_p1.read();
        phi_input_1_V_23_reg_18667 = phi_input_1_V_23_fu_11706_p1.read();
        phi_input_1_V_24_reg_18697 = phi_input_1_V_24_fu_12344_p1.read();
        phi_input_1_V_25_reg_18727 = phi_input_1_V_25_fu_12982_p1.read();
        phi_input_1_V_26_reg_18757 = phi_input_1_V_26_fu_13620_p1.read();
        phi_input_1_V_reg_18427 = phi_input_1_V_fu_6602_p1.read();
        phi_input_2_V_16_reg_18467 = phi_input_2_V_16_fu_7444_p1.read();
        phi_input_2_V_17_reg_18497 = phi_input_2_V_17_fu_8082_p1.read();
        phi_input_2_V_18_reg_18527 = phi_input_2_V_18_fu_8720_p1.read();
        phi_input_2_V_19_reg_18557 = phi_input_2_V_19_fu_9358_p1.read();
        phi_input_2_V_20_reg_18587 = phi_input_2_V_20_fu_9996_p1.read();
        phi_input_2_V_21_reg_18617 = phi_input_2_V_21_fu_10634_p1.read();
        phi_input_2_V_22_reg_18647 = phi_input_2_V_22_fu_11272_p1.read();
        phi_input_2_V_23_reg_18677 = phi_input_2_V_23_fu_11910_p1.read();
        phi_input_2_V_24_reg_18707 = phi_input_2_V_24_fu_12548_p1.read();
        phi_input_2_V_25_reg_18737 = phi_input_2_V_25_fu_13186_p1.read();
        phi_input_2_V_26_reg_18767 = phi_input_2_V_26_fu_13824_p1.read();
        phi_input_2_V_reg_18437 = phi_input_2_V_fu_6806_p1.read();
        phi_input_3_V_16_reg_18442 = phi_input_3_V_16_fu_6921_p1.read();
        phi_input_3_V_17_reg_18472 = phi_input_3_V_17_fu_7559_p1.read();
        phi_input_3_V_18_reg_18502 = phi_input_3_V_18_fu_8197_p1.read();
        phi_input_3_V_19_reg_18532 = phi_input_3_V_19_fu_8835_p1.read();
        phi_input_3_V_20_reg_18562 = phi_input_3_V_20_fu_9473_p1.read();
        phi_input_3_V_21_reg_18592 = phi_input_3_V_21_fu_10111_p1.read();
        phi_input_3_V_22_reg_18622 = phi_input_3_V_22_fu_10749_p1.read();
        phi_input_3_V_23_reg_18652 = phi_input_3_V_23_fu_11387_p1.read();
        phi_input_3_V_24_reg_18682 = phi_input_3_V_24_fu_12025_p1.read();
        phi_input_3_V_25_reg_18712 = phi_input_3_V_25_fu_12663_p1.read();
        phi_input_3_V_26_reg_18742 = phi_input_3_V_26_fu_13301_p1.read();
        phi_input_3_V_reg_18412 = phi_input_3_V_fu_6283_p1.read();
        phi_input_4_V_16_reg_18452 = phi_input_4_V_16_fu_7138_p1.read();
        phi_input_4_V_17_reg_18482 = phi_input_4_V_17_fu_7776_p1.read();
        phi_input_4_V_18_reg_18512 = phi_input_4_V_18_fu_8414_p1.read();
        phi_input_4_V_19_reg_18542 = phi_input_4_V_19_fu_9052_p1.read();
        phi_input_4_V_20_reg_18572 = phi_input_4_V_20_fu_9690_p1.read();
        phi_input_4_V_21_reg_18602 = phi_input_4_V_21_fu_10328_p1.read();
        phi_input_4_V_22_reg_18632 = phi_input_4_V_22_fu_10966_p1.read();
        phi_input_4_V_23_reg_18662 = phi_input_4_V_23_fu_11604_p1.read();
        phi_input_4_V_24_reg_18692 = phi_input_4_V_24_fu_12242_p1.read();
        phi_input_4_V_25_reg_18722 = phi_input_4_V_25_fu_12880_p1.read();
        phi_input_4_V_26_reg_18752 = phi_input_4_V_26_fu_13518_p1.read();
        phi_input_4_V_reg_18422 = phi_input_4_V_fu_6500_p1.read();
        phi_input_5_V_16_reg_18462 = phi_input_5_V_16_fu_7342_p1.read();
        phi_input_5_V_17_reg_18492 = phi_input_5_V_17_fu_7980_p1.read();
        phi_input_5_V_18_reg_18522 = phi_input_5_V_18_fu_8618_p1.read();
        phi_input_5_V_19_reg_18552 = phi_input_5_V_19_fu_9256_p1.read();
        phi_input_5_V_20_reg_18582 = phi_input_5_V_20_fu_9894_p1.read();
        phi_input_5_V_21_reg_18612 = phi_input_5_V_21_fu_10532_p1.read();
        phi_input_5_V_22_reg_18642 = phi_input_5_V_22_fu_11170_p1.read();
        phi_input_5_V_23_reg_18672 = phi_input_5_V_23_fu_11808_p1.read();
        phi_input_5_V_24_reg_18702 = phi_input_5_V_24_fu_12446_p1.read();
        phi_input_5_V_25_reg_18732 = phi_input_5_V_25_fu_13084_p1.read();
        phi_input_5_V_26_reg_18762 = phi_input_5_V_26_fu_13722_p1.read();
        phi_input_5_V_reg_18432 = phi_input_5_V_fu_6704_p1.read();
        phi_input_6_V_16_reg_17512_pp1_iter2_reg = phi_input_6_V_16_reg_17512.read();
        phi_input_6_V_17_reg_17572_pp1_iter2_reg = phi_input_6_V_17_reg_17572.read();
        phi_input_6_V_18_reg_17632_pp1_iter2_reg = phi_input_6_V_18_reg_17632.read();
        phi_input_6_V_19_reg_17692_pp1_iter2_reg = phi_input_6_V_19_reg_17692.read();
        phi_input_6_V_20_reg_17752_pp1_iter2_reg = phi_input_6_V_20_reg_17752.read();
        phi_input_6_V_21_reg_17812_pp1_iter2_reg = phi_input_6_V_21_reg_17812.read();
        phi_input_6_V_22_reg_17872_pp1_iter2_reg = phi_input_6_V_22_reg_17872.read();
        phi_input_6_V_23_reg_17932_pp1_iter2_reg = phi_input_6_V_23_reg_17932.read();
        phi_input_6_V_24_reg_17992_pp1_iter2_reg = phi_input_6_V_24_reg_17992.read();
        phi_input_6_V_25_reg_18052_pp1_iter2_reg = phi_input_6_V_25_reg_18052.read();
        phi_input_6_V_26_reg_18112_pp1_iter2_reg = phi_input_6_V_26_reg_18112.read();
        phi_input_6_V_27_reg_18172_pp1_iter2_reg = phi_input_6_V_27_reg_18172.read();
        phi_input_6_V_28_reg_18232_pp1_iter2_reg = phi_input_6_V_28_reg_18232.read();
        phi_input_6_V_29_reg_18292_pp1_iter2_reg = phi_input_6_V_29_reg_18292.read();
        phi_input_6_V_30_reg_18352_pp1_iter2_reg = phi_input_6_V_30_reg_18352.read();
        phi_input_6_V_reg_17452_pp1_iter2_reg = phi_input_6_V_reg_17452.read();
        phi_input_7_V_10_reg_18057_pp1_iter2_reg = phi_input_7_V_10_reg_18057.read();
        phi_input_7_V_11_reg_18117_pp1_iter2_reg = phi_input_7_V_11_reg_18117.read();
        phi_input_7_V_12_reg_18177_pp1_iter2_reg = phi_input_7_V_12_reg_18177.read();
        phi_input_7_V_13_reg_18237_pp1_iter2_reg = phi_input_7_V_13_reg_18237.read();
        phi_input_7_V_14_reg_18297_pp1_iter2_reg = phi_input_7_V_14_reg_18297.read();
        phi_input_7_V_15_reg_18357_pp1_iter2_reg = phi_input_7_V_15_reg_18357.read();
        phi_input_7_V_1_reg_17517_pp1_iter2_reg = phi_input_7_V_1_reg_17517.read();
        phi_input_7_V_2_reg_17577_pp1_iter2_reg = phi_input_7_V_2_reg_17577.read();
        phi_input_7_V_3_reg_17637_pp1_iter2_reg = phi_input_7_V_3_reg_17637.read();
        phi_input_7_V_4_reg_17697_pp1_iter2_reg = phi_input_7_V_4_reg_17697.read();
        phi_input_7_V_5_reg_17757_pp1_iter2_reg = phi_input_7_V_5_reg_17757.read();
        phi_input_7_V_6_reg_17817_pp1_iter2_reg = phi_input_7_V_6_reg_17817.read();
        phi_input_7_V_7_reg_17877_pp1_iter2_reg = phi_input_7_V_7_reg_17877.read();
        phi_input_7_V_8_reg_17937_pp1_iter2_reg = phi_input_7_V_8_reg_17937.read();
        phi_input_7_V_9_reg_17997_pp1_iter2_reg = phi_input_7_V_9_reg_17997.read();
        phi_input_7_V_reg_17457_pp1_iter2_reg = phi_input_7_V_reg_17457.read();
        phi_input_8_V_10_reg_18062_pp1_iter2_reg = phi_input_8_V_10_reg_18062.read();
        phi_input_8_V_11_reg_18122_pp1_iter2_reg = phi_input_8_V_11_reg_18122.read();
        phi_input_8_V_12_reg_18182_pp1_iter2_reg = phi_input_8_V_12_reg_18182.read();
        phi_input_8_V_13_reg_18242_pp1_iter2_reg = phi_input_8_V_13_reg_18242.read();
        phi_input_8_V_14_reg_18302_pp1_iter2_reg = phi_input_8_V_14_reg_18302.read();
        phi_input_8_V_15_reg_18362_pp1_iter2_reg = phi_input_8_V_15_reg_18362.read();
        phi_input_8_V_1_reg_17522_pp1_iter2_reg = phi_input_8_V_1_reg_17522.read();
        phi_input_8_V_2_reg_17582_pp1_iter2_reg = phi_input_8_V_2_reg_17582.read();
        phi_input_8_V_3_reg_17642_pp1_iter2_reg = phi_input_8_V_3_reg_17642.read();
        phi_input_8_V_4_reg_17702_pp1_iter2_reg = phi_input_8_V_4_reg_17702.read();
        phi_input_8_V_5_reg_17762_pp1_iter2_reg = phi_input_8_V_5_reg_17762.read();
        phi_input_8_V_6_reg_17822_pp1_iter2_reg = phi_input_8_V_6_reg_17822.read();
        phi_input_8_V_7_reg_17882_pp1_iter2_reg = phi_input_8_V_7_reg_17882.read();
        phi_input_8_V_8_reg_17942_pp1_iter2_reg = phi_input_8_V_8_reg_17942.read();
        phi_input_8_V_9_reg_18002_pp1_iter2_reg = phi_input_8_V_9_reg_18002.read();
        phi_input_8_V_reg_17462_pp1_iter2_reg = phi_input_8_V_reg_17462.read();
        phi_input_9_V_10_reg_18067_pp1_iter2_reg = phi_input_9_V_10_reg_18067.read();
        phi_input_9_V_11_reg_18127_pp1_iter2_reg = phi_input_9_V_11_reg_18127.read();
        phi_input_9_V_12_reg_18187_pp1_iter2_reg = phi_input_9_V_12_reg_18187.read();
        phi_input_9_V_13_reg_18247_pp1_iter2_reg = phi_input_9_V_13_reg_18247.read();
        phi_input_9_V_14_reg_18307_pp1_iter2_reg = phi_input_9_V_14_reg_18307.read();
        phi_input_9_V_15_reg_18367_pp1_iter2_reg = phi_input_9_V_15_reg_18367.read();
        phi_input_9_V_1_reg_17527_pp1_iter2_reg = phi_input_9_V_1_reg_17527.read();
        phi_input_9_V_2_reg_17587_pp1_iter2_reg = phi_input_9_V_2_reg_17587.read();
        phi_input_9_V_3_reg_17647_pp1_iter2_reg = phi_input_9_V_3_reg_17647.read();
        phi_input_9_V_4_reg_17707_pp1_iter2_reg = phi_input_9_V_4_reg_17707.read();
        phi_input_9_V_5_reg_17767_pp1_iter2_reg = phi_input_9_V_5_reg_17767.read();
        phi_input_9_V_6_reg_17827_pp1_iter2_reg = phi_input_9_V_6_reg_17827.read();
        phi_input_9_V_7_reg_17887_pp1_iter2_reg = phi_input_9_V_7_reg_17887.read();
        phi_input_9_V_8_reg_17947_pp1_iter2_reg = phi_input_9_V_8_reg_17947.read();
        phi_input_9_V_9_reg_18007_pp1_iter2_reg = phi_input_9_V_9_reg_18007.read();
        phi_input_9_V_reg_17467_pp1_iter2_reg = phi_input_9_V_reg_17467.read();
        zext_ln203_reg_16895_pp1_iter10_reg = zext_ln203_reg_16895_pp1_iter9_reg.read();
        zext_ln203_reg_16895_pp1_iter11_reg = zext_ln203_reg_16895_pp1_iter10_reg.read();
        zext_ln203_reg_16895_pp1_iter2_reg = zext_ln203_reg_16895_pp1_iter1_reg.read();
        zext_ln203_reg_16895_pp1_iter3_reg = zext_ln203_reg_16895_pp1_iter2_reg.read();
        zext_ln203_reg_16895_pp1_iter4_reg = zext_ln203_reg_16895_pp1_iter3_reg.read();
        zext_ln203_reg_16895_pp1_iter5_reg = zext_ln203_reg_16895_pp1_iter4_reg.read();
        zext_ln203_reg_16895_pp1_iter6_reg = zext_ln203_reg_16895_pp1_iter5_reg.read();
        zext_ln203_reg_16895_pp1_iter7_reg = zext_ln203_reg_16895_pp1_iter6_reg.read();
        zext_ln203_reg_16895_pp1_iter8_reg = zext_ln203_reg_16895_pp1_iter7_reg.read();
        zext_ln203_reg_16895_pp1_iter9_reg = zext_ln203_reg_16895_pp1_iter8_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_17323_pp1_iter10_reg.read()))) {
        edge_update_0_V_12_reg_19132 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5029_ap_return_0.read();
        edge_update_0_V_13_reg_19152 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5043_ap_return_0.read();
        edge_update_0_V_14_reg_19172 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5057_ap_return_0.read();
        edge_update_0_V_15_reg_19192 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5071_ap_return_0.read();
        edge_update_1_V_12_reg_19137 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5029_ap_return_1.read();
        edge_update_1_V_13_reg_19157 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5043_ap_return_1.read();
        edge_update_1_V_14_reg_19177 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5057_ap_return_1.read();
        edge_update_1_V_15_reg_19197 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5071_ap_return_1.read();
        edge_update_2_V_12_reg_19142 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5029_ap_return_2.read();
        edge_update_2_V_13_reg_19162 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5043_ap_return_2.read();
        edge_update_2_V_14_reg_19182 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5057_ap_return_2.read();
        edge_update_2_V_15_reg_19202 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5071_ap_return_2.read();
        edge_update_3_V_12_reg_19147 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5029_ap_return_3.read();
        edge_update_3_V_13_reg_19167 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5043_ap_return_3.read();
        edge_update_3_V_14_reg_19187 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5057_ap_return_3.read();
        edge_update_3_V_15_reg_19207 = grp_dense_mult_3lyr_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_fu_5071_ap_return_3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        empty_35_reg_17477 = empty_35_fu_5517_p1.read();
        empty_37_reg_17487 = empty_37_fu_5538_p1.read();
        empty_40_reg_17537 = empty_40_fu_5559_p1.read();
        empty_42_reg_17547 = empty_42_fu_5580_p1.read();
        empty_44_reg_17597 = empty_44_fu_5601_p1.read();
        empty_46_reg_17607 = empty_46_fu_5622_p1.read();
        empty_48_reg_17657 = empty_48_fu_5643_p1.read();
        empty_50_reg_17667 = empty_50_fu_5664_p1.read();
        empty_52_reg_17717 = empty_52_fu_5685_p1.read();
        empty_54_reg_17727 = empty_54_fu_5706_p1.read();
        empty_56_reg_17777 = empty_56_fu_5727_p1.read();
        empty_58_reg_17787 = empty_58_fu_5748_p1.read();
        empty_60_reg_17837 = empty_60_fu_5769_p1.read();
        empty_62_reg_17847 = empty_62_fu_5790_p1.read();
        empty_64_reg_17897 = empty_64_fu_5811_p1.read();
        empty_66_reg_17907 = empty_66_fu_5832_p1.read();
        empty_68_reg_17957 = empty_68_fu_5853_p1.read();
        empty_70_reg_17967 = empty_70_fu_5874_p1.read();
        empty_72_reg_18017 = empty_72_fu_5895_p1.read();
        empty_74_reg_18027 = empty_74_fu_5916_p1.read();
        empty_76_reg_18077 = empty_76_fu_5937_p1.read();
        empty_78_reg_18087 = empty_78_fu_5958_p1.read();
        empty_80_reg_18137 = empty_80_fu_5979_p1.read();
        empty_82_reg_18147 = empty_82_fu_6000_p1.read();
        icmp_ln464_reg_17323 = icmp_ln464_fu_5488_p2.read();
        icmp_ln464_reg_17323_pp1_iter1_reg = icmp_ln464_reg_17323.read();
        phi_input_6_V_16_reg_17512 = edge_attr_1D_4_V_q0.read();
        phi_input_6_V_17_reg_17572 = edge_attr_1D_8_V_q0.read();
        phi_input_6_V_18_reg_17632 = edge_attr_1D_12_V_q0.read();
        phi_input_6_V_19_reg_17692 = edge_attr_1D_16_V_q0.read();
        phi_input_6_V_20_reg_17752 = edge_attr_1D_20_V_q0.read();
        phi_input_6_V_21_reg_17812 = edge_attr_1D_24_V_q0.read();
        phi_input_6_V_22_reg_17872 = edge_attr_1D_28_V_q0.read();
        phi_input_6_V_23_reg_17932 = edge_attr_1D_32_V_q0.read();
        phi_input_6_V_24_reg_17992 = edge_attr_1D_36_V_q0.read();
        phi_input_6_V_25_reg_18052 = edge_attr_1D_40_V_q0.read();
        phi_input_6_V_26_reg_18112 = edge_attr_1D_44_V_q0.read();
        phi_input_6_V_reg_17452 = edge_attr_1D_0_V_q0.read();
        phi_input_7_V_10_reg_18057 = edge_attr_1D_41_V_q0.read();
        phi_input_7_V_11_reg_18117 = edge_attr_1D_45_V_q0.read();
        phi_input_7_V_1_reg_17517 = edge_attr_1D_5_V_q0.read();
        phi_input_7_V_2_reg_17577 = edge_attr_1D_9_V_q0.read();
        phi_input_7_V_3_reg_17637 = edge_attr_1D_13_V_q0.read();
        phi_input_7_V_4_reg_17697 = edge_attr_1D_17_V_q0.read();
        phi_input_7_V_5_reg_17757 = edge_attr_1D_21_V_q0.read();
        phi_input_7_V_6_reg_17817 = edge_attr_1D_25_V_q0.read();
        phi_input_7_V_7_reg_17877 = edge_attr_1D_29_V_q0.read();
        phi_input_7_V_8_reg_17937 = edge_attr_1D_33_V_q0.read();
        phi_input_7_V_9_reg_17997 = edge_attr_1D_37_V_q0.read();
        phi_input_7_V_reg_17457 = edge_attr_1D_1_V_q0.read();
        phi_input_8_V_10_reg_18062 = edge_attr_1D_42_V_q0.read();
        phi_input_8_V_11_reg_18122 = edge_attr_1D_46_V_q0.read();
        phi_input_8_V_1_reg_17522 = edge_attr_1D_6_V_q0.read();
        phi_input_8_V_2_reg_17582 = edge_attr_1D_10_V_q0.read();
        phi_input_8_V_3_reg_17642 = edge_attr_1D_14_V_q0.read();
        phi_input_8_V_4_reg_17702 = edge_attr_1D_18_V_q0.read();
        phi_input_8_V_5_reg_17762 = edge_attr_1D_22_V_q0.read();
        phi_input_8_V_6_reg_17822 = edge_attr_1D_26_V_q0.read();
        phi_input_8_V_7_reg_17882 = edge_attr_1D_30_V_q0.read();
        phi_input_8_V_8_reg_17942 = edge_attr_1D_34_V_q0.read();
        phi_input_8_V_9_reg_18002 = edge_attr_1D_38_V_q0.read();
        phi_input_8_V_reg_17462 = edge_attr_1D_2_V_q0.read();
        phi_input_9_V_10_reg_18067 = edge_attr_1D_43_V_q0.read();
        phi_input_9_V_11_reg_18127 = edge_attr_1D_47_V_q0.read();
        phi_input_9_V_1_reg_17527 = edge_attr_1D_7_V_q0.read();
        phi_input_9_V_2_reg_17587 = edge_attr_1D_11_V_q0.read();
        phi_input_9_V_3_reg_17647 = edge_attr_1D_15_V_q0.read();
        phi_input_9_V_4_reg_17707 = edge_attr_1D_19_V_q0.read();
        phi_input_9_V_5_reg_17767 = edge_attr_1D_23_V_q0.read();
        phi_input_9_V_6_reg_17827 = edge_attr_1D_27_V_q0.read();
        phi_input_9_V_7_reg_17887 = edge_attr_1D_31_V_q0.read();
        phi_input_9_V_8_reg_17947 = edge_attr_1D_35_V_q0.read();
        phi_input_9_V_9_reg_18007 = edge_attr_1D_39_V_q0.read();
        phi_input_9_V_reg_17467 = edge_attr_1D_3_V_q0.read();
        zext_ln203_reg_16895 = zext_ln203_fu_5382_p1.read();
        zext_ln203_reg_16895_pp1_iter1_reg = zext_ln203_reg_16895.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_17323.read()))) {
        empty_85_reg_18197 = empty_85_fu_6021_p1.read();
        empty_87_reg_18207 = empty_87_fu_6042_p1.read();
        empty_89_reg_18257 = empty_89_fu_6063_p1.read();
        empty_91_reg_18267 = empty_91_fu_6084_p1.read();
        empty_93_reg_18317 = empty_93_fu_6105_p1.read();
        empty_95_reg_18327 = empty_95_fu_6126_p1.read();
        empty_97_reg_18377 = empty_97_fu_6147_p1.read();
        empty_99_reg_18387 = empty_99_fu_6168_p1.read();
        phi_input_6_V_27_reg_18172 = edge_attr_1D_48_V_q0.read();
        phi_input_6_V_28_reg_18232 = edge_attr_1D_52_V_q0.read();
        phi_input_6_V_29_reg_18292 = edge_attr_1D_56_V_q0.read();
        phi_input_6_V_30_reg_18352 = edge_attr_1D_60_V_q0.read();
        phi_input_7_V_12_reg_18177 = edge_attr_1D_49_V_q0.read();
        phi_input_7_V_13_reg_18237 = edge_attr_1D_53_V_q0.read();
        phi_input_7_V_14_reg_18297 = edge_attr_1D_57_V_q0.read();
        phi_input_7_V_15_reg_18357 = edge_attr_1D_61_V_q0.read();
        phi_input_8_V_12_reg_18182 = edge_attr_1D_50_V_q0.read();
        phi_input_8_V_13_reg_18242 = edge_attr_1D_54_V_q0.read();
        phi_input_8_V_14_reg_18302 = edge_attr_1D_58_V_q0.read();
        phi_input_8_V_15_reg_18362 = edge_attr_1D_62_V_q0.read();
        phi_input_9_V_12_reg_18187 = edge_attr_1D_51_V_q0.read();
        phi_input_9_V_13_reg_18247 = edge_attr_1D_55_V_q0.read();
        phi_input_9_V_14_reg_18307 = edge_attr_1D_59_V_q0.read();
        phi_input_9_V_15_reg_18367 = edge_attr_1D_63_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln437_reg_16636 = icmp_ln437_fu_5085_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln437_fu_5085_p2.read(), ap_const_lv1_0))) {
        lshr_ln203_s_reg_16650 = j_0_i_0_reg_4839.read().range(6, 4);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln464_reg_17323_pp1_iter1_reg.read()))) {
        phi_input_0_V_27_reg_18777 = phi_input_0_V_27_fu_14054_p1.read();
        phi_input_0_V_28_reg_18807 = phi_input_0_V_28_fu_14692_p1.read();
        phi_input_0_V_29_reg_18837 = phi_input_0_V_29_fu_15330_p1.read();
        phi_input_0_V_30_reg_18867 = phi_input_0_V_30_fu_15968_p1.read();
        phi_input_1_V_27_reg_18787 = phi_input_1_V_27_fu_14258_p1.read();
        phi_input_1_V_28_reg_18817 = phi_input_1_V_28_fu_14896_p1.read();
        phi_input_1_V_29_reg_18847 = phi_input_1_V_29_fu_15534_p1.read();
        phi_input_1_V_30_reg_18877 = phi_input_1_V_30_fu_16172_p1.read();
        phi_input_2_V_27_reg_18797 = phi_input_2_V_27_fu_14462_p1.read();
        phi_input_2_V_28_reg_18827 = phi_input_2_V_28_fu_15100_p1.read();
        phi_input_2_V_29_reg_18857 = phi_input_2_V_29_fu_15738_p1.read();
        phi_input_2_V_30_reg_18887 = phi_input_2_V_30_fu_16376_p1.read();
        phi_input_3_V_27_reg_18772 = phi_input_3_V_27_fu_13939_p1.read();
        phi_input_3_V_28_reg_18802 = phi_input_3_V_28_fu_14577_p1.read();
        phi_input_3_V_29_reg_18832 = phi_input_3_V_29_fu_15215_p1.read();
        phi_input_3_V_30_reg_18862 = phi_input_3_V_30_fu_15853_p1.read();
        phi_input_4_V_27_reg_18782 = phi_input_4_V_27_fu_14156_p1.read();
        phi_input_4_V_28_reg_18812 = phi_input_4_V_28_fu_14794_p1.read();
        phi_input_4_V_29_reg_18842 = phi_input_4_V_29_fu_15432_p1.read();
        phi_input_4_V_30_reg_18872 = phi_input_4_V_30_fu_16070_p1.read();
        phi_input_5_V_27_reg_18792 = phi_input_5_V_27_fu_14360_p1.read();
        phi_input_5_V_28_reg_18822 = phi_input_5_V_28_fu_14998_p1.read();
        phi_input_5_V_29_reg_18852 = phi_input_5_V_29_fu_15636_p1.read();
        phi_input_5_V_30_reg_18882 = phi_input_5_V_30_fu_16274_p1.read();
    }
}

void edgeblock_ap_fixed_ap_uint_ap_fixed_config7_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln437_fu_5085_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln437_fu_5085_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            break;
        case 8 : 
            if (!(esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter12.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter11.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter12.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter11.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state18;
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

