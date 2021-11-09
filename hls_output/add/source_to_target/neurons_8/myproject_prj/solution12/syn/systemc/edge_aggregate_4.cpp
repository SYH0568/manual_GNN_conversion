#include "edge_aggregate.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void edge_aggregate::thread_edge_attr_aggr_12_0_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_0_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_0_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_0_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_12_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_0_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_0_2_V_address0 = edge_attr_aggr_12_0_2_V_addr_2_reg_48492.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_0_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_0_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_0_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_0_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_0_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_0_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_0_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_12_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_0_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_0_3_V_address0 = edge_attr_aggr_12_0_3_V_addr_2_reg_48577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_0_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_0_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_0_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_0_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_0_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_0_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_0_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_12_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_0_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_0_V_address0 = edge_attr_aggr_12_10_0_V_addr_1_reg_48372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_10_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_10_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_10_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_10_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_10_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_12_10_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_10_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_1_V_address0 = edge_attr_aggr_12_10_1_V_addr_2_reg_48457.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_10_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_10_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_10_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_10_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_10_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_12_10_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_10_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_2_V_address0 = edge_attr_aggr_12_10_2_V_addr_2_reg_48542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_10_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_10_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_10_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_10_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_10_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_12_10_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_10_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_3_V_address0 = edge_attr_aggr_12_10_3_V_addr_2_reg_48627.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_10_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_10_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_10_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_10_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_10_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_10_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_10_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_12_10_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_10_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_0_V_address0 = edge_attr_aggr_12_11_0_V_addr_1_reg_48377.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_11_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_11_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_11_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_11_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_11_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_12_11_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_11_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_1_V_address0 = edge_attr_aggr_12_11_1_V_addr_2_reg_48462.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_11_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_11_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_11_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_11_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_11_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_12_11_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_11_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_2_V_address0 = edge_attr_aggr_12_11_2_V_addr_2_reg_48547.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_11_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_11_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_11_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_11_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_11_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_12_11_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_11_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_3_V_address0 = edge_attr_aggr_12_11_3_V_addr_2_reg_48632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_11_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_11_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_11_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_11_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_11_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_11_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_11_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_12_11_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_11_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_0_V_address0 = edge_attr_aggr_12_12_0_V_addr_1_reg_48382.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_12_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_12_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_12_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_12_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_12_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_12_12_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_12_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_1_V_address0 = edge_attr_aggr_12_12_1_V_addr_2_reg_48467.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_12_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_12_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_12_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_12_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_12_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_12_12_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_12_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_2_V_address0 = edge_attr_aggr_12_12_2_V_addr_2_reg_48552.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_12_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_12_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_12_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_12_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_12_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_12_12_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_12_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_3_V_address0 = edge_attr_aggr_12_12_3_V_addr_2_reg_48637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_12_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_12_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_12_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_12_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_12_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_12_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_12_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_12_12_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_12_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_0_V_address0 = edge_attr_aggr_12_13_0_V_addr_1_reg_48387.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_13_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_13_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_13_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_13_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_13_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_12_13_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_13_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_1_V_address0 = edge_attr_aggr_12_13_1_V_addr_2_reg_48472.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_13_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_13_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_13_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_13_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_13_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_12_13_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_13_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_2_V_address0 = edge_attr_aggr_12_13_2_V_addr_2_reg_48557.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_13_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_13_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_13_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_13_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_13_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_12_13_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_13_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_3_V_address0 = edge_attr_aggr_12_13_3_V_addr_2_reg_48642.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_13_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_13_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_13_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_13_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_13_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_13_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_13_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_12_13_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_13_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_0_V_address0 = edge_attr_aggr_12_14_0_V_addr_1_reg_48392.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_14_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_14_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_14_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_14_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_14_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_12_14_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_14_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_1_V_address0 = edge_attr_aggr_12_14_1_V_addr_2_reg_48477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_14_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_14_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_14_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_14_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_14_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_12_14_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_14_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_2_V_address0 = edge_attr_aggr_12_14_2_V_addr_2_reg_48562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_14_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_14_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_14_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_14_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_14_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_12_14_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_14_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_3_V_address0 = edge_attr_aggr_12_14_3_V_addr_2_reg_48647.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_14_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_14_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_14_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_14_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_14_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_14_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_14_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_12_14_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_14_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_0_V_address0 = edge_attr_aggr_12_15_0_V_addr_1_reg_48397.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_15_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_15_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_15_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_15_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_15_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_12_15_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_15_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_1_V_address0 = edge_attr_aggr_12_15_1_V_addr_2_reg_48482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_15_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_15_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_15_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_15_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_15_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_12_15_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_15_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_2_V_address0 = edge_attr_aggr_12_15_2_V_addr_2_reg_48567.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_15_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_15_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_15_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_15_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_15_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_12_15_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_15_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_3_V_address0 = edge_attr_aggr_12_15_3_V_addr_2_reg_48652.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_15_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_15_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_15_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_15_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_15_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_15_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_15_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_12_15_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_15_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_0_V_address0 = edge_attr_aggr_12_1_0_V_addr_1_reg_48327.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_1_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_1_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_1_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_1_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_12_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_1_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_1_V_address0 = edge_attr_aggr_12_1_1_V_addr_2_reg_48412.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_1_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_1_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_1_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_1_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_12_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_1_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_2_V_address0 = edge_attr_aggr_12_1_2_V_addr_2_reg_48497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_1_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_1_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_1_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_1_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_12_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_1_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_3_V_address0 = edge_attr_aggr_12_1_3_V_addr_2_reg_48582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_1_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_1_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_1_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_1_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_1_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_12_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_1_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_0_V_address0 = edge_attr_aggr_12_2_0_V_addr_1_reg_48332.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_2_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_2_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_2_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_2_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_12_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_2_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_1_V_address0 = edge_attr_aggr_12_2_1_V_addr_2_reg_48417.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_2_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_2_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_2_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_2_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_12_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_2_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_2_V_address0 = edge_attr_aggr_12_2_2_V_addr_2_reg_48502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_2_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_2_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_2_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_2_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_12_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_2_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_3_V_address0 = edge_attr_aggr_12_2_3_V_addr_2_reg_48587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_2_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_2_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_2_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_2_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_2_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_12_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_2_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_0_V_address0 = edge_attr_aggr_12_3_0_V_addr_1_reg_48337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_3_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_3_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_3_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_3_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_12_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_3_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_1_V_address0 = edge_attr_aggr_12_3_1_V_addr_2_reg_48422.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_3_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_3_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_3_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_3_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_12_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_3_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_2_V_address0 = edge_attr_aggr_12_3_2_V_addr_2_reg_48507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_3_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_3_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_3_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_3_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_12_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_3_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_3_V_address0 = edge_attr_aggr_12_3_3_V_addr_2_reg_48592.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_3_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_3_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_3_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_3_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_3_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_12_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_3_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_0_V_address0 = edge_attr_aggr_12_4_0_V_addr_1_reg_48342.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_4_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_4_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_4_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_4_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_4_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_12_4_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_4_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_1_V_address0 = edge_attr_aggr_12_4_1_V_addr_2_reg_48427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_4_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_4_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_4_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_4_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_4_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_12_4_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_4_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_2_V_address0 = edge_attr_aggr_12_4_2_V_addr_2_reg_48512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_4_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_4_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_4_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_4_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_4_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_12_4_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_4_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_3_V_address0 = edge_attr_aggr_12_4_3_V_addr_2_reg_48597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_4_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_4_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_4_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_4_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_4_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_4_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_4_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_12_4_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_4_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_0_V_address0 = edge_attr_aggr_12_5_0_V_addr_1_reg_48347.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_5_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_5_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_5_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_5_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_5_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_12_5_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_5_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_1_V_address0 = edge_attr_aggr_12_5_1_V_addr_2_reg_48432.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_5_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_5_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_5_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_5_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_5_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_12_5_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_5_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_2_V_address0 = edge_attr_aggr_12_5_2_V_addr_2_reg_48517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_5_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_5_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_5_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_5_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_5_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_12_5_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_5_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_3_V_address0 = edge_attr_aggr_12_5_3_V_addr_2_reg_48602.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_5_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_5_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_5_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_5_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_5_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_5_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_5_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_12_5_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_5_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_0_V_address0 = edge_attr_aggr_12_6_0_V_addr_1_reg_48352.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_6_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_6_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_6_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_6_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_6_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_12_6_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_6_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_1_V_address0 = edge_attr_aggr_12_6_1_V_addr_2_reg_48437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_6_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_6_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_6_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_6_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_6_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_12_6_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_6_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_2_V_address0 = edge_attr_aggr_12_6_2_V_addr_2_reg_48522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_6_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_6_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_6_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_6_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_6_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_12_6_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_6_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_3_V_address0 = edge_attr_aggr_12_6_3_V_addr_2_reg_48607.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_6_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_6_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_6_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_6_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_6_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_6_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_6_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_12_6_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_6_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_0_V_address0 = edge_attr_aggr_12_7_0_V_addr_1_reg_48357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_7_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_7_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_7_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_7_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_7_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_12_7_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_7_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_1_V_address0 = edge_attr_aggr_12_7_1_V_addr_2_reg_48442.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_7_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_7_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_7_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_7_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_7_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_12_7_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_7_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_2_V_address0 = edge_attr_aggr_12_7_2_V_addr_2_reg_48527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_7_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_7_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_7_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_7_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_7_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_12_7_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_7_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_3_V_address0 = edge_attr_aggr_12_7_3_V_addr_2_reg_48612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_7_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_7_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_7_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_7_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_7_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_7_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_7_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_12_7_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_7_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_0_V_address0 = edge_attr_aggr_12_8_0_V_addr_1_reg_48362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_8_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_8_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_8_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_8_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_8_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_12_8_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_8_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_1_V_address0 = edge_attr_aggr_12_8_1_V_addr_2_reg_48447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_8_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_8_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_8_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_8_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_8_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_12_8_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_8_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_2_V_address0 = edge_attr_aggr_12_8_2_V_addr_2_reg_48532.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_8_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_8_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_8_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_8_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_8_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_12_8_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_8_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_3_V_address0 = edge_attr_aggr_12_8_3_V_addr_2_reg_48617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_8_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_8_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_8_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_8_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_8_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_8_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_8_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_12_8_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_8_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_0_V_address0 = edge_attr_aggr_12_9_0_V_addr_1_reg_48367.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_0_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_9_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_9_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_9_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_0_V_d0 = add_ln703_48_fu_41794_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_9_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_9_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_12_9_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_9_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_1_V_address0 = edge_attr_aggr_12_9_1_V_addr_2_reg_48452.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_1_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_9_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_9_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_9_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_1_V_d0 = add_ln703_49_fu_41853_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_9_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_9_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_12_9_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_9_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_2_V_address0 = edge_attr_aggr_12_9_2_V_addr_2_reg_48537.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_2_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_9_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_9_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_9_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_2_V_d0 = add_ln703_50_fu_41912_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_9_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_9_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_12_9_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_9_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_3_V_address0 = edge_attr_aggr_12_9_3_V_addr_2_reg_48622.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_3_V_address0 =  (sc_lv<3>) (zext_ln1265_26_fu_38571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_12_9_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_12_9_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_9_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_12_9_3_V_d0 = add_ln703_51_fu_41971_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_12_9_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_12_9_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_12_9_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_12_reg_48317.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_12_9_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_12_9_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_0_V_address0 = edge_attr_aggr_13_0_0_V_addr_2_reg_48667.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_0_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_0_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_0_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_0_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_13_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_0_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_1_V_address0 = edge_attr_aggr_13_0_1_V_addr_2_reg_48752.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_0_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_0_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_0_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_0_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_13_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_0_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_2_V_address0 = edge_attr_aggr_13_0_2_V_addr_2_reg_48837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_0_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_0_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_0_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_0_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_13_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_0_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_3_V_address0 = edge_attr_aggr_13_0_3_V_addr_2_reg_48922.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_0_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_0_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_0_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_0_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_0_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_13_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_0_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_0_V_address0 = edge_attr_aggr_13_10_0_V_addr_2_reg_48717.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_10_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_10_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_10_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_10_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_10_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_13_10_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_10_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_1_V_address0 = edge_attr_aggr_13_10_1_V_addr_2_reg_48802.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_10_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_10_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_10_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_10_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_10_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_13_10_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_10_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_2_V_address0 = edge_attr_aggr_13_10_2_V_addr_2_reg_48887.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_10_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_10_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_10_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_10_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_10_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_13_10_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_10_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_3_V_address0 = edge_attr_aggr_13_10_3_V_addr_2_reg_48972.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_10_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_10_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_10_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_10_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_10_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_10_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_10_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_13_10_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_10_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_0_V_address0 = edge_attr_aggr_13_11_0_V_addr_2_reg_48722.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_11_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_11_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_11_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_11_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_11_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_13_11_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_11_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_1_V_address0 = edge_attr_aggr_13_11_1_V_addr_2_reg_48807.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_11_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_11_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_11_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_11_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_11_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_13_11_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_11_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_2_V_address0 = edge_attr_aggr_13_11_2_V_addr_2_reg_48892.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_11_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_11_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_11_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_11_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_11_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_13_11_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_11_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_3_V_address0 = edge_attr_aggr_13_11_3_V_addr_2_reg_48977.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_11_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_11_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_11_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_11_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_11_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_11_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_11_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_13_11_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_11_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_0_V_address0 = edge_attr_aggr_13_12_0_V_addr_2_reg_48727.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_12_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_12_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_12_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_12_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_12_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_13_12_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_12_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_1_V_address0 = edge_attr_aggr_13_12_1_V_addr_2_reg_48812.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_12_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_12_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_12_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_12_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_12_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_13_12_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_12_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_2_V_address0 = edge_attr_aggr_13_12_2_V_addr_2_reg_48897.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_12_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_12_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_12_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_12_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_12_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_13_12_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_12_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_3_V_address0 = edge_attr_aggr_13_12_3_V_addr_2_reg_48982.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_12_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_12_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_12_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_12_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_12_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_12_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_12_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_13_12_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_12_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_0_V_address0 = edge_attr_aggr_13_13_0_V_addr_2_reg_48732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_13_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_13_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_13_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_13_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_13_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_13_13_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_13_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_1_V_address0 = edge_attr_aggr_13_13_1_V_addr_2_reg_48817.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_13_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_13_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_13_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_13_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_13_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_13_13_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_13_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_2_V_address0 = edge_attr_aggr_13_13_2_V_addr_2_reg_48902.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_13_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_13_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_13_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_13_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_13_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_13_13_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_13_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_3_V_address0 = edge_attr_aggr_13_13_3_V_addr_2_reg_48987.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_13_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_13_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_13_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_13_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_13_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_13_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_13_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_13_13_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_13_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_0_V_address0 = edge_attr_aggr_13_14_0_V_addr_2_reg_48737.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_14_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_14_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_14_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_14_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_14_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_13_14_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_14_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_1_V_address0 = edge_attr_aggr_13_14_1_V_addr_2_reg_48822.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_14_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_14_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_14_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_14_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_14_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_13_14_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_14_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_2_V_address0 = edge_attr_aggr_13_14_2_V_addr_2_reg_48907.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_14_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_14_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_14_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_14_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_14_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_13_14_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_14_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_3_V_address0 = edge_attr_aggr_13_14_3_V_addr_2_reg_48992.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_14_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_14_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_14_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_14_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_14_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_14_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_14_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_13_14_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_14_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_0_V_address0 = edge_attr_aggr_13_15_0_V_addr_2_reg_48742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_15_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_15_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_15_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_15_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_15_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_13_15_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_15_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_1_V_address0 = edge_attr_aggr_13_15_1_V_addr_2_reg_48827.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_15_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_15_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_15_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_15_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_15_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_13_15_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_15_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_2_V_address0 = edge_attr_aggr_13_15_2_V_addr_2_reg_48912.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_15_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_15_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_15_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_15_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_15_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_13_15_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_15_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_3_V_address0 = edge_attr_aggr_13_15_3_V_addr_2_reg_48997.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_15_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_15_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_15_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_15_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_15_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_15_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_15_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_13_15_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_15_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_0_V_address0 = edge_attr_aggr_13_1_0_V_addr_2_reg_48672.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_1_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_1_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_1_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_1_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_13_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_1_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_1_V_address0 = edge_attr_aggr_13_1_1_V_addr_2_reg_48757.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_1_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_1_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_1_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_1_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_13_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_1_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_2_V_address0 = edge_attr_aggr_13_1_2_V_addr_2_reg_48842.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_1_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_1_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_1_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_1_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_13_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_1_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_3_V_address0 = edge_attr_aggr_13_1_3_V_addr_2_reg_48927.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_1_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_1_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_1_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_1_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_1_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_13_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_1_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_0_V_address0 = edge_attr_aggr_13_2_0_V_addr_2_reg_48677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_2_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_2_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_2_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_2_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_13_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_2_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_1_V_address0 = edge_attr_aggr_13_2_1_V_addr_2_reg_48762.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_2_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_2_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_2_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_2_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_13_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_2_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_2_V_address0 = edge_attr_aggr_13_2_2_V_addr_2_reg_48847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_2_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_2_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_2_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_2_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_13_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_2_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_3_V_address0 = edge_attr_aggr_13_2_3_V_addr_2_reg_48932.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_2_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_2_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_2_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_2_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_2_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_13_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_2_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_0_V_address0 = edge_attr_aggr_13_3_0_V_addr_2_reg_48682.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_3_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_3_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_3_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_3_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_13_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_3_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_1_V_address0 = edge_attr_aggr_13_3_1_V_addr_2_reg_48767.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_3_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_3_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_3_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_3_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_13_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_3_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_2_V_address0 = edge_attr_aggr_13_3_2_V_addr_2_reg_48852.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_3_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_3_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_3_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_3_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_13_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_3_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_3_V_address0 = edge_attr_aggr_13_3_3_V_addr_2_reg_48937.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_3_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_3_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_3_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_3_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_3_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_13_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_3_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_0_V_address0 = edge_attr_aggr_13_4_0_V_addr_2_reg_48687.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_4_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_4_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_4_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_4_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_4_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_13_4_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_4_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_1_V_address0 = edge_attr_aggr_13_4_1_V_addr_2_reg_48772.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_4_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_4_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_4_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_4_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_4_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_13_4_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_4_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_2_V_address0 = edge_attr_aggr_13_4_2_V_addr_2_reg_48857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_4_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_4_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_4_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_4_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_4_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_13_4_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_4_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_3_V_address0 = edge_attr_aggr_13_4_3_V_addr_2_reg_48942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_4_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_4_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_4_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_4_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_4_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_4_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_4_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_13_4_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_4_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_0_V_address0 = edge_attr_aggr_13_5_0_V_addr_2_reg_48692.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_5_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_5_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_5_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_5_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_5_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_13_5_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_5_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_1_V_address0 = edge_attr_aggr_13_5_1_V_addr_2_reg_48777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_5_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_5_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_5_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_5_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_5_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_13_5_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_5_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_2_V_address0 = edge_attr_aggr_13_5_2_V_addr_2_reg_48862.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_5_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_5_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_5_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_5_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_5_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_13_5_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_5_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_3_V_address0 = edge_attr_aggr_13_5_3_V_addr_2_reg_48947.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_5_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_5_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_5_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_5_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_5_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_5_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_5_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_13_5_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_5_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_0_V_address0 = edge_attr_aggr_13_6_0_V_addr_2_reg_48697.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_6_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_6_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_6_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_6_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_6_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_13_6_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_6_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_1_V_address0 = edge_attr_aggr_13_6_1_V_addr_2_reg_48782.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_6_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_6_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_6_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_6_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_6_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_13_6_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_6_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_2_V_address0 = edge_attr_aggr_13_6_2_V_addr_2_reg_48867.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_6_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_6_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_6_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_6_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_6_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_13_6_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_6_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_3_V_address0 = edge_attr_aggr_13_6_3_V_addr_2_reg_48952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_6_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_6_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_6_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_6_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_6_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_6_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_6_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_13_6_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_6_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_0_V_address0 = edge_attr_aggr_13_7_0_V_addr_2_reg_48702.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_7_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_7_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_7_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_7_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_7_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_13_7_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_7_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_1_V_address0 = edge_attr_aggr_13_7_1_V_addr_2_reg_48787.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_7_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_7_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_7_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_7_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_7_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_13_7_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_7_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_2_V_address0 = edge_attr_aggr_13_7_2_V_addr_2_reg_48872.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_7_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_7_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_7_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_7_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_7_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_13_7_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_7_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_3_V_address0 = edge_attr_aggr_13_7_3_V_addr_2_reg_48957.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_7_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_7_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_7_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_7_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_7_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_7_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_7_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_13_7_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_7_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_0_V_address0 = edge_attr_aggr_13_8_0_V_addr_2_reg_48707.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_8_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_8_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_8_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_8_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_8_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_13_8_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_8_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_1_V_address0 = edge_attr_aggr_13_8_1_V_addr_2_reg_48792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_8_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_8_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_8_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_8_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_8_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_13_8_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_8_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_2_V_address0 = edge_attr_aggr_13_8_2_V_addr_2_reg_48877.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_8_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_8_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_8_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_8_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_8_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_13_8_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_8_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_3_V_address0 = edge_attr_aggr_13_8_3_V_addr_2_reg_48962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_8_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_8_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_8_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_8_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_8_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_8_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_8_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_13_8_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_8_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_0_V_address0 = edge_attr_aggr_13_9_0_V_addr_2_reg_48712.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_0_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_9_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_9_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_9_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_0_V_d0 = add_ln703_52_fu_42033_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_9_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_9_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_13_9_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_9_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_1_V_address0 = edge_attr_aggr_13_9_1_V_addr_2_reg_48797.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_1_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_9_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_9_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_9_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_1_V_d0 = add_ln703_53_fu_42092_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_9_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_9_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_13_9_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_9_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_2_V_address0 = edge_attr_aggr_13_9_2_V_addr_2_reg_48882.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_2_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_9_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_9_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_9_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_2_V_d0 = add_ln703_54_fu_42151_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_9_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_9_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_13_9_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_9_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_3_V_address0 = edge_attr_aggr_13_9_3_V_addr_2_reg_48967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_3_V_address0 =  (sc_lv<3>) (zext_ln1265_28_fu_38653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_13_9_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_13_9_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_9_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_13_9_3_V_d0 = add_ln703_55_fu_42210_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_13_9_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_13_9_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_13_9_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_13_reg_48662.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_13_9_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_13_9_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_0_V_address0 = edge_attr_aggr_14_0_0_V_addr_2_reg_49012.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_0_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_0_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_0_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_0_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_14_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_0_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_1_V_address0 = edge_attr_aggr_14_0_1_V_addr_2_reg_49097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_0_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_0_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_0_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_0_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_14_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_0_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_2_V_address0 = edge_attr_aggr_14_0_2_V_addr_2_reg_49182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_0_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_0_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_0_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_0_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_14_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_0_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_3_V_address0 = edge_attr_aggr_14_0_3_V_addr_2_reg_49267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_0_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_0_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_0_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_0_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_0_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_14_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_0_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_0_V_address0 = edge_attr_aggr_14_10_0_V_addr_2_reg_49062.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_10_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_10_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_10_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_10_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_10_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_14_10_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_10_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_1_V_address0 = edge_attr_aggr_14_10_1_V_addr_2_reg_49147.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_10_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_10_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_10_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_10_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_10_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_14_10_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_10_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_2_V_address0 = edge_attr_aggr_14_10_2_V_addr_2_reg_49232.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_10_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_10_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_10_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_10_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_10_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_14_10_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_10_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_3_V_address0 = edge_attr_aggr_14_10_3_V_addr_2_reg_49317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_10_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_10_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_10_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_10_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_10_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_10_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_10_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_14_10_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_10_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_0_V_address0 = edge_attr_aggr_14_11_0_V_addr_2_reg_49067.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_11_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_11_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_11_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_11_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_11_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_14_11_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_11_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_1_V_address0 = edge_attr_aggr_14_11_1_V_addr_2_reg_49152.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_11_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_11_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_11_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_11_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_11_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_14_11_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_11_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_2_V_address0 = edge_attr_aggr_14_11_2_V_addr_2_reg_49237.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_11_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_11_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_11_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_11_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_11_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_14_11_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_11_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_3_V_address0 = edge_attr_aggr_14_11_3_V_addr_2_reg_49322.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_11_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_11_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_11_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_11_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_11_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_11_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_11_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_14_11_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_11_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_0_V_address0 = edge_attr_aggr_14_12_0_V_addr_2_reg_49072.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_12_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_12_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_12_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_12_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_12_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_14_12_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_12_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_1_V_address0 = edge_attr_aggr_14_12_1_V_addr_2_reg_49157.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_12_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_12_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_12_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_12_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_12_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_14_12_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_12_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_2_V_address0 = edge_attr_aggr_14_12_2_V_addr_2_reg_49242.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_12_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_12_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_12_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_12_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_12_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_14_12_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_12_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_3_V_address0 = edge_attr_aggr_14_12_3_V_addr_2_reg_49327.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_12_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_12_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_12_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_12_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_12_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_12_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_12_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_14_12_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_12_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_0_V_address0 = edge_attr_aggr_14_13_0_V_addr_2_reg_49077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_13_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_13_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_13_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_13_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_13_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_14_13_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_13_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_1_V_address0 = edge_attr_aggr_14_13_1_V_addr_2_reg_49162.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_13_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_13_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_13_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_13_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_13_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_14_13_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_13_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_2_V_address0 = edge_attr_aggr_14_13_2_V_addr_2_reg_49247.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_13_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_13_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_13_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_13_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_13_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_14_13_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_13_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_3_V_address0 = edge_attr_aggr_14_13_3_V_addr_2_reg_49332.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_13_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_13_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_13_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_13_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_13_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_13_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_13_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_14_13_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_13_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_0_V_address0 = edge_attr_aggr_14_14_0_V_addr_2_reg_49082.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_14_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_14_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_14_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_14_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_14_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_14_14_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_14_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_1_V_address0 = edge_attr_aggr_14_14_1_V_addr_2_reg_49167.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_14_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_14_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_14_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_14_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_14_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_14_14_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_14_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_2_V_address0 = edge_attr_aggr_14_14_2_V_addr_2_reg_49252.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_14_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_14_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_14_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_14_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_14_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_14_14_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_14_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_3_V_address0 = edge_attr_aggr_14_14_3_V_addr_2_reg_49337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_14_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_14_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_14_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_14_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_14_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_14_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_14_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_14_14_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_14_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_0_V_address0 = edge_attr_aggr_14_15_0_V_addr_2_reg_49087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_15_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_15_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_15_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_15_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_15_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_14_15_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_15_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_1_V_address0 = edge_attr_aggr_14_15_1_V_addr_2_reg_49172.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_15_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_15_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_15_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_15_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_15_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_14_15_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_15_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_2_V_address0 = edge_attr_aggr_14_15_2_V_addr_2_reg_49257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_15_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_15_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_15_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_15_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_15_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_14_15_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_15_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_3_V_address0 = edge_attr_aggr_14_15_3_V_addr_2_reg_49342.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_15_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_15_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_15_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_15_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_15_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_15_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_15_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_14_15_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_15_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_0_V_address0 = edge_attr_aggr_14_1_0_V_addr_2_reg_49017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_1_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_1_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_1_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_1_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_14_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_1_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_1_V_address0 = edge_attr_aggr_14_1_1_V_addr_2_reg_49102.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_1_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_1_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_1_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_1_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_14_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_1_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_2_V_address0 = edge_attr_aggr_14_1_2_V_addr_2_reg_49187.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_1_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_1_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_1_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_1_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_14_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_1_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_3_V_address0 = edge_attr_aggr_14_1_3_V_addr_2_reg_49272.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_1_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_1_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_1_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_1_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_1_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_14_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_1_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_0_V_address0 = edge_attr_aggr_14_2_0_V_addr_2_reg_49022.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_2_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_2_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_2_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_2_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_14_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_2_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_1_V_address0 = edge_attr_aggr_14_2_1_V_addr_2_reg_49107.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_2_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_2_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_2_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_2_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_14_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_2_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_2_V_address0 = edge_attr_aggr_14_2_2_V_addr_2_reg_49192.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_2_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_2_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_2_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_2_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_14_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_2_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_3_V_address0 = edge_attr_aggr_14_2_3_V_addr_2_reg_49277.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_2_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_2_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_2_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_2_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_2_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_14_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_2_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_0_V_address0 = edge_attr_aggr_14_3_0_V_addr_2_reg_49027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_3_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_3_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_3_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_3_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_14_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_3_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_1_V_address0 = edge_attr_aggr_14_3_1_V_addr_2_reg_49112.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_3_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_3_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_3_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_3_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_14_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_3_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_2_V_address0 = edge_attr_aggr_14_3_2_V_addr_2_reg_49197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_3_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_3_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_3_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_3_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_14_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_3_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_3_V_address0 = edge_attr_aggr_14_3_3_V_addr_2_reg_49282.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_3_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_3_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_3_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_3_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_3_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_14_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_3_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_0_V_address0 = edge_attr_aggr_14_4_0_V_addr_2_reg_49032.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_4_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_4_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_4_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_4_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_4_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_14_4_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_4_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_1_V_address0 = edge_attr_aggr_14_4_1_V_addr_2_reg_49117.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_4_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_4_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_4_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_4_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_4_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_14_4_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_4_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_2_V_address0 = edge_attr_aggr_14_4_2_V_addr_2_reg_49202.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_4_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_4_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_4_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_4_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_4_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_14_4_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_4_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_3_V_address0 = edge_attr_aggr_14_4_3_V_addr_2_reg_49287.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_4_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_4_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_4_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_4_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_4_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_4_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_4_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_14_4_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_4_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_0_V_address0 = edge_attr_aggr_14_5_0_V_addr_2_reg_49037.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_5_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_5_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_5_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_5_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_5_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_14_5_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_5_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_1_V_address0 = edge_attr_aggr_14_5_1_V_addr_2_reg_49122.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_5_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_5_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_5_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_5_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_5_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_14_5_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_5_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_2_V_address0 = edge_attr_aggr_14_5_2_V_addr_2_reg_49207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_5_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_5_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_5_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_5_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_5_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_14_5_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_5_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_3_V_address0 = edge_attr_aggr_14_5_3_V_addr_2_reg_49292.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_5_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_5_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_5_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_5_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_5_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_5_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_5_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_14_5_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_5_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_0_V_address0 = edge_attr_aggr_14_6_0_V_addr_2_reg_49042.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_6_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_6_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_6_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_6_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_6_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_14_6_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_6_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_1_V_address0 = edge_attr_aggr_14_6_1_V_addr_2_reg_49127.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_6_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_6_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_6_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_6_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_6_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_14_6_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_6_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_2_V_address0 = edge_attr_aggr_14_6_2_V_addr_2_reg_49212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_6_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_6_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_6_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_6_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_6_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_14_6_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_6_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_3_V_address0 = edge_attr_aggr_14_6_3_V_addr_2_reg_49297.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_6_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_6_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_6_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_6_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_6_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_6_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_6_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_14_6_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_6_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_0_V_address0 = edge_attr_aggr_14_7_0_V_addr_2_reg_49047.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_7_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_7_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_7_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_7_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_7_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_14_7_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_7_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_1_V_address0 = edge_attr_aggr_14_7_1_V_addr_2_reg_49132.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_7_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_7_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_7_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_7_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_7_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_14_7_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_7_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_2_V_address0 = edge_attr_aggr_14_7_2_V_addr_2_reg_49217.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_7_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_7_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_7_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_7_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_7_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_14_7_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_7_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_3_V_address0 = edge_attr_aggr_14_7_3_V_addr_2_reg_49302.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_7_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_7_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_7_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_7_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_7_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_7_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_7_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_14_7_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_7_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_0_V_address0 = edge_attr_aggr_14_8_0_V_addr_2_reg_49052.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_8_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_8_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_8_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_8_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_8_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_14_8_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_8_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_1_V_address0 = edge_attr_aggr_14_8_1_V_addr_2_reg_49137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_8_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_8_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_8_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_8_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_8_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_14_8_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_8_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_2_V_address0 = edge_attr_aggr_14_8_2_V_addr_2_reg_49222.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_8_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_8_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_8_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_8_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_8_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_14_8_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_8_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_3_V_address0 = edge_attr_aggr_14_8_3_V_addr_2_reg_49307.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_8_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_8_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_8_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_8_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_8_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_8_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_8_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_14_8_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_8_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_0_V_address0 = edge_attr_aggr_14_9_0_V_addr_2_reg_49057.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_0_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_9_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_9_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_9_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_0_V_d0 = add_ln703_56_fu_42272_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_9_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_9_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_14_9_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_9_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_1_V_address0 = edge_attr_aggr_14_9_1_V_addr_2_reg_49142.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_1_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_9_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_9_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_9_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_1_V_d0 = add_ln703_57_fu_42331_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_9_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_9_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_14_9_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_9_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_2_V_address0 = edge_attr_aggr_14_9_2_V_addr_2_reg_49227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_2_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_9_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_9_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_9_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_2_V_d0 = add_ln703_58_fu_42390_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_9_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_9_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_14_9_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_9_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_3_V_address0 = edge_attr_aggr_14_9_3_V_addr_2_reg_49312.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_3_V_address0 =  (sc_lv<3>) (zext_ln1265_30_fu_38735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_14_9_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_14_9_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_9_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_14_9_3_V_d0 = add_ln703_59_fu_42449_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_14_9_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_14_9_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_14_9_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_14_reg_49007.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_14_9_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_14_9_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_0_V_address0 = edge_attr_aggr_15_0_0_V_addr_2_reg_49357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_0_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_0_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_0_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_0_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_15_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_0_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_1_V_address0 = edge_attr_aggr_15_0_1_V_addr_2_reg_49442.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_0_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_0_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_0_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_0_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_15_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_0_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_2_V_address0 = edge_attr_aggr_15_0_2_V_addr_2_reg_49527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_0_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_0_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_0_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_0_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_15_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_0_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_3_V_address0 = edge_attr_aggr_15_0_3_V_addr_2_reg_49612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_0_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_0_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_0_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_0_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_0_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_15_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_0_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_0_V_address0 = edge_attr_aggr_15_10_0_V_addr_2_reg_49407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_10_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_10_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_10_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_10_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_10_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_15_10_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_10_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_1_V_address0 = edge_attr_aggr_15_10_1_V_addr_2_reg_49492.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_10_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_10_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_10_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_10_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_10_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_15_10_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_10_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_2_V_address0 = edge_attr_aggr_15_10_2_V_addr_2_reg_49577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_10_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_10_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_10_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_10_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_10_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_15_10_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_10_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_3_V_address0 = edge_attr_aggr_15_10_3_V_addr_2_reg_49662.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_10_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_10_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_10_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_10_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_10_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_10_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_10_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_15_10_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_10_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_0_V_address0 = edge_attr_aggr_15_11_0_V_addr_2_reg_49412.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_11_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_11_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_11_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_11_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_11_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_15_11_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_11_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_1_V_address0 = edge_attr_aggr_15_11_1_V_addr_2_reg_49497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_11_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_11_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_11_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_11_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_11_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_15_11_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_11_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_2_V_address0 = edge_attr_aggr_15_11_2_V_addr_2_reg_49582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_11_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_11_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_11_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_11_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_11_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_15_11_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_11_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_3_V_address0 = edge_attr_aggr_15_11_3_V_addr_2_reg_49667.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_11_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_11_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_11_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_11_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_11_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_11_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_11_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_15_11_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_11_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_0_V_address0 = edge_attr_aggr_15_12_0_V_addr_2_reg_49417.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_12_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_12_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_12_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_12_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_12_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_15_12_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_12_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_1_V_address0 = edge_attr_aggr_15_12_1_V_addr_2_reg_49502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_12_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_12_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_12_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_12_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_12_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_15_12_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_12_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_2_V_address0 = edge_attr_aggr_15_12_2_V_addr_2_reg_49587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_12_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_12_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_12_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_12_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_12_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_15_12_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_12_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_3_V_address0 = edge_attr_aggr_15_12_3_V_addr_2_reg_49672.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_12_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_12_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_12_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_12_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_12_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_12_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_12_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_15_12_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_12_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_0_V_address0 = edge_attr_aggr_15_13_0_V_addr_2_reg_49422.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_13_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_13_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_13_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_13_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_13_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_15_13_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_13_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_1_V_address0 = edge_attr_aggr_15_13_1_V_addr_2_reg_49507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_13_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_13_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_13_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_13_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_13_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_15_13_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_13_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_2_V_address0 = edge_attr_aggr_15_13_2_V_addr_2_reg_49592.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_13_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_13_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_13_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_13_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_13_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_15_13_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_13_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_3_V_address0 = edge_attr_aggr_15_13_3_V_addr_2_reg_49677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_13_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_13_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_13_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_13_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_13_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_13_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_13_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_15_13_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_13_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_0_V_address0 = edge_attr_aggr_15_14_0_V_addr_2_reg_49427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_14_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_14_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_14_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_14_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_14_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_15_14_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_14_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_1_V_address0 = edge_attr_aggr_15_14_1_V_addr_2_reg_49512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_14_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_14_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_14_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_14_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_14_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_15_14_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_14_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_2_V_address0 = edge_attr_aggr_15_14_2_V_addr_2_reg_49597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_14_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_14_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_14_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_14_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_14_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_15_14_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_14_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_3_V_address0 = edge_attr_aggr_15_14_3_V_addr_2_reg_49682.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_14_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_14_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_14_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_14_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_14_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_14_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_14_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_15_14_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_14_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_0_V_address0 = edge_attr_aggr_15_15_0_V_addr_2_reg_49432.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_15_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_15_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_15_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_15_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_15_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_15_15_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_15_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_1_V_address0 = edge_attr_aggr_15_15_1_V_addr_2_reg_49517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_15_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_15_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_15_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_15_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_15_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_15_15_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_15_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_2_V_address0 = edge_attr_aggr_15_15_2_V_addr_2_reg_49602.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_15_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_15_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_15_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_15_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_15_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_15_15_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_15_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_3_V_address0 = edge_attr_aggr_15_15_3_V_addr_2_reg_49687.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_15_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_15_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_15_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_15_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_15_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_15_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_15_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_15_15_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_15_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_0_V_address0 = edge_attr_aggr_15_1_0_V_addr_2_reg_49362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_1_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_1_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_1_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_1_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_15_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_1_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_1_V_address0 = edge_attr_aggr_15_1_1_V_addr_2_reg_49447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_1_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_1_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_1_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_1_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_15_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_1_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_2_V_address0 = edge_attr_aggr_15_1_2_V_addr_2_reg_49532.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_1_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_1_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_1_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_1_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_15_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_1_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_3_V_address0 = edge_attr_aggr_15_1_3_V_addr_2_reg_49617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_1_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_1_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_1_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_1_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_1_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_15_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_1_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_0_V_address0 = edge_attr_aggr_15_2_0_V_addr_2_reg_49367.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_2_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_2_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_2_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_2_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_15_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_2_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_1_V_address0 = edge_attr_aggr_15_2_1_V_addr_2_reg_49452.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_2_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_2_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_2_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_2_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_15_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_2_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_2_V_address0 = edge_attr_aggr_15_2_2_V_addr_2_reg_49537.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_2_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_2_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_2_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_2_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_15_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_2_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_3_V_address0 = edge_attr_aggr_15_2_3_V_addr_2_reg_49622.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_2_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_2_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_2_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_2_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_2_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_15_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_2_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_0_V_address0 = edge_attr_aggr_15_3_0_V_addr_2_reg_49372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_3_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_3_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_3_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_3_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_15_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_3_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_1_V_address0 = edge_attr_aggr_15_3_1_V_addr_2_reg_49457.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_3_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_3_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_3_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_3_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_15_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_3_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_2_V_address0 = edge_attr_aggr_15_3_2_V_addr_2_reg_49542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_3_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_3_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_3_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_3_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_15_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_3_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_3_V_address0 = edge_attr_aggr_15_3_3_V_addr_2_reg_49627.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_3_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_3_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_3_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_3_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_3_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_15_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_3_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_0_V_address0 = edge_attr_aggr_15_4_0_V_addr_2_reg_49377.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_4_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_4_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_4_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_4_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_4_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_15_4_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_4_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_1_V_address0 = edge_attr_aggr_15_4_1_V_addr_2_reg_49462.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_4_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_4_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_4_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_4_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_4_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_15_4_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_4_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_2_V_address0 = edge_attr_aggr_15_4_2_V_addr_2_reg_49547.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_4_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_4_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_4_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_4_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_4_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_15_4_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_4_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_3_V_address0 = edge_attr_aggr_15_4_3_V_addr_2_reg_49632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_4_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_4_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_4_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_4_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_4_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_4_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_4_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_15_4_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_4_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_0_V_address0 = edge_attr_aggr_15_5_0_V_addr_2_reg_49382.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_5_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_5_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_5_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_5_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_5_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_15_5_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_5_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_1_V_address0 = edge_attr_aggr_15_5_1_V_addr_2_reg_49467.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_5_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_5_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_5_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_5_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_5_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_15_5_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_5_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_2_V_address0 = edge_attr_aggr_15_5_2_V_addr_2_reg_49552.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_5_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_5_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_5_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_5_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_5_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_15_5_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_5_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_3_V_address0 = edge_attr_aggr_15_5_3_V_addr_2_reg_49637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_5_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_5_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_5_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_5_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_5_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_5_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_5_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_15_5_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_5_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_0_V_address0 = edge_attr_aggr_15_6_0_V_addr_2_reg_49387.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_6_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_6_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_6_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_6_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_6_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_15_6_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_6_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_1_V_address0 = edge_attr_aggr_15_6_1_V_addr_2_reg_49472.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_6_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_6_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_6_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_6_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_6_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_15_6_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_6_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_2_V_address0 = edge_attr_aggr_15_6_2_V_addr_2_reg_49557.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_6_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_6_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_6_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_6_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_6_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_15_6_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_6_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_3_V_address0 = edge_attr_aggr_15_6_3_V_addr_2_reg_49642.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_6_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_6_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_6_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_6_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_6_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_6_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_6_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_15_6_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_6_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_0_V_address0 = edge_attr_aggr_15_7_0_V_addr_2_reg_49392.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_7_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_7_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_7_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_7_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_7_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_15_7_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_7_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_1_V_address0 = edge_attr_aggr_15_7_1_V_addr_2_reg_49477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_7_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_7_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_7_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_7_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_7_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_15_7_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_7_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_2_V_address0 = edge_attr_aggr_15_7_2_V_addr_2_reg_49562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_7_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_7_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_7_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_7_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_7_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_15_7_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_7_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_3_V_address0 = edge_attr_aggr_15_7_3_V_addr_2_reg_49647.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_7_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_7_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_7_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_7_3_V_d0 = add_ln703_63_fu_42688_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_7_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_7_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_7_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_15_7_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_7_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_0_V_address0 = edge_attr_aggr_15_8_0_V_addr_2_reg_49397.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_0_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_8_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_8_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_8_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_0_V_d0 = add_ln703_60_fu_42511_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_8_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_8_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_15_8_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_8_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_1_V_address0 = edge_attr_aggr_15_8_1_V_addr_2_reg_49482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_1_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_8_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_8_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_8_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_1_V_d0 = add_ln703_61_fu_42570_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_8_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_8_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_15_8_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_8_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_2_V_address0 = edge_attr_aggr_15_8_2_V_addr_2_reg_49567.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_2_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_8_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_8_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_8_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_2_V_d0 = add_ln703_62_fu_42629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_8_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_15_8_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln377_reg_44068.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_15_reg_49352.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_15_8_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_8_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_3_V_address0 = edge_attr_aggr_15_8_3_V_addr_2_reg_49652.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_15_8_3_V_address0 =  (sc_lv<3>) (zext_ln1265_32_fu_38817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_15_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_15_8_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_15_8_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        edge_attr_aggr_15_8_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_15_8_3_V_ce0 = ap_const_logic_0;
    }
}

}

