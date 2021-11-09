#include "edge_aggregate.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void edge_aggregate::thread_edge_attr_aggr_7_5_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_5_3_V_d0 = add_ln703_31_fu_40776_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_5_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_5_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_5_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_7_5_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_5_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_0_V_address0 = edge_attr_aggr_7_6_0_V_addr_1_reg_46627.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_0_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_6_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_0_V_ce0() {
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
        edge_attr_aggr_7_6_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_6_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_0_V_d0 = add_ln703_28_fu_40599_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_6_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_6_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_7_6_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_6_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_1_V_address0 = edge_attr_aggr_7_6_1_V_addr_1_reg_46712.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_1_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_6_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_1_V_ce0() {
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
        edge_attr_aggr_7_6_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_6_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_1_V_d0 = add_ln703_29_fu_40658_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_6_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_6_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_7_6_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_6_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_2_V_address0 = edge_attr_aggr_7_6_2_V_addr_1_reg_46797.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_2_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_6_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_2_V_ce0() {
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
        edge_attr_aggr_7_6_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_6_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_2_V_d0 = add_ln703_30_fu_40717_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_6_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_6_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_7_6_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_6_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_3_V_address0 = edge_attr_aggr_7_6_3_V_addr_1_reg_46882.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_3_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_6_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_3_V_ce0() {
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
        edge_attr_aggr_7_6_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_6_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_6_3_V_d0 = add_ln703_31_fu_40776_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_6_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_6_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_6_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_7_6_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_6_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_0_V_address0 = edge_attr_aggr_7_7_0_V_addr_1_reg_46632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_0_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_7_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_0_V_ce0() {
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
        edge_attr_aggr_7_7_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_7_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_0_V_d0 = add_ln703_28_fu_40599_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_7_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_7_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_7_7_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_7_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_1_V_address0 = edge_attr_aggr_7_7_1_V_addr_1_reg_46717.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_1_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_7_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_1_V_ce0() {
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
        edge_attr_aggr_7_7_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_7_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_1_V_d0 = add_ln703_29_fu_40658_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_7_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_7_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_7_7_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_7_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_2_V_address0 = edge_attr_aggr_7_7_2_V_addr_1_reg_46802.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_2_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_7_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_2_V_ce0() {
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
        edge_attr_aggr_7_7_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_7_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_2_V_d0 = add_ln703_30_fu_40717_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_7_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_7_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_7_7_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_7_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_3_V_address0 = edge_attr_aggr_7_7_3_V_addr_1_reg_46887.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_3_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_7_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_3_V_ce0() {
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
        edge_attr_aggr_7_7_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_7_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_7_3_V_d0 = add_ln703_31_fu_40776_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_7_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_7_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_7_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_7_7_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_7_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_0_V_address0 = edge_attr_aggr_7_8_0_V_addr_1_reg_46637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_0_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_8_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_0_V_ce0() {
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
        edge_attr_aggr_7_8_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_8_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_0_V_d0 = add_ln703_28_fu_40599_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_8_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_8_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_7_8_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_8_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_1_V_address0 = edge_attr_aggr_7_8_1_V_addr_1_reg_46722.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_1_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_8_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_1_V_ce0() {
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
        edge_attr_aggr_7_8_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_8_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_1_V_d0 = add_ln703_29_fu_40658_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_8_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_8_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_7_8_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_8_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_2_V_address0 = edge_attr_aggr_7_8_2_V_addr_1_reg_46807.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_2_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_8_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_2_V_ce0() {
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
        edge_attr_aggr_7_8_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_8_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_2_V_d0 = add_ln703_30_fu_40717_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_8_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_8_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_7_8_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_8_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_3_V_address0 = edge_attr_aggr_7_8_3_V_addr_1_reg_46892.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_3_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_8_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_3_V_ce0() {
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
        edge_attr_aggr_7_8_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_8_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_8_3_V_d0 = add_ln703_31_fu_40776_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_8_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_8_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_8_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_7_8_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_8_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_0_V_address0 = edge_attr_aggr_7_9_0_V_addr_1_reg_46642.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_0_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_9_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_0_V_ce0() {
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
        edge_attr_aggr_7_9_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_9_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_0_V_d0 = add_ln703_28_fu_40599_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_9_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_9_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_7_9_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_9_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_1_V_address0 = edge_attr_aggr_7_9_1_V_addr_1_reg_46727.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_1_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_9_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_1_V_ce0() {
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
        edge_attr_aggr_7_9_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_9_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_1_V_d0 = add_ln703_29_fu_40658_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_9_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_9_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_7_9_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_9_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_2_V_address0 = edge_attr_aggr_7_9_2_V_addr_1_reg_46812.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_2_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_9_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_2_V_ce0() {
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
        edge_attr_aggr_7_9_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_9_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_2_V_d0 = add_ln703_30_fu_40717_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_9_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_9_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_7_9_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_9_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_3_V_address0 = edge_attr_aggr_7_9_3_V_addr_1_reg_46897.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_3_V_address0 =  (sc_lv<3>) (zext_ln1265_16_fu_38161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_7_9_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_3_V_ce0() {
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
        edge_attr_aggr_7_9_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_9_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_9_3_V_d0 = add_ln703_31_fu_40776_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_9_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_7_9_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_7_9_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_7_reg_46592.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_7_9_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_9_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_0_V_address0 = edge_attr_aggr_8_0_0_V_addr_1_reg_46942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_0_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_0_V_ce0() {
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
        edge_attr_aggr_8_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_0_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_8_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_1_V_address0 = edge_attr_aggr_8_0_1_V_addr_1_reg_47027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_0_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_1_V_ce0() {
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
        edge_attr_aggr_8_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_0_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_8_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_2_V_address0 = edge_attr_aggr_8_0_2_V_addr_1_reg_47112.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_0_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_2_V_ce0() {
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
        edge_attr_aggr_8_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_0_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_8_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_3_V_address0 = edge_attr_aggr_8_0_3_V_addr_1_reg_47197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_0_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_3_V_ce0() {
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
        edge_attr_aggr_8_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_0_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_8_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_0_V_address0 = edge_attr_aggr_8_10_0_V_addr_1_reg_46992.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_10_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_0_V_ce0() {
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
        edge_attr_aggr_8_10_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_10_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_10_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_10_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_8_10_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_10_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_1_V_address0 = edge_attr_aggr_8_10_1_V_addr_1_reg_47077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_10_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_1_V_ce0() {
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
        edge_attr_aggr_8_10_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_10_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_10_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_10_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_8_10_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_10_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_2_V_address0 = edge_attr_aggr_8_10_2_V_addr_1_reg_47162.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_10_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_2_V_ce0() {
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
        edge_attr_aggr_8_10_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_10_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_10_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_10_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_8_10_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_10_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_3_V_address0 = edge_attr_aggr_8_10_3_V_addr_1_reg_47247.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_10_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_3_V_ce0() {
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
        edge_attr_aggr_8_10_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_10_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_10_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_10_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_10_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_10_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_8_10_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_10_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_0_V_address0 = edge_attr_aggr_8_11_0_V_addr_1_reg_46997.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_11_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_0_V_ce0() {
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
        edge_attr_aggr_8_11_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_11_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_11_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_11_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_8_11_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_11_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_1_V_address0 = edge_attr_aggr_8_11_1_V_addr_1_reg_47082.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_11_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_1_V_ce0() {
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
        edge_attr_aggr_8_11_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_11_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_11_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_11_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_8_11_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_11_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_2_V_address0 = edge_attr_aggr_8_11_2_V_addr_1_reg_47167.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_11_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_2_V_ce0() {
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
        edge_attr_aggr_8_11_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_11_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_11_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_11_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_8_11_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_11_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_3_V_address0 = edge_attr_aggr_8_11_3_V_addr_1_reg_47252.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_11_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_3_V_ce0() {
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
        edge_attr_aggr_8_11_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_11_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_11_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_11_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_11_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_11_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_8_11_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_11_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_0_V_address0 = edge_attr_aggr_8_12_0_V_addr_1_reg_47002.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_12_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_0_V_ce0() {
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
        edge_attr_aggr_8_12_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_12_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_12_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_12_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_8_12_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_12_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_1_V_address0 = edge_attr_aggr_8_12_1_V_addr_1_reg_47087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_12_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_1_V_ce0() {
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
        edge_attr_aggr_8_12_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_12_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_12_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_12_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_8_12_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_12_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_2_V_address0 = edge_attr_aggr_8_12_2_V_addr_1_reg_47172.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_12_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_2_V_ce0() {
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
        edge_attr_aggr_8_12_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_12_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_12_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_12_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_8_12_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_12_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_3_V_address0 = edge_attr_aggr_8_12_3_V_addr_1_reg_47257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_12_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_3_V_ce0() {
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
        edge_attr_aggr_8_12_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_12_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_12_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_12_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_12_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_12_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_8_12_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_12_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_0_V_address0 = edge_attr_aggr_8_13_0_V_addr_1_reg_47007.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_13_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_0_V_ce0() {
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
        edge_attr_aggr_8_13_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_13_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_13_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_13_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_8_13_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_13_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_1_V_address0 = edge_attr_aggr_8_13_1_V_addr_1_reg_47092.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_13_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_1_V_ce0() {
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
        edge_attr_aggr_8_13_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_13_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_13_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_13_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_8_13_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_13_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_2_V_address0 = edge_attr_aggr_8_13_2_V_addr_1_reg_47177.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_13_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_2_V_ce0() {
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
        edge_attr_aggr_8_13_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_13_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_13_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_13_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_8_13_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_13_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_3_V_address0 = edge_attr_aggr_8_13_3_V_addr_1_reg_47262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_13_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_3_V_ce0() {
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
        edge_attr_aggr_8_13_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_13_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_13_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_13_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_13_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_13_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_8_13_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_13_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_0_V_address0 = edge_attr_aggr_8_14_0_V_addr_1_reg_47012.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_14_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_0_V_ce0() {
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
        edge_attr_aggr_8_14_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_14_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_14_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_14_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_8_14_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_14_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_1_V_address0 = edge_attr_aggr_8_14_1_V_addr_1_reg_47097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_14_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_1_V_ce0() {
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
        edge_attr_aggr_8_14_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_14_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_14_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_14_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_8_14_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_14_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_2_V_address0 = edge_attr_aggr_8_14_2_V_addr_1_reg_47182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_14_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_2_V_ce0() {
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
        edge_attr_aggr_8_14_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_14_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_14_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_14_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_8_14_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_14_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_3_V_address0 = edge_attr_aggr_8_14_3_V_addr_1_reg_47267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_14_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_3_V_ce0() {
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
        edge_attr_aggr_8_14_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_14_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_14_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_14_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_14_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_14_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_8_14_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_14_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_0_V_address0 = edge_attr_aggr_8_15_0_V_addr_1_reg_47017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_15_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_0_V_ce0() {
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
        edge_attr_aggr_8_15_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_15_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_15_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_15_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_8_15_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_15_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_1_V_address0 = edge_attr_aggr_8_15_1_V_addr_1_reg_47102.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_15_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_1_V_ce0() {
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
        edge_attr_aggr_8_15_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_15_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_15_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_15_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_8_15_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_15_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_2_V_address0 = edge_attr_aggr_8_15_2_V_addr_1_reg_47187.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_15_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_2_V_ce0() {
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
        edge_attr_aggr_8_15_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_15_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_15_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_15_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_8_15_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_15_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_3_V_address0 = edge_attr_aggr_8_15_3_V_addr_1_reg_47272.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_15_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_3_V_ce0() {
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
        edge_attr_aggr_8_15_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_15_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_15_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_15_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_15_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_15_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_8_15_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_15_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_0_V_address0 = edge_attr_aggr_8_1_0_V_addr_1_reg_46947.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_1_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_0_V_ce0() {
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
        edge_attr_aggr_8_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_1_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_8_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_1_V_address0 = edge_attr_aggr_8_1_1_V_addr_1_reg_47032.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_1_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_1_V_ce0() {
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
        edge_attr_aggr_8_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_1_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_8_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_2_V_address0 = edge_attr_aggr_8_1_2_V_addr_1_reg_47117.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_1_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_2_V_ce0() {
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
        edge_attr_aggr_8_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_1_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_8_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_3_V_address0 = edge_attr_aggr_8_1_3_V_addr_1_reg_47202.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_1_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_3_V_ce0() {
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
        edge_attr_aggr_8_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_1_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_8_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_0_V_address0 = edge_attr_aggr_8_2_0_V_addr_1_reg_46952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_2_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_0_V_ce0() {
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
        edge_attr_aggr_8_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_2_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_8_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_1_V_address0 = edge_attr_aggr_8_2_1_V_addr_1_reg_47037.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_2_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_1_V_ce0() {
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
        edge_attr_aggr_8_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_2_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_8_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_2_V_address0 = edge_attr_aggr_8_2_2_V_addr_1_reg_47122.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_2_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_2_V_ce0() {
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
        edge_attr_aggr_8_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_2_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_8_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_3_V_address0 = edge_attr_aggr_8_2_3_V_addr_1_reg_47207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_2_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_3_V_ce0() {
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
        edge_attr_aggr_8_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_2_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_8_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_0_V_address0 = edge_attr_aggr_8_3_0_V_addr_1_reg_46957.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_3_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_0_V_ce0() {
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
        edge_attr_aggr_8_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_3_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_8_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_1_V_address0 = edge_attr_aggr_8_3_1_V_addr_1_reg_47042.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_3_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_1_V_ce0() {
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
        edge_attr_aggr_8_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_3_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_8_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_2_V_address0 = edge_attr_aggr_8_3_2_V_addr_1_reg_47127.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_3_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_2_V_ce0() {
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
        edge_attr_aggr_8_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_3_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_8_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_3_V_address0 = edge_attr_aggr_8_3_3_V_addr_1_reg_47212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_3_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_3_V_ce0() {
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
        edge_attr_aggr_8_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_3_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_8_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_0_V_address0 = edge_attr_aggr_8_4_0_V_addr_1_reg_46962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_4_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_0_V_ce0() {
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
        edge_attr_aggr_8_4_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_4_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_4_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_4_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_8_4_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_4_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_1_V_address0 = edge_attr_aggr_8_4_1_V_addr_1_reg_47047.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_4_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_1_V_ce0() {
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
        edge_attr_aggr_8_4_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_4_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_4_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_4_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_8_4_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_4_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_2_V_address0 = edge_attr_aggr_8_4_2_V_addr_1_reg_47132.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_4_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_2_V_ce0() {
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
        edge_attr_aggr_8_4_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_4_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_4_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_4_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_8_4_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_4_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_3_V_address0 = edge_attr_aggr_8_4_3_V_addr_1_reg_47217.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_4_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_3_V_ce0() {
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
        edge_attr_aggr_8_4_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_4_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_4_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_4_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_4_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_4_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_8_4_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_4_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_0_V_address0 = edge_attr_aggr_8_5_0_V_addr_1_reg_46967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_5_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_0_V_ce0() {
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
        edge_attr_aggr_8_5_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_5_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_5_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_5_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_8_5_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_5_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_1_V_address0 = edge_attr_aggr_8_5_1_V_addr_1_reg_47052.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_5_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_1_V_ce0() {
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
        edge_attr_aggr_8_5_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_5_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_5_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_5_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_8_5_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_5_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_2_V_address0 = edge_attr_aggr_8_5_2_V_addr_1_reg_47137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_5_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_2_V_ce0() {
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
        edge_attr_aggr_8_5_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_5_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_5_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_5_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_8_5_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_5_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_3_V_address0 = edge_attr_aggr_8_5_3_V_addr_1_reg_47222.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_5_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_3_V_ce0() {
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
        edge_attr_aggr_8_5_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_5_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_5_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_5_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_5_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_5_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_8_5_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_5_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_0_V_address0 = edge_attr_aggr_8_6_0_V_addr_1_reg_46972.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_6_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_0_V_ce0() {
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
        edge_attr_aggr_8_6_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_6_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_6_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_6_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_8_6_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_6_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_1_V_address0 = edge_attr_aggr_8_6_1_V_addr_1_reg_47057.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_6_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_1_V_ce0() {
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
        edge_attr_aggr_8_6_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_6_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_6_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_6_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_8_6_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_6_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_2_V_address0 = edge_attr_aggr_8_6_2_V_addr_1_reg_47142.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_6_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_2_V_ce0() {
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
        edge_attr_aggr_8_6_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_6_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_6_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_6_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_8_6_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_6_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_3_V_address0 = edge_attr_aggr_8_6_3_V_addr_1_reg_47227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_6_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_3_V_ce0() {
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
        edge_attr_aggr_8_6_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_6_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_6_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_6_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_6_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_6_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_8_6_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_6_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_0_V_address0 = edge_attr_aggr_8_7_0_V_addr_1_reg_46977.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_7_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_0_V_ce0() {
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
        edge_attr_aggr_8_7_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_7_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_7_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_7_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_8_7_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_7_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_1_V_address0 = edge_attr_aggr_8_7_1_V_addr_1_reg_47062.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_7_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_1_V_ce0() {
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
        edge_attr_aggr_8_7_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_7_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_7_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_7_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_8_7_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_7_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_2_V_address0 = edge_attr_aggr_8_7_2_V_addr_1_reg_47147.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_7_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_2_V_ce0() {
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
        edge_attr_aggr_8_7_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_7_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_7_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_7_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_8_7_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_7_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_3_V_address0 = edge_attr_aggr_8_7_3_V_addr_1_reg_47232.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_7_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_3_V_ce0() {
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
        edge_attr_aggr_8_7_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_7_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_7_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_7_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_7_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_7_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_8_7_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_7_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_0_V_address0 = edge_attr_aggr_8_8_0_V_addr_1_reg_46982.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_8_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_0_V_ce0() {
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
        edge_attr_aggr_8_8_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_8_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_8_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_8_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_8_8_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_8_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_1_V_address0 = edge_attr_aggr_8_8_1_V_addr_1_reg_47067.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_8_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_1_V_ce0() {
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
        edge_attr_aggr_8_8_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_8_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_8_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_8_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_8_8_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_8_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_2_V_address0 = edge_attr_aggr_8_8_2_V_addr_1_reg_47152.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_8_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_2_V_ce0() {
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
        edge_attr_aggr_8_8_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_8_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_8_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_8_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_8_8_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_8_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_3_V_address0 = edge_attr_aggr_8_8_3_V_addr_1_reg_47237.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_8_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_3_V_ce0() {
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
        edge_attr_aggr_8_8_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_8_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_8_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_8_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_8_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_8_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_8_8_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_8_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_0_V_address0 = edge_attr_aggr_8_9_0_V_addr_1_reg_46987.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_0_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_9_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_0_V_ce0() {
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
        edge_attr_aggr_8_9_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_9_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_0_V_d0 = add_ln703_32_fu_40838_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_9_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_9_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_8_9_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_9_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_1_V_address0 = edge_attr_aggr_8_9_1_V_addr_1_reg_47072.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_1_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_9_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_1_V_ce0() {
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
        edge_attr_aggr_8_9_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_9_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_1_V_d0 = add_ln703_33_fu_40897_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_9_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_9_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_8_9_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_9_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_2_V_address0 = edge_attr_aggr_8_9_2_V_addr_1_reg_47157.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_2_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_9_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_2_V_ce0() {
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
        edge_attr_aggr_8_9_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_9_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_2_V_d0 = add_ln703_34_fu_40956_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_9_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_9_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_8_9_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_9_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_3_V_address0 = edge_attr_aggr_8_9_3_V_addr_1_reg_47242.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_3_V_address0 =  (sc_lv<3>) (zext_ln1265_18_fu_38243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_8_9_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_3_V_ce0() {
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
        edge_attr_aggr_8_9_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_9_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_9_3_V_d0 = add_ln703_35_fu_41015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_9_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_8_9_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_8_9_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_8_reg_46937.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_8_9_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_9_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_0_V_address0 = edge_attr_aggr_9_0_0_V_addr_1_reg_47287.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_0_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_0_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_0_V_ce0() {
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
        edge_attr_aggr_9_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_0_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_0_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_0_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_9_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_0_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_1_V_address0 = edge_attr_aggr_9_0_1_V_addr_1_reg_47372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_0_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_0_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_1_V_ce0() {
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
        edge_attr_aggr_9_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_0_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_0_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_0_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_9_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_0_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_2_V_address0 = edge_attr_aggr_9_0_2_V_addr_1_reg_47457.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_0_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_0_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_2_V_ce0() {
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
        edge_attr_aggr_9_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_0_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_0_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_0_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_9_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_0_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_3_V_address0 = edge_attr_aggr_9_0_3_V_addr_1_reg_47542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_0_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_0_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_3_V_ce0() {
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
        edge_attr_aggr_9_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_0_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_0_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_0_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_0_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_0)))) {
        edge_attr_aggr_9_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_0_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_0_V_address0 = edge_attr_aggr_9_10_0_V_addr_1_reg_47337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_10_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_10_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_0_V_ce0() {
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
        edge_attr_aggr_9_10_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_10_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_10_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_10_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_9_10_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_10_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_1_V_address0 = edge_attr_aggr_9_10_1_V_addr_1_reg_47422.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_10_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_10_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_1_V_ce0() {
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
        edge_attr_aggr_9_10_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_10_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_10_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_10_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_9_10_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_10_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_2_V_address0 = edge_attr_aggr_9_10_2_V_addr_1_reg_47507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_10_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_10_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_2_V_ce0() {
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
        edge_attr_aggr_9_10_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_10_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_10_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_10_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_9_10_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_10_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_3_V_address0 = edge_attr_aggr_9_10_3_V_addr_1_reg_47592.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_10_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_10_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_3_V_ce0() {
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
        edge_attr_aggr_9_10_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_10_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_10_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_10_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_10_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_10_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_A)))) {
        edge_attr_aggr_9_10_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_10_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_0_V_address0 = edge_attr_aggr_9_11_0_V_addr_1_reg_47342.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_11_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_11_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_0_V_ce0() {
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
        edge_attr_aggr_9_11_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_11_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_11_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_11_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_9_11_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_11_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_1_V_address0 = edge_attr_aggr_9_11_1_V_addr_1_reg_47427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_11_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_11_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_1_V_ce0() {
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
        edge_attr_aggr_9_11_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_11_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_11_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_11_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_9_11_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_11_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_2_V_address0 = edge_attr_aggr_9_11_2_V_addr_1_reg_47512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_11_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_11_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_2_V_ce0() {
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
        edge_attr_aggr_9_11_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_11_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_11_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_11_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_9_11_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_11_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_3_V_address0 = edge_attr_aggr_9_11_3_V_addr_1_reg_47597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_11_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_11_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_3_V_ce0() {
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
        edge_attr_aggr_9_11_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_11_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_11_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_11_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_11_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_11_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_B)))) {
        edge_attr_aggr_9_11_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_11_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_0_V_address0 = edge_attr_aggr_9_12_0_V_addr_1_reg_47347.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_12_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_12_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_0_V_ce0() {
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
        edge_attr_aggr_9_12_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_12_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_12_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_12_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_9_12_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_12_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_1_V_address0 = edge_attr_aggr_9_12_1_V_addr_1_reg_47432.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_12_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_12_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_1_V_ce0() {
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
        edge_attr_aggr_9_12_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_12_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_12_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_12_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_9_12_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_12_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_2_V_address0 = edge_attr_aggr_9_12_2_V_addr_1_reg_47517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_12_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_12_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_2_V_ce0() {
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
        edge_attr_aggr_9_12_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_12_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_12_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_12_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_9_12_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_12_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_3_V_address0 = edge_attr_aggr_9_12_3_V_addr_1_reg_47602.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_12_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_12_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_3_V_ce0() {
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
        edge_attr_aggr_9_12_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_12_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_12_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_12_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_12_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_12_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_C)))) {
        edge_attr_aggr_9_12_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_12_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_0_V_address0 = edge_attr_aggr_9_13_0_V_addr_1_reg_47352.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_13_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_13_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_0_V_ce0() {
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
        edge_attr_aggr_9_13_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_13_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_13_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_13_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_9_13_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_13_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_1_V_address0 = edge_attr_aggr_9_13_1_V_addr_1_reg_47437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_13_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_13_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_1_V_ce0() {
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
        edge_attr_aggr_9_13_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_13_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_13_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_13_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_9_13_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_13_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_2_V_address0 = edge_attr_aggr_9_13_2_V_addr_1_reg_47522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_13_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_13_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_2_V_ce0() {
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
        edge_attr_aggr_9_13_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_13_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_13_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_13_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_9_13_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_13_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_3_V_address0 = edge_attr_aggr_9_13_3_V_addr_1_reg_47607.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_13_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_13_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_3_V_ce0() {
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
        edge_attr_aggr_9_13_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_13_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_13_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_13_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_13_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_13_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_D)))) {
        edge_attr_aggr_9_13_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_13_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_0_V_address0 = edge_attr_aggr_9_14_0_V_addr_1_reg_47357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_14_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_14_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_0_V_ce0() {
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
        edge_attr_aggr_9_14_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_14_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_14_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_14_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_9_14_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_14_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_1_V_address0 = edge_attr_aggr_9_14_1_V_addr_1_reg_47442.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_14_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_14_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_1_V_ce0() {
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
        edge_attr_aggr_9_14_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_14_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_14_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_14_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_9_14_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_14_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_2_V_address0 = edge_attr_aggr_9_14_2_V_addr_1_reg_47527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_14_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_14_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_2_V_ce0() {
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
        edge_attr_aggr_9_14_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_14_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_14_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_14_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_9_14_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_14_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_3_V_address0 = edge_attr_aggr_9_14_3_V_addr_1_reg_47612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_14_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_14_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_3_V_ce0() {
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
        edge_attr_aggr_9_14_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_14_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_14_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_14_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_14_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_14_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_E)))) {
        edge_attr_aggr_9_14_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_14_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_0_V_address0 = edge_attr_aggr_9_15_0_V_addr_1_reg_47362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_15_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_15_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_0_V_ce0() {
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
        edge_attr_aggr_9_15_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_15_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_15_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_15_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_9_15_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_15_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_1_V_address0 = edge_attr_aggr_9_15_1_V_addr_1_reg_47447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_15_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_15_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_1_V_ce0() {
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
        edge_attr_aggr_9_15_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_15_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_15_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_15_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_9_15_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_15_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_2_V_address0 = edge_attr_aggr_9_15_2_V_addr_1_reg_47532.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_15_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_15_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_2_V_ce0() {
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
        edge_attr_aggr_9_15_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_15_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_15_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_15_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_9_15_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_15_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_3_V_address0 = edge_attr_aggr_9_15_3_V_addr_1_reg_47617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_15_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_15_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_3_V_ce0() {
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
        edge_attr_aggr_9_15_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_15_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_15_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_15_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_15_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_15_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_F)))) {
        edge_attr_aggr_9_15_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_15_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_0_V_address0 = edge_attr_aggr_9_1_0_V_addr_1_reg_47292.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_1_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_1_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_0_V_ce0() {
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
        edge_attr_aggr_9_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_1_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_1_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_1_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_9_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_1_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_1_V_address0 = edge_attr_aggr_9_1_1_V_addr_1_reg_47377.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_1_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_1_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_1_V_ce0() {
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
        edge_attr_aggr_9_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_1_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_1_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_1_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_9_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_1_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_2_V_address0 = edge_attr_aggr_9_1_2_V_addr_1_reg_47462.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_1_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_1_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_2_V_ce0() {
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
        edge_attr_aggr_9_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_1_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_1_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_1_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_9_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_1_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_3_V_address0 = edge_attr_aggr_9_1_3_V_addr_1_reg_47547.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_1_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_1_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_3_V_ce0() {
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
        edge_attr_aggr_9_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_1_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_1_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_1_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_1_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_1)))) {
        edge_attr_aggr_9_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_1_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_0_V_address0 = edge_attr_aggr_9_2_0_V_addr_1_reg_47297.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_2_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_2_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_0_V_ce0() {
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
        edge_attr_aggr_9_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_2_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_2_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_2_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_9_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_2_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_1_V_address0 = edge_attr_aggr_9_2_1_V_addr_1_reg_47382.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_2_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_2_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_1_V_ce0() {
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
        edge_attr_aggr_9_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_2_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_2_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_2_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_9_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_2_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_2_V_address0 = edge_attr_aggr_9_2_2_V_addr_1_reg_47467.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_2_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_2_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_2_V_ce0() {
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
        edge_attr_aggr_9_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_2_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_2_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_2_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_9_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_2_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_3_V_address0 = edge_attr_aggr_9_2_3_V_addr_1_reg_47552.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_2_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_2_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_3_V_ce0() {
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
        edge_attr_aggr_9_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_2_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_2_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_2_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_2_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_2)))) {
        edge_attr_aggr_9_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_2_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_0_V_address0 = edge_attr_aggr_9_3_0_V_addr_1_reg_47302.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_3_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_3_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_0_V_ce0() {
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
        edge_attr_aggr_9_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_3_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_3_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_3_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_9_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_3_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_1_V_address0 = edge_attr_aggr_9_3_1_V_addr_1_reg_47387.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_3_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_3_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_1_V_ce0() {
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
        edge_attr_aggr_9_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_3_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_3_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_3_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_9_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_3_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_2_V_address0 = edge_attr_aggr_9_3_2_V_addr_1_reg_47472.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_3_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_3_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_2_V_ce0() {
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
        edge_attr_aggr_9_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_3_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_3_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_3_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_9_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_3_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_3_V_address0 = edge_attr_aggr_9_3_3_V_addr_1_reg_47557.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_3_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_3_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_3_V_ce0() {
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
        edge_attr_aggr_9_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_3_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_3_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_3_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_3_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_3)))) {
        edge_attr_aggr_9_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_3_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_0_V_address0 = edge_attr_aggr_9_4_0_V_addr_1_reg_47307.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_4_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_4_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_0_V_ce0() {
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
        edge_attr_aggr_9_4_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_4_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_4_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_4_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_9_4_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_4_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_1_V_address0 = edge_attr_aggr_9_4_1_V_addr_1_reg_47392.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_4_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_4_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_1_V_ce0() {
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
        edge_attr_aggr_9_4_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_4_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_4_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_4_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_9_4_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_4_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_2_V_address0 = edge_attr_aggr_9_4_2_V_addr_1_reg_47477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_4_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_4_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_2_V_ce0() {
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
        edge_attr_aggr_9_4_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_4_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_4_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_4_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_9_4_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_4_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_3_V_address0 = edge_attr_aggr_9_4_3_V_addr_1_reg_47562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_4_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_4_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_3_V_ce0() {
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
        edge_attr_aggr_9_4_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_4_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_4_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_4_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_4_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_4_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_4)))) {
        edge_attr_aggr_9_4_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_4_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_0_V_address0 = edge_attr_aggr_9_5_0_V_addr_1_reg_47312.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_5_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_5_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_0_V_ce0() {
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
        edge_attr_aggr_9_5_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_5_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_5_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_5_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_9_5_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_5_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_1_V_address0 = edge_attr_aggr_9_5_1_V_addr_1_reg_47397.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_5_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_5_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_1_V_ce0() {
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
        edge_attr_aggr_9_5_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_5_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_5_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_5_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_9_5_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_5_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_2_V_address0 = edge_attr_aggr_9_5_2_V_addr_1_reg_47482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_5_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_5_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_2_V_ce0() {
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
        edge_attr_aggr_9_5_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_5_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_5_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_5_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_9_5_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_5_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_3_V_address0 = edge_attr_aggr_9_5_3_V_addr_1_reg_47567.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_5_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_5_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_3_V_ce0() {
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
        edge_attr_aggr_9_5_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_5_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_5_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_5_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_5_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_5_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_5)))) {
        edge_attr_aggr_9_5_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_5_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_0_V_address0 = edge_attr_aggr_9_6_0_V_addr_1_reg_47317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_6_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_6_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_0_V_ce0() {
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
        edge_attr_aggr_9_6_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_6_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_6_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_6_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_9_6_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_6_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_1_V_address0 = edge_attr_aggr_9_6_1_V_addr_1_reg_47402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_6_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_6_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_1_V_ce0() {
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
        edge_attr_aggr_9_6_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_6_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_6_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_6_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_9_6_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_6_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_2_V_address0 = edge_attr_aggr_9_6_2_V_addr_1_reg_47487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_6_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_6_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_2_V_ce0() {
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
        edge_attr_aggr_9_6_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_6_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_6_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_6_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_9_6_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_6_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_3_V_address0 = edge_attr_aggr_9_6_3_V_addr_1_reg_47572.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_6_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_6_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_3_V_ce0() {
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
        edge_attr_aggr_9_6_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_6_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_6_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_6_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_6_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_6_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_6)))) {
        edge_attr_aggr_9_6_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_6_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_0_V_address0 = edge_attr_aggr_9_7_0_V_addr_1_reg_47322.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_7_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_7_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_0_V_ce0() {
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
        edge_attr_aggr_9_7_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_7_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_7_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_7_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_9_7_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_7_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_1_V_address0 = edge_attr_aggr_9_7_1_V_addr_1_reg_47407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_7_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_7_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_1_V_ce0() {
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
        edge_attr_aggr_9_7_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_7_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_7_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_7_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_9_7_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_7_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_2_V_address0 = edge_attr_aggr_9_7_2_V_addr_1_reg_47492.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_7_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_7_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_2_V_ce0() {
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
        edge_attr_aggr_9_7_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_7_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_7_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_7_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_9_7_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_7_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_3_V_address0 = edge_attr_aggr_9_7_3_V_addr_1_reg_47577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_7_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_7_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_3_V_ce0() {
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
        edge_attr_aggr_9_7_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_7_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_7_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_7_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_7_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_7_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_7)))) {
        edge_attr_aggr_9_7_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_7_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_0_V_address0 = edge_attr_aggr_9_8_0_V_addr_1_reg_47327.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_8_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_8_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_0_V_ce0() {
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
        edge_attr_aggr_9_8_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_8_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_8_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_8_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_9_8_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_8_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_1_V_address0 = edge_attr_aggr_9_8_1_V_addr_1_reg_47412.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_8_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_8_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_1_V_ce0() {
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
        edge_attr_aggr_9_8_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_8_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_8_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_8_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_9_8_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_8_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_2_V_address0 = edge_attr_aggr_9_8_2_V_addr_1_reg_47497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_8_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_8_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_2_V_ce0() {
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
        edge_attr_aggr_9_8_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_8_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_8_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_8_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_9_8_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_8_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_3_V_address0 = edge_attr_aggr_9_8_3_V_addr_1_reg_47582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_8_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_8_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_3_V_ce0() {
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
        edge_attr_aggr_9_8_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_8_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_8_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_8_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_8_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_8_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_8)))) {
        edge_attr_aggr_9_8_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_8_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_0_V_address0 = edge_attr_aggr_9_9_0_V_addr_1_reg_47332.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_0_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_9_0_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_9_0_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_0_V_ce0() {
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
        edge_attr_aggr_9_9_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_9_0_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_0_V_d0 = add_ln703_36_fu_41077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_9_0_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_9_0_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_9_9_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_9_0_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_1_V_address0 = edge_attr_aggr_9_9_1_V_addr_1_reg_47417.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_1_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_9_1_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_9_1_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_1_V_ce0() {
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
        edge_attr_aggr_9_9_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_9_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_1_V_d0 = add_ln703_37_fu_41136_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_9_1_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_9_1_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_9_9_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_9_1_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_2_V_address0 = edge_attr_aggr_9_9_2_V_addr_1_reg_47502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_2_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_9_2_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_9_2_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_2_V_ce0() {
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
        edge_attr_aggr_9_9_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_9_2_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_2_V_d0 = add_ln703_38_fu_41195_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_9_2_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_9_2_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_9_9_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_9_2_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_212_fu_42725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_3_V_address0 = edge_attr_aggr_9_9_3_V_addr_1_reg_47587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_3_V_address0 =  (sc_lv<3>) (zext_ln1265_20_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_9_3_V_address0 =  (sc_lv<3>) (zext_ln203_fu_36413_p1.read());
    } else {
        edge_attr_aggr_9_9_3_V_address0 = "XXX";
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_3_V_ce0() {
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
        edge_attr_aggr_9_9_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_9_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_9_9_3_V_d0 = add_ln703_39_fu_41254_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_9_9_3_V_d0 = ap_const_lv16_0;
    } else {
        edge_attr_aggr_9_9_3_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void edge_aggregate::thread_edge_attr_aggr_9_9_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln367_fu_36397_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,4,4>(trunc_ln1265_9_reg_47282.read(), ap_const_lv4_9)))) {
        edge_attr_aggr_9_9_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_9_9_3_V_we0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_11_V_address0() {
    edge_index_1D_11_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_11_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_11_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_11_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_13_V_address0() {
    edge_index_1D_13_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_13_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_13_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_13_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_15_V_address0() {
    edge_index_1D_15_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_15_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_15_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_15_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_17_V_address0() {
    edge_index_1D_17_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_17_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_17_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_17_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_19_V_address0() {
    edge_index_1D_19_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_19_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_19_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_19_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_1_V_address0() {
    edge_index_1D_1_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_1_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_21_V_address0() {
    edge_index_1D_21_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_21_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_21_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_21_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_23_V_address0() {
    edge_index_1D_23_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_23_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_23_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_23_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_25_V_address0() {
    edge_index_1D_25_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_25_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_25_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_25_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_27_V_address0() {
    edge_index_1D_27_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_27_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_27_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_27_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_29_V_address0() {
    edge_index_1D_29_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_29_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_29_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_29_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_31_V_address0() {
    edge_index_1D_31_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_31_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_31_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_31_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_3_V_address0() {
    edge_index_1D_3_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_3_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_5_V_address0() {
    edge_index_1D_5_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_5_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_5_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_7_V_address0() {
    edge_index_1D_7_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_7_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_7_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_edge_index_1D_9_V_address0() {
    edge_index_1D_9_V_address0 =  (sc_lv<4>) (zext_ln380_fu_37467_p1.read());
}

void edge_aggregate::thread_edge_index_1D_9_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        edge_index_1D_9_V_ce0 = ap_const_logic_1;
    } else {
        edge_index_1D_9_V_ce0 = ap_const_logic_0;
    }
}

void edge_aggregate::thread_icmp_ln367_fu_36397_p2() {
    icmp_ln367_fu_36397_p2 = (!i_0_i_0_reg_33996.read().is_01() || !ap_const_lv7_70.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_0_reg_33996.read() == ap_const_lv7_70);
}

void edge_aggregate::thread_icmp_ln377_fu_37561_p2() {
    icmp_ln377_fu_37561_p2 = (!or_ln377_fu_37555_p2.read().is_01() || !ap_const_lv32_CC.is_01())? sc_lv<1>(): sc_lv<1>(or_ln377_fu_37555_p2.read() == ap_const_lv32_CC);
}

void edge_aggregate::thread_icmp_ln391_fu_42709_p2() {
    icmp_ln391_fu_42709_p2 = (!r10_0_i_0_reg_34018.read().is_01() || !ap_const_lv7_70.is_01())? sc_lv<1>(): sc_lv<1>(r10_0_i_0_reg_34018.read() == ap_const_lv7_70);
}

void edge_aggregate::thread_lshr_ln1265_10_fu_38479_p4() {
    lshr_ln1265_10_fu_38479_p4 = edge_index_1D_23_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_11_fu_38561_p4() {
    lshr_ln1265_11_fu_38561_p4 = edge_index_1D_25_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_12_fu_38643_p4() {
    lshr_ln1265_12_fu_38643_p4 = edge_index_1D_27_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_13_fu_38725_p4() {
    lshr_ln1265_13_fu_38725_p4 = edge_index_1D_29_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_14_fu_38807_p4() {
    lshr_ln1265_14_fu_38807_p4 = edge_index_1D_31_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_1_fu_37659_p4() {
    lshr_ln1265_1_fu_37659_p4 = edge_index_1D_3_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_2_fu_37741_p4() {
    lshr_ln1265_2_fu_37741_p4 = edge_index_1D_5_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_3_fu_37823_p4() {
    lshr_ln1265_3_fu_37823_p4 = edge_index_1D_7_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_4_fu_37905_p4() {
    lshr_ln1265_4_fu_37905_p4 = edge_index_1D_9_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_5_fu_37987_p4() {
    lshr_ln1265_5_fu_37987_p4 = edge_index_1D_11_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_6_fu_38069_p4() {
    lshr_ln1265_6_fu_38069_p4 = edge_index_1D_13_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_7_fu_38151_p4() {
    lshr_ln1265_7_fu_38151_p4 = edge_index_1D_15_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_8_fu_38233_p4() {
    lshr_ln1265_8_fu_38233_p4 = edge_index_1D_17_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_9_fu_38315_p4() {
    lshr_ln1265_9_fu_38315_p4 = edge_index_1D_19_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1265_s_fu_38397_p4() {
    lshr_ln1265_s_fu_38397_p4 = edge_index_1D_21_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln1_fu_37577_p4() {
    lshr_ln1_fu_37577_p4 = edge_index_1D_1_V_q0.read().range(15, 4);
}

void edge_aggregate::thread_lshr_ln203_s_fu_42715_p4() {
    lshr_ln203_s_fu_42715_p4 = r10_0_i_0_reg_34018.read().range(6, 4);
}

void edge_aggregate::thread_lshr_ln_fu_36403_p4() {
    lshr_ln_fu_36403_p4 = i_0_i_0_reg_33996.read().range(6, 4);
}

void edge_aggregate::thread_or_ln377_fu_37555_p2() {
    or_ln377_fu_37555_p2 = (ap_phi_mux_i7_0_i_0_phi_fu_34011_p4.read() | ap_const_lv32_C);
}

void edge_aggregate::thread_trunc_ln1265_10_fu_38393_p1() {
    trunc_ln1265_10_fu_38393_p1 = edge_index_1D_21_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_11_fu_38475_p1() {
    trunc_ln1265_11_fu_38475_p1 = edge_index_1D_23_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_12_fu_38557_p1() {
    trunc_ln1265_12_fu_38557_p1 = edge_index_1D_25_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_13_fu_38639_p1() {
    trunc_ln1265_13_fu_38639_p1 = edge_index_1D_27_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_14_fu_38721_p1() {
    trunc_ln1265_14_fu_38721_p1 = edge_index_1D_29_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_15_fu_38803_p1() {
    trunc_ln1265_15_fu_38803_p1 = edge_index_1D_31_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_1_fu_37655_p1() {
    trunc_ln1265_1_fu_37655_p1 = edge_index_1D_3_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_2_fu_37737_p1() {
    trunc_ln1265_2_fu_37737_p1 = edge_index_1D_5_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_3_fu_37819_p1() {
    trunc_ln1265_3_fu_37819_p1 = edge_index_1D_7_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_4_fu_37901_p1() {
    trunc_ln1265_4_fu_37901_p1 = edge_index_1D_9_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_5_fu_37983_p1() {
    trunc_ln1265_5_fu_37983_p1 = edge_index_1D_11_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_6_fu_38065_p1() {
    trunc_ln1265_6_fu_38065_p1 = edge_index_1D_13_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_7_fu_38147_p1() {
    trunc_ln1265_7_fu_38147_p1 = edge_index_1D_15_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_8_fu_38229_p1() {
    trunc_ln1265_8_fu_38229_p1 = edge_index_1D_17_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_9_fu_38311_p1() {
    trunc_ln1265_9_fu_38311_p1 = edge_index_1D_19_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln1265_fu_37573_p1() {
    trunc_ln1265_fu_37573_p1 = edge_index_1D_1_V_q0.read().range(4-1, 0);
}

void edge_aggregate::thread_trunc_ln380_1_fu_37457_p4() {
    trunc_ln380_1_fu_37457_p4 = ap_phi_mux_i7_0_i_0_phi_fu_34011_p4.read().range(30, 4);
}

void edge_aggregate::thread_trunc_ln_fu_37447_p4() {
    trunc_ln_fu_37447_p4 = ap_phi_mux_i7_0_i_0_phi_fu_34011_p4.read().range(29, 4);
}

void edge_aggregate::thread_zext_ln1265_10_fu_37915_p1() {
    zext_ln1265_10_fu_37915_p1 = esl_zext<64,12>(lshr_ln1265_4_fu_37905_p4.read());
}

void edge_aggregate::thread_zext_ln1265_11_fu_40080_p1() {
    zext_ln1265_11_fu_40080_p1 = esl_zext<16,4>(trunc_ln1265_5_reg_45902.read());
}

void edge_aggregate::thread_zext_ln1265_12_fu_37997_p1() {
    zext_ln1265_12_fu_37997_p1 = esl_zext<64,12>(lshr_ln1265_5_fu_37987_p4.read());
}

void edge_aggregate::thread_zext_ln1265_13_fu_40319_p1() {
    zext_ln1265_13_fu_40319_p1 = esl_zext<16,4>(trunc_ln1265_6_reg_46247.read());
}

void edge_aggregate::thread_zext_ln1265_14_fu_38079_p1() {
    zext_ln1265_14_fu_38079_p1 = esl_zext<64,12>(lshr_ln1265_6_fu_38069_p4.read());
}

void edge_aggregate::thread_zext_ln1265_15_fu_40558_p1() {
    zext_ln1265_15_fu_40558_p1 = esl_zext<16,4>(trunc_ln1265_7_reg_46592.read());
}

void edge_aggregate::thread_zext_ln1265_16_fu_38161_p1() {
    zext_ln1265_16_fu_38161_p1 = esl_zext<64,12>(lshr_ln1265_7_fu_38151_p4.read());
}

void edge_aggregate::thread_zext_ln1265_17_fu_40797_p1() {
    zext_ln1265_17_fu_40797_p1 = esl_zext<16,4>(trunc_ln1265_8_reg_46937.read());
}

void edge_aggregate::thread_zext_ln1265_18_fu_38243_p1() {
    zext_ln1265_18_fu_38243_p1 = esl_zext<64,12>(lshr_ln1265_8_fu_38233_p4.read());
}

void edge_aggregate::thread_zext_ln1265_19_fu_41036_p1() {
    zext_ln1265_19_fu_41036_p1 = esl_zext<16,4>(trunc_ln1265_9_reg_47282.read());
}

void edge_aggregate::thread_zext_ln1265_1_fu_37587_p1() {
    zext_ln1265_1_fu_37587_p1 = esl_zext<64,12>(lshr_ln1_fu_37577_p4.read());
}

void edge_aggregate::thread_zext_ln1265_20_fu_38325_p1() {
    zext_ln1265_20_fu_38325_p1 = esl_zext<64,12>(lshr_ln1265_9_fu_38315_p4.read());
}

void edge_aggregate::thread_zext_ln1265_21_fu_41275_p1() {
    zext_ln1265_21_fu_41275_p1 = esl_zext<16,4>(trunc_ln1265_10_reg_47627.read());
}

void edge_aggregate::thread_zext_ln1265_22_fu_38407_p1() {
    zext_ln1265_22_fu_38407_p1 = esl_zext<64,12>(lshr_ln1265_s_fu_38397_p4.read());
}

void edge_aggregate::thread_zext_ln1265_23_fu_41514_p1() {
    zext_ln1265_23_fu_41514_p1 = esl_zext<16,4>(trunc_ln1265_11_reg_47972.read());
}

void edge_aggregate::thread_zext_ln1265_24_fu_38489_p1() {
    zext_ln1265_24_fu_38489_p1 = esl_zext<64,12>(lshr_ln1265_10_fu_38479_p4.read());
}

void edge_aggregate::thread_zext_ln1265_25_fu_41753_p1() {
    zext_ln1265_25_fu_41753_p1 = esl_zext<16,4>(trunc_ln1265_12_reg_48317.read());
}

void edge_aggregate::thread_zext_ln1265_26_fu_38571_p1() {
    zext_ln1265_26_fu_38571_p1 = esl_zext<64,12>(lshr_ln1265_11_fu_38561_p4.read());
}

void edge_aggregate::thread_zext_ln1265_27_fu_41992_p1() {
    zext_ln1265_27_fu_41992_p1 = esl_zext<16,4>(trunc_ln1265_13_reg_48662.read());
}

void edge_aggregate::thread_zext_ln1265_28_fu_38653_p1() {
    zext_ln1265_28_fu_38653_p1 = esl_zext<64,12>(lshr_ln1265_12_fu_38643_p4.read());
}

void edge_aggregate::thread_zext_ln1265_29_fu_42231_p1() {
    zext_ln1265_29_fu_42231_p1 = esl_zext<16,4>(trunc_ln1265_14_reg_49007.read());
}

void edge_aggregate::thread_zext_ln1265_2_fu_37487_p1() {
    zext_ln1265_2_fu_37487_p1 = esl_zext<64,26>(trunc_ln_fu_37447_p4.read());
}

void edge_aggregate::thread_zext_ln1265_30_fu_38735_p1() {
    zext_ln1265_30_fu_38735_p1 = esl_zext<64,12>(lshr_ln1265_13_fu_38725_p4.read());
}

void edge_aggregate::thread_zext_ln1265_31_fu_42470_p1() {
    zext_ln1265_31_fu_42470_p1 = esl_zext<16,4>(trunc_ln1265_15_reg_49352.read());
}

void edge_aggregate::thread_zext_ln1265_32_fu_38817_p1() {
    zext_ln1265_32_fu_38817_p1 = esl_zext<64,12>(lshr_ln1265_14_fu_38807_p4.read());
}

void edge_aggregate::thread_zext_ln1265_3_fu_39124_p1() {
    zext_ln1265_3_fu_39124_p1 = esl_zext<16,4>(trunc_ln1265_1_reg_44522.read());
}

void edge_aggregate::thread_zext_ln1265_4_fu_37669_p1() {
    zext_ln1265_4_fu_37669_p1 = esl_zext<64,12>(lshr_ln1265_1_fu_37659_p4.read());
}

void edge_aggregate::thread_zext_ln1265_5_fu_39363_p1() {
    zext_ln1265_5_fu_39363_p1 = esl_zext<16,4>(trunc_ln1265_2_reg_44867.read());
}

void edge_aggregate::thread_zext_ln1265_6_fu_37751_p1() {
    zext_ln1265_6_fu_37751_p1 = esl_zext<64,12>(lshr_ln1265_2_fu_37741_p4.read());
}

void edge_aggregate::thread_zext_ln1265_7_fu_39602_p1() {
    zext_ln1265_7_fu_39602_p1 = esl_zext<16,4>(trunc_ln1265_3_reg_45212.read());
}

void edge_aggregate::thread_zext_ln1265_8_fu_37833_p1() {
    zext_ln1265_8_fu_37833_p1 = esl_zext<64,12>(lshr_ln1265_3_fu_37823_p4.read());
}

void edge_aggregate::thread_zext_ln1265_9_fu_39841_p1() {
    zext_ln1265_9_fu_39841_p1 = esl_zext<16,4>(trunc_ln1265_4_reg_45557.read());
}

void edge_aggregate::thread_zext_ln1265_fu_38885_p1() {
    zext_ln1265_fu_38885_p1 = esl_zext<16,4>(trunc_ln1265_reg_44177.read());
}

void edge_aggregate::thread_zext_ln203_212_fu_42725_p1() {
    zext_ln203_212_fu_42725_p1 = esl_zext<64,3>(lshr_ln203_s_fu_42715_p4.read());
}

void edge_aggregate::thread_zext_ln203_fu_36413_p1() {
    zext_ln203_fu_36413_p1 = esl_zext<64,3>(lshr_ln_fu_36403_p4.read());
}

void edge_aggregate::thread_zext_ln380_fu_37467_p1() {
    zext_ln380_fu_37467_p1 = esl_zext<64,27>(trunc_ln380_1_fu_37457_p4.read());
}

}

