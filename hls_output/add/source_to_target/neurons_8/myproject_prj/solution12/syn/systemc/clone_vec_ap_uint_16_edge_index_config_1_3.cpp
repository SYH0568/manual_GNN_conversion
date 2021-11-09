#include "clone_vec_ap_uint_16_edge_index_config_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_0_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_0_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_0_V_ce0 = ap_const_logic_1;
    } else {
        IN_0_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_0_V_ce1 = ap_const_logic_1;
    } else {
        IN_0_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_10_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_10_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_10_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_10_V_ce0 = ap_const_logic_1;
    } else {
        IN_10_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_10_V_ce1 = ap_const_logic_1;
    } else {
        IN_10_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_11_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_11_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_11_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_11_V_ce0 = ap_const_logic_1;
    } else {
        IN_11_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_11_V_ce1 = ap_const_logic_1;
    } else {
        IN_11_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_12_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_12_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_12_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_12_V_ce0 = ap_const_logic_1;
    } else {
        IN_12_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_12_V_ce1 = ap_const_logic_1;
    } else {
        IN_12_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_13_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_13_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_13_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_13_V_ce0 = ap_const_logic_1;
    } else {
        IN_13_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_13_V_ce1 = ap_const_logic_1;
    } else {
        IN_13_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_14_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_14_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_14_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_14_V_ce0 = ap_const_logic_1;
    } else {
        IN_14_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_14_V_ce1 = ap_const_logic_1;
    } else {
        IN_14_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_15_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_15_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_15_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_15_V_ce0 = ap_const_logic_1;
    } else {
        IN_15_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_15_V_ce1 = ap_const_logic_1;
    } else {
        IN_15_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_16_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_16_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_16_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_16_V_ce0 = ap_const_logic_1;
    } else {
        IN_16_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_16_V_ce1 = ap_const_logic_1;
    } else {
        IN_16_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_17_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_17_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_17_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_17_V_ce0 = ap_const_logic_1;
    } else {
        IN_17_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_17_V_ce1 = ap_const_logic_1;
    } else {
        IN_17_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_18_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_18_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_18_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_18_V_ce0 = ap_const_logic_1;
    } else {
        IN_18_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_18_V_ce1 = ap_const_logic_1;
    } else {
        IN_18_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_19_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_19_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_19_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_19_V_ce0 = ap_const_logic_1;
    } else {
        IN_19_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_19_V_ce1 = ap_const_logic_1;
    } else {
        IN_19_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_1_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_1_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_1_V_ce0 = ap_const_logic_1;
    } else {
        IN_1_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_1_V_ce1 = ap_const_logic_1;
    } else {
        IN_1_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_20_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_20_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_20_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_20_V_ce0 = ap_const_logic_1;
    } else {
        IN_20_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_20_V_ce1 = ap_const_logic_1;
    } else {
        IN_20_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_21_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_21_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_21_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_21_V_ce0 = ap_const_logic_1;
    } else {
        IN_21_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_21_V_ce1 = ap_const_logic_1;
    } else {
        IN_21_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_22_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_22_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_22_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_22_V_ce0 = ap_const_logic_1;
    } else {
        IN_22_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_22_V_ce1 = ap_const_logic_1;
    } else {
        IN_22_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_23_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_23_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_23_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_23_V_ce0 = ap_const_logic_1;
    } else {
        IN_23_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_23_V_ce1 = ap_const_logic_1;
    } else {
        IN_23_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_24_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_24_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        IN_24_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_24_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_24_V_ce0 = ap_const_logic_1;
    } else {
        IN_24_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_24_V_ce1 = ap_const_logic_1;
    } else {
        IN_24_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_25_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_25_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        IN_25_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_25_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_25_V_ce0 = ap_const_logic_1;
    } else {
        IN_25_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_25_V_ce1 = ap_const_logic_1;
    } else {
        IN_25_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_26_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_26_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        IN_26_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_26_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_26_V_ce0 = ap_const_logic_1;
    } else {
        IN_26_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_26_V_ce1 = ap_const_logic_1;
    } else {
        IN_26_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_27_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_27_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        IN_27_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_27_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_27_V_ce0 = ap_const_logic_1;
    } else {
        IN_27_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_27_V_ce1 = ap_const_logic_1;
    } else {
        IN_27_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_28_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_28_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        IN_28_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_28_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_28_V_ce0 = ap_const_logic_1;
    } else {
        IN_28_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_28_V_ce1 = ap_const_logic_1;
    } else {
        IN_28_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_29_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_29_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        IN_29_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_29_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_29_V_ce0 = ap_const_logic_1;
    } else {
        IN_29_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_29_V_ce1 = ap_const_logic_1;
    } else {
        IN_29_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_2_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_2_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_2_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_2_V_ce0 = ap_const_logic_1;
    } else {
        IN_2_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_2_V_ce1 = ap_const_logic_1;
    } else {
        IN_2_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_30_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_30_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        IN_30_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_30_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_30_V_ce0 = ap_const_logic_1;
    } else {
        IN_30_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_30_V_ce1 = ap_const_logic_1;
    } else {
        IN_30_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_31_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_31_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        IN_31_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_31_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_31_V_ce0 = ap_const_logic_1;
    } else {
        IN_31_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_31_V_ce1 = ap_const_logic_1;
    } else {
        IN_31_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_3_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_3_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_3_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_3_V_ce0 = ap_const_logic_1;
    } else {
        IN_3_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_3_V_ce1 = ap_const_logic_1;
    } else {
        IN_3_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_4_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_4_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_4_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_4_V_ce0 = ap_const_logic_1;
    } else {
        IN_4_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_4_V_ce1 = ap_const_logic_1;
    } else {
        IN_4_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_5_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_5_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_5_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_5_V_ce0 = ap_const_logic_1;
    } else {
        IN_5_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_5_V_ce1 = ap_const_logic_1;
    } else {
        IN_5_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_6_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_6_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_6_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_6_V_ce0 = ap_const_logic_1;
    } else {
        IN_6_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_6_V_ce1 = ap_const_logic_1;
    } else {
        IN_6_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_7_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_7_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_7_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_7_V_ce0 = ap_const_logic_1;
    } else {
        IN_7_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_7_V_ce1 = ap_const_logic_1;
    } else {
        IN_7_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_8_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_8_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_8_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_8_V_ce0 = ap_const_logic_1;
    } else {
        IN_8_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_8_V_ce1 = ap_const_logic_1;
    } else {
        IN_8_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        IN_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        IN_9_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_9_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        IN_9_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_9_V_ce0 = ap_const_logic_1;
    } else {
        IN_9_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_IN_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        IN_9_V_ce1 = ap_const_logic_1;
    } else {
        IN_9_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_0_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_0_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_0_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_0_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_0_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_0_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_0_V_d0() {
    OUT2_0_V_d0 = IN_0_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_0_V_d1() {
    OUT2_0_V_d1 = IN_0_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_0_V_we0 = ap_const_logic_1;
    } else {
        OUT2_0_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_0_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_0_V_we1 = ap_const_logic_1;
    } else {
        OUT2_0_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_10_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_10_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_10_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_10_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_10_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_10_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_10_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_10_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_10_V_d0() {
    OUT2_10_V_d0 = IN_10_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_10_V_d1() {
    OUT2_10_V_d1 = IN_10_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_10_V_we0 = ap_const_logic_1;
    } else {
        OUT2_10_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_10_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_10_V_we1 = ap_const_logic_1;
    } else {
        OUT2_10_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_11_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_11_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_11_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_11_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_11_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_11_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_11_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_11_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_11_V_d0() {
    OUT2_11_V_d0 = IN_11_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_11_V_d1() {
    OUT2_11_V_d1 = IN_11_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_11_V_we0 = ap_const_logic_1;
    } else {
        OUT2_11_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_11_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_11_V_we1 = ap_const_logic_1;
    } else {
        OUT2_11_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_12_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_12_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_12_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_12_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_12_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_12_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_12_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_12_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_12_V_d0() {
    OUT2_12_V_d0 = IN_12_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_12_V_d1() {
    OUT2_12_V_d1 = IN_12_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_12_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_12_V_we0 = ap_const_logic_1;
    } else {
        OUT2_12_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_12_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_12_V_we1 = ap_const_logic_1;
    } else {
        OUT2_12_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_13_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_13_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_13_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_13_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_13_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_13_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_13_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_13_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_13_V_d0() {
    OUT2_13_V_d0 = IN_13_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_13_V_d1() {
    OUT2_13_V_d1 = IN_13_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_13_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_13_V_we0 = ap_const_logic_1;
    } else {
        OUT2_13_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_13_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_13_V_we1 = ap_const_logic_1;
    } else {
        OUT2_13_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_14_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_14_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_14_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_14_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_14_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_14_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_14_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_14_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_14_V_d0() {
    OUT2_14_V_d0 = IN_14_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_14_V_d1() {
    OUT2_14_V_d1 = IN_14_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_14_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_14_V_we0 = ap_const_logic_1;
    } else {
        OUT2_14_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_14_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_14_V_we1 = ap_const_logic_1;
    } else {
        OUT2_14_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_15_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_15_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_15_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_15_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_15_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_15_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_15_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_15_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_15_V_d0() {
    OUT2_15_V_d0 = IN_15_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_15_V_d1() {
    OUT2_15_V_d1 = IN_15_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_15_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_15_V_we0 = ap_const_logic_1;
    } else {
        OUT2_15_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_15_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_15_V_we1 = ap_const_logic_1;
    } else {
        OUT2_15_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_16_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_16_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_16_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_16_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_16_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_16_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_16_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_16_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_16_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_16_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_16_V_d0() {
    OUT2_16_V_d0 = IN_16_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_16_V_d1() {
    OUT2_16_V_d1 = IN_16_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_16_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_16_V_we0 = ap_const_logic_1;
    } else {
        OUT2_16_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_16_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_16_V_we1 = ap_const_logic_1;
    } else {
        OUT2_16_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_17_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_17_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_17_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_17_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_17_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_17_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_17_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_17_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_17_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_17_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_17_V_d0() {
    OUT2_17_V_d0 = IN_17_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_17_V_d1() {
    OUT2_17_V_d1 = IN_17_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_17_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_17_V_we0 = ap_const_logic_1;
    } else {
        OUT2_17_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_17_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_17_V_we1 = ap_const_logic_1;
    } else {
        OUT2_17_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_18_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_18_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_18_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_18_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_18_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_18_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_18_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_18_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_18_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_18_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_18_V_d0() {
    OUT2_18_V_d0 = IN_18_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_18_V_d1() {
    OUT2_18_V_d1 = IN_18_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_18_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_18_V_we0 = ap_const_logic_1;
    } else {
        OUT2_18_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_18_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_18_V_we1 = ap_const_logic_1;
    } else {
        OUT2_18_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_19_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_19_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_19_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_19_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_19_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_19_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_19_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_19_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_19_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_19_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_19_V_d0() {
    OUT2_19_V_d0 = IN_19_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_19_V_d1() {
    OUT2_19_V_d1 = IN_19_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_19_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_19_V_we0 = ap_const_logic_1;
    } else {
        OUT2_19_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_19_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_19_V_we1 = ap_const_logic_1;
    } else {
        OUT2_19_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_1_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_1_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_1_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_1_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_1_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_1_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_1_V_d0() {
    OUT2_1_V_d0 = IN_1_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_1_V_d1() {
    OUT2_1_V_d1 = IN_1_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_1_V_we0 = ap_const_logic_1;
    } else {
        OUT2_1_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_1_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_1_V_we1 = ap_const_logic_1;
    } else {
        OUT2_1_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_20_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_20_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_20_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_20_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_20_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_20_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_20_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_20_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_20_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_20_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_20_V_d0() {
    OUT2_20_V_d0 = IN_20_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_20_V_d1() {
    OUT2_20_V_d1 = IN_20_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_20_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_20_V_we0 = ap_const_logic_1;
    } else {
        OUT2_20_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_20_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_20_V_we1 = ap_const_logic_1;
    } else {
        OUT2_20_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_21_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_21_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_21_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_21_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_21_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_21_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_21_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_21_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_21_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_21_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_21_V_d0() {
    OUT2_21_V_d0 = IN_21_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_21_V_d1() {
    OUT2_21_V_d1 = IN_21_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_21_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_21_V_we0 = ap_const_logic_1;
    } else {
        OUT2_21_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_21_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_21_V_we1 = ap_const_logic_1;
    } else {
        OUT2_21_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_22_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_22_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_22_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_22_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_22_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_22_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_22_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_22_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_22_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_22_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_22_V_d0() {
    OUT2_22_V_d0 = IN_22_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_22_V_d1() {
    OUT2_22_V_d1 = IN_22_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_22_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_22_V_we0 = ap_const_logic_1;
    } else {
        OUT2_22_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_22_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_22_V_we1 = ap_const_logic_1;
    } else {
        OUT2_22_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_23_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_23_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_23_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_23_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_23_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_23_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_23_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_23_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_23_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_23_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_23_V_d0() {
    OUT2_23_V_d0 = IN_23_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_23_V_d1() {
    OUT2_23_V_d1 = IN_23_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_23_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_23_V_we0 = ap_const_logic_1;
    } else {
        OUT2_23_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_23_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_23_V_we1 = ap_const_logic_1;
    } else {
        OUT2_23_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_24_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_24_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_24_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_24_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        OUT2_24_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_24_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_24_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_24_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_24_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_24_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_24_V_d0() {
    OUT2_24_V_d0 = IN_24_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_24_V_d1() {
    OUT2_24_V_d1 = IN_24_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_24_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_24_V_we0 = ap_const_logic_1;
    } else {
        OUT2_24_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_24_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_24_V_we1 = ap_const_logic_1;
    } else {
        OUT2_24_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_25_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_25_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_25_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_25_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        OUT2_25_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_25_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_25_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_25_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_25_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_25_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_25_V_d0() {
    OUT2_25_V_d0 = IN_25_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_25_V_d1() {
    OUT2_25_V_d1 = IN_25_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_25_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_25_V_we0 = ap_const_logic_1;
    } else {
        OUT2_25_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_25_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_25_V_we1 = ap_const_logic_1;
    } else {
        OUT2_25_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_26_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_26_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_26_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_26_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        OUT2_26_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_26_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_26_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_26_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_26_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_26_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_26_V_d0() {
    OUT2_26_V_d0 = IN_26_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_26_V_d1() {
    OUT2_26_V_d1 = IN_26_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_26_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_26_V_we0 = ap_const_logic_1;
    } else {
        OUT2_26_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_26_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_26_V_we1 = ap_const_logic_1;
    } else {
        OUT2_26_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_27_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_27_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_27_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_27_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        OUT2_27_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_27_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_27_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_27_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_27_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_27_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_27_V_d0() {
    OUT2_27_V_d0 = IN_27_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_27_V_d1() {
    OUT2_27_V_d1 = IN_27_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_27_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_27_V_we0 = ap_const_logic_1;
    } else {
        OUT2_27_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_27_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_27_V_we1 = ap_const_logic_1;
    } else {
        OUT2_27_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_28_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_28_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_28_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_28_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        OUT2_28_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_28_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_28_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_28_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_28_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_28_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_28_V_d0() {
    OUT2_28_V_d0 = IN_28_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_28_V_d1() {
    OUT2_28_V_d1 = IN_28_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_28_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_28_V_we0 = ap_const_logic_1;
    } else {
        OUT2_28_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_28_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_28_V_we1 = ap_const_logic_1;
    } else {
        OUT2_28_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_29_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_29_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_29_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_29_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        OUT2_29_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_29_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_29_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_29_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_29_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_29_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_29_V_d0() {
    OUT2_29_V_d0 = IN_29_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_29_V_d1() {
    OUT2_29_V_d1 = IN_29_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_29_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_29_V_we0 = ap_const_logic_1;
    } else {
        OUT2_29_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_29_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_29_V_we1 = ap_const_logic_1;
    } else {
        OUT2_29_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_2_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_2_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_2_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_2_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_2_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_2_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_2_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_2_V_d0() {
    OUT2_2_V_d0 = IN_2_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_2_V_d1() {
    OUT2_2_V_d1 = IN_2_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_2_V_we0 = ap_const_logic_1;
    } else {
        OUT2_2_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_2_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_2_V_we1 = ap_const_logic_1;
    } else {
        OUT2_2_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_30_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_30_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_30_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_30_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        OUT2_30_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_30_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_30_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_30_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_30_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_30_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_30_V_d0() {
    OUT2_30_V_d0 = IN_30_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_30_V_d1() {
    OUT2_30_V_d1 = IN_30_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_30_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_30_V_we0 = ap_const_logic_1;
    } else {
        OUT2_30_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_30_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_30_V_we1 = ap_const_logic_1;
    } else {
        OUT2_30_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_31_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_31_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_31_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_31_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        OUT2_31_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_31_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_31_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_31_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_31_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_31_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_31_V_d0() {
    OUT2_31_V_d0 = IN_31_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_31_V_d1() {
    OUT2_31_V_d1 = IN_31_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_31_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_31_V_we0 = ap_const_logic_1;
    } else {
        OUT2_31_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_31_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_31_V_we1 = ap_const_logic_1;
    } else {
        OUT2_31_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_3_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_3_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_3_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_3_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_3_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_3_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_3_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_3_V_d0() {
    OUT2_3_V_d0 = IN_3_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_3_V_d1() {
    OUT2_3_V_d1 = IN_3_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_3_V_we0 = ap_const_logic_1;
    } else {
        OUT2_3_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_3_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_3_V_we1 = ap_const_logic_1;
    } else {
        OUT2_3_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_4_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_4_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_4_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_4_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_4_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_4_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_4_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_4_V_d0() {
    OUT2_4_V_d0 = IN_4_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_4_V_d1() {
    OUT2_4_V_d1 = IN_4_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_4_V_we0 = ap_const_logic_1;
    } else {
        OUT2_4_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_4_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_4_V_we1 = ap_const_logic_1;
    } else {
        OUT2_4_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_5_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_5_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_5_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_5_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_5_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_5_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_5_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_5_V_d0() {
    OUT2_5_V_d0 = IN_5_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_5_V_d1() {
    OUT2_5_V_d1 = IN_5_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_5_V_we0 = ap_const_logic_1;
    } else {
        OUT2_5_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_5_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_5_V_we1 = ap_const_logic_1;
    } else {
        OUT2_5_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_6_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_6_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_6_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_6_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_6_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_6_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_6_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_6_V_d0() {
    OUT2_6_V_d0 = IN_6_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_6_V_d1() {
    OUT2_6_V_d1 = IN_6_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_6_V_we0 = ap_const_logic_1;
    } else {
        OUT2_6_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_6_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_6_V_we1 = ap_const_logic_1;
    } else {
        OUT2_6_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_7_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_7_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_7_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_7_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_7_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_7_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_7_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_7_V_d0() {
    OUT2_7_V_d0 = IN_7_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_7_V_d1() {
    OUT2_7_V_d1 = IN_7_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_7_V_we0 = ap_const_logic_1;
    } else {
        OUT2_7_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_7_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_7_V_we1 = ap_const_logic_1;
    } else {
        OUT2_7_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_8_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_8_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_8_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_8_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_8_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_8_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_8_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_8_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_8_V_d0() {
    OUT2_8_V_d0 = IN_8_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_8_V_d1() {
    OUT2_8_V_d1 = IN_8_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_8_V_we0 = ap_const_logic_1;
    } else {
        OUT2_8_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_8_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_8_V_we1 = ap_const_logic_1;
    } else {
        OUT2_8_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        OUT2_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        OUT2_9_V_address0 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_9_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        OUT2_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        OUT2_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        OUT2_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OUT2_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        OUT2_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        OUT2_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        OUT2_9_V_address1 = "XXXX";
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_9_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_9_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_9_V_ce0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_9_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_9_V_ce1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_9_V_d0() {
    OUT2_9_V_d0 = IN_9_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_9_V_d1() {
    OUT2_9_V_d1 = IN_9_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_9_V_we0 = ap_const_logic_1;
    } else {
        OUT2_9_V_we0 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_OUT2_9_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        OUT2_9_V_we1 = ap_const_logic_1;
    } else {
        OUT2_9_V_we1 = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_0() {
    ap_return_0 = IN_0_V_load_reg_10364.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_1() {
    ap_return_1 = IN_0_V_load_1_reg_10844.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_10() {
    ap_return_10 = IN_0_V_load_10_reg_13564.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_100() {
    ap_return_100 = IN_7_V_load_9_reg_13439.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_101() {
    ap_return_101 = IN_7_V_load_10_reg_13599.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_102() {
    ap_return_102 = IN_7_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_103() {
    ap_return_103 = IN_7_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_104() {
    ap_return_104 = IN_8_V_load_reg_10404.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_105() {
    ap_return_105 = IN_8_V_load_1_reg_10884.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_106() {
    ap_return_106 = IN_8_V_load_2_reg_11044.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_107() {
    ap_return_107 = IN_8_V_load_3_reg_11524.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_108() {
    ap_return_108 = IN_8_V_load_4_reg_11684.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_109() {
    ap_return_109 = IN_8_V_load_5_reg_12164.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_11() {
    ap_return_11 = IN_0_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_110() {
    ap_return_110 = IN_8_V_load_6_reg_12324.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_111() {
    ap_return_111 = IN_8_V_load_7_reg_12804.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_112() {
    ap_return_112 = IN_8_V_load_8_reg_12964.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_113() {
    ap_return_113 = IN_8_V_load_9_reg_13444.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_114() {
    ap_return_114 = IN_8_V_load_10_reg_13604.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_115() {
    ap_return_115 = IN_8_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_116() {
    ap_return_116 = IN_8_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_117() {
    ap_return_117 = IN_9_V_load_reg_10409.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_118() {
    ap_return_118 = IN_9_V_load_1_reg_10889.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_119() {
    ap_return_119 = IN_9_V_load_2_reg_11049.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_12() {
    ap_return_12 = IN_0_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_120() {
    ap_return_120 = IN_9_V_load_3_reg_11529.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_121() {
    ap_return_121 = IN_9_V_load_4_reg_11689.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_122() {
    ap_return_122 = IN_9_V_load_5_reg_12169.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_123() {
    ap_return_123 = IN_9_V_load_6_reg_12329.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_124() {
    ap_return_124 = IN_9_V_load_7_reg_12809.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_125() {
    ap_return_125 = IN_9_V_load_8_reg_12969.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_126() {
    ap_return_126 = IN_9_V_load_9_reg_13449.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_127() {
    ap_return_127 = IN_9_V_load_10_reg_13609.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_128() {
    ap_return_128 = IN_9_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_129() {
    ap_return_129 = IN_9_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_13() {
    ap_return_13 = IN_1_V_load_reg_10369.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_130() {
    ap_return_130 = IN_10_V_load_reg_10414.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_131() {
    ap_return_131 = IN_10_V_load_1_reg_10894.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_132() {
    ap_return_132 = IN_10_V_load_2_reg_11054.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_133() {
    ap_return_133 = IN_10_V_load_3_reg_11534.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_134() {
    ap_return_134 = IN_10_V_load_4_reg_11694.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_135() {
    ap_return_135 = IN_10_V_load_5_reg_12174.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_136() {
    ap_return_136 = IN_10_V_load_6_reg_12334.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_137() {
    ap_return_137 = IN_10_V_load_7_reg_12814.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_138() {
    ap_return_138 = IN_10_V_load_8_reg_12974.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_139() {
    ap_return_139 = IN_10_V_load_9_reg_13454.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_14() {
    ap_return_14 = IN_1_V_load_1_reg_10849.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_140() {
    ap_return_140 = IN_10_V_load_10_reg_13614.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_141() {
    ap_return_141 = IN_10_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_142() {
    ap_return_142 = IN_10_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_143() {
    ap_return_143 = IN_11_V_load_reg_10419.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_144() {
    ap_return_144 = IN_11_V_load_1_reg_10899.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_145() {
    ap_return_145 = IN_11_V_load_2_reg_11059.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_146() {
    ap_return_146 = IN_11_V_load_3_reg_11539.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_147() {
    ap_return_147 = IN_11_V_load_4_reg_11699.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_148() {
    ap_return_148 = IN_11_V_load_5_reg_12179.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_149() {
    ap_return_149 = IN_11_V_load_6_reg_12339.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_15() {
    ap_return_15 = IN_1_V_load_2_reg_11009.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_150() {
    ap_return_150 = IN_11_V_load_7_reg_12819.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_151() {
    ap_return_151 = IN_11_V_load_8_reg_12979.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_152() {
    ap_return_152 = IN_11_V_load_9_reg_13459.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_153() {
    ap_return_153 = IN_11_V_load_10_reg_13619.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_154() {
    ap_return_154 = IN_11_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_155() {
    ap_return_155 = IN_11_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_156() {
    ap_return_156 = IN_12_V_load_reg_10424.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_157() {
    ap_return_157 = IN_12_V_load_1_reg_10904.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_158() {
    ap_return_158 = IN_12_V_load_2_reg_11064.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_159() {
    ap_return_159 = IN_12_V_load_3_reg_11544.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_16() {
    ap_return_16 = IN_1_V_load_3_reg_11489.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_160() {
    ap_return_160 = IN_12_V_load_4_reg_11704.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_161() {
    ap_return_161 = IN_12_V_load_5_reg_12184.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_162() {
    ap_return_162 = IN_12_V_load_6_reg_12344.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_163() {
    ap_return_163 = IN_12_V_load_7_reg_12824.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_164() {
    ap_return_164 = IN_12_V_load_8_reg_12984.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_165() {
    ap_return_165 = IN_12_V_load_9_reg_13464.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_166() {
    ap_return_166 = IN_12_V_load_10_reg_13624.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_167() {
    ap_return_167 = IN_12_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_168() {
    ap_return_168 = IN_12_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_169() {
    ap_return_169 = IN_13_V_load_reg_10429.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_17() {
    ap_return_17 = IN_1_V_load_4_reg_11649.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_170() {
    ap_return_170 = IN_13_V_load_1_reg_10909.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_171() {
    ap_return_171 = IN_13_V_load_2_reg_11069.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_172() {
    ap_return_172 = IN_13_V_load_3_reg_11549.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_173() {
    ap_return_173 = IN_13_V_load_4_reg_11709.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_174() {
    ap_return_174 = IN_13_V_load_5_reg_12189.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_175() {
    ap_return_175 = IN_13_V_load_6_reg_12349.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_176() {
    ap_return_176 = IN_13_V_load_7_reg_12829.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_177() {
    ap_return_177 = IN_13_V_load_8_reg_12989.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_178() {
    ap_return_178 = IN_13_V_load_9_reg_13469.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_179() {
    ap_return_179 = IN_13_V_load_10_reg_13629.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_18() {
    ap_return_18 = IN_1_V_load_5_reg_12129.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_180() {
    ap_return_180 = IN_13_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_181() {
    ap_return_181 = IN_13_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_182() {
    ap_return_182 = IN_14_V_load_reg_10434.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_183() {
    ap_return_183 = IN_14_V_load_1_reg_10914.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_184() {
    ap_return_184 = IN_14_V_load_2_reg_11074.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_185() {
    ap_return_185 = IN_14_V_load_3_reg_11554.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_186() {
    ap_return_186 = IN_14_V_load_4_reg_11714.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_187() {
    ap_return_187 = IN_14_V_load_5_reg_12194.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_188() {
    ap_return_188 = IN_14_V_load_6_reg_12354.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_189() {
    ap_return_189 = IN_14_V_load_7_reg_12834.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_19() {
    ap_return_19 = IN_1_V_load_6_reg_12289.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_190() {
    ap_return_190 = IN_14_V_load_8_reg_12994.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_191() {
    ap_return_191 = IN_14_V_load_9_reg_13474.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_192() {
    ap_return_192 = IN_14_V_load_10_reg_13634.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_193() {
    ap_return_193 = IN_14_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_194() {
    ap_return_194 = IN_14_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_195() {
    ap_return_195 = IN_15_V_load_reg_10439.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_196() {
    ap_return_196 = IN_15_V_load_1_reg_10919.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_197() {
    ap_return_197 = IN_15_V_load_2_reg_11079.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_198() {
    ap_return_198 = IN_15_V_load_3_reg_11559.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_199() {
    ap_return_199 = IN_15_V_load_4_reg_11719.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_2() {
    ap_return_2 = IN_0_V_load_2_reg_11004.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_20() {
    ap_return_20 = IN_1_V_load_7_reg_12769.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_200() {
    ap_return_200 = IN_15_V_load_5_reg_12199.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_201() {
    ap_return_201 = IN_15_V_load_6_reg_12359.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_202() {
    ap_return_202 = IN_15_V_load_7_reg_12839.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_203() {
    ap_return_203 = IN_15_V_load_8_reg_12999.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_204() {
    ap_return_204 = IN_15_V_load_9_reg_13479.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_205() {
    ap_return_205 = IN_15_V_load_10_reg_13639.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_206() {
    ap_return_206 = IN_15_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_207() {
    ap_return_207 = IN_15_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_208() {
    ap_return_208 = IN_16_V_load_reg_10444.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_209() {
    ap_return_209 = IN_16_V_load_1_reg_10924.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_21() {
    ap_return_21 = IN_1_V_load_8_reg_12929.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_210() {
    ap_return_210 = IN_16_V_load_2_reg_11084.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_211() {
    ap_return_211 = IN_16_V_load_3_reg_11564.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_212() {
    ap_return_212 = IN_16_V_load_4_reg_11724.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_213() {
    ap_return_213 = IN_16_V_load_5_reg_12204.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_214() {
    ap_return_214 = IN_16_V_load_6_reg_12364.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_215() {
    ap_return_215 = IN_16_V_load_7_reg_12844.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_216() {
    ap_return_216 = IN_16_V_load_8_reg_13004.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_217() {
    ap_return_217 = IN_16_V_load_9_reg_13484.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_218() {
    ap_return_218 = IN_16_V_load_10_reg_13644.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_219() {
    ap_return_219 = IN_16_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_22() {
    ap_return_22 = IN_1_V_load_9_reg_13409.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_220() {
    ap_return_220 = IN_16_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_221() {
    ap_return_221 = IN_17_V_load_reg_10449.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_222() {
    ap_return_222 = IN_17_V_load_1_reg_10929.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_223() {
    ap_return_223 = IN_17_V_load_2_reg_11089.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_224() {
    ap_return_224 = IN_17_V_load_3_reg_11569.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_225() {
    ap_return_225 = IN_17_V_load_4_reg_11729.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_226() {
    ap_return_226 = IN_17_V_load_5_reg_12209.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_227() {
    ap_return_227 = IN_17_V_load_6_reg_12369.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_228() {
    ap_return_228 = IN_17_V_load_7_reg_12849.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_229() {
    ap_return_229 = IN_17_V_load_8_reg_13009.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_23() {
    ap_return_23 = IN_1_V_load_10_reg_13569.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_230() {
    ap_return_230 = IN_17_V_load_9_reg_13489.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_231() {
    ap_return_231 = IN_17_V_load_10_reg_13649.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_232() {
    ap_return_232 = IN_17_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_233() {
    ap_return_233 = IN_17_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_234() {
    ap_return_234 = IN_18_V_load_reg_10454.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_235() {
    ap_return_235 = IN_18_V_load_1_reg_10934.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_236() {
    ap_return_236 = IN_18_V_load_2_reg_11094.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_237() {
    ap_return_237 = IN_18_V_load_3_reg_11574.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_238() {
    ap_return_238 = IN_18_V_load_4_reg_11734.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_239() {
    ap_return_239 = IN_18_V_load_5_reg_12214.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_24() {
    ap_return_24 = IN_1_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_240() {
    ap_return_240 = IN_18_V_load_6_reg_12374.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_241() {
    ap_return_241 = IN_18_V_load_7_reg_12854.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_242() {
    ap_return_242 = IN_18_V_load_8_reg_13014.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_243() {
    ap_return_243 = IN_18_V_load_9_reg_13494.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_244() {
    ap_return_244 = IN_18_V_load_10_reg_13654.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_245() {
    ap_return_245 = IN_18_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_246() {
    ap_return_246 = IN_18_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_247() {
    ap_return_247 = IN_19_V_load_reg_10459.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_248() {
    ap_return_248 = IN_19_V_load_1_reg_10939.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_249() {
    ap_return_249 = IN_19_V_load_2_reg_11099.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_25() {
    ap_return_25 = IN_1_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_250() {
    ap_return_250 = IN_19_V_load_3_reg_11579.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_251() {
    ap_return_251 = IN_19_V_load_4_reg_11739.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_252() {
    ap_return_252 = IN_19_V_load_5_reg_12219.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_253() {
    ap_return_253 = IN_19_V_load_6_reg_12379.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_254() {
    ap_return_254 = IN_19_V_load_7_reg_12859.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_255() {
    ap_return_255 = IN_19_V_load_8_reg_13019.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_256() {
    ap_return_256 = IN_19_V_load_9_reg_13499.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_257() {
    ap_return_257 = IN_19_V_load_10_reg_13659.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_258() {
    ap_return_258 = IN_19_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_259() {
    ap_return_259 = IN_19_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_26() {
    ap_return_26 = IN_2_V_load_reg_10374.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_260() {
    ap_return_260 = IN_20_V_load_reg_10464.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_261() {
    ap_return_261 = IN_20_V_load_1_reg_10944.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_262() {
    ap_return_262 = IN_20_V_load_2_reg_11104.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_263() {
    ap_return_263 = IN_20_V_load_3_reg_11584.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_264() {
    ap_return_264 = IN_20_V_load_4_reg_11744.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_265() {
    ap_return_265 = IN_20_V_load_5_reg_12224.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_266() {
    ap_return_266 = IN_20_V_load_6_reg_12384.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_267() {
    ap_return_267 = IN_20_V_load_7_reg_12864.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_268() {
    ap_return_268 = IN_20_V_load_8_reg_13024.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_269() {
    ap_return_269 = IN_20_V_load_9_reg_13504.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_27() {
    ap_return_27 = IN_2_V_load_1_reg_10854.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_270() {
    ap_return_270 = IN_20_V_load_10_reg_13664.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_271() {
    ap_return_271 = IN_20_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_272() {
    ap_return_272 = IN_20_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_273() {
    ap_return_273 = IN_21_V_load_reg_10469.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_274() {
    ap_return_274 = IN_21_V_load_1_reg_10949.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_275() {
    ap_return_275 = IN_21_V_load_2_reg_11109.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_276() {
    ap_return_276 = IN_21_V_load_3_reg_11589.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_277() {
    ap_return_277 = IN_21_V_load_4_reg_11749.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_278() {
    ap_return_278 = IN_21_V_load_5_reg_12229.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_279() {
    ap_return_279 = IN_21_V_load_6_reg_12389.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_28() {
    ap_return_28 = IN_2_V_load_2_reg_11014.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_280() {
    ap_return_280 = IN_21_V_load_7_reg_12869.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_281() {
    ap_return_281 = IN_21_V_load_8_reg_13029.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_282() {
    ap_return_282 = IN_21_V_load_9_reg_13509.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_283() {
    ap_return_283 = IN_21_V_load_10_reg_13669.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_284() {
    ap_return_284 = IN_21_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_285() {
    ap_return_285 = IN_21_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_286() {
    ap_return_286 = IN_22_V_load_reg_10474.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_287() {
    ap_return_287 = IN_22_V_load_1_reg_10954.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_288() {
    ap_return_288 = IN_22_V_load_2_reg_11114.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_289() {
    ap_return_289 = IN_22_V_load_3_reg_11594.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_29() {
    ap_return_29 = IN_2_V_load_3_reg_11494.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_290() {
    ap_return_290 = IN_22_V_load_4_reg_11754.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_291() {
    ap_return_291 = IN_22_V_load_5_reg_12234.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_292() {
    ap_return_292 = IN_22_V_load_6_reg_12394.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_293() {
    ap_return_293 = IN_22_V_load_7_reg_12874.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_294() {
    ap_return_294 = IN_22_V_load_8_reg_13034.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_295() {
    ap_return_295 = IN_22_V_load_9_reg_13514.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_296() {
    ap_return_296 = IN_22_V_load_10_reg_13674.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_297() {
    ap_return_297 = IN_22_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_298() {
    ap_return_298 = IN_22_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_299() {
    ap_return_299 = IN_23_V_load_reg_10479.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_3() {
    ap_return_3 = IN_0_V_load_3_reg_11484.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_30() {
    ap_return_30 = IN_2_V_load_4_reg_11654.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_300() {
    ap_return_300 = IN_23_V_load_1_reg_10959.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_301() {
    ap_return_301 = IN_23_V_load_2_reg_11119.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_302() {
    ap_return_302 = IN_23_V_load_3_reg_11599.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_303() {
    ap_return_303 = IN_23_V_load_4_reg_11759.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_304() {
    ap_return_304 = IN_23_V_load_5_reg_12239.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_305() {
    ap_return_305 = IN_23_V_load_6_reg_12399.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_306() {
    ap_return_306 = IN_23_V_load_7_reg_12879.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_307() {
    ap_return_307 = IN_23_V_load_8_reg_13039.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_308() {
    ap_return_308 = IN_23_V_load_9_reg_13519.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_309() {
    ap_return_309 = IN_23_V_load_10_reg_13679.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_31() {
    ap_return_31 = IN_2_V_load_5_reg_12134.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_310() {
    ap_return_310 = IN_23_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_311() {
    ap_return_311 = IN_23_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_312() {
    ap_return_312 = IN_24_V_load_reg_10804.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_313() {
    ap_return_313 = IN_24_V_load_1_reg_10964.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_314() {
    ap_return_314 = IN_24_V_load_2_reg_11444.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_315() {
    ap_return_315 = IN_24_V_load_3_reg_11604.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_316() {
    ap_return_316 = IN_24_V_load_4_reg_12084.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_317() {
    ap_return_317 = IN_24_V_load_5_reg_12244.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_318() {
    ap_return_318 = IN_24_V_load_6_reg_12724.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_319() {
    ap_return_319 = IN_24_V_load_7_reg_12884.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_32() {
    ap_return_32 = IN_2_V_load_6_reg_12294.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_320() {
    ap_return_320 = IN_24_V_load_8_reg_13364.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_321() {
    ap_return_321 = IN_24_V_load_9_reg_13524.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_322() {
    ap_return_322 = IN_24_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_323() {
    ap_return_323 = IN_24_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_324() {
    ap_return_324 = IN_25_V_load_reg_10809.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_325() {
    ap_return_325 = IN_25_V_load_1_reg_10969.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_326() {
    ap_return_326 = IN_25_V_load_2_reg_11449.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_327() {
    ap_return_327 = IN_25_V_load_3_reg_11609.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_328() {
    ap_return_328 = IN_25_V_load_4_reg_12089.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_329() {
    ap_return_329 = IN_25_V_load_5_reg_12249.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_33() {
    ap_return_33 = IN_2_V_load_7_reg_12774.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_330() {
    ap_return_330 = IN_25_V_load_6_reg_12729.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_331() {
    ap_return_331 = IN_25_V_load_7_reg_12889.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_332() {
    ap_return_332 = IN_25_V_load_8_reg_13369.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_333() {
    ap_return_333 = IN_25_V_load_9_reg_13529.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_334() {
    ap_return_334 = IN_25_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_335() {
    ap_return_335 = IN_25_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_336() {
    ap_return_336 = IN_26_V_load_reg_10814.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_337() {
    ap_return_337 = IN_26_V_load_1_reg_10974.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_338() {
    ap_return_338 = IN_26_V_load_2_reg_11454.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_339() {
    ap_return_339 = IN_26_V_load_3_reg_11614.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_34() {
    ap_return_34 = IN_2_V_load_8_reg_12934.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_340() {
    ap_return_340 = IN_26_V_load_4_reg_12094.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_341() {
    ap_return_341 = IN_26_V_load_5_reg_12254.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_342() {
    ap_return_342 = IN_26_V_load_6_reg_12734.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_343() {
    ap_return_343 = IN_26_V_load_7_reg_12894.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_344() {
    ap_return_344 = IN_26_V_load_8_reg_13374.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_345() {
    ap_return_345 = IN_26_V_load_9_reg_13534.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_346() {
    ap_return_346 = IN_26_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_347() {
    ap_return_347 = IN_26_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_348() {
    ap_return_348 = IN_27_V_load_reg_10819.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_349() {
    ap_return_349 = IN_27_V_load_1_reg_10979.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_35() {
    ap_return_35 = IN_2_V_load_9_reg_13414.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_350() {
    ap_return_350 = IN_27_V_load_2_reg_11459.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_351() {
    ap_return_351 = IN_27_V_load_3_reg_11619.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_352() {
    ap_return_352 = IN_27_V_load_4_reg_12099.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_353() {
    ap_return_353 = IN_27_V_load_5_reg_12259.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_354() {
    ap_return_354 = IN_27_V_load_6_reg_12739.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_355() {
    ap_return_355 = IN_27_V_load_7_reg_12899.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_356() {
    ap_return_356 = IN_27_V_load_8_reg_13379.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_357() {
    ap_return_357 = IN_27_V_load_9_reg_13539.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_358() {
    ap_return_358 = IN_27_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_359() {
    ap_return_359 = IN_27_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_36() {
    ap_return_36 = IN_2_V_load_10_reg_13574.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_360() {
    ap_return_360 = IN_28_V_load_reg_10824.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_361() {
    ap_return_361 = IN_28_V_load_1_reg_10984.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_362() {
    ap_return_362 = IN_28_V_load_2_reg_11464.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_363() {
    ap_return_363 = IN_28_V_load_3_reg_11624.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_364() {
    ap_return_364 = IN_28_V_load_4_reg_12104.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_365() {
    ap_return_365 = IN_28_V_load_5_reg_12264.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_366() {
    ap_return_366 = IN_28_V_load_6_reg_12744.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_367() {
    ap_return_367 = IN_28_V_load_7_reg_12904.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_368() {
    ap_return_368 = IN_28_V_load_8_reg_13384.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_369() {
    ap_return_369 = IN_28_V_load_9_reg_13544.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_37() {
    ap_return_37 = IN_2_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_370() {
    ap_return_370 = IN_28_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_371() {
    ap_return_371 = IN_28_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_372() {
    ap_return_372 = IN_29_V_load_reg_10829.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_373() {
    ap_return_373 = IN_29_V_load_1_reg_10989.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_374() {
    ap_return_374 = IN_29_V_load_2_reg_11469.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_375() {
    ap_return_375 = IN_29_V_load_3_reg_11629.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_376() {
    ap_return_376 = IN_29_V_load_4_reg_12109.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_377() {
    ap_return_377 = IN_29_V_load_5_reg_12269.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_378() {
    ap_return_378 = IN_29_V_load_6_reg_12749.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_379() {
    ap_return_379 = IN_29_V_load_7_reg_12909.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_38() {
    ap_return_38 = IN_2_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_380() {
    ap_return_380 = IN_29_V_load_8_reg_13389.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_381() {
    ap_return_381 = IN_29_V_load_9_reg_13549.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_382() {
    ap_return_382 = IN_29_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_383() {
    ap_return_383 = IN_29_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_384() {
    ap_return_384 = IN_30_V_load_reg_10834.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_385() {
    ap_return_385 = IN_30_V_load_1_reg_10994.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_386() {
    ap_return_386 = IN_30_V_load_2_reg_11474.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_387() {
    ap_return_387 = IN_30_V_load_3_reg_11634.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_388() {
    ap_return_388 = IN_30_V_load_4_reg_12114.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_389() {
    ap_return_389 = IN_30_V_load_5_reg_12274.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_39() {
    ap_return_39 = IN_3_V_load_reg_10379.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_390() {
    ap_return_390 = IN_30_V_load_6_reg_12754.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_391() {
    ap_return_391 = IN_30_V_load_7_reg_12914.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_392() {
    ap_return_392 = IN_30_V_load_8_reg_13394.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_393() {
    ap_return_393 = IN_30_V_load_9_reg_13554.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_394() {
    ap_return_394 = IN_30_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_395() {
    ap_return_395 = IN_30_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_396() {
    ap_return_396 = IN_31_V_load_reg_10839.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_397() {
    ap_return_397 = IN_31_V_load_1_reg_10999.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_398() {
    ap_return_398 = IN_31_V_load_2_reg_11479.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_399() {
    ap_return_399 = IN_31_V_load_3_reg_11639.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_4() {
    ap_return_4 = IN_0_V_load_4_reg_11644.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_40() {
    ap_return_40 = IN_3_V_load_1_reg_10859.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_400() {
    ap_return_400 = IN_31_V_load_4_reg_12119.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_401() {
    ap_return_401 = IN_31_V_load_5_reg_12279.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_402() {
    ap_return_402 = IN_31_V_load_6_reg_12759.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_403() {
    ap_return_403 = IN_31_V_load_7_reg_12919.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_404() {
    ap_return_404 = IN_31_V_load_8_reg_13399.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_405() {
    ap_return_405 = IN_31_V_load_9_reg_13559.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_406() {
    ap_return_406 = IN_31_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_407() {
    ap_return_407 = IN_31_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_41() {
    ap_return_41 = IN_3_V_load_2_reg_11019.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_42() {
    ap_return_42 = IN_3_V_load_3_reg_11499.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_43() {
    ap_return_43 = IN_3_V_load_4_reg_11659.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_44() {
    ap_return_44 = IN_3_V_load_5_reg_12139.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_45() {
    ap_return_45 = IN_3_V_load_6_reg_12299.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_46() {
    ap_return_46 = IN_3_V_load_7_reg_12779.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_47() {
    ap_return_47 = IN_3_V_load_8_reg_12939.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_48() {
    ap_return_48 = IN_3_V_load_9_reg_13419.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_49() {
    ap_return_49 = IN_3_V_load_10_reg_13579.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_5() {
    ap_return_5 = IN_0_V_load_5_reg_12124.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_50() {
    ap_return_50 = IN_3_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_51() {
    ap_return_51 = IN_3_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_52() {
    ap_return_52 = IN_4_V_load_reg_10384.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_53() {
    ap_return_53 = IN_4_V_load_1_reg_10864.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_54() {
    ap_return_54 = IN_4_V_load_2_reg_11024.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_55() {
    ap_return_55 = IN_4_V_load_3_reg_11504.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_56() {
    ap_return_56 = IN_4_V_load_4_reg_11664.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_57() {
    ap_return_57 = IN_4_V_load_5_reg_12144.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_58() {
    ap_return_58 = IN_4_V_load_6_reg_12304.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_59() {
    ap_return_59 = IN_4_V_load_7_reg_12784.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_6() {
    ap_return_6 = IN_0_V_load_6_reg_12284.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_60() {
    ap_return_60 = IN_4_V_load_8_reg_12944.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_61() {
    ap_return_61 = IN_4_V_load_9_reg_13424.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_62() {
    ap_return_62 = IN_4_V_load_10_reg_13584.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_63() {
    ap_return_63 = IN_4_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_64() {
    ap_return_64 = IN_4_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_65() {
    ap_return_65 = IN_5_V_load_reg_10389.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_66() {
    ap_return_66 = IN_5_V_load_1_reg_10869.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_67() {
    ap_return_67 = IN_5_V_load_2_reg_11029.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_68() {
    ap_return_68 = IN_5_V_load_3_reg_11509.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_69() {
    ap_return_69 = IN_5_V_load_4_reg_11669.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_7() {
    ap_return_7 = IN_0_V_load_7_reg_12764.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_70() {
    ap_return_70 = IN_5_V_load_5_reg_12149.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_71() {
    ap_return_71 = IN_5_V_load_6_reg_12309.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_72() {
    ap_return_72 = IN_5_V_load_7_reg_12789.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_73() {
    ap_return_73 = IN_5_V_load_8_reg_12949.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_74() {
    ap_return_74 = IN_5_V_load_9_reg_13429.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_75() {
    ap_return_75 = IN_5_V_load_10_reg_13589.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_76() {
    ap_return_76 = IN_5_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_77() {
    ap_return_77 = IN_5_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_78() {
    ap_return_78 = IN_6_V_load_reg_10394.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_79() {
    ap_return_79 = IN_6_V_load_1_reg_10874.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_8() {
    ap_return_8 = IN_0_V_load_8_reg_12924.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_80() {
    ap_return_80 = IN_6_V_load_2_reg_11034.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_81() {
    ap_return_81 = IN_6_V_load_3_reg_11514.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_82() {
    ap_return_82 = IN_6_V_load_4_reg_11674.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_83() {
    ap_return_83 = IN_6_V_load_5_reg_12154.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_84() {
    ap_return_84 = IN_6_V_load_6_reg_12314.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_85() {
    ap_return_85 = IN_6_V_load_7_reg_12794.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_86() {
    ap_return_86 = IN_6_V_load_8_reg_12954.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_87() {
    ap_return_87 = IN_6_V_load_9_reg_13434.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_88() {
    ap_return_88 = IN_6_V_load_10_reg_13594.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_89() {
    ap_return_89 = IN_6_V_q1.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_9() {
    ap_return_9 = IN_0_V_load_9_reg_13404.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_90() {
    ap_return_90 = IN_6_V_q0.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_91() {
    ap_return_91 = IN_7_V_load_reg_10399.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_92() {
    ap_return_92 = IN_7_V_load_1_reg_10879.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_93() {
    ap_return_93 = IN_7_V_load_2_reg_11039.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_94() {
    ap_return_94 = IN_7_V_load_3_reg_11519.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_95() {
    ap_return_95 = IN_7_V_load_4_reg_11679.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_96() {
    ap_return_96 = IN_7_V_load_5_reg_12159.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_97() {
    ap_return_97 = IN_7_V_load_6_reg_12319.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_98() {
    ap_return_98 = IN_7_V_load_7_reg_12799.read();
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_return_99() {
    ap_return_99 = IN_7_V_load_8_reg_12959.read();
}

}

