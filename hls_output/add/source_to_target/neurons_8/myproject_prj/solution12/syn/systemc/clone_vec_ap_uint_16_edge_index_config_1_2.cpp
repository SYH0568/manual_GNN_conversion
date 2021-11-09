#include "clone_vec_ap_uint_16_edge_index_config_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_clk_no_reset_() {
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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        IN_0_V_load_10_reg_13564 = IN_0_V_q0.read();
        IN_0_V_load_9_reg_13404 = IN_0_V_q1.read();
        IN_10_V_load_10_reg_13614 = IN_10_V_q0.read();
        IN_10_V_load_9_reg_13454 = IN_10_V_q1.read();
        IN_11_V_load_10_reg_13619 = IN_11_V_q0.read();
        IN_11_V_load_9_reg_13459 = IN_11_V_q1.read();
        IN_12_V_load_10_reg_13624 = IN_12_V_q0.read();
        IN_12_V_load_9_reg_13464 = IN_12_V_q1.read();
        IN_13_V_load_10_reg_13629 = IN_13_V_q0.read();
        IN_13_V_load_9_reg_13469 = IN_13_V_q1.read();
        IN_14_V_load_10_reg_13634 = IN_14_V_q0.read();
        IN_14_V_load_9_reg_13474 = IN_14_V_q1.read();
        IN_15_V_load_10_reg_13639 = IN_15_V_q0.read();
        IN_15_V_load_9_reg_13479 = IN_15_V_q1.read();
        IN_16_V_load_10_reg_13644 = IN_16_V_q0.read();
        IN_16_V_load_9_reg_13484 = IN_16_V_q1.read();
        IN_17_V_load_10_reg_13649 = IN_17_V_q0.read();
        IN_17_V_load_9_reg_13489 = IN_17_V_q1.read();
        IN_18_V_load_10_reg_13654 = IN_18_V_q0.read();
        IN_18_V_load_9_reg_13494 = IN_18_V_q1.read();
        IN_19_V_load_10_reg_13659 = IN_19_V_q0.read();
        IN_19_V_load_9_reg_13499 = IN_19_V_q1.read();
        IN_1_V_load_10_reg_13569 = IN_1_V_q0.read();
        IN_1_V_load_9_reg_13409 = IN_1_V_q1.read();
        IN_20_V_load_10_reg_13664 = IN_20_V_q0.read();
        IN_20_V_load_9_reg_13504 = IN_20_V_q1.read();
        IN_21_V_load_10_reg_13669 = IN_21_V_q0.read();
        IN_21_V_load_9_reg_13509 = IN_21_V_q1.read();
        IN_22_V_load_10_reg_13674 = IN_22_V_q0.read();
        IN_22_V_load_9_reg_13514 = IN_22_V_q1.read();
        IN_23_V_load_10_reg_13679 = IN_23_V_q0.read();
        IN_23_V_load_9_reg_13519 = IN_23_V_q1.read();
        IN_24_V_load_8_reg_13364 = IN_24_V_q0.read();
        IN_24_V_load_9_reg_13524 = IN_24_V_q1.read();
        IN_25_V_load_8_reg_13369 = IN_25_V_q0.read();
        IN_25_V_load_9_reg_13529 = IN_25_V_q1.read();
        IN_26_V_load_8_reg_13374 = IN_26_V_q0.read();
        IN_26_V_load_9_reg_13534 = IN_26_V_q1.read();
        IN_27_V_load_8_reg_13379 = IN_27_V_q0.read();
        IN_27_V_load_9_reg_13539 = IN_27_V_q1.read();
        IN_28_V_load_8_reg_13384 = IN_28_V_q0.read();
        IN_28_V_load_9_reg_13544 = IN_28_V_q1.read();
        IN_29_V_load_8_reg_13389 = IN_29_V_q0.read();
        IN_29_V_load_9_reg_13549 = IN_29_V_q1.read();
        IN_2_V_load_10_reg_13574 = IN_2_V_q0.read();
        IN_2_V_load_9_reg_13414 = IN_2_V_q1.read();
        IN_30_V_load_8_reg_13394 = IN_30_V_q0.read();
        IN_30_V_load_9_reg_13554 = IN_30_V_q1.read();
        IN_31_V_load_8_reg_13399 = IN_31_V_q0.read();
        IN_31_V_load_9_reg_13559 = IN_31_V_q1.read();
        IN_3_V_load_10_reg_13579 = IN_3_V_q0.read();
        IN_3_V_load_9_reg_13419 = IN_3_V_q1.read();
        IN_4_V_load_10_reg_13584 = IN_4_V_q0.read();
        IN_4_V_load_9_reg_13424 = IN_4_V_q1.read();
        IN_5_V_load_10_reg_13589 = IN_5_V_q0.read();
        IN_5_V_load_9_reg_13429 = IN_5_V_q1.read();
        IN_6_V_load_10_reg_13594 = IN_6_V_q0.read();
        IN_6_V_load_9_reg_13434 = IN_6_V_q1.read();
        IN_7_V_load_10_reg_13599 = IN_7_V_q0.read();
        IN_7_V_load_9_reg_13439 = IN_7_V_q1.read();
        IN_8_V_load_10_reg_13604 = IN_8_V_q0.read();
        IN_8_V_load_9_reg_13444 = IN_8_V_q1.read();
        IN_9_V_load_10_reg_13609 = IN_9_V_q0.read();
        IN_9_V_load_9_reg_13449 = IN_9_V_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        IN_0_V_load_1_reg_10844 = IN_0_V_q0.read();
        IN_0_V_load_2_reg_11004 = IN_0_V_q1.read();
        IN_10_V_load_1_reg_10894 = IN_10_V_q0.read();
        IN_10_V_load_2_reg_11054 = IN_10_V_q1.read();
        IN_11_V_load_1_reg_10899 = IN_11_V_q0.read();
        IN_11_V_load_2_reg_11059 = IN_11_V_q1.read();
        IN_12_V_load_1_reg_10904 = IN_12_V_q0.read();
        IN_12_V_load_2_reg_11064 = IN_12_V_q1.read();
        IN_13_V_load_1_reg_10909 = IN_13_V_q0.read();
        IN_13_V_load_2_reg_11069 = IN_13_V_q1.read();
        IN_14_V_load_1_reg_10914 = IN_14_V_q0.read();
        IN_14_V_load_2_reg_11074 = IN_14_V_q1.read();
        IN_15_V_load_1_reg_10919 = IN_15_V_q0.read();
        IN_15_V_load_2_reg_11079 = IN_15_V_q1.read();
        IN_16_V_load_1_reg_10924 = IN_16_V_q0.read();
        IN_16_V_load_2_reg_11084 = IN_16_V_q1.read();
        IN_17_V_load_1_reg_10929 = IN_17_V_q0.read();
        IN_17_V_load_2_reg_11089 = IN_17_V_q1.read();
        IN_18_V_load_1_reg_10934 = IN_18_V_q0.read();
        IN_18_V_load_2_reg_11094 = IN_18_V_q1.read();
        IN_19_V_load_1_reg_10939 = IN_19_V_q0.read();
        IN_19_V_load_2_reg_11099 = IN_19_V_q1.read();
        IN_1_V_load_1_reg_10849 = IN_1_V_q0.read();
        IN_1_V_load_2_reg_11009 = IN_1_V_q1.read();
        IN_20_V_load_1_reg_10944 = IN_20_V_q0.read();
        IN_20_V_load_2_reg_11104 = IN_20_V_q1.read();
        IN_21_V_load_1_reg_10949 = IN_21_V_q0.read();
        IN_21_V_load_2_reg_11109 = IN_21_V_q1.read();
        IN_22_V_load_1_reg_10954 = IN_22_V_q0.read();
        IN_22_V_load_2_reg_11114 = IN_22_V_q1.read();
        IN_23_V_load_1_reg_10959 = IN_23_V_q0.read();
        IN_23_V_load_2_reg_11119 = IN_23_V_q1.read();
        IN_24_V_load_1_reg_10964 = IN_24_V_q1.read();
        IN_24_V_load_reg_10804 = IN_24_V_q0.read();
        IN_25_V_load_1_reg_10969 = IN_25_V_q1.read();
        IN_25_V_load_reg_10809 = IN_25_V_q0.read();
        IN_26_V_load_1_reg_10974 = IN_26_V_q1.read();
        IN_26_V_load_reg_10814 = IN_26_V_q0.read();
        IN_27_V_load_1_reg_10979 = IN_27_V_q1.read();
        IN_27_V_load_reg_10819 = IN_27_V_q0.read();
        IN_28_V_load_1_reg_10984 = IN_28_V_q1.read();
        IN_28_V_load_reg_10824 = IN_28_V_q0.read();
        IN_29_V_load_1_reg_10989 = IN_29_V_q1.read();
        IN_29_V_load_reg_10829 = IN_29_V_q0.read();
        IN_2_V_load_1_reg_10854 = IN_2_V_q0.read();
        IN_2_V_load_2_reg_11014 = IN_2_V_q1.read();
        IN_30_V_load_1_reg_10994 = IN_30_V_q1.read();
        IN_30_V_load_reg_10834 = IN_30_V_q0.read();
        IN_31_V_load_1_reg_10999 = IN_31_V_q1.read();
        IN_31_V_load_reg_10839 = IN_31_V_q0.read();
        IN_3_V_load_1_reg_10859 = IN_3_V_q0.read();
        IN_3_V_load_2_reg_11019 = IN_3_V_q1.read();
        IN_4_V_load_1_reg_10864 = IN_4_V_q0.read();
        IN_4_V_load_2_reg_11024 = IN_4_V_q1.read();
        IN_5_V_load_1_reg_10869 = IN_5_V_q0.read();
        IN_5_V_load_2_reg_11029 = IN_5_V_q1.read();
        IN_6_V_load_1_reg_10874 = IN_6_V_q0.read();
        IN_6_V_load_2_reg_11034 = IN_6_V_q1.read();
        IN_7_V_load_1_reg_10879 = IN_7_V_q0.read();
        IN_7_V_load_2_reg_11039 = IN_7_V_q1.read();
        IN_8_V_load_1_reg_10884 = IN_8_V_q0.read();
        IN_8_V_load_2_reg_11044 = IN_8_V_q1.read();
        IN_9_V_load_1_reg_10889 = IN_9_V_q0.read();
        IN_9_V_load_2_reg_11049 = IN_9_V_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        IN_0_V_load_3_reg_11484 = IN_0_V_q1.read();
        IN_0_V_load_4_reg_11644 = IN_0_V_q0.read();
        IN_10_V_load_3_reg_11534 = IN_10_V_q1.read();
        IN_10_V_load_4_reg_11694 = IN_10_V_q0.read();
        IN_11_V_load_3_reg_11539 = IN_11_V_q1.read();
        IN_11_V_load_4_reg_11699 = IN_11_V_q0.read();
        IN_12_V_load_3_reg_11544 = IN_12_V_q1.read();
        IN_12_V_load_4_reg_11704 = IN_12_V_q0.read();
        IN_13_V_load_3_reg_11549 = IN_13_V_q1.read();
        IN_13_V_load_4_reg_11709 = IN_13_V_q0.read();
        IN_14_V_load_3_reg_11554 = IN_14_V_q1.read();
        IN_14_V_load_4_reg_11714 = IN_14_V_q0.read();
        IN_15_V_load_3_reg_11559 = IN_15_V_q1.read();
        IN_15_V_load_4_reg_11719 = IN_15_V_q0.read();
        IN_16_V_load_3_reg_11564 = IN_16_V_q1.read();
        IN_16_V_load_4_reg_11724 = IN_16_V_q0.read();
        IN_17_V_load_3_reg_11569 = IN_17_V_q1.read();
        IN_17_V_load_4_reg_11729 = IN_17_V_q0.read();
        IN_18_V_load_3_reg_11574 = IN_18_V_q1.read();
        IN_18_V_load_4_reg_11734 = IN_18_V_q0.read();
        IN_19_V_load_3_reg_11579 = IN_19_V_q1.read();
        IN_19_V_load_4_reg_11739 = IN_19_V_q0.read();
        IN_1_V_load_3_reg_11489 = IN_1_V_q1.read();
        IN_1_V_load_4_reg_11649 = IN_1_V_q0.read();
        IN_20_V_load_3_reg_11584 = IN_20_V_q1.read();
        IN_20_V_load_4_reg_11744 = IN_20_V_q0.read();
        IN_21_V_load_3_reg_11589 = IN_21_V_q1.read();
        IN_21_V_load_4_reg_11749 = IN_21_V_q0.read();
        IN_22_V_load_3_reg_11594 = IN_22_V_q1.read();
        IN_22_V_load_4_reg_11754 = IN_22_V_q0.read();
        IN_23_V_load_3_reg_11599 = IN_23_V_q1.read();
        IN_23_V_load_4_reg_11759 = IN_23_V_q0.read();
        IN_24_V_load_2_reg_11444 = IN_24_V_q0.read();
        IN_24_V_load_3_reg_11604 = IN_24_V_q1.read();
        IN_25_V_load_2_reg_11449 = IN_25_V_q0.read();
        IN_25_V_load_3_reg_11609 = IN_25_V_q1.read();
        IN_26_V_load_2_reg_11454 = IN_26_V_q0.read();
        IN_26_V_load_3_reg_11614 = IN_26_V_q1.read();
        IN_27_V_load_2_reg_11459 = IN_27_V_q0.read();
        IN_27_V_load_3_reg_11619 = IN_27_V_q1.read();
        IN_28_V_load_2_reg_11464 = IN_28_V_q0.read();
        IN_28_V_load_3_reg_11624 = IN_28_V_q1.read();
        IN_29_V_load_2_reg_11469 = IN_29_V_q0.read();
        IN_29_V_load_3_reg_11629 = IN_29_V_q1.read();
        IN_2_V_load_3_reg_11494 = IN_2_V_q1.read();
        IN_2_V_load_4_reg_11654 = IN_2_V_q0.read();
        IN_30_V_load_2_reg_11474 = IN_30_V_q0.read();
        IN_30_V_load_3_reg_11634 = IN_30_V_q1.read();
        IN_31_V_load_2_reg_11479 = IN_31_V_q0.read();
        IN_31_V_load_3_reg_11639 = IN_31_V_q1.read();
        IN_3_V_load_3_reg_11499 = IN_3_V_q1.read();
        IN_3_V_load_4_reg_11659 = IN_3_V_q0.read();
        IN_4_V_load_3_reg_11504 = IN_4_V_q1.read();
        IN_4_V_load_4_reg_11664 = IN_4_V_q0.read();
        IN_5_V_load_3_reg_11509 = IN_5_V_q1.read();
        IN_5_V_load_4_reg_11669 = IN_5_V_q0.read();
        IN_6_V_load_3_reg_11514 = IN_6_V_q1.read();
        IN_6_V_load_4_reg_11674 = IN_6_V_q0.read();
        IN_7_V_load_3_reg_11519 = IN_7_V_q1.read();
        IN_7_V_load_4_reg_11679 = IN_7_V_q0.read();
        IN_8_V_load_3_reg_11524 = IN_8_V_q1.read();
        IN_8_V_load_4_reg_11684 = IN_8_V_q0.read();
        IN_9_V_load_3_reg_11529 = IN_9_V_q1.read();
        IN_9_V_load_4_reg_11689 = IN_9_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        IN_0_V_load_5_reg_12124 = IN_0_V_q1.read();
        IN_0_V_load_6_reg_12284 = IN_0_V_q0.read();
        IN_10_V_load_5_reg_12174 = IN_10_V_q1.read();
        IN_10_V_load_6_reg_12334 = IN_10_V_q0.read();
        IN_11_V_load_5_reg_12179 = IN_11_V_q1.read();
        IN_11_V_load_6_reg_12339 = IN_11_V_q0.read();
        IN_12_V_load_5_reg_12184 = IN_12_V_q1.read();
        IN_12_V_load_6_reg_12344 = IN_12_V_q0.read();
        IN_13_V_load_5_reg_12189 = IN_13_V_q1.read();
        IN_13_V_load_6_reg_12349 = IN_13_V_q0.read();
        IN_14_V_load_5_reg_12194 = IN_14_V_q1.read();
        IN_14_V_load_6_reg_12354 = IN_14_V_q0.read();
        IN_15_V_load_5_reg_12199 = IN_15_V_q1.read();
        IN_15_V_load_6_reg_12359 = IN_15_V_q0.read();
        IN_16_V_load_5_reg_12204 = IN_16_V_q1.read();
        IN_16_V_load_6_reg_12364 = IN_16_V_q0.read();
        IN_17_V_load_5_reg_12209 = IN_17_V_q1.read();
        IN_17_V_load_6_reg_12369 = IN_17_V_q0.read();
        IN_18_V_load_5_reg_12214 = IN_18_V_q1.read();
        IN_18_V_load_6_reg_12374 = IN_18_V_q0.read();
        IN_19_V_load_5_reg_12219 = IN_19_V_q1.read();
        IN_19_V_load_6_reg_12379 = IN_19_V_q0.read();
        IN_1_V_load_5_reg_12129 = IN_1_V_q1.read();
        IN_1_V_load_6_reg_12289 = IN_1_V_q0.read();
        IN_20_V_load_5_reg_12224 = IN_20_V_q1.read();
        IN_20_V_load_6_reg_12384 = IN_20_V_q0.read();
        IN_21_V_load_5_reg_12229 = IN_21_V_q1.read();
        IN_21_V_load_6_reg_12389 = IN_21_V_q0.read();
        IN_22_V_load_5_reg_12234 = IN_22_V_q1.read();
        IN_22_V_load_6_reg_12394 = IN_22_V_q0.read();
        IN_23_V_load_5_reg_12239 = IN_23_V_q1.read();
        IN_23_V_load_6_reg_12399 = IN_23_V_q0.read();
        IN_24_V_load_4_reg_12084 = IN_24_V_q0.read();
        IN_24_V_load_5_reg_12244 = IN_24_V_q1.read();
        IN_25_V_load_4_reg_12089 = IN_25_V_q0.read();
        IN_25_V_load_5_reg_12249 = IN_25_V_q1.read();
        IN_26_V_load_4_reg_12094 = IN_26_V_q0.read();
        IN_26_V_load_5_reg_12254 = IN_26_V_q1.read();
        IN_27_V_load_4_reg_12099 = IN_27_V_q0.read();
        IN_27_V_load_5_reg_12259 = IN_27_V_q1.read();
        IN_28_V_load_4_reg_12104 = IN_28_V_q0.read();
        IN_28_V_load_5_reg_12264 = IN_28_V_q1.read();
        IN_29_V_load_4_reg_12109 = IN_29_V_q0.read();
        IN_29_V_load_5_reg_12269 = IN_29_V_q1.read();
        IN_2_V_load_5_reg_12134 = IN_2_V_q1.read();
        IN_2_V_load_6_reg_12294 = IN_2_V_q0.read();
        IN_30_V_load_4_reg_12114 = IN_30_V_q0.read();
        IN_30_V_load_5_reg_12274 = IN_30_V_q1.read();
        IN_31_V_load_4_reg_12119 = IN_31_V_q0.read();
        IN_31_V_load_5_reg_12279 = IN_31_V_q1.read();
        IN_3_V_load_5_reg_12139 = IN_3_V_q1.read();
        IN_3_V_load_6_reg_12299 = IN_3_V_q0.read();
        IN_4_V_load_5_reg_12144 = IN_4_V_q1.read();
        IN_4_V_load_6_reg_12304 = IN_4_V_q0.read();
        IN_5_V_load_5_reg_12149 = IN_5_V_q1.read();
        IN_5_V_load_6_reg_12309 = IN_5_V_q0.read();
        IN_6_V_load_5_reg_12154 = IN_6_V_q1.read();
        IN_6_V_load_6_reg_12314 = IN_6_V_q0.read();
        IN_7_V_load_5_reg_12159 = IN_7_V_q1.read();
        IN_7_V_load_6_reg_12319 = IN_7_V_q0.read();
        IN_8_V_load_5_reg_12164 = IN_8_V_q1.read();
        IN_8_V_load_6_reg_12324 = IN_8_V_q0.read();
        IN_9_V_load_5_reg_12169 = IN_9_V_q1.read();
        IN_9_V_load_6_reg_12329 = IN_9_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        IN_0_V_load_7_reg_12764 = IN_0_V_q1.read();
        IN_0_V_load_8_reg_12924 = IN_0_V_q0.read();
        IN_10_V_load_7_reg_12814 = IN_10_V_q1.read();
        IN_10_V_load_8_reg_12974 = IN_10_V_q0.read();
        IN_11_V_load_7_reg_12819 = IN_11_V_q1.read();
        IN_11_V_load_8_reg_12979 = IN_11_V_q0.read();
        IN_12_V_load_7_reg_12824 = IN_12_V_q1.read();
        IN_12_V_load_8_reg_12984 = IN_12_V_q0.read();
        IN_13_V_load_7_reg_12829 = IN_13_V_q1.read();
        IN_13_V_load_8_reg_12989 = IN_13_V_q0.read();
        IN_14_V_load_7_reg_12834 = IN_14_V_q1.read();
        IN_14_V_load_8_reg_12994 = IN_14_V_q0.read();
        IN_15_V_load_7_reg_12839 = IN_15_V_q1.read();
        IN_15_V_load_8_reg_12999 = IN_15_V_q0.read();
        IN_16_V_load_7_reg_12844 = IN_16_V_q1.read();
        IN_16_V_load_8_reg_13004 = IN_16_V_q0.read();
        IN_17_V_load_7_reg_12849 = IN_17_V_q1.read();
        IN_17_V_load_8_reg_13009 = IN_17_V_q0.read();
        IN_18_V_load_7_reg_12854 = IN_18_V_q1.read();
        IN_18_V_load_8_reg_13014 = IN_18_V_q0.read();
        IN_19_V_load_7_reg_12859 = IN_19_V_q1.read();
        IN_19_V_load_8_reg_13019 = IN_19_V_q0.read();
        IN_1_V_load_7_reg_12769 = IN_1_V_q1.read();
        IN_1_V_load_8_reg_12929 = IN_1_V_q0.read();
        IN_20_V_load_7_reg_12864 = IN_20_V_q1.read();
        IN_20_V_load_8_reg_13024 = IN_20_V_q0.read();
        IN_21_V_load_7_reg_12869 = IN_21_V_q1.read();
        IN_21_V_load_8_reg_13029 = IN_21_V_q0.read();
        IN_22_V_load_7_reg_12874 = IN_22_V_q1.read();
        IN_22_V_load_8_reg_13034 = IN_22_V_q0.read();
        IN_23_V_load_7_reg_12879 = IN_23_V_q1.read();
        IN_23_V_load_8_reg_13039 = IN_23_V_q0.read();
        IN_24_V_load_6_reg_12724 = IN_24_V_q0.read();
        IN_24_V_load_7_reg_12884 = IN_24_V_q1.read();
        IN_25_V_load_6_reg_12729 = IN_25_V_q0.read();
        IN_25_V_load_7_reg_12889 = IN_25_V_q1.read();
        IN_26_V_load_6_reg_12734 = IN_26_V_q0.read();
        IN_26_V_load_7_reg_12894 = IN_26_V_q1.read();
        IN_27_V_load_6_reg_12739 = IN_27_V_q0.read();
        IN_27_V_load_7_reg_12899 = IN_27_V_q1.read();
        IN_28_V_load_6_reg_12744 = IN_28_V_q0.read();
        IN_28_V_load_7_reg_12904 = IN_28_V_q1.read();
        IN_29_V_load_6_reg_12749 = IN_29_V_q0.read();
        IN_29_V_load_7_reg_12909 = IN_29_V_q1.read();
        IN_2_V_load_7_reg_12774 = IN_2_V_q1.read();
        IN_2_V_load_8_reg_12934 = IN_2_V_q0.read();
        IN_30_V_load_6_reg_12754 = IN_30_V_q0.read();
        IN_30_V_load_7_reg_12914 = IN_30_V_q1.read();
        IN_31_V_load_6_reg_12759 = IN_31_V_q0.read();
        IN_31_V_load_7_reg_12919 = IN_31_V_q1.read();
        IN_3_V_load_7_reg_12779 = IN_3_V_q1.read();
        IN_3_V_load_8_reg_12939 = IN_3_V_q0.read();
        IN_4_V_load_7_reg_12784 = IN_4_V_q1.read();
        IN_4_V_load_8_reg_12944 = IN_4_V_q0.read();
        IN_5_V_load_7_reg_12789 = IN_5_V_q1.read();
        IN_5_V_load_8_reg_12949 = IN_5_V_q0.read();
        IN_6_V_load_7_reg_12794 = IN_6_V_q1.read();
        IN_6_V_load_8_reg_12954 = IN_6_V_q0.read();
        IN_7_V_load_7_reg_12799 = IN_7_V_q1.read();
        IN_7_V_load_8_reg_12959 = IN_7_V_q0.read();
        IN_8_V_load_7_reg_12804 = IN_8_V_q1.read();
        IN_8_V_load_8_reg_12964 = IN_8_V_q0.read();
        IN_9_V_load_7_reg_12809 = IN_9_V_q1.read();
        IN_9_V_load_8_reg_12969 = IN_9_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        IN_0_V_load_reg_10364 = IN_0_V_q0.read();
        IN_10_V_load_reg_10414 = IN_10_V_q0.read();
        IN_11_V_load_reg_10419 = IN_11_V_q0.read();
        IN_12_V_load_reg_10424 = IN_12_V_q0.read();
        IN_13_V_load_reg_10429 = IN_13_V_q0.read();
        IN_14_V_load_reg_10434 = IN_14_V_q0.read();
        IN_15_V_load_reg_10439 = IN_15_V_q0.read();
        IN_16_V_load_reg_10444 = IN_16_V_q0.read();
        IN_17_V_load_reg_10449 = IN_17_V_q0.read();
        IN_18_V_load_reg_10454 = IN_18_V_q0.read();
        IN_19_V_load_reg_10459 = IN_19_V_q0.read();
        IN_1_V_load_reg_10369 = IN_1_V_q0.read();
        IN_20_V_load_reg_10464 = IN_20_V_q0.read();
        IN_21_V_load_reg_10469 = IN_21_V_q0.read();
        IN_22_V_load_reg_10474 = IN_22_V_q0.read();
        IN_23_V_load_reg_10479 = IN_23_V_q0.read();
        IN_2_V_load_reg_10374 = IN_2_V_q0.read();
        IN_3_V_load_reg_10379 = IN_3_V_q0.read();
        IN_4_V_load_reg_10384 = IN_4_V_q0.read();
        IN_5_V_load_reg_10389 = IN_5_V_q0.read();
        IN_6_V_load_reg_10394 = IN_6_V_q0.read();
        IN_7_V_load_reg_10399 = IN_7_V_q0.read();
        IN_8_V_load_reg_10404 = IN_8_V_q0.read();
        IN_9_V_load_reg_10409 = IN_9_V_q0.read();
    }
}

void clone_vec_ap_uint_16_edge_index_config_1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}

