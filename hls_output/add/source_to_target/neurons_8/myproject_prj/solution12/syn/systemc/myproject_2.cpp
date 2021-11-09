#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, Block_proc_U0_ap_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, Block_proc_U0_ap_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_sync_Block_proc_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_0_V = ap_sync_channel_write_edge_index_cpy1_0_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_10_V = ap_sync_channel_write_edge_index_cpy1_0_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_11_V = ap_sync_channel_write_edge_index_cpy1_0_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_12_V = ap_sync_channel_write_edge_index_cpy1_0_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_1_V = ap_sync_channel_write_edge_index_cpy1_0_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_2_V = ap_sync_channel_write_edge_index_cpy1_0_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_3_V = ap_sync_channel_write_edge_index_cpy1_0_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_4_V = ap_sync_channel_write_edge_index_cpy1_0_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_5_V = ap_sync_channel_write_edge_index_cpy1_0_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_6_V = ap_sync_channel_write_edge_index_cpy1_0_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_7_V = ap_sync_channel_write_edge_index_cpy1_0_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_8_V = ap_sync_channel_write_edge_index_cpy1_0_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_9_V = ap_sync_channel_write_edge_index_cpy1_0_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_0_V = ap_sync_channel_write_edge_index_cpy1_10_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_10_V = ap_sync_channel_write_edge_index_cpy1_10_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_11_V = ap_sync_channel_write_edge_index_cpy1_10_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_12_V = ap_sync_channel_write_edge_index_cpy1_10_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_1_V = ap_sync_channel_write_edge_index_cpy1_10_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_2_V = ap_sync_channel_write_edge_index_cpy1_10_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_3_V = ap_sync_channel_write_edge_index_cpy1_10_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_4_V = ap_sync_channel_write_edge_index_cpy1_10_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_5_V = ap_sync_channel_write_edge_index_cpy1_10_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_6_V = ap_sync_channel_write_edge_index_cpy1_10_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_7_V = ap_sync_channel_write_edge_index_cpy1_10_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_8_V = ap_sync_channel_write_edge_index_cpy1_10_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_9_V = ap_sync_channel_write_edge_index_cpy1_10_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_0_V = ap_sync_channel_write_edge_index_cpy1_11_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_10_V = ap_sync_channel_write_edge_index_cpy1_11_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_11_V = ap_sync_channel_write_edge_index_cpy1_11_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_12_V = ap_sync_channel_write_edge_index_cpy1_11_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_1_V = ap_sync_channel_write_edge_index_cpy1_11_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_2_V = ap_sync_channel_write_edge_index_cpy1_11_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_3_V = ap_sync_channel_write_edge_index_cpy1_11_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_4_V = ap_sync_channel_write_edge_index_cpy1_11_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_5_V = ap_sync_channel_write_edge_index_cpy1_11_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_6_V = ap_sync_channel_write_edge_index_cpy1_11_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_7_V = ap_sync_channel_write_edge_index_cpy1_11_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_8_V = ap_sync_channel_write_edge_index_cpy1_11_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_9_V = ap_sync_channel_write_edge_index_cpy1_11_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_0_V = ap_sync_channel_write_edge_index_cpy1_12_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_10_V = ap_sync_channel_write_edge_index_cpy1_12_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_11_V = ap_sync_channel_write_edge_index_cpy1_12_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_12_V = ap_sync_channel_write_edge_index_cpy1_12_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_1_V = ap_sync_channel_write_edge_index_cpy1_12_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_2_V = ap_sync_channel_write_edge_index_cpy1_12_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_3_V = ap_sync_channel_write_edge_index_cpy1_12_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_4_V = ap_sync_channel_write_edge_index_cpy1_12_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_5_V = ap_sync_channel_write_edge_index_cpy1_12_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_6_V = ap_sync_channel_write_edge_index_cpy1_12_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_7_V = ap_sync_channel_write_edge_index_cpy1_12_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_8_V = ap_sync_channel_write_edge_index_cpy1_12_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_9_V = ap_sync_channel_write_edge_index_cpy1_12_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_0_V = ap_sync_channel_write_edge_index_cpy1_13_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_10_V = ap_sync_channel_write_edge_index_cpy1_13_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_11_V = ap_sync_channel_write_edge_index_cpy1_13_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_12_V = ap_sync_channel_write_edge_index_cpy1_13_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_1_V = ap_sync_channel_write_edge_index_cpy1_13_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_2_V = ap_sync_channel_write_edge_index_cpy1_13_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_3_V = ap_sync_channel_write_edge_index_cpy1_13_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_4_V = ap_sync_channel_write_edge_index_cpy1_13_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_5_V = ap_sync_channel_write_edge_index_cpy1_13_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_6_V = ap_sync_channel_write_edge_index_cpy1_13_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_7_V = ap_sync_channel_write_edge_index_cpy1_13_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_8_V = ap_sync_channel_write_edge_index_cpy1_13_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_13_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_13_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_13_9_V = ap_sync_channel_write_edge_index_cpy1_13_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_0_V = ap_sync_channel_write_edge_index_cpy1_14_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_10_V = ap_sync_channel_write_edge_index_cpy1_14_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_11_V = ap_sync_channel_write_edge_index_cpy1_14_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_12_V = ap_sync_channel_write_edge_index_cpy1_14_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_1_V = ap_sync_channel_write_edge_index_cpy1_14_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_2_V = ap_sync_channel_write_edge_index_cpy1_14_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_3_V = ap_sync_channel_write_edge_index_cpy1_14_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_4_V = ap_sync_channel_write_edge_index_cpy1_14_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_5_V = ap_sync_channel_write_edge_index_cpy1_14_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_6_V = ap_sync_channel_write_edge_index_cpy1_14_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_7_V = ap_sync_channel_write_edge_index_cpy1_14_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_8_V = ap_sync_channel_write_edge_index_cpy1_14_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_14_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_14_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_14_9_V = ap_sync_channel_write_edge_index_cpy1_14_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_0_V = ap_sync_channel_write_edge_index_cpy1_15_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_10_V = ap_sync_channel_write_edge_index_cpy1_15_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_11_V = ap_sync_channel_write_edge_index_cpy1_15_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_12_V = ap_sync_channel_write_edge_index_cpy1_15_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_1_V = ap_sync_channel_write_edge_index_cpy1_15_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_2_V = ap_sync_channel_write_edge_index_cpy1_15_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_3_V = ap_sync_channel_write_edge_index_cpy1_15_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_4_V = ap_sync_channel_write_edge_index_cpy1_15_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_5_V = ap_sync_channel_write_edge_index_cpy1_15_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_6_V = ap_sync_channel_write_edge_index_cpy1_15_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_7_V = ap_sync_channel_write_edge_index_cpy1_15_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_8_V = ap_sync_channel_write_edge_index_cpy1_15_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_15_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_15_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_15_9_V = ap_sync_channel_write_edge_index_cpy1_15_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_0_V = ap_sync_channel_write_edge_index_cpy1_16_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_10_V = ap_sync_channel_write_edge_index_cpy1_16_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_11_V = ap_sync_channel_write_edge_index_cpy1_16_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_12_V = ap_sync_channel_write_edge_index_cpy1_16_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_1_V = ap_sync_channel_write_edge_index_cpy1_16_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_2_V = ap_sync_channel_write_edge_index_cpy1_16_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_3_V = ap_sync_channel_write_edge_index_cpy1_16_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_4_V = ap_sync_channel_write_edge_index_cpy1_16_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_5_V = ap_sync_channel_write_edge_index_cpy1_16_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_6_V = ap_sync_channel_write_edge_index_cpy1_16_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_7_V = ap_sync_channel_write_edge_index_cpy1_16_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_8_V = ap_sync_channel_write_edge_index_cpy1_16_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_16_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_16_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_16_9_V = ap_sync_channel_write_edge_index_cpy1_16_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_0_V = ap_sync_channel_write_edge_index_cpy1_17_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_10_V = ap_sync_channel_write_edge_index_cpy1_17_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_11_V = ap_sync_channel_write_edge_index_cpy1_17_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_12_V = ap_sync_channel_write_edge_index_cpy1_17_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_1_V = ap_sync_channel_write_edge_index_cpy1_17_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_2_V = ap_sync_channel_write_edge_index_cpy1_17_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_3_V = ap_sync_channel_write_edge_index_cpy1_17_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_4_V = ap_sync_channel_write_edge_index_cpy1_17_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_5_V = ap_sync_channel_write_edge_index_cpy1_17_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_6_V = ap_sync_channel_write_edge_index_cpy1_17_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_7_V = ap_sync_channel_write_edge_index_cpy1_17_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_8_V = ap_sync_channel_write_edge_index_cpy1_17_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_17_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_17_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_17_9_V = ap_sync_channel_write_edge_index_cpy1_17_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_0_V = ap_sync_channel_write_edge_index_cpy1_18_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_10_V = ap_sync_channel_write_edge_index_cpy1_18_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_11_V = ap_sync_channel_write_edge_index_cpy1_18_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_12_V = ap_sync_channel_write_edge_index_cpy1_18_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_1_V = ap_sync_channel_write_edge_index_cpy1_18_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_2_V = ap_sync_channel_write_edge_index_cpy1_18_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_3_V = ap_sync_channel_write_edge_index_cpy1_18_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_4_V = ap_sync_channel_write_edge_index_cpy1_18_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_5_V = ap_sync_channel_write_edge_index_cpy1_18_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_6_V = ap_sync_channel_write_edge_index_cpy1_18_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_7_V = ap_sync_channel_write_edge_index_cpy1_18_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_8_V = ap_sync_channel_write_edge_index_cpy1_18_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_18_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_18_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_18_9_V = ap_sync_channel_write_edge_index_cpy1_18_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_0_V = ap_sync_channel_write_edge_index_cpy1_19_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_10_V = ap_sync_channel_write_edge_index_cpy1_19_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_11_V = ap_sync_channel_write_edge_index_cpy1_19_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_12_V = ap_sync_channel_write_edge_index_cpy1_19_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_1_V = ap_sync_channel_write_edge_index_cpy1_19_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_2_V = ap_sync_channel_write_edge_index_cpy1_19_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_3_V = ap_sync_channel_write_edge_index_cpy1_19_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_4_V = ap_sync_channel_write_edge_index_cpy1_19_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_5_V = ap_sync_channel_write_edge_index_cpy1_19_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_6_V = ap_sync_channel_write_edge_index_cpy1_19_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_7_V = ap_sync_channel_write_edge_index_cpy1_19_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_8_V = ap_sync_channel_write_edge_index_cpy1_19_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_19_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_19_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_19_9_V = ap_sync_channel_write_edge_index_cpy1_19_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_0_V = ap_sync_channel_write_edge_index_cpy1_1_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_10_V = ap_sync_channel_write_edge_index_cpy1_1_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_11_V = ap_sync_channel_write_edge_index_cpy1_1_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_12_V = ap_sync_channel_write_edge_index_cpy1_1_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_1_V = ap_sync_channel_write_edge_index_cpy1_1_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_2_V = ap_sync_channel_write_edge_index_cpy1_1_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_3_V = ap_sync_channel_write_edge_index_cpy1_1_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_4_V = ap_sync_channel_write_edge_index_cpy1_1_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_5_V = ap_sync_channel_write_edge_index_cpy1_1_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_6_V = ap_sync_channel_write_edge_index_cpy1_1_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_7_V = ap_sync_channel_write_edge_index_cpy1_1_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_8_V = ap_sync_channel_write_edge_index_cpy1_1_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_9_V = ap_sync_channel_write_edge_index_cpy1_1_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_0_V = ap_sync_channel_write_edge_index_cpy1_20_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_10_V = ap_sync_channel_write_edge_index_cpy1_20_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_11_V = ap_sync_channel_write_edge_index_cpy1_20_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_12_V = ap_sync_channel_write_edge_index_cpy1_20_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_1_V = ap_sync_channel_write_edge_index_cpy1_20_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_2_V = ap_sync_channel_write_edge_index_cpy1_20_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_3_V = ap_sync_channel_write_edge_index_cpy1_20_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_4_V = ap_sync_channel_write_edge_index_cpy1_20_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_5_V = ap_sync_channel_write_edge_index_cpy1_20_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_6_V = ap_sync_channel_write_edge_index_cpy1_20_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_7_V = ap_sync_channel_write_edge_index_cpy1_20_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_8_V = ap_sync_channel_write_edge_index_cpy1_20_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_20_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_20_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_20_9_V = ap_sync_channel_write_edge_index_cpy1_20_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_0_V = ap_sync_channel_write_edge_index_cpy1_21_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_10_V = ap_sync_channel_write_edge_index_cpy1_21_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_11_V = ap_sync_channel_write_edge_index_cpy1_21_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_12_V = ap_sync_channel_write_edge_index_cpy1_21_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_1_V = ap_sync_channel_write_edge_index_cpy1_21_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_2_V = ap_sync_channel_write_edge_index_cpy1_21_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_3_V = ap_sync_channel_write_edge_index_cpy1_21_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_4_V = ap_sync_channel_write_edge_index_cpy1_21_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_5_V = ap_sync_channel_write_edge_index_cpy1_21_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_6_V = ap_sync_channel_write_edge_index_cpy1_21_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_7_V = ap_sync_channel_write_edge_index_cpy1_21_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_8_V = ap_sync_channel_write_edge_index_cpy1_21_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_21_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_21_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_21_9_V = ap_sync_channel_write_edge_index_cpy1_21_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_0_V = ap_sync_channel_write_edge_index_cpy1_22_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_10_V = ap_sync_channel_write_edge_index_cpy1_22_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_11_V = ap_sync_channel_write_edge_index_cpy1_22_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_12_V = ap_sync_channel_write_edge_index_cpy1_22_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_1_V = ap_sync_channel_write_edge_index_cpy1_22_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_2_V = ap_sync_channel_write_edge_index_cpy1_22_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_3_V = ap_sync_channel_write_edge_index_cpy1_22_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_4_V = ap_sync_channel_write_edge_index_cpy1_22_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_5_V = ap_sync_channel_write_edge_index_cpy1_22_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_6_V = ap_sync_channel_write_edge_index_cpy1_22_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_7_V = ap_sync_channel_write_edge_index_cpy1_22_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_8_V = ap_sync_channel_write_edge_index_cpy1_22_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_22_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_22_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_22_9_V = ap_sync_channel_write_edge_index_cpy1_22_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_0_V = ap_sync_channel_write_edge_index_cpy1_23_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_10_V = ap_sync_channel_write_edge_index_cpy1_23_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_11_V = ap_sync_channel_write_edge_index_cpy1_23_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_12_V = ap_sync_channel_write_edge_index_cpy1_23_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_1_V = ap_sync_channel_write_edge_index_cpy1_23_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_2_V = ap_sync_channel_write_edge_index_cpy1_23_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_3_V = ap_sync_channel_write_edge_index_cpy1_23_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_4_V = ap_sync_channel_write_edge_index_cpy1_23_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_5_V = ap_sync_channel_write_edge_index_cpy1_23_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_6_V = ap_sync_channel_write_edge_index_cpy1_23_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_7_V = ap_sync_channel_write_edge_index_cpy1_23_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_8_V = ap_sync_channel_write_edge_index_cpy1_23_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_23_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_23_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_23_9_V = ap_sync_channel_write_edge_index_cpy1_23_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_0_V = ap_sync_channel_write_edge_index_cpy1_24_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_10_V = ap_sync_channel_write_edge_index_cpy1_24_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_11_V = ap_sync_channel_write_edge_index_cpy1_24_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_1_V = ap_sync_channel_write_edge_index_cpy1_24_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_2_V = ap_sync_channel_write_edge_index_cpy1_24_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_3_V = ap_sync_channel_write_edge_index_cpy1_24_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_4_V = ap_sync_channel_write_edge_index_cpy1_24_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_5_V = ap_sync_channel_write_edge_index_cpy1_24_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_6_V = ap_sync_channel_write_edge_index_cpy1_24_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_7_V = ap_sync_channel_write_edge_index_cpy1_24_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_8_V = ap_sync_channel_write_edge_index_cpy1_24_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_24_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_24_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_24_9_V = ap_sync_channel_write_edge_index_cpy1_24_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_0_V = ap_sync_channel_write_edge_index_cpy1_25_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_10_V = ap_sync_channel_write_edge_index_cpy1_25_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_11_V = ap_sync_channel_write_edge_index_cpy1_25_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_1_V = ap_sync_channel_write_edge_index_cpy1_25_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_2_V = ap_sync_channel_write_edge_index_cpy1_25_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_3_V = ap_sync_channel_write_edge_index_cpy1_25_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_4_V = ap_sync_channel_write_edge_index_cpy1_25_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_5_V = ap_sync_channel_write_edge_index_cpy1_25_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_6_V = ap_sync_channel_write_edge_index_cpy1_25_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_7_V = ap_sync_channel_write_edge_index_cpy1_25_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_8_V = ap_sync_channel_write_edge_index_cpy1_25_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_25_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_25_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_25_9_V = ap_sync_channel_write_edge_index_cpy1_25_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_0_V = ap_sync_channel_write_edge_index_cpy1_26_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_10_V = ap_sync_channel_write_edge_index_cpy1_26_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_11_V = ap_sync_channel_write_edge_index_cpy1_26_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_1_V = ap_sync_channel_write_edge_index_cpy1_26_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_2_V = ap_sync_channel_write_edge_index_cpy1_26_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_3_V = ap_sync_channel_write_edge_index_cpy1_26_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_4_V = ap_sync_channel_write_edge_index_cpy1_26_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_5_V = ap_sync_channel_write_edge_index_cpy1_26_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_6_V = ap_sync_channel_write_edge_index_cpy1_26_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_7_V = ap_sync_channel_write_edge_index_cpy1_26_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_8_V = ap_sync_channel_write_edge_index_cpy1_26_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_26_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_26_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_26_9_V = ap_sync_channel_write_edge_index_cpy1_26_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_0_V = ap_sync_channel_write_edge_index_cpy1_27_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_10_V = ap_sync_channel_write_edge_index_cpy1_27_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_11_V = ap_sync_channel_write_edge_index_cpy1_27_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_1_V = ap_sync_channel_write_edge_index_cpy1_27_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_2_V = ap_sync_channel_write_edge_index_cpy1_27_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_3_V = ap_sync_channel_write_edge_index_cpy1_27_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_4_V = ap_sync_channel_write_edge_index_cpy1_27_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_5_V = ap_sync_channel_write_edge_index_cpy1_27_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_6_V = ap_sync_channel_write_edge_index_cpy1_27_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_7_V = ap_sync_channel_write_edge_index_cpy1_27_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_8_V = ap_sync_channel_write_edge_index_cpy1_27_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_27_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_27_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_27_9_V = ap_sync_channel_write_edge_index_cpy1_27_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_0_V = ap_sync_channel_write_edge_index_cpy1_28_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_10_V = ap_sync_channel_write_edge_index_cpy1_28_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_11_V = ap_sync_channel_write_edge_index_cpy1_28_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_1_V = ap_sync_channel_write_edge_index_cpy1_28_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_2_V = ap_sync_channel_write_edge_index_cpy1_28_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_3_V = ap_sync_channel_write_edge_index_cpy1_28_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_4_V = ap_sync_channel_write_edge_index_cpy1_28_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_5_V = ap_sync_channel_write_edge_index_cpy1_28_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_6_V = ap_sync_channel_write_edge_index_cpy1_28_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_7_V = ap_sync_channel_write_edge_index_cpy1_28_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_8_V = ap_sync_channel_write_edge_index_cpy1_28_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_28_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_28_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_28_9_V = ap_sync_channel_write_edge_index_cpy1_28_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_0_V = ap_sync_channel_write_edge_index_cpy1_29_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_10_V = ap_sync_channel_write_edge_index_cpy1_29_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_11_V = ap_sync_channel_write_edge_index_cpy1_29_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_1_V = ap_sync_channel_write_edge_index_cpy1_29_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_2_V = ap_sync_channel_write_edge_index_cpy1_29_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_3_V = ap_sync_channel_write_edge_index_cpy1_29_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_4_V = ap_sync_channel_write_edge_index_cpy1_29_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_5_V = ap_sync_channel_write_edge_index_cpy1_29_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_6_V = ap_sync_channel_write_edge_index_cpy1_29_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_7_V = ap_sync_channel_write_edge_index_cpy1_29_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_8_V = ap_sync_channel_write_edge_index_cpy1_29_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_29_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_29_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_29_9_V = ap_sync_channel_write_edge_index_cpy1_29_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_0_V = ap_sync_channel_write_edge_index_cpy1_2_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_10_V = ap_sync_channel_write_edge_index_cpy1_2_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_11_V = ap_sync_channel_write_edge_index_cpy1_2_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_12_V = ap_sync_channel_write_edge_index_cpy1_2_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_1_V = ap_sync_channel_write_edge_index_cpy1_2_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_2_V = ap_sync_channel_write_edge_index_cpy1_2_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_3_V = ap_sync_channel_write_edge_index_cpy1_2_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_4_V = ap_sync_channel_write_edge_index_cpy1_2_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_5_V = ap_sync_channel_write_edge_index_cpy1_2_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_6_V = ap_sync_channel_write_edge_index_cpy1_2_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_7_V = ap_sync_channel_write_edge_index_cpy1_2_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_8_V = ap_sync_channel_write_edge_index_cpy1_2_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_9_V = ap_sync_channel_write_edge_index_cpy1_2_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_0_V = ap_sync_channel_write_edge_index_cpy1_30_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_10_V = ap_sync_channel_write_edge_index_cpy1_30_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_11_V = ap_sync_channel_write_edge_index_cpy1_30_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_1_V = ap_sync_channel_write_edge_index_cpy1_30_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_2_V = ap_sync_channel_write_edge_index_cpy1_30_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_3_V = ap_sync_channel_write_edge_index_cpy1_30_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_4_V = ap_sync_channel_write_edge_index_cpy1_30_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_5_V = ap_sync_channel_write_edge_index_cpy1_30_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_6_V = ap_sync_channel_write_edge_index_cpy1_30_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_7_V = ap_sync_channel_write_edge_index_cpy1_30_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_8_V = ap_sync_channel_write_edge_index_cpy1_30_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_30_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_30_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_30_9_V = ap_sync_channel_write_edge_index_cpy1_30_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_0_V = ap_sync_channel_write_edge_index_cpy1_31_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_10_V = ap_sync_channel_write_edge_index_cpy1_31_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_11_V = ap_sync_channel_write_edge_index_cpy1_31_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_1_V = ap_sync_channel_write_edge_index_cpy1_31_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_2_V = ap_sync_channel_write_edge_index_cpy1_31_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_3_V = ap_sync_channel_write_edge_index_cpy1_31_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_4_V = ap_sync_channel_write_edge_index_cpy1_31_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_5_V = ap_sync_channel_write_edge_index_cpy1_31_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_6_V = ap_sync_channel_write_edge_index_cpy1_31_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_7_V = ap_sync_channel_write_edge_index_cpy1_31_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_8_V = ap_sync_channel_write_edge_index_cpy1_31_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_31_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_31_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_31_9_V = ap_sync_channel_write_edge_index_cpy1_31_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_0_V = ap_sync_channel_write_edge_index_cpy1_3_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_10_V = ap_sync_channel_write_edge_index_cpy1_3_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_11_V = ap_sync_channel_write_edge_index_cpy1_3_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_12_V = ap_sync_channel_write_edge_index_cpy1_3_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_1_V = ap_sync_channel_write_edge_index_cpy1_3_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_2_V = ap_sync_channel_write_edge_index_cpy1_3_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_3_V = ap_sync_channel_write_edge_index_cpy1_3_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_4_V = ap_sync_channel_write_edge_index_cpy1_3_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_5_V = ap_sync_channel_write_edge_index_cpy1_3_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_6_V = ap_sync_channel_write_edge_index_cpy1_3_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_7_V = ap_sync_channel_write_edge_index_cpy1_3_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_8_V = ap_sync_channel_write_edge_index_cpy1_3_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_9_V = ap_sync_channel_write_edge_index_cpy1_3_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_0_V = ap_sync_channel_write_edge_index_cpy1_4_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_10_V = ap_sync_channel_write_edge_index_cpy1_4_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_11_V = ap_sync_channel_write_edge_index_cpy1_4_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_12_V = ap_sync_channel_write_edge_index_cpy1_4_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_1_V = ap_sync_channel_write_edge_index_cpy1_4_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_2_V = ap_sync_channel_write_edge_index_cpy1_4_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_3_V = ap_sync_channel_write_edge_index_cpy1_4_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_4_V = ap_sync_channel_write_edge_index_cpy1_4_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_5_V = ap_sync_channel_write_edge_index_cpy1_4_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_6_V = ap_sync_channel_write_edge_index_cpy1_4_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_7_V = ap_sync_channel_write_edge_index_cpy1_4_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_8_V = ap_sync_channel_write_edge_index_cpy1_4_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_9_V = ap_sync_channel_write_edge_index_cpy1_4_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_0_V = ap_sync_channel_write_edge_index_cpy1_5_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_10_V = ap_sync_channel_write_edge_index_cpy1_5_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_11_V = ap_sync_channel_write_edge_index_cpy1_5_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_12_V = ap_sync_channel_write_edge_index_cpy1_5_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_1_V = ap_sync_channel_write_edge_index_cpy1_5_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_2_V = ap_sync_channel_write_edge_index_cpy1_5_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_3_V = ap_sync_channel_write_edge_index_cpy1_5_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_4_V = ap_sync_channel_write_edge_index_cpy1_5_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_5_V = ap_sync_channel_write_edge_index_cpy1_5_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_6_V = ap_sync_channel_write_edge_index_cpy1_5_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_7_V = ap_sync_channel_write_edge_index_cpy1_5_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_8_V = ap_sync_channel_write_edge_index_cpy1_5_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_9_V = ap_sync_channel_write_edge_index_cpy1_5_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_0_V = ap_sync_channel_write_edge_index_cpy1_6_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_10_V = ap_sync_channel_write_edge_index_cpy1_6_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_11_V = ap_sync_channel_write_edge_index_cpy1_6_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_12_V = ap_sync_channel_write_edge_index_cpy1_6_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_1_V = ap_sync_channel_write_edge_index_cpy1_6_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_2_V = ap_sync_channel_write_edge_index_cpy1_6_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_3_V = ap_sync_channel_write_edge_index_cpy1_6_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_4_V = ap_sync_channel_write_edge_index_cpy1_6_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_5_V = ap_sync_channel_write_edge_index_cpy1_6_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_6_V = ap_sync_channel_write_edge_index_cpy1_6_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_7_V = ap_sync_channel_write_edge_index_cpy1_6_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_8_V = ap_sync_channel_write_edge_index_cpy1_6_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_9_V = ap_sync_channel_write_edge_index_cpy1_6_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_0_V = ap_sync_channel_write_edge_index_cpy1_7_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_10_V = ap_sync_channel_write_edge_index_cpy1_7_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_11_V = ap_sync_channel_write_edge_index_cpy1_7_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_12_V = ap_sync_channel_write_edge_index_cpy1_7_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_1_V = ap_sync_channel_write_edge_index_cpy1_7_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_2_V = ap_sync_channel_write_edge_index_cpy1_7_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_3_V = ap_sync_channel_write_edge_index_cpy1_7_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_4_V = ap_sync_channel_write_edge_index_cpy1_7_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_5_V = ap_sync_channel_write_edge_index_cpy1_7_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_6_V = ap_sync_channel_write_edge_index_cpy1_7_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_7_V = ap_sync_channel_write_edge_index_cpy1_7_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_8_V = ap_sync_channel_write_edge_index_cpy1_7_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_9_V = ap_sync_channel_write_edge_index_cpy1_7_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_0_V = ap_sync_channel_write_edge_index_cpy1_8_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_10_V = ap_sync_channel_write_edge_index_cpy1_8_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_11_V = ap_sync_channel_write_edge_index_cpy1_8_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_12_V = ap_sync_channel_write_edge_index_cpy1_8_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_1_V = ap_sync_channel_write_edge_index_cpy1_8_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_2_V = ap_sync_channel_write_edge_index_cpy1_8_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_3_V = ap_sync_channel_write_edge_index_cpy1_8_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_4_V = ap_sync_channel_write_edge_index_cpy1_8_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_5_V = ap_sync_channel_write_edge_index_cpy1_8_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_6_V = ap_sync_channel_write_edge_index_cpy1_8_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_7_V = ap_sync_channel_write_edge_index_cpy1_8_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_8_V = ap_sync_channel_write_edge_index_cpy1_8_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_9_V = ap_sync_channel_write_edge_index_cpy1_8_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_0_V = ap_sync_channel_write_edge_index_cpy1_9_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_10_V = ap_sync_channel_write_edge_index_cpy1_9_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_11_V = ap_sync_channel_write_edge_index_cpy1_9_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_12_V = ap_sync_channel_write_edge_index_cpy1_9_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_1_V = ap_sync_channel_write_edge_index_cpy1_9_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_2_V = ap_sync_channel_write_edge_index_cpy1_9_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_3_V = ap_sync_channel_write_edge_index_cpy1_9_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_4_V = ap_sync_channel_write_edge_index_cpy1_9_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_5_V = ap_sync_channel_write_edge_index_cpy1_9_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_6_V = ap_sync_channel_write_edge_index_cpy1_9_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_7_V = ap_sync_channel_write_edge_index_cpy1_9_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_8_V = ap_sync_channel_write_edge_index_cpy1_9_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_9_V = ap_sync_channel_write_edge_index_cpy1_9_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_0_V = ap_sync_channel_write_edge_index_cpy2_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_10_V = ap_sync_channel_write_edge_index_cpy2_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_11_V = ap_sync_channel_write_edge_index_cpy2_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_12_V = ap_sync_channel_write_edge_index_cpy2_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_13_V = ap_sync_channel_write_edge_index_cpy2_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_14_V = ap_sync_channel_write_edge_index_cpy2_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_15_V = ap_sync_channel_write_edge_index_cpy2_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_16_V = ap_sync_channel_write_edge_index_cpy2_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_17_V = ap_sync_channel_write_edge_index_cpy2_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_18_V = ap_sync_channel_write_edge_index_cpy2_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_19_V = ap_sync_channel_write_edge_index_cpy2_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_1_V = ap_sync_channel_write_edge_index_cpy2_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_20_V = ap_sync_channel_write_edge_index_cpy2_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_21_V = ap_sync_channel_write_edge_index_cpy2_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_22_V = ap_sync_channel_write_edge_index_cpy2_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_23_V = ap_sync_channel_write_edge_index_cpy2_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_24_V = ap_sync_channel_write_edge_index_cpy2_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_25_V = ap_sync_channel_write_edge_index_cpy2_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_26_V = ap_sync_channel_write_edge_index_cpy2_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_27_V = ap_sync_channel_write_edge_index_cpy2_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_28_V = ap_sync_channel_write_edge_index_cpy2_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_29_V = ap_sync_channel_write_edge_index_cpy2_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_2_V = ap_sync_channel_write_edge_index_cpy2_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_30_V = ap_sync_channel_write_edge_index_cpy2_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_31_V = ap_sync_channel_write_edge_index_cpy2_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_3_V = ap_sync_channel_write_edge_index_cpy2_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_4_V = ap_sync_channel_write_edge_index_cpy2_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_5_V = ap_sync_channel_write_edge_index_cpy2_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_6_V = ap_sync_channel_write_edge_index_cpy2_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_7_V = ap_sync_channel_write_edge_index_cpy2_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_8_V = ap_sync_channel_write_edge_index_cpy2_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_1_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_9_V = ap_sync_channel_write_edge_index_cpy2_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_11_V = ap_sync_channel_write_edge_index_cpy3_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_13_V = ap_sync_channel_write_edge_index_cpy3_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_15_V = ap_sync_channel_write_edge_index_cpy3_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_17_V = ap_sync_channel_write_edge_index_cpy3_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_19_V = ap_sync_channel_write_edge_index_cpy3_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_1_V = ap_sync_channel_write_edge_index_cpy3_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_21_V = ap_sync_channel_write_edge_index_cpy3_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_23_V = ap_sync_channel_write_edge_index_cpy3_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_25_V = ap_sync_channel_write_edge_index_cpy3_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_27_V = ap_sync_channel_write_edge_index_cpy3_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_29_V = ap_sync_channel_write_edge_index_cpy3_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_31_V = ap_sync_channel_write_edge_index_cpy3_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_3_V = ap_sync_channel_write_edge_index_cpy3_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_5_V = ap_sync_channel_write_edge_index_cpy3_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_7_V = ap_sync_channel_write_edge_index_cpy3_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_9_V = ap_sync_channel_write_edge_index_cpy3_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_0_V = ap_sync_channel_write_edge_index_cpy4_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_10_V = ap_sync_channel_write_edge_index_cpy4_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_11_V = ap_sync_channel_write_edge_index_cpy4_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_12_V = ap_sync_channel_write_edge_index_cpy4_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_13_V = ap_sync_channel_write_edge_index_cpy4_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_14_V = ap_sync_channel_write_edge_index_cpy4_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_15_V = ap_sync_channel_write_edge_index_cpy4_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_16_V = ap_sync_channel_write_edge_index_cpy4_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_17_V = ap_sync_channel_write_edge_index_cpy4_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_18_V = ap_sync_channel_write_edge_index_cpy4_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_19_V = ap_sync_channel_write_edge_index_cpy4_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_1_V = ap_sync_channel_write_edge_index_cpy4_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_20_V = ap_sync_channel_write_edge_index_cpy4_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_21_V = ap_sync_channel_write_edge_index_cpy4_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_22_V = ap_sync_channel_write_edge_index_cpy4_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_23_V = ap_sync_channel_write_edge_index_cpy4_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_24_V = ap_sync_channel_write_edge_index_cpy4_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_25_V = ap_sync_channel_write_edge_index_cpy4_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_26_V = ap_sync_channel_write_edge_index_cpy4_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_27_V = ap_sync_channel_write_edge_index_cpy4_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_28_V = ap_sync_channel_write_edge_index_cpy4_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_29_V = ap_sync_channel_write_edge_index_cpy4_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_2_V = ap_sync_channel_write_edge_index_cpy4_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_30_V = ap_sync_channel_write_edge_index_cpy4_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_31_V = ap_sync_channel_write_edge_index_cpy4_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_3_V = ap_sync_channel_write_edge_index_cpy4_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_4_V = ap_sync_channel_write_edge_index_cpy4_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_5_V = ap_sync_channel_write_edge_index_cpy4_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_6_V = ap_sync_channel_write_edge_index_cpy4_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_7_V = ap_sync_channel_write_edge_index_cpy4_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_8_V = ap_sync_channel_write_edge_index_cpy4_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_uint_16_edge_index_config_2_U0_ap_done.read() & 
             clone_vec_ap_uint_16_edge_index_config_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_9_V = ap_sync_channel_write_edge_index_cpy4_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_0_V = ap_sync_channel_write_layer10_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_10_V = ap_sync_channel_write_layer10_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_11_V = ap_sync_channel_write_layer10_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_12_V = ap_sync_channel_write_layer10_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_13_V = ap_sync_channel_write_layer10_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_14_V = ap_sync_channel_write_layer10_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_15_V = ap_sync_channel_write_layer10_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_16_V = ap_sync_channel_write_layer10_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_17_V = ap_sync_channel_write_layer10_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_18_V = ap_sync_channel_write_layer10_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_19_V = ap_sync_channel_write_layer10_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_1_V = ap_sync_channel_write_layer10_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_20_V = ap_sync_channel_write_layer10_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_21_V = ap_sync_channel_write_layer10_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_22_V = ap_sync_channel_write_layer10_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_23_V = ap_sync_channel_write_layer10_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_24_V = ap_sync_channel_write_layer10_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_25_V = ap_sync_channel_write_layer10_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_26_V = ap_sync_channel_write_layer10_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_27_V = ap_sync_channel_write_layer10_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_28_V = ap_sync_channel_write_layer10_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_29_V = ap_sync_channel_write_layer10_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_2_V = ap_sync_channel_write_layer10_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_30_V = ap_sync_channel_write_layer10_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_31_V = ap_sync_channel_write_layer10_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_32_V = ap_sync_channel_write_layer10_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_33_V = ap_sync_channel_write_layer10_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_34_V = ap_sync_channel_write_layer10_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_35_V = ap_sync_channel_write_layer10_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_36_V = ap_sync_channel_write_layer10_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_37_V = ap_sync_channel_write_layer10_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_38_V = ap_sync_channel_write_layer10_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_39_V = ap_sync_channel_write_layer10_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_3_V = ap_sync_channel_write_layer10_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_40_V = ap_sync_channel_write_layer10_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_41_V = ap_sync_channel_write_layer10_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_42_V = ap_sync_channel_write_layer10_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_43_V = ap_sync_channel_write_layer10_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_44_V = ap_sync_channel_write_layer10_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_45_V = ap_sync_channel_write_layer10_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_46_V = ap_sync_channel_write_layer10_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_47_V = ap_sync_channel_write_layer10_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_4_V = ap_sync_channel_write_layer10_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_5_V = ap_sync_channel_write_layer10_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_6_V = ap_sync_channel_write_layer10_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_7_V = ap_sync_channel_write_layer10_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_8_V = ap_sync_channel_write_layer10_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_done.read() & 
             nodeblock_ap_fixed_ap_fixed_16_8_5_3_0_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_9_V = ap_sync_channel_write_layer10_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_0_V = ap_sync_channel_write_layer7_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_10_V = ap_sync_channel_write_layer7_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_11_V = ap_sync_channel_write_layer7_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_12_V = ap_sync_channel_write_layer7_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_13_V = ap_sync_channel_write_layer7_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_14_V = ap_sync_channel_write_layer7_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_15_V = ap_sync_channel_write_layer7_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_16_V = ap_sync_channel_write_layer7_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_17_V = ap_sync_channel_write_layer7_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_18_V = ap_sync_channel_write_layer7_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_19_V = ap_sync_channel_write_layer7_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_1_V = ap_sync_channel_write_layer7_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_20_V = ap_sync_channel_write_layer7_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_21_V = ap_sync_channel_write_layer7_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_22_V = ap_sync_channel_write_layer7_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_23_V = ap_sync_channel_write_layer7_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_24_V = ap_sync_channel_write_layer7_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_25_V = ap_sync_channel_write_layer7_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_26_V = ap_sync_channel_write_layer7_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_27_V = ap_sync_channel_write_layer7_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_28_V = ap_sync_channel_write_layer7_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_29_V = ap_sync_channel_write_layer7_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_2_V = ap_sync_channel_write_layer7_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_30_V = ap_sync_channel_write_layer7_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_31_V = ap_sync_channel_write_layer7_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_32_V = ap_sync_channel_write_layer7_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_33_V = ap_sync_channel_write_layer7_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_34_V = ap_sync_channel_write_layer7_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_35_V = ap_sync_channel_write_layer7_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_36_V = ap_sync_channel_write_layer7_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_37_V = ap_sync_channel_write_layer7_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_38_V = ap_sync_channel_write_layer7_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_39_V = ap_sync_channel_write_layer7_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_3_V = ap_sync_channel_write_layer7_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_40_V = ap_sync_channel_write_layer7_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_41_V = ap_sync_channel_write_layer7_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_42_V = ap_sync_channel_write_layer7_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_43_V = ap_sync_channel_write_layer7_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_44_V = ap_sync_channel_write_layer7_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_45_V = ap_sync_channel_write_layer7_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_46_V = ap_sync_channel_write_layer7_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_47_V = ap_sync_channel_write_layer7_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_48_V = ap_sync_channel_write_layer7_out_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_49_V = ap_sync_channel_write_layer7_out_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_4_V = ap_sync_channel_write_layer7_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_50_V = ap_sync_channel_write_layer7_out_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_51_V = ap_sync_channel_write_layer7_out_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_52_V = ap_sync_channel_write_layer7_out_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_53_V = ap_sync_channel_write_layer7_out_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_54_V = ap_sync_channel_write_layer7_out_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_55_V = ap_sync_channel_write_layer7_out_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_56_V = ap_sync_channel_write_layer7_out_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_57_V = ap_sync_channel_write_layer7_out_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_58_V = ap_sync_channel_write_layer7_out_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_59_V = ap_sync_channel_write_layer7_out_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_5_V = ap_sync_channel_write_layer7_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_60_V = ap_sync_channel_write_layer7_out_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_61_V = ap_sync_channel_write_layer7_out_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_62_V = ap_sync_channel_write_layer7_out_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_63_V = ap_sync_channel_write_layer7_out_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_6_V = ap_sync_channel_write_layer7_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_7_V = ap_sync_channel_write_layer7_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_8_V = ap_sync_channel_write_layer7_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_done.read() & 
             edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_9_V = ap_sync_channel_write_layer7_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_0_V = ap_sync_channel_write_layer7_out_cpy1_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_10_V = ap_sync_channel_write_layer7_out_cpy1_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_11_V = ap_sync_channel_write_layer7_out_cpy1_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_12_V = ap_sync_channel_write_layer7_out_cpy1_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_13_V = ap_sync_channel_write_layer7_out_cpy1_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_14_V = ap_sync_channel_write_layer7_out_cpy1_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_15_V = ap_sync_channel_write_layer7_out_cpy1_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_16_V = ap_sync_channel_write_layer7_out_cpy1_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_17_V = ap_sync_channel_write_layer7_out_cpy1_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_18_V = ap_sync_channel_write_layer7_out_cpy1_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_19_V = ap_sync_channel_write_layer7_out_cpy1_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_1_V = ap_sync_channel_write_layer7_out_cpy1_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_20_V = ap_sync_channel_write_layer7_out_cpy1_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_21_V = ap_sync_channel_write_layer7_out_cpy1_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_22_V = ap_sync_channel_write_layer7_out_cpy1_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_23_V = ap_sync_channel_write_layer7_out_cpy1_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_24_V = ap_sync_channel_write_layer7_out_cpy1_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_25_V = ap_sync_channel_write_layer7_out_cpy1_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_26_V = ap_sync_channel_write_layer7_out_cpy1_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_27_V = ap_sync_channel_write_layer7_out_cpy1_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_28_V = ap_sync_channel_write_layer7_out_cpy1_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_29_V = ap_sync_channel_write_layer7_out_cpy1_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_2_V = ap_sync_channel_write_layer7_out_cpy1_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_30_V = ap_sync_channel_write_layer7_out_cpy1_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_31_V = ap_sync_channel_write_layer7_out_cpy1_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_32_V = ap_sync_channel_write_layer7_out_cpy1_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_33_V = ap_sync_channel_write_layer7_out_cpy1_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_34_V = ap_sync_channel_write_layer7_out_cpy1_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_35_V = ap_sync_channel_write_layer7_out_cpy1_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_36_V = ap_sync_channel_write_layer7_out_cpy1_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_37_V = ap_sync_channel_write_layer7_out_cpy1_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_38_V = ap_sync_channel_write_layer7_out_cpy1_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_39_V = ap_sync_channel_write_layer7_out_cpy1_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_3_V = ap_sync_channel_write_layer7_out_cpy1_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_40_V = ap_sync_channel_write_layer7_out_cpy1_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_41_V = ap_sync_channel_write_layer7_out_cpy1_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_42_V = ap_sync_channel_write_layer7_out_cpy1_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_43_V = ap_sync_channel_write_layer7_out_cpy1_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_44_V = ap_sync_channel_write_layer7_out_cpy1_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_45_V = ap_sync_channel_write_layer7_out_cpy1_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_46_V = ap_sync_channel_write_layer7_out_cpy1_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_47_V = ap_sync_channel_write_layer7_out_cpy1_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_48_V = ap_sync_channel_write_layer7_out_cpy1_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_49_V = ap_sync_channel_write_layer7_out_cpy1_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_4_V = ap_sync_channel_write_layer7_out_cpy1_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_50_V = ap_sync_channel_write_layer7_out_cpy1_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_51_V = ap_sync_channel_write_layer7_out_cpy1_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_52_V = ap_sync_channel_write_layer7_out_cpy1_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_53_V = ap_sync_channel_write_layer7_out_cpy1_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_54_V = ap_sync_channel_write_layer7_out_cpy1_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_55_V = ap_sync_channel_write_layer7_out_cpy1_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_56_V = ap_sync_channel_write_layer7_out_cpy1_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_57_V = ap_sync_channel_write_layer7_out_cpy1_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_58_V = ap_sync_channel_write_layer7_out_cpy1_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_59_V = ap_sync_channel_write_layer7_out_cpy1_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_5_V = ap_sync_channel_write_layer7_out_cpy1_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_60_V = ap_sync_channel_write_layer7_out_cpy1_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_61_V = ap_sync_channel_write_layer7_out_cpy1_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_62_V = ap_sync_channel_write_layer7_out_cpy1_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_63_V = ap_sync_channel_write_layer7_out_cpy1_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_6_V = ap_sync_channel_write_layer7_out_cpy1_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_7_V = ap_sync_channel_write_layer7_out_cpy1_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_8_V = ap_sync_channel_write_layer7_out_cpy1_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_9_V = ap_sync_channel_write_layer7_out_cpy1_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_0_V = ap_sync_channel_write_layer7_out_cpy2_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_10_V = ap_sync_channel_write_layer7_out_cpy2_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_11_V = ap_sync_channel_write_layer7_out_cpy2_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_12_V = ap_sync_channel_write_layer7_out_cpy2_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_13_V = ap_sync_channel_write_layer7_out_cpy2_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_14_V = ap_sync_channel_write_layer7_out_cpy2_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_15_V = ap_sync_channel_write_layer7_out_cpy2_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_16_V = ap_sync_channel_write_layer7_out_cpy2_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_17_V = ap_sync_channel_write_layer7_out_cpy2_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_18_V = ap_sync_channel_write_layer7_out_cpy2_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_19_V = ap_sync_channel_write_layer7_out_cpy2_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_1_V = ap_sync_channel_write_layer7_out_cpy2_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_20_V = ap_sync_channel_write_layer7_out_cpy2_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_21_V = ap_sync_channel_write_layer7_out_cpy2_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_22_V = ap_sync_channel_write_layer7_out_cpy2_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_23_V = ap_sync_channel_write_layer7_out_cpy2_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_24_V = ap_sync_channel_write_layer7_out_cpy2_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_25_V = ap_sync_channel_write_layer7_out_cpy2_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_26_V = ap_sync_channel_write_layer7_out_cpy2_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_27_V = ap_sync_channel_write_layer7_out_cpy2_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_28_V = ap_sync_channel_write_layer7_out_cpy2_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_29_V = ap_sync_channel_write_layer7_out_cpy2_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_2_V = ap_sync_channel_write_layer7_out_cpy2_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_30_V = ap_sync_channel_write_layer7_out_cpy2_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_31_V = ap_sync_channel_write_layer7_out_cpy2_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_32_V = ap_sync_channel_write_layer7_out_cpy2_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_33_V = ap_sync_channel_write_layer7_out_cpy2_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_34_V = ap_sync_channel_write_layer7_out_cpy2_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_35_V = ap_sync_channel_write_layer7_out_cpy2_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_36_V = ap_sync_channel_write_layer7_out_cpy2_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_37_V = ap_sync_channel_write_layer7_out_cpy2_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_38_V = ap_sync_channel_write_layer7_out_cpy2_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_39_V = ap_sync_channel_write_layer7_out_cpy2_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_3_V = ap_sync_channel_write_layer7_out_cpy2_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_40_V = ap_sync_channel_write_layer7_out_cpy2_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_41_V = ap_sync_channel_write_layer7_out_cpy2_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_42_V = ap_sync_channel_write_layer7_out_cpy2_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_43_V = ap_sync_channel_write_layer7_out_cpy2_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_44_V = ap_sync_channel_write_layer7_out_cpy2_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_45_V = ap_sync_channel_write_layer7_out_cpy2_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_46_V = ap_sync_channel_write_layer7_out_cpy2_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_47_V = ap_sync_channel_write_layer7_out_cpy2_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_48_V = ap_sync_channel_write_layer7_out_cpy2_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_49_V = ap_sync_channel_write_layer7_out_cpy2_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_4_V = ap_sync_channel_write_layer7_out_cpy2_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_50_V = ap_sync_channel_write_layer7_out_cpy2_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_51_V = ap_sync_channel_write_layer7_out_cpy2_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_52_V = ap_sync_channel_write_layer7_out_cpy2_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_53_V = ap_sync_channel_write_layer7_out_cpy2_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_54_V = ap_sync_channel_write_layer7_out_cpy2_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_55_V = ap_sync_channel_write_layer7_out_cpy2_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_56_V = ap_sync_channel_write_layer7_out_cpy2_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_57_V = ap_sync_channel_write_layer7_out_cpy2_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_58_V = ap_sync_channel_write_layer7_out_cpy2_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_59_V = ap_sync_channel_write_layer7_out_cpy2_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_5_V = ap_sync_channel_write_layer7_out_cpy2_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_60_V = ap_sync_channel_write_layer7_out_cpy2_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_61_V = ap_sync_channel_write_layer7_out_cpy2_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_62_V = ap_sync_channel_write_layer7_out_cpy2_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_63_V = ap_sync_channel_write_layer7_out_cpy2_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_6_V = ap_sync_channel_write_layer7_out_cpy2_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_7_V = ap_sync_channel_write_layer7_out_cpy2_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_8_V = ap_sync_channel_write_layer7_out_cpy2_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_layer7_out_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_9_V = ap_sync_channel_write_layer7_out_cpy2_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_0_V = ap_sync_channel_write_layer9_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_10_V = ap_sync_channel_write_layer9_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_11_V = ap_sync_channel_write_layer9_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_12_V = ap_sync_channel_write_layer9_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_13_V = ap_sync_channel_write_layer9_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_14_V = ap_sync_channel_write_layer9_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_15_V = ap_sync_channel_write_layer9_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_16_V = ap_sync_channel_write_layer9_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_17_V = ap_sync_channel_write_layer9_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_18_V = ap_sync_channel_write_layer9_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_19_V = ap_sync_channel_write_layer9_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_1_V = ap_sync_channel_write_layer9_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_20_V = ap_sync_channel_write_layer9_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_21_V = ap_sync_channel_write_layer9_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_22_V = ap_sync_channel_write_layer9_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_23_V = ap_sync_channel_write_layer9_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_24_V = ap_sync_channel_write_layer9_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_25_V = ap_sync_channel_write_layer9_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_26_V = ap_sync_channel_write_layer9_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_27_V = ap_sync_channel_write_layer9_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_28_V = ap_sync_channel_write_layer9_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_29_V = ap_sync_channel_write_layer9_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_2_V = ap_sync_channel_write_layer9_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_30_V = ap_sync_channel_write_layer9_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_31_V = ap_sync_channel_write_layer9_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_32_V = ap_sync_channel_write_layer9_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_33_V = ap_sync_channel_write_layer9_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_34_V = ap_sync_channel_write_layer9_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_35_V = ap_sync_channel_write_layer9_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_36_V = ap_sync_channel_write_layer9_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_37_V = ap_sync_channel_write_layer9_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_38_V = ap_sync_channel_write_layer9_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_39_V = ap_sync_channel_write_layer9_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_3_V = ap_sync_channel_write_layer9_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_40_V = ap_sync_channel_write_layer9_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_41_V = ap_sync_channel_write_layer9_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_42_V = ap_sync_channel_write_layer9_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_43_V = ap_sync_channel_write_layer9_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_44_V = ap_sync_channel_write_layer9_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_45_V = ap_sync_channel_write_layer9_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_46_V = ap_sync_channel_write_layer9_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_47_V = ap_sync_channel_write_layer9_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_48_V = ap_sync_channel_write_layer9_out_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_49_V = ap_sync_channel_write_layer9_out_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_4_V = ap_sync_channel_write_layer9_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_50_V = ap_sync_channel_write_layer9_out_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_51_V = ap_sync_channel_write_layer9_out_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_52_V = ap_sync_channel_write_layer9_out_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_53_V = ap_sync_channel_write_layer9_out_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_54_V = ap_sync_channel_write_layer9_out_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_55_V = ap_sync_channel_write_layer9_out_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_56_V = ap_sync_channel_write_layer9_out_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_57_V = ap_sync_channel_write_layer9_out_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_58_V = ap_sync_channel_write_layer9_out_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_59_V = ap_sync_channel_write_layer9_out_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_5_V = ap_sync_channel_write_layer9_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_60_V = ap_sync_channel_write_layer9_out_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_61_V = ap_sync_channel_write_layer9_out_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_62_V = ap_sync_channel_write_layer9_out_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_63_V = ap_sync_channel_write_layer9_out_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_6_V = ap_sync_channel_write_layer9_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_7_V = ap_sync_channel_write_layer9_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_8_V = ap_sync_channel_write_layer9_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (edge_aggregate_U0_ap_done.read() & 
             edge_aggregate_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_9_V = ap_sync_channel_write_layer9_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_0_V = ap_sync_channel_write_node_attr_cpy1_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_10_V = ap_sync_channel_write_node_attr_cpy1_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_11_V = ap_sync_channel_write_node_attr_cpy1_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_12_V = ap_sync_channel_write_node_attr_cpy1_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_13_V = ap_sync_channel_write_node_attr_cpy1_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_14_V = ap_sync_channel_write_node_attr_cpy1_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_15_V = ap_sync_channel_write_node_attr_cpy1_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_16_V = ap_sync_channel_write_node_attr_cpy1_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_17_V = ap_sync_channel_write_node_attr_cpy1_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_18_V = ap_sync_channel_write_node_attr_cpy1_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_19_V = ap_sync_channel_write_node_attr_cpy1_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_1_V = ap_sync_channel_write_node_attr_cpy1_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_20_V = ap_sync_channel_write_node_attr_cpy1_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_21_V = ap_sync_channel_write_node_attr_cpy1_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_22_V = ap_sync_channel_write_node_attr_cpy1_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_23_V = ap_sync_channel_write_node_attr_cpy1_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_24_V = ap_sync_channel_write_node_attr_cpy1_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_25_V = ap_sync_channel_write_node_attr_cpy1_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_26_V = ap_sync_channel_write_node_attr_cpy1_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_27_V = ap_sync_channel_write_node_attr_cpy1_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_28_V = ap_sync_channel_write_node_attr_cpy1_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_29_V = ap_sync_channel_write_node_attr_cpy1_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_2_V = ap_sync_channel_write_node_attr_cpy1_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_30_V = ap_sync_channel_write_node_attr_cpy1_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_31_V = ap_sync_channel_write_node_attr_cpy1_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_32_V = ap_sync_channel_write_node_attr_cpy1_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_33_V = ap_sync_channel_write_node_attr_cpy1_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_34_V = ap_sync_channel_write_node_attr_cpy1_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_35_V = ap_sync_channel_write_node_attr_cpy1_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_36_V = ap_sync_channel_write_node_attr_cpy1_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_37_V = ap_sync_channel_write_node_attr_cpy1_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_38_V = ap_sync_channel_write_node_attr_cpy1_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_39_V = ap_sync_channel_write_node_attr_cpy1_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_3_V = ap_sync_channel_write_node_attr_cpy1_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_40_V = ap_sync_channel_write_node_attr_cpy1_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_41_V = ap_sync_channel_write_node_attr_cpy1_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_42_V = ap_sync_channel_write_node_attr_cpy1_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_43_V = ap_sync_channel_write_node_attr_cpy1_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_44_V = ap_sync_channel_write_node_attr_cpy1_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_45_V = ap_sync_channel_write_node_attr_cpy1_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_46_V = ap_sync_channel_write_node_attr_cpy1_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_47_V = ap_sync_channel_write_node_attr_cpy1_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_4_V = ap_sync_channel_write_node_attr_cpy1_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_5_V = ap_sync_channel_write_node_attr_cpy1_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_6_V = ap_sync_channel_write_node_attr_cpy1_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_7_V = ap_sync_channel_write_node_attr_cpy1_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_8_V = ap_sync_channel_write_node_attr_cpy1_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_9_V = ap_sync_channel_write_node_attr_cpy1_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_0_V = ap_sync_channel_write_node_attr_cpy2_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_10_V = ap_sync_channel_write_node_attr_cpy2_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_11_V = ap_sync_channel_write_node_attr_cpy2_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_12_V = ap_sync_channel_write_node_attr_cpy2_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_13_V = ap_sync_channel_write_node_attr_cpy2_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_14_V = ap_sync_channel_write_node_attr_cpy2_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_15_V = ap_sync_channel_write_node_attr_cpy2_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_16_V = ap_sync_channel_write_node_attr_cpy2_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_17_V = ap_sync_channel_write_node_attr_cpy2_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_18_V = ap_sync_channel_write_node_attr_cpy2_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_19_V = ap_sync_channel_write_node_attr_cpy2_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_1_V = ap_sync_channel_write_node_attr_cpy2_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_20_V = ap_sync_channel_write_node_attr_cpy2_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_21_V = ap_sync_channel_write_node_attr_cpy2_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_22_V = ap_sync_channel_write_node_attr_cpy2_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_23_V = ap_sync_channel_write_node_attr_cpy2_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_24_V = ap_sync_channel_write_node_attr_cpy2_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_25_V = ap_sync_channel_write_node_attr_cpy2_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_26_V = ap_sync_channel_write_node_attr_cpy2_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_27_V = ap_sync_channel_write_node_attr_cpy2_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_28_V = ap_sync_channel_write_node_attr_cpy2_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_29_V = ap_sync_channel_write_node_attr_cpy2_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_2_V = ap_sync_channel_write_node_attr_cpy2_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_30_V = ap_sync_channel_write_node_attr_cpy2_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_31_V = ap_sync_channel_write_node_attr_cpy2_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_32_V = ap_sync_channel_write_node_attr_cpy2_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_33_V = ap_sync_channel_write_node_attr_cpy2_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_34_V = ap_sync_channel_write_node_attr_cpy2_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_35_V = ap_sync_channel_write_node_attr_cpy2_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_36_V = ap_sync_channel_write_node_attr_cpy2_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_37_V = ap_sync_channel_write_node_attr_cpy2_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_38_V = ap_sync_channel_write_node_attr_cpy2_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_39_V = ap_sync_channel_write_node_attr_cpy2_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_3_V = ap_sync_channel_write_node_attr_cpy2_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_40_V = ap_sync_channel_write_node_attr_cpy2_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_41_V = ap_sync_channel_write_node_attr_cpy2_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_42_V = ap_sync_channel_write_node_attr_cpy2_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_43_V = ap_sync_channel_write_node_attr_cpy2_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_44_V = ap_sync_channel_write_node_attr_cpy2_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_45_V = ap_sync_channel_write_node_attr_cpy2_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_46_V = ap_sync_channel_write_node_attr_cpy2_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_47_V = ap_sync_channel_write_node_attr_cpy2_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_4_V = ap_sync_channel_write_node_attr_cpy2_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_5_V = ap_sync_channel_write_node_attr_cpy2_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_6_V = ap_sync_channel_write_node_attr_cpy2_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_7_V = ap_sync_channel_write_node_attr_cpy2_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_8_V = ap_sync_channel_write_node_attr_cpy2_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_done.read() & 
             clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_9_V = ap_sync_channel_write_node_attr_cpy2_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready = ap_sync_clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready = ap_sync_clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready = ap_sync_edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready.read()))) {
        clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready_count = (!clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready.read()))) {
        clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready_count = (!clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(clone_vec_ap_fixed_16_8_5_3_0_node_attr_config_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready.read()))) {
        clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready_count = (!clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready.read()))) {
        clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready_count = (!clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(clone_vec_ap_uint_16_edge_index_config_1_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready.read()))) {
        edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready_count = (!edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready.read()))) {
        edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready_count = (!edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(edgeblock_ap_fixed_ap_uint_ap_fixed_config7_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
}

}

