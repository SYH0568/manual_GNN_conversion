// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "node_attr_0_V"
#define AUTOTB_TVIN_node_attr_0_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_0_V.dat"
// wrapc file define: "node_attr_1_V"
#define AUTOTB_TVIN_node_attr_1_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_1_V.dat"
// wrapc file define: "node_attr_2_V"
#define AUTOTB_TVIN_node_attr_2_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_2_V.dat"
// wrapc file define: "node_attr_3_V"
#define AUTOTB_TVIN_node_attr_3_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_3_V.dat"
// wrapc file define: "node_attr_4_V"
#define AUTOTB_TVIN_node_attr_4_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_4_V.dat"
// wrapc file define: "node_attr_5_V"
#define AUTOTB_TVIN_node_attr_5_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_5_V.dat"
// wrapc file define: "node_attr_6_V"
#define AUTOTB_TVIN_node_attr_6_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_6_V.dat"
// wrapc file define: "node_attr_7_V"
#define AUTOTB_TVIN_node_attr_7_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_7_V.dat"
// wrapc file define: "node_attr_8_V"
#define AUTOTB_TVIN_node_attr_8_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_8_V.dat"
// wrapc file define: "node_attr_9_V"
#define AUTOTB_TVIN_node_attr_9_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_9_V.dat"
// wrapc file define: "node_attr_10_V"
#define AUTOTB_TVIN_node_attr_10_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_10_V.dat"
// wrapc file define: "node_attr_11_V"
#define AUTOTB_TVIN_node_attr_11_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_11_V.dat"
// wrapc file define: "node_attr_12_V"
#define AUTOTB_TVIN_node_attr_12_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_12_V.dat"
// wrapc file define: "node_attr_13_V"
#define AUTOTB_TVIN_node_attr_13_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_13_V.dat"
// wrapc file define: "node_attr_14_V"
#define AUTOTB_TVIN_node_attr_14_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_14_V.dat"
// wrapc file define: "node_attr_15_V"
#define AUTOTB_TVIN_node_attr_15_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_15_V.dat"
// wrapc file define: "node_attr_16_V"
#define AUTOTB_TVIN_node_attr_16_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_16_V.dat"
// wrapc file define: "node_attr_17_V"
#define AUTOTB_TVIN_node_attr_17_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_17_V.dat"
// wrapc file define: "node_attr_18_V"
#define AUTOTB_TVIN_node_attr_18_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_18_V.dat"
// wrapc file define: "node_attr_19_V"
#define AUTOTB_TVIN_node_attr_19_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_19_V.dat"
// wrapc file define: "node_attr_20_V"
#define AUTOTB_TVIN_node_attr_20_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_20_V.dat"
// wrapc file define: "node_attr_21_V"
#define AUTOTB_TVIN_node_attr_21_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_21_V.dat"
// wrapc file define: "node_attr_22_V"
#define AUTOTB_TVIN_node_attr_22_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_22_V.dat"
// wrapc file define: "node_attr_23_V"
#define AUTOTB_TVIN_node_attr_23_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_23_V.dat"
// wrapc file define: "node_attr_24_V"
#define AUTOTB_TVIN_node_attr_24_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_24_V.dat"
// wrapc file define: "node_attr_25_V"
#define AUTOTB_TVIN_node_attr_25_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_25_V.dat"
// wrapc file define: "node_attr_26_V"
#define AUTOTB_TVIN_node_attr_26_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_26_V.dat"
// wrapc file define: "node_attr_27_V"
#define AUTOTB_TVIN_node_attr_27_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_27_V.dat"
// wrapc file define: "node_attr_28_V"
#define AUTOTB_TVIN_node_attr_28_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_28_V.dat"
// wrapc file define: "node_attr_29_V"
#define AUTOTB_TVIN_node_attr_29_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_29_V.dat"
// wrapc file define: "node_attr_30_V"
#define AUTOTB_TVIN_node_attr_30_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_30_V.dat"
// wrapc file define: "node_attr_31_V"
#define AUTOTB_TVIN_node_attr_31_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_31_V.dat"
// wrapc file define: "node_attr_32_V"
#define AUTOTB_TVIN_node_attr_32_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_32_V.dat"
// wrapc file define: "node_attr_33_V"
#define AUTOTB_TVIN_node_attr_33_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_33_V.dat"
// wrapc file define: "node_attr_34_V"
#define AUTOTB_TVIN_node_attr_34_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_34_V.dat"
// wrapc file define: "node_attr_35_V"
#define AUTOTB_TVIN_node_attr_35_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_35_V.dat"
// wrapc file define: "node_attr_36_V"
#define AUTOTB_TVIN_node_attr_36_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_36_V.dat"
// wrapc file define: "node_attr_37_V"
#define AUTOTB_TVIN_node_attr_37_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_37_V.dat"
// wrapc file define: "node_attr_38_V"
#define AUTOTB_TVIN_node_attr_38_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_38_V.dat"
// wrapc file define: "node_attr_39_V"
#define AUTOTB_TVIN_node_attr_39_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_39_V.dat"
// wrapc file define: "node_attr_40_V"
#define AUTOTB_TVIN_node_attr_40_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_40_V.dat"
// wrapc file define: "node_attr_41_V"
#define AUTOTB_TVIN_node_attr_41_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_41_V.dat"
// wrapc file define: "node_attr_42_V"
#define AUTOTB_TVIN_node_attr_42_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_42_V.dat"
// wrapc file define: "node_attr_43_V"
#define AUTOTB_TVIN_node_attr_43_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_43_V.dat"
// wrapc file define: "node_attr_44_V"
#define AUTOTB_TVIN_node_attr_44_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_44_V.dat"
// wrapc file define: "node_attr_45_V"
#define AUTOTB_TVIN_node_attr_45_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_45_V.dat"
// wrapc file define: "node_attr_46_V"
#define AUTOTB_TVIN_node_attr_46_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_46_V.dat"
// wrapc file define: "node_attr_47_V"
#define AUTOTB_TVIN_node_attr_47_V  "../tv/cdatafile/c.myproject.autotvin_node_attr_47_V.dat"
// wrapc file define: "edge_attr_0_V"
#define AUTOTB_TVIN_edge_attr_0_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_0_V.dat"
// wrapc file define: "edge_attr_1_V"
#define AUTOTB_TVIN_edge_attr_1_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_1_V.dat"
// wrapc file define: "edge_attr_2_V"
#define AUTOTB_TVIN_edge_attr_2_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_2_V.dat"
// wrapc file define: "edge_attr_3_V"
#define AUTOTB_TVIN_edge_attr_3_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_3_V.dat"
// wrapc file define: "edge_attr_4_V"
#define AUTOTB_TVIN_edge_attr_4_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_4_V.dat"
// wrapc file define: "edge_attr_5_V"
#define AUTOTB_TVIN_edge_attr_5_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_5_V.dat"
// wrapc file define: "edge_attr_6_V"
#define AUTOTB_TVIN_edge_attr_6_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_6_V.dat"
// wrapc file define: "edge_attr_7_V"
#define AUTOTB_TVIN_edge_attr_7_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_7_V.dat"
// wrapc file define: "edge_attr_8_V"
#define AUTOTB_TVIN_edge_attr_8_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_8_V.dat"
// wrapc file define: "edge_attr_9_V"
#define AUTOTB_TVIN_edge_attr_9_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_9_V.dat"
// wrapc file define: "edge_attr_10_V"
#define AUTOTB_TVIN_edge_attr_10_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_10_V.dat"
// wrapc file define: "edge_attr_11_V"
#define AUTOTB_TVIN_edge_attr_11_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_11_V.dat"
// wrapc file define: "edge_attr_12_V"
#define AUTOTB_TVIN_edge_attr_12_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_12_V.dat"
// wrapc file define: "edge_attr_13_V"
#define AUTOTB_TVIN_edge_attr_13_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_13_V.dat"
// wrapc file define: "edge_attr_14_V"
#define AUTOTB_TVIN_edge_attr_14_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_14_V.dat"
// wrapc file define: "edge_attr_15_V"
#define AUTOTB_TVIN_edge_attr_15_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_15_V.dat"
// wrapc file define: "edge_attr_16_V"
#define AUTOTB_TVIN_edge_attr_16_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_16_V.dat"
// wrapc file define: "edge_attr_17_V"
#define AUTOTB_TVIN_edge_attr_17_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_17_V.dat"
// wrapc file define: "edge_attr_18_V"
#define AUTOTB_TVIN_edge_attr_18_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_18_V.dat"
// wrapc file define: "edge_attr_19_V"
#define AUTOTB_TVIN_edge_attr_19_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_19_V.dat"
// wrapc file define: "edge_attr_20_V"
#define AUTOTB_TVIN_edge_attr_20_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_20_V.dat"
// wrapc file define: "edge_attr_21_V"
#define AUTOTB_TVIN_edge_attr_21_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_21_V.dat"
// wrapc file define: "edge_attr_22_V"
#define AUTOTB_TVIN_edge_attr_22_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_22_V.dat"
// wrapc file define: "edge_attr_23_V"
#define AUTOTB_TVIN_edge_attr_23_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_23_V.dat"
// wrapc file define: "edge_attr_24_V"
#define AUTOTB_TVIN_edge_attr_24_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_24_V.dat"
// wrapc file define: "edge_attr_25_V"
#define AUTOTB_TVIN_edge_attr_25_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_25_V.dat"
// wrapc file define: "edge_attr_26_V"
#define AUTOTB_TVIN_edge_attr_26_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_26_V.dat"
// wrapc file define: "edge_attr_27_V"
#define AUTOTB_TVIN_edge_attr_27_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_27_V.dat"
// wrapc file define: "edge_attr_28_V"
#define AUTOTB_TVIN_edge_attr_28_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_28_V.dat"
// wrapc file define: "edge_attr_29_V"
#define AUTOTB_TVIN_edge_attr_29_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_29_V.dat"
// wrapc file define: "edge_attr_30_V"
#define AUTOTB_TVIN_edge_attr_30_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_30_V.dat"
// wrapc file define: "edge_attr_31_V"
#define AUTOTB_TVIN_edge_attr_31_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_31_V.dat"
// wrapc file define: "edge_attr_32_V"
#define AUTOTB_TVIN_edge_attr_32_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_32_V.dat"
// wrapc file define: "edge_attr_33_V"
#define AUTOTB_TVIN_edge_attr_33_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_33_V.dat"
// wrapc file define: "edge_attr_34_V"
#define AUTOTB_TVIN_edge_attr_34_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_34_V.dat"
// wrapc file define: "edge_attr_35_V"
#define AUTOTB_TVIN_edge_attr_35_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_35_V.dat"
// wrapc file define: "edge_attr_36_V"
#define AUTOTB_TVIN_edge_attr_36_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_36_V.dat"
// wrapc file define: "edge_attr_37_V"
#define AUTOTB_TVIN_edge_attr_37_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_37_V.dat"
// wrapc file define: "edge_attr_38_V"
#define AUTOTB_TVIN_edge_attr_38_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_38_V.dat"
// wrapc file define: "edge_attr_39_V"
#define AUTOTB_TVIN_edge_attr_39_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_39_V.dat"
// wrapc file define: "edge_attr_40_V"
#define AUTOTB_TVIN_edge_attr_40_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_40_V.dat"
// wrapc file define: "edge_attr_41_V"
#define AUTOTB_TVIN_edge_attr_41_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_41_V.dat"
// wrapc file define: "edge_attr_42_V"
#define AUTOTB_TVIN_edge_attr_42_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_42_V.dat"
// wrapc file define: "edge_attr_43_V"
#define AUTOTB_TVIN_edge_attr_43_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_43_V.dat"
// wrapc file define: "edge_attr_44_V"
#define AUTOTB_TVIN_edge_attr_44_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_44_V.dat"
// wrapc file define: "edge_attr_45_V"
#define AUTOTB_TVIN_edge_attr_45_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_45_V.dat"
// wrapc file define: "edge_attr_46_V"
#define AUTOTB_TVIN_edge_attr_46_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_46_V.dat"
// wrapc file define: "edge_attr_47_V"
#define AUTOTB_TVIN_edge_attr_47_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_47_V.dat"
// wrapc file define: "edge_attr_48_V"
#define AUTOTB_TVIN_edge_attr_48_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_48_V.dat"
// wrapc file define: "edge_attr_49_V"
#define AUTOTB_TVIN_edge_attr_49_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_49_V.dat"
// wrapc file define: "edge_attr_50_V"
#define AUTOTB_TVIN_edge_attr_50_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_50_V.dat"
// wrapc file define: "edge_attr_51_V"
#define AUTOTB_TVIN_edge_attr_51_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_51_V.dat"
// wrapc file define: "edge_attr_52_V"
#define AUTOTB_TVIN_edge_attr_52_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_52_V.dat"
// wrapc file define: "edge_attr_53_V"
#define AUTOTB_TVIN_edge_attr_53_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_53_V.dat"
// wrapc file define: "edge_attr_54_V"
#define AUTOTB_TVIN_edge_attr_54_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_54_V.dat"
// wrapc file define: "edge_attr_55_V"
#define AUTOTB_TVIN_edge_attr_55_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_55_V.dat"
// wrapc file define: "edge_attr_56_V"
#define AUTOTB_TVIN_edge_attr_56_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_56_V.dat"
// wrapc file define: "edge_attr_57_V"
#define AUTOTB_TVIN_edge_attr_57_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_57_V.dat"
// wrapc file define: "edge_attr_58_V"
#define AUTOTB_TVIN_edge_attr_58_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_58_V.dat"
// wrapc file define: "edge_attr_59_V"
#define AUTOTB_TVIN_edge_attr_59_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_59_V.dat"
// wrapc file define: "edge_attr_60_V"
#define AUTOTB_TVIN_edge_attr_60_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_60_V.dat"
// wrapc file define: "edge_attr_61_V"
#define AUTOTB_TVIN_edge_attr_61_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_61_V.dat"
// wrapc file define: "edge_attr_62_V"
#define AUTOTB_TVIN_edge_attr_62_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_62_V.dat"
// wrapc file define: "edge_attr_63_V"
#define AUTOTB_TVIN_edge_attr_63_V  "../tv/cdatafile/c.myproject.autotvin_edge_attr_63_V.dat"
// wrapc file define: "edge_index_0_V"
#define AUTOTB_TVIN_edge_index_0_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_0_V.dat"
// wrapc file define: "edge_index_1_V"
#define AUTOTB_TVIN_edge_index_1_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_1_V.dat"
// wrapc file define: "edge_index_2_V"
#define AUTOTB_TVIN_edge_index_2_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_2_V.dat"
// wrapc file define: "edge_index_3_V"
#define AUTOTB_TVIN_edge_index_3_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_3_V.dat"
// wrapc file define: "edge_index_4_V"
#define AUTOTB_TVIN_edge_index_4_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_4_V.dat"
// wrapc file define: "edge_index_5_V"
#define AUTOTB_TVIN_edge_index_5_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_5_V.dat"
// wrapc file define: "edge_index_6_V"
#define AUTOTB_TVIN_edge_index_6_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_6_V.dat"
// wrapc file define: "edge_index_7_V"
#define AUTOTB_TVIN_edge_index_7_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_7_V.dat"
// wrapc file define: "edge_index_8_V"
#define AUTOTB_TVIN_edge_index_8_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_8_V.dat"
// wrapc file define: "edge_index_9_V"
#define AUTOTB_TVIN_edge_index_9_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_9_V.dat"
// wrapc file define: "edge_index_10_V"
#define AUTOTB_TVIN_edge_index_10_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_10_V.dat"
// wrapc file define: "edge_index_11_V"
#define AUTOTB_TVIN_edge_index_11_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_11_V.dat"
// wrapc file define: "edge_index_12_V"
#define AUTOTB_TVIN_edge_index_12_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_12_V.dat"
// wrapc file define: "edge_index_13_V"
#define AUTOTB_TVIN_edge_index_13_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_13_V.dat"
// wrapc file define: "edge_index_14_V"
#define AUTOTB_TVIN_edge_index_14_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_14_V.dat"
// wrapc file define: "edge_index_15_V"
#define AUTOTB_TVIN_edge_index_15_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_15_V.dat"
// wrapc file define: "edge_index_16_V"
#define AUTOTB_TVIN_edge_index_16_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_16_V.dat"
// wrapc file define: "edge_index_17_V"
#define AUTOTB_TVIN_edge_index_17_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_17_V.dat"
// wrapc file define: "edge_index_18_V"
#define AUTOTB_TVIN_edge_index_18_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_18_V.dat"
// wrapc file define: "edge_index_19_V"
#define AUTOTB_TVIN_edge_index_19_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_19_V.dat"
// wrapc file define: "edge_index_20_V"
#define AUTOTB_TVIN_edge_index_20_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_20_V.dat"
// wrapc file define: "edge_index_21_V"
#define AUTOTB_TVIN_edge_index_21_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_21_V.dat"
// wrapc file define: "edge_index_22_V"
#define AUTOTB_TVIN_edge_index_22_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_22_V.dat"
// wrapc file define: "edge_index_23_V"
#define AUTOTB_TVIN_edge_index_23_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_23_V.dat"
// wrapc file define: "edge_index_24_V"
#define AUTOTB_TVIN_edge_index_24_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_24_V.dat"
// wrapc file define: "edge_index_25_V"
#define AUTOTB_TVIN_edge_index_25_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_25_V.dat"
// wrapc file define: "edge_index_26_V"
#define AUTOTB_TVIN_edge_index_26_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_26_V.dat"
// wrapc file define: "edge_index_27_V"
#define AUTOTB_TVIN_edge_index_27_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_27_V.dat"
// wrapc file define: "edge_index_28_V"
#define AUTOTB_TVIN_edge_index_28_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_28_V.dat"
// wrapc file define: "edge_index_29_V"
#define AUTOTB_TVIN_edge_index_29_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_29_V.dat"
// wrapc file define: "edge_index_30_V"
#define AUTOTB_TVIN_edge_index_30_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_30_V.dat"
// wrapc file define: "edge_index_31_V"
#define AUTOTB_TVIN_edge_index_31_V  "../tv/cdatafile/c.myproject.autotvin_edge_index_31_V.dat"
// wrapc file define: "layer11_out_0_V"
#define AUTOTB_TVOUT_layer11_out_0_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_0_V.dat"
#define AUTOTB_TVIN_layer11_out_0_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_0_V.dat"
// wrapc file define: "layer11_out_1_V"
#define AUTOTB_TVOUT_layer11_out_1_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_1_V.dat"
#define AUTOTB_TVIN_layer11_out_1_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_1_V.dat"
// wrapc file define: "layer11_out_2_V"
#define AUTOTB_TVOUT_layer11_out_2_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_2_V.dat"
#define AUTOTB_TVIN_layer11_out_2_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_2_V.dat"
// wrapc file define: "layer11_out_3_V"
#define AUTOTB_TVOUT_layer11_out_3_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_3_V.dat"
#define AUTOTB_TVIN_layer11_out_3_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_3_V.dat"
// wrapc file define: "layer11_out_4_V"
#define AUTOTB_TVOUT_layer11_out_4_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_4_V.dat"
#define AUTOTB_TVIN_layer11_out_4_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_4_V.dat"
// wrapc file define: "layer11_out_5_V"
#define AUTOTB_TVOUT_layer11_out_5_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_5_V.dat"
#define AUTOTB_TVIN_layer11_out_5_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_5_V.dat"
// wrapc file define: "layer11_out_6_V"
#define AUTOTB_TVOUT_layer11_out_6_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_6_V.dat"
#define AUTOTB_TVIN_layer11_out_6_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_6_V.dat"
// wrapc file define: "layer11_out_7_V"
#define AUTOTB_TVOUT_layer11_out_7_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_7_V.dat"
#define AUTOTB_TVIN_layer11_out_7_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_7_V.dat"
// wrapc file define: "layer11_out_8_V"
#define AUTOTB_TVOUT_layer11_out_8_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_8_V.dat"
#define AUTOTB_TVIN_layer11_out_8_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_8_V.dat"
// wrapc file define: "layer11_out_9_V"
#define AUTOTB_TVOUT_layer11_out_9_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_9_V.dat"
#define AUTOTB_TVIN_layer11_out_9_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_9_V.dat"
// wrapc file define: "layer11_out_10_V"
#define AUTOTB_TVOUT_layer11_out_10_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_10_V.dat"
#define AUTOTB_TVIN_layer11_out_10_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_10_V.dat"
// wrapc file define: "layer11_out_11_V"
#define AUTOTB_TVOUT_layer11_out_11_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_11_V.dat"
#define AUTOTB_TVIN_layer11_out_11_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_11_V.dat"
// wrapc file define: "layer11_out_12_V"
#define AUTOTB_TVOUT_layer11_out_12_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_12_V.dat"
#define AUTOTB_TVIN_layer11_out_12_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_12_V.dat"
// wrapc file define: "layer11_out_13_V"
#define AUTOTB_TVOUT_layer11_out_13_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_13_V.dat"
#define AUTOTB_TVIN_layer11_out_13_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_13_V.dat"
// wrapc file define: "layer11_out_14_V"
#define AUTOTB_TVOUT_layer11_out_14_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_14_V.dat"
#define AUTOTB_TVIN_layer11_out_14_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_14_V.dat"
// wrapc file define: "layer11_out_15_V"
#define AUTOTB_TVOUT_layer11_out_15_V  "../tv/cdatafile/c.myproject.autotvout_layer11_out_15_V.dat"
#define AUTOTB_TVIN_layer11_out_15_V  "../tv/cdatafile/c.myproject.autotvin_layer11_out_15_V.dat"
// wrapc file define: "const_size_in_1"
#define AUTOTB_TVOUT_const_size_in_1  "../tv/cdatafile/c.myproject.autotvout_const_size_in_1.dat"
// wrapc file define: "const_size_in_2"
#define AUTOTB_TVOUT_const_size_in_2  "../tv/cdatafile/c.myproject.autotvout_const_size_in_2.dat"
// wrapc file define: "const_size_in_3"
#define AUTOTB_TVOUT_const_size_in_3  "../tv/cdatafile/c.myproject.autotvout_const_size_in_3.dat"
// wrapc file define: "const_size_out_1"
#define AUTOTB_TVOUT_const_size_out_1  "../tv/cdatafile/c.myproject.autotvout_const_size_out_1.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "layer11_out_0_V"
#define AUTOTB_TVOUT_PC_layer11_out_0_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_0_V.dat"
// tvout file define: "layer11_out_1_V"
#define AUTOTB_TVOUT_PC_layer11_out_1_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_1_V.dat"
// tvout file define: "layer11_out_2_V"
#define AUTOTB_TVOUT_PC_layer11_out_2_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_2_V.dat"
// tvout file define: "layer11_out_3_V"
#define AUTOTB_TVOUT_PC_layer11_out_3_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_3_V.dat"
// tvout file define: "layer11_out_4_V"
#define AUTOTB_TVOUT_PC_layer11_out_4_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_4_V.dat"
// tvout file define: "layer11_out_5_V"
#define AUTOTB_TVOUT_PC_layer11_out_5_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_5_V.dat"
// tvout file define: "layer11_out_6_V"
#define AUTOTB_TVOUT_PC_layer11_out_6_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_6_V.dat"
// tvout file define: "layer11_out_7_V"
#define AUTOTB_TVOUT_PC_layer11_out_7_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_7_V.dat"
// tvout file define: "layer11_out_8_V"
#define AUTOTB_TVOUT_PC_layer11_out_8_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_8_V.dat"
// tvout file define: "layer11_out_9_V"
#define AUTOTB_TVOUT_PC_layer11_out_9_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_9_V.dat"
// tvout file define: "layer11_out_10_V"
#define AUTOTB_TVOUT_PC_layer11_out_10_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_10_V.dat"
// tvout file define: "layer11_out_11_V"
#define AUTOTB_TVOUT_PC_layer11_out_11_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_11_V.dat"
// tvout file define: "layer11_out_12_V"
#define AUTOTB_TVOUT_PC_layer11_out_12_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_12_V.dat"
// tvout file define: "layer11_out_13_V"
#define AUTOTB_TVOUT_PC_layer11_out_13_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_13_V.dat"
// tvout file define: "layer11_out_14_V"
#define AUTOTB_TVOUT_PC_layer11_out_14_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_14_V.dat"
// tvout file define: "layer11_out_15_V"
#define AUTOTB_TVOUT_PC_layer11_out_15_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer11_out_15_V.dat"
// tvout file define: "const_size_in_1"
#define AUTOTB_TVOUT_PC_const_size_in_1  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_in_1.dat"
// tvout file define: "const_size_in_2"
#define AUTOTB_TVOUT_PC_const_size_in_2  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_in_2.dat"
// tvout file define: "const_size_in_3"
#define AUTOTB_TVOUT_PC_const_size_in_3  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_in_3.dat"
// tvout file define: "const_size_out_1"
#define AUTOTB_TVOUT_PC_const_size_out_1  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_out_1.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			node_attr_0_V_depth = 0;
			node_attr_1_V_depth = 0;
			node_attr_2_V_depth = 0;
			node_attr_3_V_depth = 0;
			node_attr_4_V_depth = 0;
			node_attr_5_V_depth = 0;
			node_attr_6_V_depth = 0;
			node_attr_7_V_depth = 0;
			node_attr_8_V_depth = 0;
			node_attr_9_V_depth = 0;
			node_attr_10_V_depth = 0;
			node_attr_11_V_depth = 0;
			node_attr_12_V_depth = 0;
			node_attr_13_V_depth = 0;
			node_attr_14_V_depth = 0;
			node_attr_15_V_depth = 0;
			node_attr_16_V_depth = 0;
			node_attr_17_V_depth = 0;
			node_attr_18_V_depth = 0;
			node_attr_19_V_depth = 0;
			node_attr_20_V_depth = 0;
			node_attr_21_V_depth = 0;
			node_attr_22_V_depth = 0;
			node_attr_23_V_depth = 0;
			node_attr_24_V_depth = 0;
			node_attr_25_V_depth = 0;
			node_attr_26_V_depth = 0;
			node_attr_27_V_depth = 0;
			node_attr_28_V_depth = 0;
			node_attr_29_V_depth = 0;
			node_attr_30_V_depth = 0;
			node_attr_31_V_depth = 0;
			node_attr_32_V_depth = 0;
			node_attr_33_V_depth = 0;
			node_attr_34_V_depth = 0;
			node_attr_35_V_depth = 0;
			node_attr_36_V_depth = 0;
			node_attr_37_V_depth = 0;
			node_attr_38_V_depth = 0;
			node_attr_39_V_depth = 0;
			node_attr_40_V_depth = 0;
			node_attr_41_V_depth = 0;
			node_attr_42_V_depth = 0;
			node_attr_43_V_depth = 0;
			node_attr_44_V_depth = 0;
			node_attr_45_V_depth = 0;
			node_attr_46_V_depth = 0;
			node_attr_47_V_depth = 0;
			edge_attr_0_V_depth = 0;
			edge_attr_1_V_depth = 0;
			edge_attr_2_V_depth = 0;
			edge_attr_3_V_depth = 0;
			edge_attr_4_V_depth = 0;
			edge_attr_5_V_depth = 0;
			edge_attr_6_V_depth = 0;
			edge_attr_7_V_depth = 0;
			edge_attr_8_V_depth = 0;
			edge_attr_9_V_depth = 0;
			edge_attr_10_V_depth = 0;
			edge_attr_11_V_depth = 0;
			edge_attr_12_V_depth = 0;
			edge_attr_13_V_depth = 0;
			edge_attr_14_V_depth = 0;
			edge_attr_15_V_depth = 0;
			edge_attr_16_V_depth = 0;
			edge_attr_17_V_depth = 0;
			edge_attr_18_V_depth = 0;
			edge_attr_19_V_depth = 0;
			edge_attr_20_V_depth = 0;
			edge_attr_21_V_depth = 0;
			edge_attr_22_V_depth = 0;
			edge_attr_23_V_depth = 0;
			edge_attr_24_V_depth = 0;
			edge_attr_25_V_depth = 0;
			edge_attr_26_V_depth = 0;
			edge_attr_27_V_depth = 0;
			edge_attr_28_V_depth = 0;
			edge_attr_29_V_depth = 0;
			edge_attr_30_V_depth = 0;
			edge_attr_31_V_depth = 0;
			edge_attr_32_V_depth = 0;
			edge_attr_33_V_depth = 0;
			edge_attr_34_V_depth = 0;
			edge_attr_35_V_depth = 0;
			edge_attr_36_V_depth = 0;
			edge_attr_37_V_depth = 0;
			edge_attr_38_V_depth = 0;
			edge_attr_39_V_depth = 0;
			edge_attr_40_V_depth = 0;
			edge_attr_41_V_depth = 0;
			edge_attr_42_V_depth = 0;
			edge_attr_43_V_depth = 0;
			edge_attr_44_V_depth = 0;
			edge_attr_45_V_depth = 0;
			edge_attr_46_V_depth = 0;
			edge_attr_47_V_depth = 0;
			edge_attr_48_V_depth = 0;
			edge_attr_49_V_depth = 0;
			edge_attr_50_V_depth = 0;
			edge_attr_51_V_depth = 0;
			edge_attr_52_V_depth = 0;
			edge_attr_53_V_depth = 0;
			edge_attr_54_V_depth = 0;
			edge_attr_55_V_depth = 0;
			edge_attr_56_V_depth = 0;
			edge_attr_57_V_depth = 0;
			edge_attr_58_V_depth = 0;
			edge_attr_59_V_depth = 0;
			edge_attr_60_V_depth = 0;
			edge_attr_61_V_depth = 0;
			edge_attr_62_V_depth = 0;
			edge_attr_63_V_depth = 0;
			edge_index_0_V_depth = 0;
			edge_index_1_V_depth = 0;
			edge_index_2_V_depth = 0;
			edge_index_3_V_depth = 0;
			edge_index_4_V_depth = 0;
			edge_index_5_V_depth = 0;
			edge_index_6_V_depth = 0;
			edge_index_7_V_depth = 0;
			edge_index_8_V_depth = 0;
			edge_index_9_V_depth = 0;
			edge_index_10_V_depth = 0;
			edge_index_11_V_depth = 0;
			edge_index_12_V_depth = 0;
			edge_index_13_V_depth = 0;
			edge_index_14_V_depth = 0;
			edge_index_15_V_depth = 0;
			edge_index_16_V_depth = 0;
			edge_index_17_V_depth = 0;
			edge_index_18_V_depth = 0;
			edge_index_19_V_depth = 0;
			edge_index_20_V_depth = 0;
			edge_index_21_V_depth = 0;
			edge_index_22_V_depth = 0;
			edge_index_23_V_depth = 0;
			edge_index_24_V_depth = 0;
			edge_index_25_V_depth = 0;
			edge_index_26_V_depth = 0;
			edge_index_27_V_depth = 0;
			edge_index_28_V_depth = 0;
			edge_index_29_V_depth = 0;
			edge_index_30_V_depth = 0;
			edge_index_31_V_depth = 0;
			layer11_out_0_V_depth = 0;
			layer11_out_1_V_depth = 0;
			layer11_out_2_V_depth = 0;
			layer11_out_3_V_depth = 0;
			layer11_out_4_V_depth = 0;
			layer11_out_5_V_depth = 0;
			layer11_out_6_V_depth = 0;
			layer11_out_7_V_depth = 0;
			layer11_out_8_V_depth = 0;
			layer11_out_9_V_depth = 0;
			layer11_out_10_V_depth = 0;
			layer11_out_11_V_depth = 0;
			layer11_out_12_V_depth = 0;
			layer11_out_13_V_depth = 0;
			layer11_out_14_V_depth = 0;
			layer11_out_15_V_depth = 0;
			const_size_in_1_depth = 0;
			const_size_in_2_depth = 0;
			const_size_in_3_depth = 0;
			const_size_out_1_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{node_attr_0_V " << node_attr_0_V_depth << "}\n";
			total_list << "{node_attr_1_V " << node_attr_1_V_depth << "}\n";
			total_list << "{node_attr_2_V " << node_attr_2_V_depth << "}\n";
			total_list << "{node_attr_3_V " << node_attr_3_V_depth << "}\n";
			total_list << "{node_attr_4_V " << node_attr_4_V_depth << "}\n";
			total_list << "{node_attr_5_V " << node_attr_5_V_depth << "}\n";
			total_list << "{node_attr_6_V " << node_attr_6_V_depth << "}\n";
			total_list << "{node_attr_7_V " << node_attr_7_V_depth << "}\n";
			total_list << "{node_attr_8_V " << node_attr_8_V_depth << "}\n";
			total_list << "{node_attr_9_V " << node_attr_9_V_depth << "}\n";
			total_list << "{node_attr_10_V " << node_attr_10_V_depth << "}\n";
			total_list << "{node_attr_11_V " << node_attr_11_V_depth << "}\n";
			total_list << "{node_attr_12_V " << node_attr_12_V_depth << "}\n";
			total_list << "{node_attr_13_V " << node_attr_13_V_depth << "}\n";
			total_list << "{node_attr_14_V " << node_attr_14_V_depth << "}\n";
			total_list << "{node_attr_15_V " << node_attr_15_V_depth << "}\n";
			total_list << "{node_attr_16_V " << node_attr_16_V_depth << "}\n";
			total_list << "{node_attr_17_V " << node_attr_17_V_depth << "}\n";
			total_list << "{node_attr_18_V " << node_attr_18_V_depth << "}\n";
			total_list << "{node_attr_19_V " << node_attr_19_V_depth << "}\n";
			total_list << "{node_attr_20_V " << node_attr_20_V_depth << "}\n";
			total_list << "{node_attr_21_V " << node_attr_21_V_depth << "}\n";
			total_list << "{node_attr_22_V " << node_attr_22_V_depth << "}\n";
			total_list << "{node_attr_23_V " << node_attr_23_V_depth << "}\n";
			total_list << "{node_attr_24_V " << node_attr_24_V_depth << "}\n";
			total_list << "{node_attr_25_V " << node_attr_25_V_depth << "}\n";
			total_list << "{node_attr_26_V " << node_attr_26_V_depth << "}\n";
			total_list << "{node_attr_27_V " << node_attr_27_V_depth << "}\n";
			total_list << "{node_attr_28_V " << node_attr_28_V_depth << "}\n";
			total_list << "{node_attr_29_V " << node_attr_29_V_depth << "}\n";
			total_list << "{node_attr_30_V " << node_attr_30_V_depth << "}\n";
			total_list << "{node_attr_31_V " << node_attr_31_V_depth << "}\n";
			total_list << "{node_attr_32_V " << node_attr_32_V_depth << "}\n";
			total_list << "{node_attr_33_V " << node_attr_33_V_depth << "}\n";
			total_list << "{node_attr_34_V " << node_attr_34_V_depth << "}\n";
			total_list << "{node_attr_35_V " << node_attr_35_V_depth << "}\n";
			total_list << "{node_attr_36_V " << node_attr_36_V_depth << "}\n";
			total_list << "{node_attr_37_V " << node_attr_37_V_depth << "}\n";
			total_list << "{node_attr_38_V " << node_attr_38_V_depth << "}\n";
			total_list << "{node_attr_39_V " << node_attr_39_V_depth << "}\n";
			total_list << "{node_attr_40_V " << node_attr_40_V_depth << "}\n";
			total_list << "{node_attr_41_V " << node_attr_41_V_depth << "}\n";
			total_list << "{node_attr_42_V " << node_attr_42_V_depth << "}\n";
			total_list << "{node_attr_43_V " << node_attr_43_V_depth << "}\n";
			total_list << "{node_attr_44_V " << node_attr_44_V_depth << "}\n";
			total_list << "{node_attr_45_V " << node_attr_45_V_depth << "}\n";
			total_list << "{node_attr_46_V " << node_attr_46_V_depth << "}\n";
			total_list << "{node_attr_47_V " << node_attr_47_V_depth << "}\n";
			total_list << "{edge_attr_0_V " << edge_attr_0_V_depth << "}\n";
			total_list << "{edge_attr_1_V " << edge_attr_1_V_depth << "}\n";
			total_list << "{edge_attr_2_V " << edge_attr_2_V_depth << "}\n";
			total_list << "{edge_attr_3_V " << edge_attr_3_V_depth << "}\n";
			total_list << "{edge_attr_4_V " << edge_attr_4_V_depth << "}\n";
			total_list << "{edge_attr_5_V " << edge_attr_5_V_depth << "}\n";
			total_list << "{edge_attr_6_V " << edge_attr_6_V_depth << "}\n";
			total_list << "{edge_attr_7_V " << edge_attr_7_V_depth << "}\n";
			total_list << "{edge_attr_8_V " << edge_attr_8_V_depth << "}\n";
			total_list << "{edge_attr_9_V " << edge_attr_9_V_depth << "}\n";
			total_list << "{edge_attr_10_V " << edge_attr_10_V_depth << "}\n";
			total_list << "{edge_attr_11_V " << edge_attr_11_V_depth << "}\n";
			total_list << "{edge_attr_12_V " << edge_attr_12_V_depth << "}\n";
			total_list << "{edge_attr_13_V " << edge_attr_13_V_depth << "}\n";
			total_list << "{edge_attr_14_V " << edge_attr_14_V_depth << "}\n";
			total_list << "{edge_attr_15_V " << edge_attr_15_V_depth << "}\n";
			total_list << "{edge_attr_16_V " << edge_attr_16_V_depth << "}\n";
			total_list << "{edge_attr_17_V " << edge_attr_17_V_depth << "}\n";
			total_list << "{edge_attr_18_V " << edge_attr_18_V_depth << "}\n";
			total_list << "{edge_attr_19_V " << edge_attr_19_V_depth << "}\n";
			total_list << "{edge_attr_20_V " << edge_attr_20_V_depth << "}\n";
			total_list << "{edge_attr_21_V " << edge_attr_21_V_depth << "}\n";
			total_list << "{edge_attr_22_V " << edge_attr_22_V_depth << "}\n";
			total_list << "{edge_attr_23_V " << edge_attr_23_V_depth << "}\n";
			total_list << "{edge_attr_24_V " << edge_attr_24_V_depth << "}\n";
			total_list << "{edge_attr_25_V " << edge_attr_25_V_depth << "}\n";
			total_list << "{edge_attr_26_V " << edge_attr_26_V_depth << "}\n";
			total_list << "{edge_attr_27_V " << edge_attr_27_V_depth << "}\n";
			total_list << "{edge_attr_28_V " << edge_attr_28_V_depth << "}\n";
			total_list << "{edge_attr_29_V " << edge_attr_29_V_depth << "}\n";
			total_list << "{edge_attr_30_V " << edge_attr_30_V_depth << "}\n";
			total_list << "{edge_attr_31_V " << edge_attr_31_V_depth << "}\n";
			total_list << "{edge_attr_32_V " << edge_attr_32_V_depth << "}\n";
			total_list << "{edge_attr_33_V " << edge_attr_33_V_depth << "}\n";
			total_list << "{edge_attr_34_V " << edge_attr_34_V_depth << "}\n";
			total_list << "{edge_attr_35_V " << edge_attr_35_V_depth << "}\n";
			total_list << "{edge_attr_36_V " << edge_attr_36_V_depth << "}\n";
			total_list << "{edge_attr_37_V " << edge_attr_37_V_depth << "}\n";
			total_list << "{edge_attr_38_V " << edge_attr_38_V_depth << "}\n";
			total_list << "{edge_attr_39_V " << edge_attr_39_V_depth << "}\n";
			total_list << "{edge_attr_40_V " << edge_attr_40_V_depth << "}\n";
			total_list << "{edge_attr_41_V " << edge_attr_41_V_depth << "}\n";
			total_list << "{edge_attr_42_V " << edge_attr_42_V_depth << "}\n";
			total_list << "{edge_attr_43_V " << edge_attr_43_V_depth << "}\n";
			total_list << "{edge_attr_44_V " << edge_attr_44_V_depth << "}\n";
			total_list << "{edge_attr_45_V " << edge_attr_45_V_depth << "}\n";
			total_list << "{edge_attr_46_V " << edge_attr_46_V_depth << "}\n";
			total_list << "{edge_attr_47_V " << edge_attr_47_V_depth << "}\n";
			total_list << "{edge_attr_48_V " << edge_attr_48_V_depth << "}\n";
			total_list << "{edge_attr_49_V " << edge_attr_49_V_depth << "}\n";
			total_list << "{edge_attr_50_V " << edge_attr_50_V_depth << "}\n";
			total_list << "{edge_attr_51_V " << edge_attr_51_V_depth << "}\n";
			total_list << "{edge_attr_52_V " << edge_attr_52_V_depth << "}\n";
			total_list << "{edge_attr_53_V " << edge_attr_53_V_depth << "}\n";
			total_list << "{edge_attr_54_V " << edge_attr_54_V_depth << "}\n";
			total_list << "{edge_attr_55_V " << edge_attr_55_V_depth << "}\n";
			total_list << "{edge_attr_56_V " << edge_attr_56_V_depth << "}\n";
			total_list << "{edge_attr_57_V " << edge_attr_57_V_depth << "}\n";
			total_list << "{edge_attr_58_V " << edge_attr_58_V_depth << "}\n";
			total_list << "{edge_attr_59_V " << edge_attr_59_V_depth << "}\n";
			total_list << "{edge_attr_60_V " << edge_attr_60_V_depth << "}\n";
			total_list << "{edge_attr_61_V " << edge_attr_61_V_depth << "}\n";
			total_list << "{edge_attr_62_V " << edge_attr_62_V_depth << "}\n";
			total_list << "{edge_attr_63_V " << edge_attr_63_V_depth << "}\n";
			total_list << "{edge_index_0_V " << edge_index_0_V_depth << "}\n";
			total_list << "{edge_index_1_V " << edge_index_1_V_depth << "}\n";
			total_list << "{edge_index_2_V " << edge_index_2_V_depth << "}\n";
			total_list << "{edge_index_3_V " << edge_index_3_V_depth << "}\n";
			total_list << "{edge_index_4_V " << edge_index_4_V_depth << "}\n";
			total_list << "{edge_index_5_V " << edge_index_5_V_depth << "}\n";
			total_list << "{edge_index_6_V " << edge_index_6_V_depth << "}\n";
			total_list << "{edge_index_7_V " << edge_index_7_V_depth << "}\n";
			total_list << "{edge_index_8_V " << edge_index_8_V_depth << "}\n";
			total_list << "{edge_index_9_V " << edge_index_9_V_depth << "}\n";
			total_list << "{edge_index_10_V " << edge_index_10_V_depth << "}\n";
			total_list << "{edge_index_11_V " << edge_index_11_V_depth << "}\n";
			total_list << "{edge_index_12_V " << edge_index_12_V_depth << "}\n";
			total_list << "{edge_index_13_V " << edge_index_13_V_depth << "}\n";
			total_list << "{edge_index_14_V " << edge_index_14_V_depth << "}\n";
			total_list << "{edge_index_15_V " << edge_index_15_V_depth << "}\n";
			total_list << "{edge_index_16_V " << edge_index_16_V_depth << "}\n";
			total_list << "{edge_index_17_V " << edge_index_17_V_depth << "}\n";
			total_list << "{edge_index_18_V " << edge_index_18_V_depth << "}\n";
			total_list << "{edge_index_19_V " << edge_index_19_V_depth << "}\n";
			total_list << "{edge_index_20_V " << edge_index_20_V_depth << "}\n";
			total_list << "{edge_index_21_V " << edge_index_21_V_depth << "}\n";
			total_list << "{edge_index_22_V " << edge_index_22_V_depth << "}\n";
			total_list << "{edge_index_23_V " << edge_index_23_V_depth << "}\n";
			total_list << "{edge_index_24_V " << edge_index_24_V_depth << "}\n";
			total_list << "{edge_index_25_V " << edge_index_25_V_depth << "}\n";
			total_list << "{edge_index_26_V " << edge_index_26_V_depth << "}\n";
			total_list << "{edge_index_27_V " << edge_index_27_V_depth << "}\n";
			total_list << "{edge_index_28_V " << edge_index_28_V_depth << "}\n";
			total_list << "{edge_index_29_V " << edge_index_29_V_depth << "}\n";
			total_list << "{edge_index_30_V " << edge_index_30_V_depth << "}\n";
			total_list << "{edge_index_31_V " << edge_index_31_V_depth << "}\n";
			total_list << "{layer11_out_0_V " << layer11_out_0_V_depth << "}\n";
			total_list << "{layer11_out_1_V " << layer11_out_1_V_depth << "}\n";
			total_list << "{layer11_out_2_V " << layer11_out_2_V_depth << "}\n";
			total_list << "{layer11_out_3_V " << layer11_out_3_V_depth << "}\n";
			total_list << "{layer11_out_4_V " << layer11_out_4_V_depth << "}\n";
			total_list << "{layer11_out_5_V " << layer11_out_5_V_depth << "}\n";
			total_list << "{layer11_out_6_V " << layer11_out_6_V_depth << "}\n";
			total_list << "{layer11_out_7_V " << layer11_out_7_V_depth << "}\n";
			total_list << "{layer11_out_8_V " << layer11_out_8_V_depth << "}\n";
			total_list << "{layer11_out_9_V " << layer11_out_9_V_depth << "}\n";
			total_list << "{layer11_out_10_V " << layer11_out_10_V_depth << "}\n";
			total_list << "{layer11_out_11_V " << layer11_out_11_V_depth << "}\n";
			total_list << "{layer11_out_12_V " << layer11_out_12_V_depth << "}\n";
			total_list << "{layer11_out_13_V " << layer11_out_13_V_depth << "}\n";
			total_list << "{layer11_out_14_V " << layer11_out_14_V_depth << "}\n";
			total_list << "{layer11_out_15_V " << layer11_out_15_V_depth << "}\n";
			total_list << "{const_size_in_1 " << const_size_in_1_depth << "}\n";
			total_list << "{const_size_in_2 " << const_size_in_2_depth << "}\n";
			total_list << "{const_size_in_3 " << const_size_in_3_depth << "}\n";
			total_list << "{const_size_out_1 " << const_size_out_1_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int node_attr_0_V_depth;
		int node_attr_1_V_depth;
		int node_attr_2_V_depth;
		int node_attr_3_V_depth;
		int node_attr_4_V_depth;
		int node_attr_5_V_depth;
		int node_attr_6_V_depth;
		int node_attr_7_V_depth;
		int node_attr_8_V_depth;
		int node_attr_9_V_depth;
		int node_attr_10_V_depth;
		int node_attr_11_V_depth;
		int node_attr_12_V_depth;
		int node_attr_13_V_depth;
		int node_attr_14_V_depth;
		int node_attr_15_V_depth;
		int node_attr_16_V_depth;
		int node_attr_17_V_depth;
		int node_attr_18_V_depth;
		int node_attr_19_V_depth;
		int node_attr_20_V_depth;
		int node_attr_21_V_depth;
		int node_attr_22_V_depth;
		int node_attr_23_V_depth;
		int node_attr_24_V_depth;
		int node_attr_25_V_depth;
		int node_attr_26_V_depth;
		int node_attr_27_V_depth;
		int node_attr_28_V_depth;
		int node_attr_29_V_depth;
		int node_attr_30_V_depth;
		int node_attr_31_V_depth;
		int node_attr_32_V_depth;
		int node_attr_33_V_depth;
		int node_attr_34_V_depth;
		int node_attr_35_V_depth;
		int node_attr_36_V_depth;
		int node_attr_37_V_depth;
		int node_attr_38_V_depth;
		int node_attr_39_V_depth;
		int node_attr_40_V_depth;
		int node_attr_41_V_depth;
		int node_attr_42_V_depth;
		int node_attr_43_V_depth;
		int node_attr_44_V_depth;
		int node_attr_45_V_depth;
		int node_attr_46_V_depth;
		int node_attr_47_V_depth;
		int edge_attr_0_V_depth;
		int edge_attr_1_V_depth;
		int edge_attr_2_V_depth;
		int edge_attr_3_V_depth;
		int edge_attr_4_V_depth;
		int edge_attr_5_V_depth;
		int edge_attr_6_V_depth;
		int edge_attr_7_V_depth;
		int edge_attr_8_V_depth;
		int edge_attr_9_V_depth;
		int edge_attr_10_V_depth;
		int edge_attr_11_V_depth;
		int edge_attr_12_V_depth;
		int edge_attr_13_V_depth;
		int edge_attr_14_V_depth;
		int edge_attr_15_V_depth;
		int edge_attr_16_V_depth;
		int edge_attr_17_V_depth;
		int edge_attr_18_V_depth;
		int edge_attr_19_V_depth;
		int edge_attr_20_V_depth;
		int edge_attr_21_V_depth;
		int edge_attr_22_V_depth;
		int edge_attr_23_V_depth;
		int edge_attr_24_V_depth;
		int edge_attr_25_V_depth;
		int edge_attr_26_V_depth;
		int edge_attr_27_V_depth;
		int edge_attr_28_V_depth;
		int edge_attr_29_V_depth;
		int edge_attr_30_V_depth;
		int edge_attr_31_V_depth;
		int edge_attr_32_V_depth;
		int edge_attr_33_V_depth;
		int edge_attr_34_V_depth;
		int edge_attr_35_V_depth;
		int edge_attr_36_V_depth;
		int edge_attr_37_V_depth;
		int edge_attr_38_V_depth;
		int edge_attr_39_V_depth;
		int edge_attr_40_V_depth;
		int edge_attr_41_V_depth;
		int edge_attr_42_V_depth;
		int edge_attr_43_V_depth;
		int edge_attr_44_V_depth;
		int edge_attr_45_V_depth;
		int edge_attr_46_V_depth;
		int edge_attr_47_V_depth;
		int edge_attr_48_V_depth;
		int edge_attr_49_V_depth;
		int edge_attr_50_V_depth;
		int edge_attr_51_V_depth;
		int edge_attr_52_V_depth;
		int edge_attr_53_V_depth;
		int edge_attr_54_V_depth;
		int edge_attr_55_V_depth;
		int edge_attr_56_V_depth;
		int edge_attr_57_V_depth;
		int edge_attr_58_V_depth;
		int edge_attr_59_V_depth;
		int edge_attr_60_V_depth;
		int edge_attr_61_V_depth;
		int edge_attr_62_V_depth;
		int edge_attr_63_V_depth;
		int edge_index_0_V_depth;
		int edge_index_1_V_depth;
		int edge_index_2_V_depth;
		int edge_index_3_V_depth;
		int edge_index_4_V_depth;
		int edge_index_5_V_depth;
		int edge_index_6_V_depth;
		int edge_index_7_V_depth;
		int edge_index_8_V_depth;
		int edge_index_9_V_depth;
		int edge_index_10_V_depth;
		int edge_index_11_V_depth;
		int edge_index_12_V_depth;
		int edge_index_13_V_depth;
		int edge_index_14_V_depth;
		int edge_index_15_V_depth;
		int edge_index_16_V_depth;
		int edge_index_17_V_depth;
		int edge_index_18_V_depth;
		int edge_index_19_V_depth;
		int edge_index_20_V_depth;
		int edge_index_21_V_depth;
		int edge_index_22_V_depth;
		int edge_index_23_V_depth;
		int edge_index_24_V_depth;
		int edge_index_25_V_depth;
		int edge_index_26_V_depth;
		int edge_index_27_V_depth;
		int edge_index_28_V_depth;
		int edge_index_29_V_depth;
		int edge_index_30_V_depth;
		int edge_index_31_V_depth;
		int layer11_out_0_V_depth;
		int layer11_out_1_V_depth;
		int layer11_out_2_V_depth;
		int layer11_out_3_V_depth;
		int layer11_out_4_V_depth;
		int layer11_out_5_V_depth;
		int layer11_out_6_V_depth;
		int layer11_out_7_V_depth;
		int layer11_out_8_V_depth;
		int layer11_out_9_V_depth;
		int layer11_out_10_V_depth;
		int layer11_out_11_V_depth;
		int layer11_out_12_V_depth;
		int layer11_out_13_V_depth;
		int layer11_out_14_V_depth;
		int layer11_out_15_V_depth;
		int const_size_in_1_depth;
		int const_size_in_2_depth;
		int const_size_in_3_depth;
		int const_size_out_1_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void myproject (
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> node_attr[336],
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> edge_attr[816],
ap_uint<16> edge_index[408],
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> layer11_out[204],
unsigned short (&const_size_in_1),
unsigned short (&const_size_in_2),
unsigned short (&const_size_in_3),
unsigned short (&const_size_out_1));

void AESL_WRAP_myproject (
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> node_attr[336],
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> edge_attr[816],
ap_uint<16> edge_index[408],
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> layer11_out[204],
unsigned short (&const_size_in_1),
unsigned short (&const_size_in_2),
unsigned short (&const_size_in_3),
unsigned short (&const_size_out_1))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "layer11_out_0_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_0_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_0_V, AESL_token); // data

			sc_bv<16> *layer11_out_0_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_0_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_0_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_0_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_0_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_0_192_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (0) => (192) @ (16)
							for (int i_0 = 0; i_0 <= 192; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_0_192_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_0_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (0) => (192) @ (16)
							for (int i_0 = 0; i_0 <= 192; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_0_192_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_0_192_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_0_V_pc_buffer;
		}

		// output port post check: "layer11_out_1_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_1_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_1_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_1_V, AESL_token); // data

			sc_bv<16> *layer11_out_1_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_1_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_1_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_1_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_1_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_1_193_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (1) => (193) @ (16)
							for (int i_0 = 1; i_0 <= 193; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_1_193_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_1_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (1) => (193) @ (16)
							for (int i_0 = 1; i_0 <= 193; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_1_193_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_1_193_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_1_V_pc_buffer;
		}

		// output port post check: "layer11_out_2_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_2_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_2_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_2_V, AESL_token); // data

			sc_bv<16> *layer11_out_2_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_2_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_2_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_2_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_2_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_2_194_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (2) => (194) @ (16)
							for (int i_0 = 2; i_0 <= 194; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_2_194_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_2_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (2) => (194) @ (16)
							for (int i_0 = 2; i_0 <= 194; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_2_194_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_2_194_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_2_V_pc_buffer;
		}

		// output port post check: "layer11_out_3_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_3_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_3_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_3_V, AESL_token); // data

			sc_bv<16> *layer11_out_3_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_3_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_3_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_3_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_3_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_3_195_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (3) => (195) @ (16)
							for (int i_0 = 3; i_0 <= 195; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_3_195_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_3_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (3) => (195) @ (16)
							for (int i_0 = 3; i_0 <= 195; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_3_195_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_3_195_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_3_V_pc_buffer;
		}

		// output port post check: "layer11_out_4_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_4_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_4_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_4_V, AESL_token); // data

			sc_bv<16> *layer11_out_4_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_4_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_4_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_4_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_4_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_4_196_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (4) => (196) @ (16)
							for (int i_0 = 4; i_0 <= 196; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_4_196_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_4_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (4) => (196) @ (16)
							for (int i_0 = 4; i_0 <= 196; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_4_196_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_4_196_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_4_V_pc_buffer;
		}

		// output port post check: "layer11_out_5_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_5_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_5_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_5_V, AESL_token); // data

			sc_bv<16> *layer11_out_5_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_5_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_5_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_5_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_5_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_5_197_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (5) => (197) @ (16)
							for (int i_0 = 5; i_0 <= 197; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_5_197_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_5_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (5) => (197) @ (16)
							for (int i_0 = 5; i_0 <= 197; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_5_197_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_5_197_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_5_V_pc_buffer;
		}

		// output port post check: "layer11_out_6_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_6_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_6_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_6_V, AESL_token); // data

			sc_bv<16> *layer11_out_6_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_6_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_6_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_6_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_6_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_6_198_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (6) => (198) @ (16)
							for (int i_0 = 6; i_0 <= 198; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_6_198_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_6_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (6) => (198) @ (16)
							for (int i_0 = 6; i_0 <= 198; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_6_198_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_6_198_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_6_V_pc_buffer;
		}

		// output port post check: "layer11_out_7_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_7_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_7_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_7_V, AESL_token); // data

			sc_bv<16> *layer11_out_7_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_7_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_7_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_7_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_7_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_7_199_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (7) => (199) @ (16)
							for (int i_0 = 7; i_0 <= 199; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_7_199_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_7_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (7) => (199) @ (16)
							for (int i_0 = 7; i_0 <= 199; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_7_199_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_7_199_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_7_V_pc_buffer;
		}

		// output port post check: "layer11_out_8_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_8_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_8_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_8_V, AESL_token); // data

			sc_bv<16> *layer11_out_8_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_8_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_8_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_8_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_8_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_8_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_8_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_8_200_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (8) => (200) @ (16)
							for (int i_0 = 8; i_0 <= 200; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_8_200_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_8_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (8) => (200) @ (16)
							for (int i_0 = 8; i_0 <= 200; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_8_200_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_8_200_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_8_V_pc_buffer;
		}

		// output port post check: "layer11_out_9_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_9_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_9_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_9_V, AESL_token); // data

			sc_bv<16> *layer11_out_9_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_9_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_9_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_9_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_9_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_9_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_9_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_9_201_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (9) => (201) @ (16)
							for (int i_0 = 9; i_0 <= 201; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_9_201_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_9_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (9) => (201) @ (16)
							for (int i_0 = 9; i_0 <= 201; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_9_201_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_9_201_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_9_V_pc_buffer;
		}

		// output port post check: "layer11_out_10_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_10_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_10_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_10_V, AESL_token); // data

			sc_bv<16> *layer11_out_10_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_10_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_10_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_10_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_10_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_10_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_10_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_10_202_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (10) => (202) @ (16)
							for (int i_0 = 10; i_0 <= 202; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_10_202_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_10_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (10) => (202) @ (16)
							for (int i_0 = 10; i_0 <= 202; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_10_202_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_10_202_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_10_V_pc_buffer;
		}

		// output port post check: "layer11_out_11_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_11_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_11_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_11_V, AESL_token); // data

			sc_bv<16> *layer11_out_11_V_pc_buffer = new sc_bv<16>[13];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_11_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_11_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_11_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_11_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_11_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_11_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_11_203_16 = new sc_lv<16>[13];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (11) => (203) @ (16)
							for (int i_0 = 11; i_0 <= 203; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_11_203_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_11_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (11) => (203) @ (16)
							for (int i_0 = 11; i_0 <= 203; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_11_203_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_11_203_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_11_V_pc_buffer;
		}

		// output port post check: "layer11_out_12_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_12_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_12_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_12_V, AESL_token); // data

			sc_bv<16> *layer11_out_12_V_pc_buffer = new sc_bv<16>[12];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_12_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_12_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_12_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_12_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_12_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_12_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_12_203_16 = new sc_lv<16>[12];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (12) => (203) @ (16)
							for (int i_0 = 12; i_0 <= 203; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_12_203_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_12_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (12) => (203) @ (16)
							for (int i_0 = 12; i_0 <= 203; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_12_203_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_12_203_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_12_V_pc_buffer;
		}

		// output port post check: "layer11_out_13_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_13_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_13_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_13_V, AESL_token); // data

			sc_bv<16> *layer11_out_13_V_pc_buffer = new sc_bv<16>[12];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_13_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_13_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_13_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_13_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_13_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_13_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_13_203_16 = new sc_lv<16>[12];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (13) => (203) @ (16)
							for (int i_0 = 13; i_0 <= 203; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_13_203_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_13_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (13) => (203) @ (16)
							for (int i_0 = 13; i_0 <= 203; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_13_203_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_13_203_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_13_V_pc_buffer;
		}

		// output port post check: "layer11_out_14_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_14_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_14_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_14_V, AESL_token); // data

			sc_bv<16> *layer11_out_14_V_pc_buffer = new sc_bv<16>[12];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_14_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_14_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_14_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_14_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_14_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_14_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_14_203_16 = new sc_lv<16>[12];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (14) => (203) @ (16)
							for (int i_0 = 14; i_0 <= 203; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_14_203_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_14_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (14) => (203) @ (16)
							for (int i_0 = 14; i_0 <= 203; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_14_203_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_14_203_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_14_V_pc_buffer;
		}

		// output port post check: "layer11_out_15_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_15_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_15_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_15_V, AESL_token); // data

			sc_bv<16> *layer11_out_15_V_pc_buffer = new sc_bv<16>[12];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_15_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_15_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_15_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_15_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_15_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_15_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer11_out.V(15, 0)
						// {
							sc_lv<16>* layer11_out_V_lv0_15_203_16 = new sc_lv<16>[12];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (15) => (203) @ (16)
							for (int i_0 = 15; i_0 <= 203; i_0 += 16)
							{
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_V_lv0_15_203_16[hls_map_index].range(15, 0) = sc_bv<16>(layer11_out_15_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(15, 0)
						{
							// carray: (15) => (203) @ (16)
							for (int i_0 = 15; i_0 <= 203; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : layer11_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer11_out[0]
								// output_left_conversion : (layer11_out[i_0]).range()
								// output_type_conversion : (layer11_out_V_lv0_15_203_16[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer11_out[i_0]).range() = (layer11_out_V_lv0_15_203_16[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_15_V_pc_buffer;
		}

		// output port post check: "const_size_in_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data

			sc_bv<16> *const_size_in_1_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_in_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_in_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_in_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_in_1(15, 0)
						// {
							sc_lv<16>* const_size_in_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_in_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_in_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_in_1
								// output_left_conversion : const_size_in_1
								// output_type_conversion : (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1 = (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_in_1_pc_buffer;
		}

		// output port post check: "const_size_in_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_2, AESL_token); // data

			sc_bv<16> *const_size_in_2_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_in_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_in_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_in_2
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_in_2(15, 0)
						// {
							sc_lv<16>* const_size_in_2_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_2(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_in_2) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_2_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_in_2_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_2(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_in_2
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_in_2
								// output_left_conversion : const_size_in_2
								// output_type_conversion : (const_size_in_2_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_in_2) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_2 = (const_size_in_2_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_in_2_pc_buffer;
		}

		// output port post check: "const_size_in_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_3, AESL_token); // data

			sc_bv<16> *const_size_in_3_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_in_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_in_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_in_3
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_in_3(15, 0)
						// {
							sc_lv<16>* const_size_in_3_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_3(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_in_3) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_3_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_in_3_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_3(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_in_3
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_in_3
								// output_left_conversion : const_size_in_3
								// output_type_conversion : (const_size_in_3_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_in_3) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_3 = (const_size_in_3_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_in_3_pc_buffer;
		}

		// output port post check: "const_size_out_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data

			sc_bv<16> *const_size_out_1_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_out_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_out_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_out_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_out_1(15, 0)
						// {
							sc_lv<16>* const_size_out_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_out_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_out_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_out_1
								// output_left_conversion : const_size_out_1
								// output_type_conversion : (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1 = (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_out_1_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "node_attr_0_V"
		char* tvin_node_attr_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_0_V);

		// "node_attr_1_V"
		char* tvin_node_attr_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_1_V);

		// "node_attr_2_V"
		char* tvin_node_attr_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_2_V);

		// "node_attr_3_V"
		char* tvin_node_attr_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_3_V);

		// "node_attr_4_V"
		char* tvin_node_attr_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_4_V);

		// "node_attr_5_V"
		char* tvin_node_attr_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_5_V);

		// "node_attr_6_V"
		char* tvin_node_attr_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_6_V);

		// "node_attr_7_V"
		char* tvin_node_attr_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_7_V);

		// "node_attr_8_V"
		char* tvin_node_attr_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_8_V);

		// "node_attr_9_V"
		char* tvin_node_attr_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_9_V);

		// "node_attr_10_V"
		char* tvin_node_attr_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_10_V);

		// "node_attr_11_V"
		char* tvin_node_attr_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_11_V);

		// "node_attr_12_V"
		char* tvin_node_attr_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_12_V);

		// "node_attr_13_V"
		char* tvin_node_attr_13_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_13_V);

		// "node_attr_14_V"
		char* tvin_node_attr_14_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_14_V);

		// "node_attr_15_V"
		char* tvin_node_attr_15_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_15_V);

		// "node_attr_16_V"
		char* tvin_node_attr_16_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_16_V);

		// "node_attr_17_V"
		char* tvin_node_attr_17_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_17_V);

		// "node_attr_18_V"
		char* tvin_node_attr_18_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_18_V);

		// "node_attr_19_V"
		char* tvin_node_attr_19_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_19_V);

		// "node_attr_20_V"
		char* tvin_node_attr_20_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_20_V);

		// "node_attr_21_V"
		char* tvin_node_attr_21_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_21_V);

		// "node_attr_22_V"
		char* tvin_node_attr_22_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_22_V);

		// "node_attr_23_V"
		char* tvin_node_attr_23_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_23_V);

		// "node_attr_24_V"
		char* tvin_node_attr_24_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_24_V);

		// "node_attr_25_V"
		char* tvin_node_attr_25_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_25_V);

		// "node_attr_26_V"
		char* tvin_node_attr_26_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_26_V);

		// "node_attr_27_V"
		char* tvin_node_attr_27_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_27_V);

		// "node_attr_28_V"
		char* tvin_node_attr_28_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_28_V);

		// "node_attr_29_V"
		char* tvin_node_attr_29_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_29_V);

		// "node_attr_30_V"
		char* tvin_node_attr_30_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_30_V);

		// "node_attr_31_V"
		char* tvin_node_attr_31_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_31_V);

		// "node_attr_32_V"
		char* tvin_node_attr_32_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_32_V);

		// "node_attr_33_V"
		char* tvin_node_attr_33_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_33_V);

		// "node_attr_34_V"
		char* tvin_node_attr_34_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_34_V);

		// "node_attr_35_V"
		char* tvin_node_attr_35_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_35_V);

		// "node_attr_36_V"
		char* tvin_node_attr_36_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_36_V);

		// "node_attr_37_V"
		char* tvin_node_attr_37_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_37_V);

		// "node_attr_38_V"
		char* tvin_node_attr_38_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_38_V);

		// "node_attr_39_V"
		char* tvin_node_attr_39_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_39_V);

		// "node_attr_40_V"
		char* tvin_node_attr_40_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_40_V);

		// "node_attr_41_V"
		char* tvin_node_attr_41_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_41_V);

		// "node_attr_42_V"
		char* tvin_node_attr_42_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_42_V);

		// "node_attr_43_V"
		char* tvin_node_attr_43_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_43_V);

		// "node_attr_44_V"
		char* tvin_node_attr_44_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_44_V);

		// "node_attr_45_V"
		char* tvin_node_attr_45_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_45_V);

		// "node_attr_46_V"
		char* tvin_node_attr_46_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_46_V);

		// "node_attr_47_V"
		char* tvin_node_attr_47_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_47_V);

		// "edge_attr_0_V"
		char* tvin_edge_attr_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_0_V);

		// "edge_attr_1_V"
		char* tvin_edge_attr_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_1_V);

		// "edge_attr_2_V"
		char* tvin_edge_attr_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_2_V);

		// "edge_attr_3_V"
		char* tvin_edge_attr_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_3_V);

		// "edge_attr_4_V"
		char* tvin_edge_attr_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_4_V);

		// "edge_attr_5_V"
		char* tvin_edge_attr_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_5_V);

		// "edge_attr_6_V"
		char* tvin_edge_attr_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_6_V);

		// "edge_attr_7_V"
		char* tvin_edge_attr_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_7_V);

		// "edge_attr_8_V"
		char* tvin_edge_attr_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_8_V);

		// "edge_attr_9_V"
		char* tvin_edge_attr_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_9_V);

		// "edge_attr_10_V"
		char* tvin_edge_attr_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_10_V);

		// "edge_attr_11_V"
		char* tvin_edge_attr_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_11_V);

		// "edge_attr_12_V"
		char* tvin_edge_attr_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_12_V);

		// "edge_attr_13_V"
		char* tvin_edge_attr_13_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_13_V);

		// "edge_attr_14_V"
		char* tvin_edge_attr_14_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_14_V);

		// "edge_attr_15_V"
		char* tvin_edge_attr_15_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_15_V);

		// "edge_attr_16_V"
		char* tvin_edge_attr_16_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_16_V);

		// "edge_attr_17_V"
		char* tvin_edge_attr_17_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_17_V);

		// "edge_attr_18_V"
		char* tvin_edge_attr_18_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_18_V);

		// "edge_attr_19_V"
		char* tvin_edge_attr_19_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_19_V);

		// "edge_attr_20_V"
		char* tvin_edge_attr_20_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_20_V);

		// "edge_attr_21_V"
		char* tvin_edge_attr_21_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_21_V);

		// "edge_attr_22_V"
		char* tvin_edge_attr_22_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_22_V);

		// "edge_attr_23_V"
		char* tvin_edge_attr_23_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_23_V);

		// "edge_attr_24_V"
		char* tvin_edge_attr_24_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_24_V);

		// "edge_attr_25_V"
		char* tvin_edge_attr_25_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_25_V);

		// "edge_attr_26_V"
		char* tvin_edge_attr_26_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_26_V);

		// "edge_attr_27_V"
		char* tvin_edge_attr_27_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_27_V);

		// "edge_attr_28_V"
		char* tvin_edge_attr_28_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_28_V);

		// "edge_attr_29_V"
		char* tvin_edge_attr_29_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_29_V);

		// "edge_attr_30_V"
		char* tvin_edge_attr_30_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_30_V);

		// "edge_attr_31_V"
		char* tvin_edge_attr_31_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_31_V);

		// "edge_attr_32_V"
		char* tvin_edge_attr_32_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_32_V);

		// "edge_attr_33_V"
		char* tvin_edge_attr_33_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_33_V);

		// "edge_attr_34_V"
		char* tvin_edge_attr_34_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_34_V);

		// "edge_attr_35_V"
		char* tvin_edge_attr_35_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_35_V);

		// "edge_attr_36_V"
		char* tvin_edge_attr_36_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_36_V);

		// "edge_attr_37_V"
		char* tvin_edge_attr_37_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_37_V);

		// "edge_attr_38_V"
		char* tvin_edge_attr_38_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_38_V);

		// "edge_attr_39_V"
		char* tvin_edge_attr_39_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_39_V);

		// "edge_attr_40_V"
		char* tvin_edge_attr_40_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_40_V);

		// "edge_attr_41_V"
		char* tvin_edge_attr_41_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_41_V);

		// "edge_attr_42_V"
		char* tvin_edge_attr_42_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_42_V);

		// "edge_attr_43_V"
		char* tvin_edge_attr_43_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_43_V);

		// "edge_attr_44_V"
		char* tvin_edge_attr_44_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_44_V);

		// "edge_attr_45_V"
		char* tvin_edge_attr_45_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_45_V);

		// "edge_attr_46_V"
		char* tvin_edge_attr_46_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_46_V);

		// "edge_attr_47_V"
		char* tvin_edge_attr_47_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_47_V);

		// "edge_attr_48_V"
		char* tvin_edge_attr_48_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_48_V);

		// "edge_attr_49_V"
		char* tvin_edge_attr_49_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_49_V);

		// "edge_attr_50_V"
		char* tvin_edge_attr_50_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_50_V);

		// "edge_attr_51_V"
		char* tvin_edge_attr_51_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_51_V);

		// "edge_attr_52_V"
		char* tvin_edge_attr_52_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_52_V);

		// "edge_attr_53_V"
		char* tvin_edge_attr_53_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_53_V);

		// "edge_attr_54_V"
		char* tvin_edge_attr_54_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_54_V);

		// "edge_attr_55_V"
		char* tvin_edge_attr_55_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_55_V);

		// "edge_attr_56_V"
		char* tvin_edge_attr_56_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_56_V);

		// "edge_attr_57_V"
		char* tvin_edge_attr_57_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_57_V);

		// "edge_attr_58_V"
		char* tvin_edge_attr_58_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_58_V);

		// "edge_attr_59_V"
		char* tvin_edge_attr_59_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_59_V);

		// "edge_attr_60_V"
		char* tvin_edge_attr_60_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_60_V);

		// "edge_attr_61_V"
		char* tvin_edge_attr_61_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_61_V);

		// "edge_attr_62_V"
		char* tvin_edge_attr_62_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_62_V);

		// "edge_attr_63_V"
		char* tvin_edge_attr_63_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_63_V);

		// "edge_index_0_V"
		char* tvin_edge_index_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_0_V);

		// "edge_index_1_V"
		char* tvin_edge_index_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_1_V);

		// "edge_index_2_V"
		char* tvin_edge_index_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_2_V);

		// "edge_index_3_V"
		char* tvin_edge_index_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_3_V);

		// "edge_index_4_V"
		char* tvin_edge_index_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_4_V);

		// "edge_index_5_V"
		char* tvin_edge_index_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_5_V);

		// "edge_index_6_V"
		char* tvin_edge_index_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_6_V);

		// "edge_index_7_V"
		char* tvin_edge_index_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_7_V);

		// "edge_index_8_V"
		char* tvin_edge_index_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_8_V);

		// "edge_index_9_V"
		char* tvin_edge_index_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_9_V);

		// "edge_index_10_V"
		char* tvin_edge_index_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_10_V);

		// "edge_index_11_V"
		char* tvin_edge_index_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_11_V);

		// "edge_index_12_V"
		char* tvin_edge_index_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_12_V);

		// "edge_index_13_V"
		char* tvin_edge_index_13_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_13_V);

		// "edge_index_14_V"
		char* tvin_edge_index_14_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_14_V);

		// "edge_index_15_V"
		char* tvin_edge_index_15_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_15_V);

		// "edge_index_16_V"
		char* tvin_edge_index_16_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_16_V);

		// "edge_index_17_V"
		char* tvin_edge_index_17_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_17_V);

		// "edge_index_18_V"
		char* tvin_edge_index_18_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_18_V);

		// "edge_index_19_V"
		char* tvin_edge_index_19_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_19_V);

		// "edge_index_20_V"
		char* tvin_edge_index_20_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_20_V);

		// "edge_index_21_V"
		char* tvin_edge_index_21_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_21_V);

		// "edge_index_22_V"
		char* tvin_edge_index_22_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_22_V);

		// "edge_index_23_V"
		char* tvin_edge_index_23_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_23_V);

		// "edge_index_24_V"
		char* tvin_edge_index_24_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_24_V);

		// "edge_index_25_V"
		char* tvin_edge_index_25_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_25_V);

		// "edge_index_26_V"
		char* tvin_edge_index_26_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_26_V);

		// "edge_index_27_V"
		char* tvin_edge_index_27_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_27_V);

		// "edge_index_28_V"
		char* tvin_edge_index_28_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_28_V);

		// "edge_index_29_V"
		char* tvin_edge_index_29_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_29_V);

		// "edge_index_30_V"
		char* tvin_edge_index_30_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_30_V);

		// "edge_index_31_V"
		char* tvin_edge_index_31_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_31_V);

		// "layer11_out_0_V"
		char* tvin_layer11_out_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_0_V);
		char* tvout_layer11_out_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_0_V);

		// "layer11_out_1_V"
		char* tvin_layer11_out_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_1_V);
		char* tvout_layer11_out_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_1_V);

		// "layer11_out_2_V"
		char* tvin_layer11_out_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_2_V);
		char* tvout_layer11_out_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_2_V);

		// "layer11_out_3_V"
		char* tvin_layer11_out_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_3_V);
		char* tvout_layer11_out_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_3_V);

		// "layer11_out_4_V"
		char* tvin_layer11_out_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_4_V);
		char* tvout_layer11_out_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_4_V);

		// "layer11_out_5_V"
		char* tvin_layer11_out_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_5_V);
		char* tvout_layer11_out_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_5_V);

		// "layer11_out_6_V"
		char* tvin_layer11_out_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_6_V);
		char* tvout_layer11_out_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_6_V);

		// "layer11_out_7_V"
		char* tvin_layer11_out_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_7_V);
		char* tvout_layer11_out_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_7_V);

		// "layer11_out_8_V"
		char* tvin_layer11_out_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_8_V);
		char* tvout_layer11_out_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_8_V);

		// "layer11_out_9_V"
		char* tvin_layer11_out_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_9_V);
		char* tvout_layer11_out_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_9_V);

		// "layer11_out_10_V"
		char* tvin_layer11_out_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_10_V);
		char* tvout_layer11_out_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_10_V);

		// "layer11_out_11_V"
		char* tvin_layer11_out_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_11_V);
		char* tvout_layer11_out_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_11_V);

		// "layer11_out_12_V"
		char* tvin_layer11_out_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_12_V);
		char* tvout_layer11_out_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_12_V);

		// "layer11_out_13_V"
		char* tvin_layer11_out_13_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_13_V);
		char* tvout_layer11_out_13_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_13_V);

		// "layer11_out_14_V"
		char* tvin_layer11_out_14_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_14_V);
		char* tvout_layer11_out_14_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_14_V);

		// "layer11_out_15_V"
		char* tvin_layer11_out_15_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_15_V);
		char* tvout_layer11_out_15_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_15_V);

		// "const_size_in_1"
		char* tvout_const_size_in_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_in_1);

		// "const_size_in_2"
		char* tvout_const_size_in_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_in_2);

		// "const_size_in_3"
		char* tvout_const_size_in_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_in_3);

		// "const_size_out_1"
		char* tvout_const_size_out_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_out_1);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_node_attr_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_0_V, tvin_node_attr_0_V);

		sc_bv<16>* node_attr_0_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (0) => (288) @ (48)
					for (int i_0 = 0; i_0 <= 288; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_0_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_0_V, "%s\n", (node_attr_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_0_V, tvin_node_attr_0_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_0_V_depth);
		sprintf(tvin_node_attr_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_0_V, tvin_node_attr_0_V);

		// release memory allocation
		delete [] node_attr_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_1_V, tvin_node_attr_1_V);

		sc_bv<16>* node_attr_1_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_1_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (1) => (289) @ (48)
					for (int i_0 = 1; i_0 <= 289; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_1_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_1_V, "%s\n", (node_attr_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_1_V, tvin_node_attr_1_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_1_V_depth);
		sprintf(tvin_node_attr_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_1_V, tvin_node_attr_1_V);

		// release memory allocation
		delete [] node_attr_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_2_V, tvin_node_attr_2_V);

		sc_bv<16>* node_attr_2_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_2_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (2) => (290) @ (48)
					for (int i_0 = 2; i_0 <= 290; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_2_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_2_V, "%s\n", (node_attr_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_2_V, tvin_node_attr_2_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_2_V_depth);
		sprintf(tvin_node_attr_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_2_V, tvin_node_attr_2_V);

		// release memory allocation
		delete [] node_attr_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_3_V, tvin_node_attr_3_V);

		sc_bv<16>* node_attr_3_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_3_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (3) => (291) @ (48)
					for (int i_0 = 3; i_0 <= 291; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_3_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_3_V, "%s\n", (node_attr_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_3_V, tvin_node_attr_3_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_3_V_depth);
		sprintf(tvin_node_attr_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_3_V, tvin_node_attr_3_V);

		// release memory allocation
		delete [] node_attr_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_4_V, tvin_node_attr_4_V);

		sc_bv<16>* node_attr_4_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_4_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (4) => (292) @ (48)
					for (int i_0 = 4; i_0 <= 292; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_4_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_4_V, "%s\n", (node_attr_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_4_V, tvin_node_attr_4_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_4_V_depth);
		sprintf(tvin_node_attr_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_4_V, tvin_node_attr_4_V);

		// release memory allocation
		delete [] node_attr_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_5_V, tvin_node_attr_5_V);

		sc_bv<16>* node_attr_5_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_5_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (5) => (293) @ (48)
					for (int i_0 = 5; i_0 <= 293; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_5_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_5_V, "%s\n", (node_attr_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_5_V, tvin_node_attr_5_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_5_V_depth);
		sprintf(tvin_node_attr_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_5_V, tvin_node_attr_5_V);

		// release memory allocation
		delete [] node_attr_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_6_V, tvin_node_attr_6_V);

		sc_bv<16>* node_attr_6_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_6_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (6) => (294) @ (48)
					for (int i_0 = 6; i_0 <= 294; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_6_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_6_V, "%s\n", (node_attr_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_6_V, tvin_node_attr_6_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_6_V_depth);
		sprintf(tvin_node_attr_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_6_V, tvin_node_attr_6_V);

		// release memory allocation
		delete [] node_attr_6_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_7_V, tvin_node_attr_7_V);

		sc_bv<16>* node_attr_7_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_7_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (7) => (295) @ (48)
					for (int i_0 = 7; i_0 <= 295; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_7_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_7_V, "%s\n", (node_attr_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_7_V, tvin_node_attr_7_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_7_V_depth);
		sprintf(tvin_node_attr_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_7_V, tvin_node_attr_7_V);

		// release memory allocation
		delete [] node_attr_7_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_8_V, tvin_node_attr_8_V);

		sc_bv<16>* node_attr_8_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_8_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (8) => (296) @ (48)
					for (int i_0 = 8; i_0 <= 296; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_8_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_8_V, "%s\n", (node_attr_8_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_8_V, tvin_node_attr_8_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_8_V_depth);
		sprintf(tvin_node_attr_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_8_V, tvin_node_attr_8_V);

		// release memory allocation
		delete [] node_attr_8_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_9_V, tvin_node_attr_9_V);

		sc_bv<16>* node_attr_9_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_9_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (9) => (297) @ (48)
					for (int i_0 = 9; i_0 <= 297; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_9_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_9_V, "%s\n", (node_attr_9_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_9_V, tvin_node_attr_9_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_9_V_depth);
		sprintf(tvin_node_attr_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_9_V, tvin_node_attr_9_V);

		// release memory allocation
		delete [] node_attr_9_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_10_V, tvin_node_attr_10_V);

		sc_bv<16>* node_attr_10_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_10_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (10) => (298) @ (48)
					for (int i_0 = 10; i_0 <= 298; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_10_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_10_V, "%s\n", (node_attr_10_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_10_V, tvin_node_attr_10_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_10_V_depth);
		sprintf(tvin_node_attr_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_10_V, tvin_node_attr_10_V);

		// release memory allocation
		delete [] node_attr_10_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_11_V, tvin_node_attr_11_V);

		sc_bv<16>* node_attr_11_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_11_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (11) => (299) @ (48)
					for (int i_0 = 11; i_0 <= 299; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_11_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_11_V, "%s\n", (node_attr_11_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_11_V, tvin_node_attr_11_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_11_V_depth);
		sprintf(tvin_node_attr_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_11_V, tvin_node_attr_11_V);

		// release memory allocation
		delete [] node_attr_11_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_12_V, tvin_node_attr_12_V);

		sc_bv<16>* node_attr_12_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_12_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (12) => (300) @ (48)
					for (int i_0 = 12; i_0 <= 300; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_12_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_12_V, "%s\n", (node_attr_12_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_12_V, tvin_node_attr_12_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_12_V_depth);
		sprintf(tvin_node_attr_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_12_V, tvin_node_attr_12_V);

		// release memory allocation
		delete [] node_attr_12_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_13_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_13_V, tvin_node_attr_13_V);

		sc_bv<16>* node_attr_13_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_13_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (13) => (301) @ (48)
					for (int i_0 = 13; i_0 <= 301; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_13_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_13_V, "%s\n", (node_attr_13_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_13_V, tvin_node_attr_13_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_13_V_depth);
		sprintf(tvin_node_attr_13_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_13_V, tvin_node_attr_13_V);

		// release memory allocation
		delete [] node_attr_13_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_14_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_14_V, tvin_node_attr_14_V);

		sc_bv<16>* node_attr_14_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_14_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (14) => (302) @ (48)
					for (int i_0 = 14; i_0 <= 302; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_14_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_14_V, "%s\n", (node_attr_14_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_14_V, tvin_node_attr_14_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_14_V_depth);
		sprintf(tvin_node_attr_14_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_14_V, tvin_node_attr_14_V);

		// release memory allocation
		delete [] node_attr_14_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_15_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_15_V, tvin_node_attr_15_V);

		sc_bv<16>* node_attr_15_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_15_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (15) => (303) @ (48)
					for (int i_0 = 15; i_0 <= 303; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_15_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_15_V, "%s\n", (node_attr_15_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_15_V, tvin_node_attr_15_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_15_V_depth);
		sprintf(tvin_node_attr_15_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_15_V, tvin_node_attr_15_V);

		// release memory allocation
		delete [] node_attr_15_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_16_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_16_V, tvin_node_attr_16_V);

		sc_bv<16>* node_attr_16_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_16_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (16) => (304) @ (48)
					for (int i_0 = 16; i_0 <= 304; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_16_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_16_V, "%s\n", (node_attr_16_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_16_V, tvin_node_attr_16_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_16_V_depth);
		sprintf(tvin_node_attr_16_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_16_V, tvin_node_attr_16_V);

		// release memory allocation
		delete [] node_attr_16_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_17_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_17_V, tvin_node_attr_17_V);

		sc_bv<16>* node_attr_17_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_17_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (17) => (305) @ (48)
					for (int i_0 = 17; i_0 <= 305; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_17_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_17_V, "%s\n", (node_attr_17_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_17_V, tvin_node_attr_17_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_17_V_depth);
		sprintf(tvin_node_attr_17_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_17_V, tvin_node_attr_17_V);

		// release memory allocation
		delete [] node_attr_17_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_18_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_18_V, tvin_node_attr_18_V);

		sc_bv<16>* node_attr_18_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_18_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (18) => (306) @ (48)
					for (int i_0 = 18; i_0 <= 306; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_18_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_18_V, "%s\n", (node_attr_18_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_18_V, tvin_node_attr_18_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_18_V_depth);
		sprintf(tvin_node_attr_18_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_18_V, tvin_node_attr_18_V);

		// release memory allocation
		delete [] node_attr_18_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_19_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_19_V, tvin_node_attr_19_V);

		sc_bv<16>* node_attr_19_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_19_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (19) => (307) @ (48)
					for (int i_0 = 19; i_0 <= 307; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_19_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_19_V, "%s\n", (node_attr_19_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_19_V, tvin_node_attr_19_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_19_V_depth);
		sprintf(tvin_node_attr_19_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_19_V, tvin_node_attr_19_V);

		// release memory allocation
		delete [] node_attr_19_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_20_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_20_V, tvin_node_attr_20_V);

		sc_bv<16>* node_attr_20_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_20_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (20) => (308) @ (48)
					for (int i_0 = 20; i_0 <= 308; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_20_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_20_V, "%s\n", (node_attr_20_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_20_V, tvin_node_attr_20_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_20_V_depth);
		sprintf(tvin_node_attr_20_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_20_V, tvin_node_attr_20_V);

		// release memory allocation
		delete [] node_attr_20_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_21_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_21_V, tvin_node_attr_21_V);

		sc_bv<16>* node_attr_21_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_21_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (21) => (309) @ (48)
					for (int i_0 = 21; i_0 <= 309; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_21_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_21_V, "%s\n", (node_attr_21_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_21_V, tvin_node_attr_21_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_21_V_depth);
		sprintf(tvin_node_attr_21_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_21_V, tvin_node_attr_21_V);

		// release memory allocation
		delete [] node_attr_21_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_22_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_22_V, tvin_node_attr_22_V);

		sc_bv<16>* node_attr_22_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_22_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (22) => (310) @ (48)
					for (int i_0 = 22; i_0 <= 310; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_22_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_22_V, "%s\n", (node_attr_22_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_22_V, tvin_node_attr_22_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_22_V_depth);
		sprintf(tvin_node_attr_22_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_22_V, tvin_node_attr_22_V);

		// release memory allocation
		delete [] node_attr_22_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_23_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_23_V, tvin_node_attr_23_V);

		sc_bv<16>* node_attr_23_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_23_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (23) => (311) @ (48)
					for (int i_0 = 23; i_0 <= 311; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_23_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_23_V, "%s\n", (node_attr_23_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_23_V, tvin_node_attr_23_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_23_V_depth);
		sprintf(tvin_node_attr_23_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_23_V, tvin_node_attr_23_V);

		// release memory allocation
		delete [] node_attr_23_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_24_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_24_V, tvin_node_attr_24_V);

		sc_bv<16>* node_attr_24_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_24_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (24) => (312) @ (48)
					for (int i_0 = 24; i_0 <= 312; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_24_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_24_V, "%s\n", (node_attr_24_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_24_V, tvin_node_attr_24_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_24_V_depth);
		sprintf(tvin_node_attr_24_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_24_V, tvin_node_attr_24_V);

		// release memory allocation
		delete [] node_attr_24_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_25_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_25_V, tvin_node_attr_25_V);

		sc_bv<16>* node_attr_25_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_25_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (25) => (313) @ (48)
					for (int i_0 = 25; i_0 <= 313; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_25_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_25_V, "%s\n", (node_attr_25_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_25_V, tvin_node_attr_25_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_25_V_depth);
		sprintf(tvin_node_attr_25_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_25_V, tvin_node_attr_25_V);

		// release memory allocation
		delete [] node_attr_25_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_26_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_26_V, tvin_node_attr_26_V);

		sc_bv<16>* node_attr_26_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_26_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (26) => (314) @ (48)
					for (int i_0 = 26; i_0 <= 314; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_26_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_26_V, "%s\n", (node_attr_26_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_26_V, tvin_node_attr_26_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_26_V_depth);
		sprintf(tvin_node_attr_26_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_26_V, tvin_node_attr_26_V);

		// release memory allocation
		delete [] node_attr_26_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_27_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_27_V, tvin_node_attr_27_V);

		sc_bv<16>* node_attr_27_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_27_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (27) => (315) @ (48)
					for (int i_0 = 27; i_0 <= 315; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_27_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_27_V, "%s\n", (node_attr_27_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_27_V, tvin_node_attr_27_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_27_V_depth);
		sprintf(tvin_node_attr_27_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_27_V, tvin_node_attr_27_V);

		// release memory allocation
		delete [] node_attr_27_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_28_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_28_V, tvin_node_attr_28_V);

		sc_bv<16>* node_attr_28_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_28_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (28) => (316) @ (48)
					for (int i_0 = 28; i_0 <= 316; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_28_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_28_V, "%s\n", (node_attr_28_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_28_V, tvin_node_attr_28_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_28_V_depth);
		sprintf(tvin_node_attr_28_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_28_V, tvin_node_attr_28_V);

		// release memory allocation
		delete [] node_attr_28_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_29_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_29_V, tvin_node_attr_29_V);

		sc_bv<16>* node_attr_29_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_29_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (29) => (317) @ (48)
					for (int i_0 = 29; i_0 <= 317; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_29_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_29_V, "%s\n", (node_attr_29_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_29_V, tvin_node_attr_29_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_29_V_depth);
		sprintf(tvin_node_attr_29_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_29_V, tvin_node_attr_29_V);

		// release memory allocation
		delete [] node_attr_29_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_30_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_30_V, tvin_node_attr_30_V);

		sc_bv<16>* node_attr_30_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_30_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (30) => (318) @ (48)
					for (int i_0 = 30; i_0 <= 318; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_30_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_30_V, "%s\n", (node_attr_30_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_30_V, tvin_node_attr_30_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_30_V_depth);
		sprintf(tvin_node_attr_30_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_30_V, tvin_node_attr_30_V);

		// release memory allocation
		delete [] node_attr_30_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_31_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_31_V, tvin_node_attr_31_V);

		sc_bv<16>* node_attr_31_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_31_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (31) => (319) @ (48)
					for (int i_0 = 31; i_0 <= 319; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_31_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_31_V, "%s\n", (node_attr_31_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_31_V, tvin_node_attr_31_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_31_V_depth);
		sprintf(tvin_node_attr_31_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_31_V, tvin_node_attr_31_V);

		// release memory allocation
		delete [] node_attr_31_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_32_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_32_V, tvin_node_attr_32_V);

		sc_bv<16>* node_attr_32_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_32_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (32) => (320) @ (48)
					for (int i_0 = 32; i_0 <= 320; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_32_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_32_V, "%s\n", (node_attr_32_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_32_V, tvin_node_attr_32_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_32_V_depth);
		sprintf(tvin_node_attr_32_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_32_V, tvin_node_attr_32_V);

		// release memory allocation
		delete [] node_attr_32_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_33_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_33_V, tvin_node_attr_33_V);

		sc_bv<16>* node_attr_33_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_33_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (33) => (321) @ (48)
					for (int i_0 = 33; i_0 <= 321; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_33_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_33_V, "%s\n", (node_attr_33_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_33_V, tvin_node_attr_33_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_33_V_depth);
		sprintf(tvin_node_attr_33_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_33_V, tvin_node_attr_33_V);

		// release memory allocation
		delete [] node_attr_33_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_34_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_34_V, tvin_node_attr_34_V);

		sc_bv<16>* node_attr_34_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_34_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (34) => (322) @ (48)
					for (int i_0 = 34; i_0 <= 322; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_34_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_34_V, "%s\n", (node_attr_34_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_34_V, tvin_node_attr_34_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_34_V_depth);
		sprintf(tvin_node_attr_34_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_34_V, tvin_node_attr_34_V);

		// release memory allocation
		delete [] node_attr_34_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_35_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_35_V, tvin_node_attr_35_V);

		sc_bv<16>* node_attr_35_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_35_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (35) => (323) @ (48)
					for (int i_0 = 35; i_0 <= 323; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_35_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_35_V, "%s\n", (node_attr_35_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_35_V, tvin_node_attr_35_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_35_V_depth);
		sprintf(tvin_node_attr_35_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_35_V, tvin_node_attr_35_V);

		// release memory allocation
		delete [] node_attr_35_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_36_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_36_V, tvin_node_attr_36_V);

		sc_bv<16>* node_attr_36_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_36_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (36) => (324) @ (48)
					for (int i_0 = 36; i_0 <= 324; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_36_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_36_V, "%s\n", (node_attr_36_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_36_V, tvin_node_attr_36_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_36_V_depth);
		sprintf(tvin_node_attr_36_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_36_V, tvin_node_attr_36_V);

		// release memory allocation
		delete [] node_attr_36_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_37_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_37_V, tvin_node_attr_37_V);

		sc_bv<16>* node_attr_37_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_37_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (37) => (325) @ (48)
					for (int i_0 = 37; i_0 <= 325; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_37_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_37_V, "%s\n", (node_attr_37_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_37_V, tvin_node_attr_37_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_37_V_depth);
		sprintf(tvin_node_attr_37_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_37_V, tvin_node_attr_37_V);

		// release memory allocation
		delete [] node_attr_37_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_38_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_38_V, tvin_node_attr_38_V);

		sc_bv<16>* node_attr_38_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_38_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (38) => (326) @ (48)
					for (int i_0 = 38; i_0 <= 326; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_38_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_38_V, "%s\n", (node_attr_38_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_38_V, tvin_node_attr_38_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_38_V_depth);
		sprintf(tvin_node_attr_38_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_38_V, tvin_node_attr_38_V);

		// release memory allocation
		delete [] node_attr_38_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_39_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_39_V, tvin_node_attr_39_V);

		sc_bv<16>* node_attr_39_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_39_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (39) => (327) @ (48)
					for (int i_0 = 39; i_0 <= 327; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_39_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_39_V, "%s\n", (node_attr_39_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_39_V, tvin_node_attr_39_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_39_V_depth);
		sprintf(tvin_node_attr_39_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_39_V, tvin_node_attr_39_V);

		// release memory allocation
		delete [] node_attr_39_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_40_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_40_V, tvin_node_attr_40_V);

		sc_bv<16>* node_attr_40_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_40_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (40) => (328) @ (48)
					for (int i_0 = 40; i_0 <= 328; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_40_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_40_V, "%s\n", (node_attr_40_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_40_V, tvin_node_attr_40_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_40_V_depth);
		sprintf(tvin_node_attr_40_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_40_V, tvin_node_attr_40_V);

		// release memory allocation
		delete [] node_attr_40_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_41_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_41_V, tvin_node_attr_41_V);

		sc_bv<16>* node_attr_41_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_41_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (41) => (329) @ (48)
					for (int i_0 = 41; i_0 <= 329; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_41_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_41_V, "%s\n", (node_attr_41_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_41_V, tvin_node_attr_41_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_41_V_depth);
		sprintf(tvin_node_attr_41_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_41_V, tvin_node_attr_41_V);

		// release memory allocation
		delete [] node_attr_41_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_42_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_42_V, tvin_node_attr_42_V);

		sc_bv<16>* node_attr_42_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_42_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (42) => (330) @ (48)
					for (int i_0 = 42; i_0 <= 330; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_42_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_42_V, "%s\n", (node_attr_42_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_42_V, tvin_node_attr_42_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_42_V_depth);
		sprintf(tvin_node_attr_42_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_42_V, tvin_node_attr_42_V);

		// release memory allocation
		delete [] node_attr_42_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_43_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_43_V, tvin_node_attr_43_V);

		sc_bv<16>* node_attr_43_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_43_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (43) => (331) @ (48)
					for (int i_0 = 43; i_0 <= 331; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_43_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_43_V, "%s\n", (node_attr_43_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_43_V, tvin_node_attr_43_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_43_V_depth);
		sprintf(tvin_node_attr_43_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_43_V, tvin_node_attr_43_V);

		// release memory allocation
		delete [] node_attr_43_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_44_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_44_V, tvin_node_attr_44_V);

		sc_bv<16>* node_attr_44_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_44_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (44) => (332) @ (48)
					for (int i_0 = 44; i_0 <= 332; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_44_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_44_V, "%s\n", (node_attr_44_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_44_V, tvin_node_attr_44_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_44_V_depth);
		sprintf(tvin_node_attr_44_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_44_V, tvin_node_attr_44_V);

		// release memory allocation
		delete [] node_attr_44_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_45_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_45_V, tvin_node_attr_45_V);

		sc_bv<16>* node_attr_45_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_45_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (45) => (333) @ (48)
					for (int i_0 = 45; i_0 <= 333; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_45_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_45_V, "%s\n", (node_attr_45_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_45_V, tvin_node_attr_45_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_45_V_depth);
		sprintf(tvin_node_attr_45_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_45_V, tvin_node_attr_45_V);

		// release memory allocation
		delete [] node_attr_45_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_46_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_46_V, tvin_node_attr_46_V);

		sc_bv<16>* node_attr_46_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_46_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (46) => (334) @ (48)
					for (int i_0 = 46; i_0 <= 334; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_46_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_46_V, "%s\n", (node_attr_46_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_46_V, tvin_node_attr_46_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_46_V_depth);
		sprintf(tvin_node_attr_46_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_46_V, tvin_node_attr_46_V);

		// release memory allocation
		delete [] node_attr_46_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_47_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_47_V, tvin_node_attr_47_V);

		sc_bv<16>* node_attr_47_V_tvin_wrapc_buffer = new sc_bv<16>[7];

		// RTL Name: node_attr_47_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(15, 0)
				{
					// carray: (47) => (335) @ (48)
					for (int i_0 = 47; i_0 <= 335; i_0 += 48)
					{
						// sub                   : i_0
						// ori_name              : node_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : node_attr[0]
						// regulate_c_name       : node_attr_V
						// input_type_conversion : (node_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(node_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> node_attr_V_tmp_mem;
							node_attr_V_tmp_mem = (node_attr[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_47_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = node_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 7; i++)
		{
			sprintf(tvin_node_attr_47_V, "%s\n", (node_attr_47_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_47_V, tvin_node_attr_47_V);
		}

		tcl_file.set_num(7, &tcl_file.node_attr_47_V_depth);
		sprintf(tvin_node_attr_47_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_47_V, tvin_node_attr_47_V);

		// release memory allocation
		delete [] node_attr_47_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_V, tvin_edge_attr_0_V);

		sc_bv<16>* edge_attr_0_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (0) => (768) @ (64)
					for (int i_0 = 0; i_0 <= 768; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_0_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_0_V, "%s\n", (edge_attr_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_0_V, tvin_edge_attr_0_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_0_V_depth);
		sprintf(tvin_edge_attr_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_V, tvin_edge_attr_0_V);

		// release memory allocation
		delete [] edge_attr_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_V, tvin_edge_attr_1_V);

		sc_bv<16>* edge_attr_1_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_1_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (1) => (769) @ (64)
					for (int i_0 = 1; i_0 <= 769; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_1_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_1_V, "%s\n", (edge_attr_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_1_V, tvin_edge_attr_1_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_1_V_depth);
		sprintf(tvin_edge_attr_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_V, tvin_edge_attr_1_V);

		// release memory allocation
		delete [] edge_attr_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_V, tvin_edge_attr_2_V);

		sc_bv<16>* edge_attr_2_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_2_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (2) => (770) @ (64)
					for (int i_0 = 2; i_0 <= 770; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_2_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_2_V, "%s\n", (edge_attr_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_2_V, tvin_edge_attr_2_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_2_V_depth);
		sprintf(tvin_edge_attr_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_V, tvin_edge_attr_2_V);

		// release memory allocation
		delete [] edge_attr_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_V, tvin_edge_attr_3_V);

		sc_bv<16>* edge_attr_3_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_3_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (3) => (771) @ (64)
					for (int i_0 = 3; i_0 <= 771; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_3_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_3_V, "%s\n", (edge_attr_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_3_V, tvin_edge_attr_3_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_3_V_depth);
		sprintf(tvin_edge_attr_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_V, tvin_edge_attr_3_V);

		// release memory allocation
		delete [] edge_attr_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_V, tvin_edge_attr_4_V);

		sc_bv<16>* edge_attr_4_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_4_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (4) => (772) @ (64)
					for (int i_0 = 4; i_0 <= 772; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_4_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_4_V, "%s\n", (edge_attr_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_4_V, tvin_edge_attr_4_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_4_V_depth);
		sprintf(tvin_edge_attr_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_V, tvin_edge_attr_4_V);

		// release memory allocation
		delete [] edge_attr_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_V, tvin_edge_attr_5_V);

		sc_bv<16>* edge_attr_5_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_5_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (5) => (773) @ (64)
					for (int i_0 = 5; i_0 <= 773; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_5_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_5_V, "%s\n", (edge_attr_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_5_V, tvin_edge_attr_5_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_5_V_depth);
		sprintf(tvin_edge_attr_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_V, tvin_edge_attr_5_V);

		// release memory allocation
		delete [] edge_attr_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_V, tvin_edge_attr_6_V);

		sc_bv<16>* edge_attr_6_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_6_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (6) => (774) @ (64)
					for (int i_0 = 6; i_0 <= 774; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_6_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_6_V, "%s\n", (edge_attr_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_6_V, tvin_edge_attr_6_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_6_V_depth);
		sprintf(tvin_edge_attr_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_V, tvin_edge_attr_6_V);

		// release memory allocation
		delete [] edge_attr_6_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_V, tvin_edge_attr_7_V);

		sc_bv<16>* edge_attr_7_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_7_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (7) => (775) @ (64)
					for (int i_0 = 7; i_0 <= 775; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_7_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_7_V, "%s\n", (edge_attr_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_7_V, tvin_edge_attr_7_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_7_V_depth);
		sprintf(tvin_edge_attr_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_V, tvin_edge_attr_7_V);

		// release memory allocation
		delete [] edge_attr_7_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_V, tvin_edge_attr_8_V);

		sc_bv<16>* edge_attr_8_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_8_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (8) => (776) @ (64)
					for (int i_0 = 8; i_0 <= 776; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_8_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_8_V, "%s\n", (edge_attr_8_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_8_V, tvin_edge_attr_8_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_8_V_depth);
		sprintf(tvin_edge_attr_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_V, tvin_edge_attr_8_V);

		// release memory allocation
		delete [] edge_attr_8_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_V, tvin_edge_attr_9_V);

		sc_bv<16>* edge_attr_9_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_9_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (9) => (777) @ (64)
					for (int i_0 = 9; i_0 <= 777; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_9_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_9_V, "%s\n", (edge_attr_9_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_9_V, tvin_edge_attr_9_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_9_V_depth);
		sprintf(tvin_edge_attr_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_V, tvin_edge_attr_9_V);

		// release memory allocation
		delete [] edge_attr_9_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_V, tvin_edge_attr_10_V);

		sc_bv<16>* edge_attr_10_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_10_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (10) => (778) @ (64)
					for (int i_0 = 10; i_0 <= 778; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_10_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_10_V, "%s\n", (edge_attr_10_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_10_V, tvin_edge_attr_10_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_10_V_depth);
		sprintf(tvin_edge_attr_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_V, tvin_edge_attr_10_V);

		// release memory allocation
		delete [] edge_attr_10_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_V, tvin_edge_attr_11_V);

		sc_bv<16>* edge_attr_11_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_11_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (11) => (779) @ (64)
					for (int i_0 = 11; i_0 <= 779; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_11_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_11_V, "%s\n", (edge_attr_11_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_11_V, tvin_edge_attr_11_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_11_V_depth);
		sprintf(tvin_edge_attr_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_V, tvin_edge_attr_11_V);

		// release memory allocation
		delete [] edge_attr_11_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_V, tvin_edge_attr_12_V);

		sc_bv<16>* edge_attr_12_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_12_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (12) => (780) @ (64)
					for (int i_0 = 12; i_0 <= 780; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_12_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_12_V, "%s\n", (edge_attr_12_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_12_V, tvin_edge_attr_12_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_12_V_depth);
		sprintf(tvin_edge_attr_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_V, tvin_edge_attr_12_V);

		// release memory allocation
		delete [] edge_attr_12_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_13_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_13_V, tvin_edge_attr_13_V);

		sc_bv<16>* edge_attr_13_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_13_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (13) => (781) @ (64)
					for (int i_0 = 13; i_0 <= 781; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_13_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_13_V, "%s\n", (edge_attr_13_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_13_V, tvin_edge_attr_13_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_13_V_depth);
		sprintf(tvin_edge_attr_13_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_13_V, tvin_edge_attr_13_V);

		// release memory allocation
		delete [] edge_attr_13_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_14_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_14_V, tvin_edge_attr_14_V);

		sc_bv<16>* edge_attr_14_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_14_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (14) => (782) @ (64)
					for (int i_0 = 14; i_0 <= 782; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_14_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_14_V, "%s\n", (edge_attr_14_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_14_V, tvin_edge_attr_14_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_14_V_depth);
		sprintf(tvin_edge_attr_14_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_14_V, tvin_edge_attr_14_V);

		// release memory allocation
		delete [] edge_attr_14_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_15_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_15_V, tvin_edge_attr_15_V);

		sc_bv<16>* edge_attr_15_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_15_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (15) => (783) @ (64)
					for (int i_0 = 15; i_0 <= 783; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_15_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_15_V, "%s\n", (edge_attr_15_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_15_V, tvin_edge_attr_15_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_15_V_depth);
		sprintf(tvin_edge_attr_15_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_15_V, tvin_edge_attr_15_V);

		// release memory allocation
		delete [] edge_attr_15_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_16_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_16_V, tvin_edge_attr_16_V);

		sc_bv<16>* edge_attr_16_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_16_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (16) => (784) @ (64)
					for (int i_0 = 16; i_0 <= 784; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_16_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_16_V, "%s\n", (edge_attr_16_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_16_V, tvin_edge_attr_16_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_16_V_depth);
		sprintf(tvin_edge_attr_16_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_16_V, tvin_edge_attr_16_V);

		// release memory allocation
		delete [] edge_attr_16_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_17_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_17_V, tvin_edge_attr_17_V);

		sc_bv<16>* edge_attr_17_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_17_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (17) => (785) @ (64)
					for (int i_0 = 17; i_0 <= 785; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_17_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_17_V, "%s\n", (edge_attr_17_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_17_V, tvin_edge_attr_17_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_17_V_depth);
		sprintf(tvin_edge_attr_17_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_17_V, tvin_edge_attr_17_V);

		// release memory allocation
		delete [] edge_attr_17_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_18_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_18_V, tvin_edge_attr_18_V);

		sc_bv<16>* edge_attr_18_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_18_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (18) => (786) @ (64)
					for (int i_0 = 18; i_0 <= 786; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_18_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_18_V, "%s\n", (edge_attr_18_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_18_V, tvin_edge_attr_18_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_18_V_depth);
		sprintf(tvin_edge_attr_18_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_18_V, tvin_edge_attr_18_V);

		// release memory allocation
		delete [] edge_attr_18_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_19_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_19_V, tvin_edge_attr_19_V);

		sc_bv<16>* edge_attr_19_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_19_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (19) => (787) @ (64)
					for (int i_0 = 19; i_0 <= 787; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_19_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_19_V, "%s\n", (edge_attr_19_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_19_V, tvin_edge_attr_19_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_19_V_depth);
		sprintf(tvin_edge_attr_19_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_19_V, tvin_edge_attr_19_V);

		// release memory allocation
		delete [] edge_attr_19_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_20_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_20_V, tvin_edge_attr_20_V);

		sc_bv<16>* edge_attr_20_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_20_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (20) => (788) @ (64)
					for (int i_0 = 20; i_0 <= 788; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_20_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_20_V, "%s\n", (edge_attr_20_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_20_V, tvin_edge_attr_20_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_20_V_depth);
		sprintf(tvin_edge_attr_20_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_20_V, tvin_edge_attr_20_V);

		// release memory allocation
		delete [] edge_attr_20_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_21_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_21_V, tvin_edge_attr_21_V);

		sc_bv<16>* edge_attr_21_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_21_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (21) => (789) @ (64)
					for (int i_0 = 21; i_0 <= 789; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_21_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_21_V, "%s\n", (edge_attr_21_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_21_V, tvin_edge_attr_21_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_21_V_depth);
		sprintf(tvin_edge_attr_21_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_21_V, tvin_edge_attr_21_V);

		// release memory allocation
		delete [] edge_attr_21_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_22_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_22_V, tvin_edge_attr_22_V);

		sc_bv<16>* edge_attr_22_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_22_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (22) => (790) @ (64)
					for (int i_0 = 22; i_0 <= 790; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_22_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_22_V, "%s\n", (edge_attr_22_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_22_V, tvin_edge_attr_22_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_22_V_depth);
		sprintf(tvin_edge_attr_22_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_22_V, tvin_edge_attr_22_V);

		// release memory allocation
		delete [] edge_attr_22_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_23_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_23_V, tvin_edge_attr_23_V);

		sc_bv<16>* edge_attr_23_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_23_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (23) => (791) @ (64)
					for (int i_0 = 23; i_0 <= 791; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_23_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_23_V, "%s\n", (edge_attr_23_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_23_V, tvin_edge_attr_23_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_23_V_depth);
		sprintf(tvin_edge_attr_23_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_23_V, tvin_edge_attr_23_V);

		// release memory allocation
		delete [] edge_attr_23_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_24_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_24_V, tvin_edge_attr_24_V);

		sc_bv<16>* edge_attr_24_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_24_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (24) => (792) @ (64)
					for (int i_0 = 24; i_0 <= 792; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_24_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_24_V, "%s\n", (edge_attr_24_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_24_V, tvin_edge_attr_24_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_24_V_depth);
		sprintf(tvin_edge_attr_24_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_24_V, tvin_edge_attr_24_V);

		// release memory allocation
		delete [] edge_attr_24_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_25_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_25_V, tvin_edge_attr_25_V);

		sc_bv<16>* edge_attr_25_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_25_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (25) => (793) @ (64)
					for (int i_0 = 25; i_0 <= 793; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_25_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_25_V, "%s\n", (edge_attr_25_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_25_V, tvin_edge_attr_25_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_25_V_depth);
		sprintf(tvin_edge_attr_25_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_25_V, tvin_edge_attr_25_V);

		// release memory allocation
		delete [] edge_attr_25_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_26_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_26_V, tvin_edge_attr_26_V);

		sc_bv<16>* edge_attr_26_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_26_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (26) => (794) @ (64)
					for (int i_0 = 26; i_0 <= 794; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_26_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_26_V, "%s\n", (edge_attr_26_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_26_V, tvin_edge_attr_26_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_26_V_depth);
		sprintf(tvin_edge_attr_26_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_26_V, tvin_edge_attr_26_V);

		// release memory allocation
		delete [] edge_attr_26_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_27_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_27_V, tvin_edge_attr_27_V);

		sc_bv<16>* edge_attr_27_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_27_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (27) => (795) @ (64)
					for (int i_0 = 27; i_0 <= 795; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_27_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_27_V, "%s\n", (edge_attr_27_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_27_V, tvin_edge_attr_27_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_27_V_depth);
		sprintf(tvin_edge_attr_27_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_27_V, tvin_edge_attr_27_V);

		// release memory allocation
		delete [] edge_attr_27_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_28_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_28_V, tvin_edge_attr_28_V);

		sc_bv<16>* edge_attr_28_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_28_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (28) => (796) @ (64)
					for (int i_0 = 28; i_0 <= 796; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_28_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_28_V, "%s\n", (edge_attr_28_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_28_V, tvin_edge_attr_28_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_28_V_depth);
		sprintf(tvin_edge_attr_28_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_28_V, tvin_edge_attr_28_V);

		// release memory allocation
		delete [] edge_attr_28_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_29_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_29_V, tvin_edge_attr_29_V);

		sc_bv<16>* edge_attr_29_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_29_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (29) => (797) @ (64)
					for (int i_0 = 29; i_0 <= 797; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_29_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_29_V, "%s\n", (edge_attr_29_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_29_V, tvin_edge_attr_29_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_29_V_depth);
		sprintf(tvin_edge_attr_29_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_29_V, tvin_edge_attr_29_V);

		// release memory allocation
		delete [] edge_attr_29_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_30_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_30_V, tvin_edge_attr_30_V);

		sc_bv<16>* edge_attr_30_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_30_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (30) => (798) @ (64)
					for (int i_0 = 30; i_0 <= 798; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_30_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_30_V, "%s\n", (edge_attr_30_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_30_V, tvin_edge_attr_30_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_30_V_depth);
		sprintf(tvin_edge_attr_30_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_30_V, tvin_edge_attr_30_V);

		// release memory allocation
		delete [] edge_attr_30_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_31_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_31_V, tvin_edge_attr_31_V);

		sc_bv<16>* edge_attr_31_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_31_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (31) => (799) @ (64)
					for (int i_0 = 31; i_0 <= 799; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_31_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_31_V, "%s\n", (edge_attr_31_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_31_V, tvin_edge_attr_31_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_31_V_depth);
		sprintf(tvin_edge_attr_31_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_31_V, tvin_edge_attr_31_V);

		// release memory allocation
		delete [] edge_attr_31_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_32_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_32_V, tvin_edge_attr_32_V);

		sc_bv<16>* edge_attr_32_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_32_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (32) => (800) @ (64)
					for (int i_0 = 32; i_0 <= 800; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_32_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_32_V, "%s\n", (edge_attr_32_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_32_V, tvin_edge_attr_32_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_32_V_depth);
		sprintf(tvin_edge_attr_32_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_32_V, tvin_edge_attr_32_V);

		// release memory allocation
		delete [] edge_attr_32_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_33_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_33_V, tvin_edge_attr_33_V);

		sc_bv<16>* edge_attr_33_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_33_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (33) => (801) @ (64)
					for (int i_0 = 33; i_0 <= 801; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_33_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_33_V, "%s\n", (edge_attr_33_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_33_V, tvin_edge_attr_33_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_33_V_depth);
		sprintf(tvin_edge_attr_33_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_33_V, tvin_edge_attr_33_V);

		// release memory allocation
		delete [] edge_attr_33_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_34_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_34_V, tvin_edge_attr_34_V);

		sc_bv<16>* edge_attr_34_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_34_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (34) => (802) @ (64)
					for (int i_0 = 34; i_0 <= 802; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_34_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_34_V, "%s\n", (edge_attr_34_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_34_V, tvin_edge_attr_34_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_34_V_depth);
		sprintf(tvin_edge_attr_34_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_34_V, tvin_edge_attr_34_V);

		// release memory allocation
		delete [] edge_attr_34_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_35_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_35_V, tvin_edge_attr_35_V);

		sc_bv<16>* edge_attr_35_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_35_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (35) => (803) @ (64)
					for (int i_0 = 35; i_0 <= 803; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_35_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_35_V, "%s\n", (edge_attr_35_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_35_V, tvin_edge_attr_35_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_35_V_depth);
		sprintf(tvin_edge_attr_35_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_35_V, tvin_edge_attr_35_V);

		// release memory allocation
		delete [] edge_attr_35_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_36_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_36_V, tvin_edge_attr_36_V);

		sc_bv<16>* edge_attr_36_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_36_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (36) => (804) @ (64)
					for (int i_0 = 36; i_0 <= 804; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_36_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_36_V, "%s\n", (edge_attr_36_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_36_V, tvin_edge_attr_36_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_36_V_depth);
		sprintf(tvin_edge_attr_36_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_36_V, tvin_edge_attr_36_V);

		// release memory allocation
		delete [] edge_attr_36_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_37_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_37_V, tvin_edge_attr_37_V);

		sc_bv<16>* edge_attr_37_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_37_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (37) => (805) @ (64)
					for (int i_0 = 37; i_0 <= 805; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_37_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_37_V, "%s\n", (edge_attr_37_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_37_V, tvin_edge_attr_37_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_37_V_depth);
		sprintf(tvin_edge_attr_37_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_37_V, tvin_edge_attr_37_V);

		// release memory allocation
		delete [] edge_attr_37_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_38_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_38_V, tvin_edge_attr_38_V);

		sc_bv<16>* edge_attr_38_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_38_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (38) => (806) @ (64)
					for (int i_0 = 38; i_0 <= 806; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_38_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_38_V, "%s\n", (edge_attr_38_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_38_V, tvin_edge_attr_38_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_38_V_depth);
		sprintf(tvin_edge_attr_38_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_38_V, tvin_edge_attr_38_V);

		// release memory allocation
		delete [] edge_attr_38_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_39_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_39_V, tvin_edge_attr_39_V);

		sc_bv<16>* edge_attr_39_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_39_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (39) => (807) @ (64)
					for (int i_0 = 39; i_0 <= 807; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_39_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_39_V, "%s\n", (edge_attr_39_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_39_V, tvin_edge_attr_39_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_39_V_depth);
		sprintf(tvin_edge_attr_39_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_39_V, tvin_edge_attr_39_V);

		// release memory allocation
		delete [] edge_attr_39_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_40_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_40_V, tvin_edge_attr_40_V);

		sc_bv<16>* edge_attr_40_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_40_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (40) => (808) @ (64)
					for (int i_0 = 40; i_0 <= 808; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_40_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_40_V, "%s\n", (edge_attr_40_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_40_V, tvin_edge_attr_40_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_40_V_depth);
		sprintf(tvin_edge_attr_40_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_40_V, tvin_edge_attr_40_V);

		// release memory allocation
		delete [] edge_attr_40_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_41_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_41_V, tvin_edge_attr_41_V);

		sc_bv<16>* edge_attr_41_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_41_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (41) => (809) @ (64)
					for (int i_0 = 41; i_0 <= 809; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_41_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_41_V, "%s\n", (edge_attr_41_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_41_V, tvin_edge_attr_41_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_41_V_depth);
		sprintf(tvin_edge_attr_41_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_41_V, tvin_edge_attr_41_V);

		// release memory allocation
		delete [] edge_attr_41_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_42_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_42_V, tvin_edge_attr_42_V);

		sc_bv<16>* edge_attr_42_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_42_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (42) => (810) @ (64)
					for (int i_0 = 42; i_0 <= 810; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_42_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_42_V, "%s\n", (edge_attr_42_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_42_V, tvin_edge_attr_42_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_42_V_depth);
		sprintf(tvin_edge_attr_42_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_42_V, tvin_edge_attr_42_V);

		// release memory allocation
		delete [] edge_attr_42_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_43_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_43_V, tvin_edge_attr_43_V);

		sc_bv<16>* edge_attr_43_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_43_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (43) => (811) @ (64)
					for (int i_0 = 43; i_0 <= 811; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_43_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_43_V, "%s\n", (edge_attr_43_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_43_V, tvin_edge_attr_43_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_43_V_depth);
		sprintf(tvin_edge_attr_43_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_43_V, tvin_edge_attr_43_V);

		// release memory allocation
		delete [] edge_attr_43_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_44_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_44_V, tvin_edge_attr_44_V);

		sc_bv<16>* edge_attr_44_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_44_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (44) => (812) @ (64)
					for (int i_0 = 44; i_0 <= 812; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_44_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_44_V, "%s\n", (edge_attr_44_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_44_V, tvin_edge_attr_44_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_44_V_depth);
		sprintf(tvin_edge_attr_44_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_44_V, tvin_edge_attr_44_V);

		// release memory allocation
		delete [] edge_attr_44_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_45_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_45_V, tvin_edge_attr_45_V);

		sc_bv<16>* edge_attr_45_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_45_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (45) => (813) @ (64)
					for (int i_0 = 45; i_0 <= 813; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_45_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_45_V, "%s\n", (edge_attr_45_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_45_V, tvin_edge_attr_45_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_45_V_depth);
		sprintf(tvin_edge_attr_45_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_45_V, tvin_edge_attr_45_V);

		// release memory allocation
		delete [] edge_attr_45_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_46_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_46_V, tvin_edge_attr_46_V);

		sc_bv<16>* edge_attr_46_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_46_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (46) => (814) @ (64)
					for (int i_0 = 46; i_0 <= 814; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_46_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_46_V, "%s\n", (edge_attr_46_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_46_V, tvin_edge_attr_46_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_46_V_depth);
		sprintf(tvin_edge_attr_46_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_46_V, tvin_edge_attr_46_V);

		// release memory allocation
		delete [] edge_attr_46_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_47_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_47_V, tvin_edge_attr_47_V);

		sc_bv<16>* edge_attr_47_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_attr_47_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (47) => (815) @ (64)
					for (int i_0 = 47; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_47_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_attr_47_V, "%s\n", (edge_attr_47_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_47_V, tvin_edge_attr_47_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_attr_47_V_depth);
		sprintf(tvin_edge_attr_47_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_47_V, tvin_edge_attr_47_V);

		// release memory allocation
		delete [] edge_attr_47_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_48_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_48_V, tvin_edge_attr_48_V);

		sc_bv<16>* edge_attr_48_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_48_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (48) => (815) @ (64)
					for (int i_0 = 48; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_48_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_48_V, "%s\n", (edge_attr_48_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_48_V, tvin_edge_attr_48_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_48_V_depth);
		sprintf(tvin_edge_attr_48_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_48_V, tvin_edge_attr_48_V);

		// release memory allocation
		delete [] edge_attr_48_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_49_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_49_V, tvin_edge_attr_49_V);

		sc_bv<16>* edge_attr_49_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_49_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (49) => (815) @ (64)
					for (int i_0 = 49; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_49_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_49_V, "%s\n", (edge_attr_49_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_49_V, tvin_edge_attr_49_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_49_V_depth);
		sprintf(tvin_edge_attr_49_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_49_V, tvin_edge_attr_49_V);

		// release memory allocation
		delete [] edge_attr_49_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_50_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_50_V, tvin_edge_attr_50_V);

		sc_bv<16>* edge_attr_50_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_50_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (50) => (815) @ (64)
					for (int i_0 = 50; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_50_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_50_V, "%s\n", (edge_attr_50_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_50_V, tvin_edge_attr_50_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_50_V_depth);
		sprintf(tvin_edge_attr_50_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_50_V, tvin_edge_attr_50_V);

		// release memory allocation
		delete [] edge_attr_50_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_51_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_51_V, tvin_edge_attr_51_V);

		sc_bv<16>* edge_attr_51_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_51_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (51) => (815) @ (64)
					for (int i_0 = 51; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_51_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_51_V, "%s\n", (edge_attr_51_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_51_V, tvin_edge_attr_51_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_51_V_depth);
		sprintf(tvin_edge_attr_51_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_51_V, tvin_edge_attr_51_V);

		// release memory allocation
		delete [] edge_attr_51_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_52_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_52_V, tvin_edge_attr_52_V);

		sc_bv<16>* edge_attr_52_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_52_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (52) => (815) @ (64)
					for (int i_0 = 52; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_52_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_52_V, "%s\n", (edge_attr_52_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_52_V, tvin_edge_attr_52_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_52_V_depth);
		sprintf(tvin_edge_attr_52_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_52_V, tvin_edge_attr_52_V);

		// release memory allocation
		delete [] edge_attr_52_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_53_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_53_V, tvin_edge_attr_53_V);

		sc_bv<16>* edge_attr_53_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_53_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (53) => (815) @ (64)
					for (int i_0 = 53; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_53_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_53_V, "%s\n", (edge_attr_53_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_53_V, tvin_edge_attr_53_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_53_V_depth);
		sprintf(tvin_edge_attr_53_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_53_V, tvin_edge_attr_53_V);

		// release memory allocation
		delete [] edge_attr_53_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_54_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_54_V, tvin_edge_attr_54_V);

		sc_bv<16>* edge_attr_54_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_54_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (54) => (815) @ (64)
					for (int i_0 = 54; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_54_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_54_V, "%s\n", (edge_attr_54_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_54_V, tvin_edge_attr_54_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_54_V_depth);
		sprintf(tvin_edge_attr_54_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_54_V, tvin_edge_attr_54_V);

		// release memory allocation
		delete [] edge_attr_54_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_55_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_55_V, tvin_edge_attr_55_V);

		sc_bv<16>* edge_attr_55_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_55_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (55) => (815) @ (64)
					for (int i_0 = 55; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_55_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_55_V, "%s\n", (edge_attr_55_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_55_V, tvin_edge_attr_55_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_55_V_depth);
		sprintf(tvin_edge_attr_55_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_55_V, tvin_edge_attr_55_V);

		// release memory allocation
		delete [] edge_attr_55_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_56_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_56_V, tvin_edge_attr_56_V);

		sc_bv<16>* edge_attr_56_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_56_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (56) => (815) @ (64)
					for (int i_0 = 56; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_56_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_56_V, "%s\n", (edge_attr_56_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_56_V, tvin_edge_attr_56_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_56_V_depth);
		sprintf(tvin_edge_attr_56_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_56_V, tvin_edge_attr_56_V);

		// release memory allocation
		delete [] edge_attr_56_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_57_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_57_V, tvin_edge_attr_57_V);

		sc_bv<16>* edge_attr_57_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_57_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (57) => (815) @ (64)
					for (int i_0 = 57; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_57_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_57_V, "%s\n", (edge_attr_57_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_57_V, tvin_edge_attr_57_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_57_V_depth);
		sprintf(tvin_edge_attr_57_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_57_V, tvin_edge_attr_57_V);

		// release memory allocation
		delete [] edge_attr_57_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_58_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_58_V, tvin_edge_attr_58_V);

		sc_bv<16>* edge_attr_58_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_58_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (58) => (815) @ (64)
					for (int i_0 = 58; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_58_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_58_V, "%s\n", (edge_attr_58_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_58_V, tvin_edge_attr_58_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_58_V_depth);
		sprintf(tvin_edge_attr_58_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_58_V, tvin_edge_attr_58_V);

		// release memory allocation
		delete [] edge_attr_58_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_59_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_59_V, tvin_edge_attr_59_V);

		sc_bv<16>* edge_attr_59_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_59_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (59) => (815) @ (64)
					for (int i_0 = 59; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_59_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_59_V, "%s\n", (edge_attr_59_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_59_V, tvin_edge_attr_59_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_59_V_depth);
		sprintf(tvin_edge_attr_59_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_59_V, tvin_edge_attr_59_V);

		// release memory allocation
		delete [] edge_attr_59_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_60_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_60_V, tvin_edge_attr_60_V);

		sc_bv<16>* edge_attr_60_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_60_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (60) => (815) @ (64)
					for (int i_0 = 60; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_60_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_60_V, "%s\n", (edge_attr_60_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_60_V, tvin_edge_attr_60_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_60_V_depth);
		sprintf(tvin_edge_attr_60_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_60_V, tvin_edge_attr_60_V);

		// release memory allocation
		delete [] edge_attr_60_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_61_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_61_V, tvin_edge_attr_61_V);

		sc_bv<16>* edge_attr_61_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_61_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (61) => (815) @ (64)
					for (int i_0 = 61; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_61_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_61_V, "%s\n", (edge_attr_61_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_61_V, tvin_edge_attr_61_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_61_V_depth);
		sprintf(tvin_edge_attr_61_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_61_V, tvin_edge_attr_61_V);

		// release memory allocation
		delete [] edge_attr_61_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_62_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_62_V, tvin_edge_attr_62_V);

		sc_bv<16>* edge_attr_62_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_62_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (62) => (815) @ (64)
					for (int i_0 = 62; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_62_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_62_V, "%s\n", (edge_attr_62_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_62_V, tvin_edge_attr_62_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_62_V_depth);
		sprintf(tvin_edge_attr_62_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_62_V, tvin_edge_attr_62_V);

		// release memory allocation
		delete [] edge_attr_62_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_63_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_63_V, tvin_edge_attr_63_V);

		sc_bv<16>* edge_attr_63_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_attr_63_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(15, 0)
				{
					// carray: (63) => (815) @ (64)
					for (int i_0 = 63; i_0 <= 815; i_0 += 64)
					{
						// sub                   : i_0
						// ori_name              : edge_attr[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_attr[0]
						// regulate_c_name       : edge_attr_V
						// input_type_conversion : (edge_attr[i_0]).range().to_string(SC_BIN).c_str()
						if (&(edge_attr[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_attr_V_tmp_mem;
							edge_attr_V_tmp_mem = (edge_attr[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_63_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_attr_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_attr_63_V, "%s\n", (edge_attr_63_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_63_V, tvin_edge_attr_63_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_attr_63_V_depth);
		sprintf(tvin_edge_attr_63_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_63_V, tvin_edge_attr_63_V);

		// release memory allocation
		delete [] edge_attr_63_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_0_V, tvin_edge_index_0_V);

		sc_bv<16>* edge_index_0_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (0) => (384) @ (32)
					for (int i_0 = 0; i_0 <= 384; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_0_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_0_V, "%s\n", (edge_index_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_0_V, tvin_edge_index_0_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_0_V_depth);
		sprintf(tvin_edge_index_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_0_V, tvin_edge_index_0_V);

		// release memory allocation
		delete [] edge_index_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_1_V, tvin_edge_index_1_V);

		sc_bv<16>* edge_index_1_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_1_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (1) => (385) @ (32)
					for (int i_0 = 1; i_0 <= 385; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_1_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_1_V, "%s\n", (edge_index_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_1_V, tvin_edge_index_1_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_1_V_depth);
		sprintf(tvin_edge_index_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_1_V, tvin_edge_index_1_V);

		// release memory allocation
		delete [] edge_index_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_2_V, tvin_edge_index_2_V);

		sc_bv<16>* edge_index_2_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_2_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (2) => (386) @ (32)
					for (int i_0 = 2; i_0 <= 386; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_2_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_2_V, "%s\n", (edge_index_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_2_V, tvin_edge_index_2_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_2_V_depth);
		sprintf(tvin_edge_index_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_2_V, tvin_edge_index_2_V);

		// release memory allocation
		delete [] edge_index_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_3_V, tvin_edge_index_3_V);

		sc_bv<16>* edge_index_3_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_3_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (3) => (387) @ (32)
					for (int i_0 = 3; i_0 <= 387; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_3_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_3_V, "%s\n", (edge_index_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_3_V, tvin_edge_index_3_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_3_V_depth);
		sprintf(tvin_edge_index_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_3_V, tvin_edge_index_3_V);

		// release memory allocation
		delete [] edge_index_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_4_V, tvin_edge_index_4_V);

		sc_bv<16>* edge_index_4_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_4_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (4) => (388) @ (32)
					for (int i_0 = 4; i_0 <= 388; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_4_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_4_V, "%s\n", (edge_index_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_4_V, tvin_edge_index_4_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_4_V_depth);
		sprintf(tvin_edge_index_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_4_V, tvin_edge_index_4_V);

		// release memory allocation
		delete [] edge_index_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_5_V, tvin_edge_index_5_V);

		sc_bv<16>* edge_index_5_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_5_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (5) => (389) @ (32)
					for (int i_0 = 5; i_0 <= 389; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_5_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_5_V, "%s\n", (edge_index_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_5_V, tvin_edge_index_5_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_5_V_depth);
		sprintf(tvin_edge_index_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_5_V, tvin_edge_index_5_V);

		// release memory allocation
		delete [] edge_index_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_6_V, tvin_edge_index_6_V);

		sc_bv<16>* edge_index_6_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_6_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (6) => (390) @ (32)
					for (int i_0 = 6; i_0 <= 390; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_6_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_6_V, "%s\n", (edge_index_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_6_V, tvin_edge_index_6_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_6_V_depth);
		sprintf(tvin_edge_index_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_6_V, tvin_edge_index_6_V);

		// release memory allocation
		delete [] edge_index_6_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_7_V, tvin_edge_index_7_V);

		sc_bv<16>* edge_index_7_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_7_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (7) => (391) @ (32)
					for (int i_0 = 7; i_0 <= 391; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_7_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_7_V, "%s\n", (edge_index_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_7_V, tvin_edge_index_7_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_7_V_depth);
		sprintf(tvin_edge_index_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_7_V, tvin_edge_index_7_V);

		// release memory allocation
		delete [] edge_index_7_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_8_V, tvin_edge_index_8_V);

		sc_bv<16>* edge_index_8_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_8_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (8) => (392) @ (32)
					for (int i_0 = 8; i_0 <= 392; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_8_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_8_V, "%s\n", (edge_index_8_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_8_V, tvin_edge_index_8_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_8_V_depth);
		sprintf(tvin_edge_index_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_8_V, tvin_edge_index_8_V);

		// release memory allocation
		delete [] edge_index_8_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_9_V, tvin_edge_index_9_V);

		sc_bv<16>* edge_index_9_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_9_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (9) => (393) @ (32)
					for (int i_0 = 9; i_0 <= 393; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_9_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_9_V, "%s\n", (edge_index_9_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_9_V, tvin_edge_index_9_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_9_V_depth);
		sprintf(tvin_edge_index_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_9_V, tvin_edge_index_9_V);

		// release memory allocation
		delete [] edge_index_9_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_10_V, tvin_edge_index_10_V);

		sc_bv<16>* edge_index_10_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_10_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (10) => (394) @ (32)
					for (int i_0 = 10; i_0 <= 394; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_10_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_10_V, "%s\n", (edge_index_10_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_10_V, tvin_edge_index_10_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_10_V_depth);
		sprintf(tvin_edge_index_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_10_V, tvin_edge_index_10_V);

		// release memory allocation
		delete [] edge_index_10_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_11_V, tvin_edge_index_11_V);

		sc_bv<16>* edge_index_11_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_11_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (11) => (395) @ (32)
					for (int i_0 = 11; i_0 <= 395; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_11_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_11_V, "%s\n", (edge_index_11_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_11_V, tvin_edge_index_11_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_11_V_depth);
		sprintf(tvin_edge_index_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_11_V, tvin_edge_index_11_V);

		// release memory allocation
		delete [] edge_index_11_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_12_V, tvin_edge_index_12_V);

		sc_bv<16>* edge_index_12_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_12_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (12) => (396) @ (32)
					for (int i_0 = 12; i_0 <= 396; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_12_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_12_V, "%s\n", (edge_index_12_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_12_V, tvin_edge_index_12_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_12_V_depth);
		sprintf(tvin_edge_index_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_12_V, tvin_edge_index_12_V);

		// release memory allocation
		delete [] edge_index_12_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_13_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_13_V, tvin_edge_index_13_V);

		sc_bv<16>* edge_index_13_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_13_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (13) => (397) @ (32)
					for (int i_0 = 13; i_0 <= 397; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_13_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_13_V, "%s\n", (edge_index_13_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_13_V, tvin_edge_index_13_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_13_V_depth);
		sprintf(tvin_edge_index_13_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_13_V, tvin_edge_index_13_V);

		// release memory allocation
		delete [] edge_index_13_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_14_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_14_V, tvin_edge_index_14_V);

		sc_bv<16>* edge_index_14_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_14_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (14) => (398) @ (32)
					for (int i_0 = 14; i_0 <= 398; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_14_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_14_V, "%s\n", (edge_index_14_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_14_V, tvin_edge_index_14_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_14_V_depth);
		sprintf(tvin_edge_index_14_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_14_V, tvin_edge_index_14_V);

		// release memory allocation
		delete [] edge_index_14_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_15_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_15_V, tvin_edge_index_15_V);

		sc_bv<16>* edge_index_15_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_15_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (15) => (399) @ (32)
					for (int i_0 = 15; i_0 <= 399; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_15_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_15_V, "%s\n", (edge_index_15_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_15_V, tvin_edge_index_15_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_15_V_depth);
		sprintf(tvin_edge_index_15_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_15_V, tvin_edge_index_15_V);

		// release memory allocation
		delete [] edge_index_15_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_16_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_16_V, tvin_edge_index_16_V);

		sc_bv<16>* edge_index_16_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_16_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (16) => (400) @ (32)
					for (int i_0 = 16; i_0 <= 400; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_16_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_16_V, "%s\n", (edge_index_16_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_16_V, tvin_edge_index_16_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_16_V_depth);
		sprintf(tvin_edge_index_16_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_16_V, tvin_edge_index_16_V);

		// release memory allocation
		delete [] edge_index_16_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_17_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_17_V, tvin_edge_index_17_V);

		sc_bv<16>* edge_index_17_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_17_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (17) => (401) @ (32)
					for (int i_0 = 17; i_0 <= 401; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_17_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_17_V, "%s\n", (edge_index_17_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_17_V, tvin_edge_index_17_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_17_V_depth);
		sprintf(tvin_edge_index_17_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_17_V, tvin_edge_index_17_V);

		// release memory allocation
		delete [] edge_index_17_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_18_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_18_V, tvin_edge_index_18_V);

		sc_bv<16>* edge_index_18_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_18_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (18) => (402) @ (32)
					for (int i_0 = 18; i_0 <= 402; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_18_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_18_V, "%s\n", (edge_index_18_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_18_V, tvin_edge_index_18_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_18_V_depth);
		sprintf(tvin_edge_index_18_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_18_V, tvin_edge_index_18_V);

		// release memory allocation
		delete [] edge_index_18_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_19_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_19_V, tvin_edge_index_19_V);

		sc_bv<16>* edge_index_19_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_19_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (19) => (403) @ (32)
					for (int i_0 = 19; i_0 <= 403; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_19_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_19_V, "%s\n", (edge_index_19_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_19_V, tvin_edge_index_19_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_19_V_depth);
		sprintf(tvin_edge_index_19_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_19_V, tvin_edge_index_19_V);

		// release memory allocation
		delete [] edge_index_19_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_20_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_20_V, tvin_edge_index_20_V);

		sc_bv<16>* edge_index_20_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_20_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (20) => (404) @ (32)
					for (int i_0 = 20; i_0 <= 404; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_20_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_20_V, "%s\n", (edge_index_20_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_20_V, tvin_edge_index_20_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_20_V_depth);
		sprintf(tvin_edge_index_20_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_20_V, tvin_edge_index_20_V);

		// release memory allocation
		delete [] edge_index_20_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_21_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_21_V, tvin_edge_index_21_V);

		sc_bv<16>* edge_index_21_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_21_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (21) => (405) @ (32)
					for (int i_0 = 21; i_0 <= 405; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_21_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_21_V, "%s\n", (edge_index_21_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_21_V, tvin_edge_index_21_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_21_V_depth);
		sprintf(tvin_edge_index_21_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_21_V, tvin_edge_index_21_V);

		// release memory allocation
		delete [] edge_index_21_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_22_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_22_V, tvin_edge_index_22_V);

		sc_bv<16>* edge_index_22_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_22_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (22) => (406) @ (32)
					for (int i_0 = 22; i_0 <= 406; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_22_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_22_V, "%s\n", (edge_index_22_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_22_V, tvin_edge_index_22_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_22_V_depth);
		sprintf(tvin_edge_index_22_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_22_V, tvin_edge_index_22_V);

		// release memory allocation
		delete [] edge_index_22_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_23_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_23_V, tvin_edge_index_23_V);

		sc_bv<16>* edge_index_23_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: edge_index_23_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (23) => (407) @ (32)
					for (int i_0 = 23; i_0 <= 407; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_23_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_edge_index_23_V, "%s\n", (edge_index_23_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_23_V, tvin_edge_index_23_V);
		}

		tcl_file.set_num(13, &tcl_file.edge_index_23_V_depth);
		sprintf(tvin_edge_index_23_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_23_V, tvin_edge_index_23_V);

		// release memory allocation
		delete [] edge_index_23_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_24_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_24_V, tvin_edge_index_24_V);

		sc_bv<16>* edge_index_24_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_index_24_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (24) => (407) @ (32)
					for (int i_0 = 24; i_0 <= 407; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_24_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_index_24_V, "%s\n", (edge_index_24_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_24_V, tvin_edge_index_24_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_index_24_V_depth);
		sprintf(tvin_edge_index_24_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_24_V, tvin_edge_index_24_V);

		// release memory allocation
		delete [] edge_index_24_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_25_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_25_V, tvin_edge_index_25_V);

		sc_bv<16>* edge_index_25_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_index_25_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (25) => (407) @ (32)
					for (int i_0 = 25; i_0 <= 407; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_25_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_index_25_V, "%s\n", (edge_index_25_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_25_V, tvin_edge_index_25_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_index_25_V_depth);
		sprintf(tvin_edge_index_25_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_25_V, tvin_edge_index_25_V);

		// release memory allocation
		delete [] edge_index_25_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_26_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_26_V, tvin_edge_index_26_V);

		sc_bv<16>* edge_index_26_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_index_26_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (26) => (407) @ (32)
					for (int i_0 = 26; i_0 <= 407; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_26_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_index_26_V, "%s\n", (edge_index_26_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_26_V, tvin_edge_index_26_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_index_26_V_depth);
		sprintf(tvin_edge_index_26_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_26_V, tvin_edge_index_26_V);

		// release memory allocation
		delete [] edge_index_26_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_27_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_27_V, tvin_edge_index_27_V);

		sc_bv<16>* edge_index_27_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_index_27_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (27) => (407) @ (32)
					for (int i_0 = 27; i_0 <= 407; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_27_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_index_27_V, "%s\n", (edge_index_27_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_27_V, tvin_edge_index_27_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_index_27_V_depth);
		sprintf(tvin_edge_index_27_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_27_V, tvin_edge_index_27_V);

		// release memory allocation
		delete [] edge_index_27_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_28_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_28_V, tvin_edge_index_28_V);

		sc_bv<16>* edge_index_28_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_index_28_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (28) => (407) @ (32)
					for (int i_0 = 28; i_0 <= 407; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_28_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_index_28_V, "%s\n", (edge_index_28_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_28_V, tvin_edge_index_28_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_index_28_V_depth);
		sprintf(tvin_edge_index_28_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_28_V, tvin_edge_index_28_V);

		// release memory allocation
		delete [] edge_index_28_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_29_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_29_V, tvin_edge_index_29_V);

		sc_bv<16>* edge_index_29_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_index_29_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (29) => (407) @ (32)
					for (int i_0 = 29; i_0 <= 407; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_29_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_index_29_V, "%s\n", (edge_index_29_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_29_V, tvin_edge_index_29_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_index_29_V_depth);
		sprintf(tvin_edge_index_29_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_29_V, tvin_edge_index_29_V);

		// release memory allocation
		delete [] edge_index_29_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_30_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_30_V, tvin_edge_index_30_V);

		sc_bv<16>* edge_index_30_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_index_30_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (30) => (407) @ (32)
					for (int i_0 = 30; i_0 <= 407; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_30_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_index_30_V, "%s\n", (edge_index_30_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_30_V, tvin_edge_index_30_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_index_30_V_depth);
		sprintf(tvin_edge_index_30_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_30_V, tvin_edge_index_30_V);

		// release memory allocation
		delete [] edge_index_30_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_31_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_31_V, tvin_edge_index_31_V);

		sc_bv<16>* edge_index_31_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: edge_index_31_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(15, 0)
				{
					// carray: (31) => (407) @ (32)
					for (int i_0 = 31; i_0 <= 407; i_0 += 32)
					{
						// sub                   : i_0
						// ori_name              : edge_index[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : edge_index[0]
						// regulate_c_name       : edge_index_V
						// input_type_conversion : (edge_index[i_0]).to_string(2).c_str()
						if (&(edge_index[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> edge_index_V_tmp_mem;
							edge_index_V_tmp_mem = (edge_index[i_0]).to_string(2).c_str();
							edge_index_31_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = edge_index_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_edge_index_31_V, "%s\n", (edge_index_31_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_31_V, tvin_edge_index_31_V);
		}

		tcl_file.set_num(12, &tcl_file.edge_index_31_V_depth);
		sprintf(tvin_edge_index_31_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_31_V, tvin_edge_index_31_V);

		// release memory allocation
		delete [] edge_index_31_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_0_V, tvin_layer11_out_0_V);

		sc_bv<16>* layer11_out_0_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (0) => (192) @ (16)
					for (int i_0 = 0; i_0 <= 192; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_0_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_0_V, "%s\n", (layer11_out_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_0_V, tvin_layer11_out_0_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_0_V_depth);
		sprintf(tvin_layer11_out_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_0_V, tvin_layer11_out_0_V);

		// release memory allocation
		delete [] layer11_out_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_1_V, tvin_layer11_out_1_V);

		sc_bv<16>* layer11_out_1_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_1_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (1) => (193) @ (16)
					for (int i_0 = 1; i_0 <= 193; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_1_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_1_V, "%s\n", (layer11_out_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_1_V, tvin_layer11_out_1_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_1_V_depth);
		sprintf(tvin_layer11_out_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_1_V, tvin_layer11_out_1_V);

		// release memory allocation
		delete [] layer11_out_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_2_V, tvin_layer11_out_2_V);

		sc_bv<16>* layer11_out_2_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_2_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (2) => (194) @ (16)
					for (int i_0 = 2; i_0 <= 194; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_2_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_2_V, "%s\n", (layer11_out_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_2_V, tvin_layer11_out_2_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_2_V_depth);
		sprintf(tvin_layer11_out_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_2_V, tvin_layer11_out_2_V);

		// release memory allocation
		delete [] layer11_out_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_3_V, tvin_layer11_out_3_V);

		sc_bv<16>* layer11_out_3_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_3_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (3) => (195) @ (16)
					for (int i_0 = 3; i_0 <= 195; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_3_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_3_V, "%s\n", (layer11_out_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_3_V, tvin_layer11_out_3_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_3_V_depth);
		sprintf(tvin_layer11_out_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_3_V, tvin_layer11_out_3_V);

		// release memory allocation
		delete [] layer11_out_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_4_V, tvin_layer11_out_4_V);

		sc_bv<16>* layer11_out_4_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_4_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (4) => (196) @ (16)
					for (int i_0 = 4; i_0 <= 196; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_4_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_4_V, "%s\n", (layer11_out_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_4_V, tvin_layer11_out_4_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_4_V_depth);
		sprintf(tvin_layer11_out_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_4_V, tvin_layer11_out_4_V);

		// release memory allocation
		delete [] layer11_out_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_5_V, tvin_layer11_out_5_V);

		sc_bv<16>* layer11_out_5_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_5_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (5) => (197) @ (16)
					for (int i_0 = 5; i_0 <= 197; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_5_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_5_V, "%s\n", (layer11_out_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_5_V, tvin_layer11_out_5_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_5_V_depth);
		sprintf(tvin_layer11_out_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_5_V, tvin_layer11_out_5_V);

		// release memory allocation
		delete [] layer11_out_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_6_V, tvin_layer11_out_6_V);

		sc_bv<16>* layer11_out_6_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_6_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (6) => (198) @ (16)
					for (int i_0 = 6; i_0 <= 198; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_6_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_6_V, "%s\n", (layer11_out_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_6_V, tvin_layer11_out_6_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_6_V_depth);
		sprintf(tvin_layer11_out_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_6_V, tvin_layer11_out_6_V);

		// release memory allocation
		delete [] layer11_out_6_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_7_V, tvin_layer11_out_7_V);

		sc_bv<16>* layer11_out_7_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_7_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (7) => (199) @ (16)
					for (int i_0 = 7; i_0 <= 199; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_7_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_7_V, "%s\n", (layer11_out_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_7_V, tvin_layer11_out_7_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_7_V_depth);
		sprintf(tvin_layer11_out_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_7_V, tvin_layer11_out_7_V);

		// release memory allocation
		delete [] layer11_out_7_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_8_V, tvin_layer11_out_8_V);

		sc_bv<16>* layer11_out_8_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_8_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (8) => (200) @ (16)
					for (int i_0 = 8; i_0 <= 200; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_8_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_8_V, "%s\n", (layer11_out_8_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_8_V, tvin_layer11_out_8_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_8_V_depth);
		sprintf(tvin_layer11_out_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_8_V, tvin_layer11_out_8_V);

		// release memory allocation
		delete [] layer11_out_8_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_9_V, tvin_layer11_out_9_V);

		sc_bv<16>* layer11_out_9_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_9_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (9) => (201) @ (16)
					for (int i_0 = 9; i_0 <= 201; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_9_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_9_V, "%s\n", (layer11_out_9_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_9_V, tvin_layer11_out_9_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_9_V_depth);
		sprintf(tvin_layer11_out_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_9_V, tvin_layer11_out_9_V);

		// release memory allocation
		delete [] layer11_out_9_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_10_V, tvin_layer11_out_10_V);

		sc_bv<16>* layer11_out_10_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_10_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (10) => (202) @ (16)
					for (int i_0 = 10; i_0 <= 202; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_10_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_10_V, "%s\n", (layer11_out_10_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_10_V, tvin_layer11_out_10_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_10_V_depth);
		sprintf(tvin_layer11_out_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_10_V, tvin_layer11_out_10_V);

		// release memory allocation
		delete [] layer11_out_10_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_11_V, tvin_layer11_out_11_V);

		sc_bv<16>* layer11_out_11_V_tvin_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_11_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (11) => (203) @ (16)
					for (int i_0 = 11; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_11_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvin_layer11_out_11_V, "%s\n", (layer11_out_11_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_11_V, tvin_layer11_out_11_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_11_V_depth);
		sprintf(tvin_layer11_out_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_11_V, tvin_layer11_out_11_V);

		// release memory allocation
		delete [] layer11_out_11_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_12_V, tvin_layer11_out_12_V);

		sc_bv<16>* layer11_out_12_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: layer11_out_12_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (12) => (203) @ (16)
					for (int i_0 = 12; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_12_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_layer11_out_12_V, "%s\n", (layer11_out_12_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_12_V, tvin_layer11_out_12_V);
		}

		tcl_file.set_num(12, &tcl_file.layer11_out_12_V_depth);
		sprintf(tvin_layer11_out_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_12_V, tvin_layer11_out_12_V);

		// release memory allocation
		delete [] layer11_out_12_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_13_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_13_V, tvin_layer11_out_13_V);

		sc_bv<16>* layer11_out_13_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: layer11_out_13_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (13) => (203) @ (16)
					for (int i_0 = 13; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_13_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_layer11_out_13_V, "%s\n", (layer11_out_13_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_13_V, tvin_layer11_out_13_V);
		}

		tcl_file.set_num(12, &tcl_file.layer11_out_13_V_depth);
		sprintf(tvin_layer11_out_13_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_13_V, tvin_layer11_out_13_V);

		// release memory allocation
		delete [] layer11_out_13_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_14_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_14_V, tvin_layer11_out_14_V);

		sc_bv<16>* layer11_out_14_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: layer11_out_14_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (14) => (203) @ (16)
					for (int i_0 = 14; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_14_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_layer11_out_14_V, "%s\n", (layer11_out_14_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_14_V, tvin_layer11_out_14_V);
		}

		tcl_file.set_num(12, &tcl_file.layer11_out_14_V_depth);
		sprintf(tvin_layer11_out_14_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_14_V, tvin_layer11_out_14_V);

		// release memory allocation
		delete [] layer11_out_14_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_15_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_15_V, tvin_layer11_out_15_V);

		sc_bv<16>* layer11_out_15_V_tvin_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: layer11_out_15_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (15) => (203) @ (16)
					for (int i_0 = 15; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_15_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_layer11_out_15_V, "%s\n", (layer11_out_15_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_15_V, tvin_layer11_out_15_V);
		}

		tcl_file.set_num(12, &tcl_file.layer11_out_15_V_depth);
		sprintf(tvin_layer11_out_15_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_15_V, tvin_layer11_out_15_V);

		// release memory allocation
		delete [] layer11_out_15_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		myproject(node_attr, edge_attr, edge_index, layer11_out, const_size_in_1, const_size_in_2, const_size_in_3, const_size_out_1);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_layer11_out_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_0_V, tvout_layer11_out_0_V);

		sc_bv<16>* layer11_out_0_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (0) => (192) @ (16)
					for (int i_0 = 0; i_0 <= 192; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_0_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_0_V, "%s\n", (layer11_out_0_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_0_V, tvout_layer11_out_0_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_0_V_depth);
		sprintf(tvout_layer11_out_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_0_V, tvout_layer11_out_0_V);

		// release memory allocation
		delete [] layer11_out_0_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_1_V, tvout_layer11_out_1_V);

		sc_bv<16>* layer11_out_1_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_1_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (1) => (193) @ (16)
					for (int i_0 = 1; i_0 <= 193; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_1_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_1_V, "%s\n", (layer11_out_1_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_1_V, tvout_layer11_out_1_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_1_V_depth);
		sprintf(tvout_layer11_out_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_1_V, tvout_layer11_out_1_V);

		// release memory allocation
		delete [] layer11_out_1_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_2_V, tvout_layer11_out_2_V);

		sc_bv<16>* layer11_out_2_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_2_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (2) => (194) @ (16)
					for (int i_0 = 2; i_0 <= 194; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_2_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_2_V, "%s\n", (layer11_out_2_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_2_V, tvout_layer11_out_2_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_2_V_depth);
		sprintf(tvout_layer11_out_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_2_V, tvout_layer11_out_2_V);

		// release memory allocation
		delete [] layer11_out_2_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_3_V, tvout_layer11_out_3_V);

		sc_bv<16>* layer11_out_3_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_3_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (3) => (195) @ (16)
					for (int i_0 = 3; i_0 <= 195; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_3_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_3_V, "%s\n", (layer11_out_3_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_3_V, tvout_layer11_out_3_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_3_V_depth);
		sprintf(tvout_layer11_out_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_3_V, tvout_layer11_out_3_V);

		// release memory allocation
		delete [] layer11_out_3_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_4_V, tvout_layer11_out_4_V);

		sc_bv<16>* layer11_out_4_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_4_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (4) => (196) @ (16)
					for (int i_0 = 4; i_0 <= 196; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_4_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_4_V, "%s\n", (layer11_out_4_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_4_V, tvout_layer11_out_4_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_4_V_depth);
		sprintf(tvout_layer11_out_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_4_V, tvout_layer11_out_4_V);

		// release memory allocation
		delete [] layer11_out_4_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_5_V, tvout_layer11_out_5_V);

		sc_bv<16>* layer11_out_5_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_5_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (5) => (197) @ (16)
					for (int i_0 = 5; i_0 <= 197; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_5_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_5_V, "%s\n", (layer11_out_5_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_5_V, tvout_layer11_out_5_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_5_V_depth);
		sprintf(tvout_layer11_out_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_5_V, tvout_layer11_out_5_V);

		// release memory allocation
		delete [] layer11_out_5_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_6_V, tvout_layer11_out_6_V);

		sc_bv<16>* layer11_out_6_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_6_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (6) => (198) @ (16)
					for (int i_0 = 6; i_0 <= 198; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_6_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_6_V, "%s\n", (layer11_out_6_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_6_V, tvout_layer11_out_6_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_6_V_depth);
		sprintf(tvout_layer11_out_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_6_V, tvout_layer11_out_6_V);

		// release memory allocation
		delete [] layer11_out_6_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_7_V, tvout_layer11_out_7_V);

		sc_bv<16>* layer11_out_7_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_7_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (7) => (199) @ (16)
					for (int i_0 = 7; i_0 <= 199; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_7_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_7_V, "%s\n", (layer11_out_7_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_7_V, tvout_layer11_out_7_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_7_V_depth);
		sprintf(tvout_layer11_out_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_7_V, tvout_layer11_out_7_V);

		// release memory allocation
		delete [] layer11_out_7_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_8_V, tvout_layer11_out_8_V);

		sc_bv<16>* layer11_out_8_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_8_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (8) => (200) @ (16)
					for (int i_0 = 8; i_0 <= 200; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_8_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_8_V, "%s\n", (layer11_out_8_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_8_V, tvout_layer11_out_8_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_8_V_depth);
		sprintf(tvout_layer11_out_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_8_V, tvout_layer11_out_8_V);

		// release memory allocation
		delete [] layer11_out_8_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_9_V, tvout_layer11_out_9_V);

		sc_bv<16>* layer11_out_9_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_9_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (9) => (201) @ (16)
					for (int i_0 = 9; i_0 <= 201; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_9_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_9_V, "%s\n", (layer11_out_9_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_9_V, tvout_layer11_out_9_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_9_V_depth);
		sprintf(tvout_layer11_out_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_9_V, tvout_layer11_out_9_V);

		// release memory allocation
		delete [] layer11_out_9_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_10_V, tvout_layer11_out_10_V);

		sc_bv<16>* layer11_out_10_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_10_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (10) => (202) @ (16)
					for (int i_0 = 10; i_0 <= 202; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_10_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_10_V, "%s\n", (layer11_out_10_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_10_V, tvout_layer11_out_10_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_10_V_depth);
		sprintf(tvout_layer11_out_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_10_V, tvout_layer11_out_10_V);

		// release memory allocation
		delete [] layer11_out_10_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_11_V, tvout_layer11_out_11_V);

		sc_bv<16>* layer11_out_11_V_tvout_wrapc_buffer = new sc_bv<16>[13];

		// RTL Name: layer11_out_11_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (11) => (203) @ (16)
					for (int i_0 = 11; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_11_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 13; i++)
		{
			sprintf(tvout_layer11_out_11_V, "%s\n", (layer11_out_11_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_11_V, tvout_layer11_out_11_V);
		}

		tcl_file.set_num(13, &tcl_file.layer11_out_11_V_depth);
		sprintf(tvout_layer11_out_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_11_V, tvout_layer11_out_11_V);

		// release memory allocation
		delete [] layer11_out_11_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_12_V, tvout_layer11_out_12_V);

		sc_bv<16>* layer11_out_12_V_tvout_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: layer11_out_12_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (12) => (203) @ (16)
					for (int i_0 = 12; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_12_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvout_layer11_out_12_V, "%s\n", (layer11_out_12_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_12_V, tvout_layer11_out_12_V);
		}

		tcl_file.set_num(12, &tcl_file.layer11_out_12_V_depth);
		sprintf(tvout_layer11_out_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_12_V, tvout_layer11_out_12_V);

		// release memory allocation
		delete [] layer11_out_12_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_13_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_13_V, tvout_layer11_out_13_V);

		sc_bv<16>* layer11_out_13_V_tvout_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: layer11_out_13_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (13) => (203) @ (16)
					for (int i_0 = 13; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_13_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvout_layer11_out_13_V, "%s\n", (layer11_out_13_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_13_V, tvout_layer11_out_13_V);
		}

		tcl_file.set_num(12, &tcl_file.layer11_out_13_V_depth);
		sprintf(tvout_layer11_out_13_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_13_V, tvout_layer11_out_13_V);

		// release memory allocation
		delete [] layer11_out_13_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_14_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_14_V, tvout_layer11_out_14_V);

		sc_bv<16>* layer11_out_14_V_tvout_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: layer11_out_14_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (14) => (203) @ (16)
					for (int i_0 = 14; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_14_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvout_layer11_out_14_V, "%s\n", (layer11_out_14_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_14_V, tvout_layer11_out_14_V);
		}

		tcl_file.set_num(12, &tcl_file.layer11_out_14_V_depth);
		sprintf(tvout_layer11_out_14_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_14_V, tvout_layer11_out_14_V);

		// release memory allocation
		delete [] layer11_out_14_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_15_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_15_V, tvout_layer11_out_15_V);

		sc_bv<16>* layer11_out_15_V_tvout_wrapc_buffer = new sc_bv<16>[12];

		// RTL Name: layer11_out_15_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(15, 0)
				{
					// carray: (15) => (203) @ (16)
					for (int i_0 = 15; i_0 <= 203; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : layer11_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer11_out[0]
						// regulate_c_name       : layer11_out_V
						// input_type_conversion : (layer11_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer11_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer11_out_V_tmp_mem;
							layer11_out_V_tmp_mem = (layer11_out[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_15_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer11_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvout_layer11_out_15_V, "%s\n", (layer11_out_15_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_15_V, tvout_layer11_out_15_V);
		}

		tcl_file.set_num(12, &tcl_file.layer11_out_15_V_depth);
		sprintf(tvout_layer11_out_15_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_15_V, tvout_layer11_out_15_V);

		// release memory allocation
		delete [] layer11_out_15_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_in_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		sc_bv<16>* const_size_in_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_in_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_in_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_in_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_in_1
						// regulate_c_name       : const_size_in_1
						// input_type_conversion : const_size_in_1
						if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_in_1_tmp_mem;
							const_size_in_1_tmp_mem = const_size_in_1;
							const_size_in_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_in_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_in_1, "%s\n", (const_size_in_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_in_1_depth);
		sprintf(tvout_const_size_in_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		// release memory allocation
		delete [] const_size_in_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_in_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_2, tvout_const_size_in_2);

		sc_bv<16>* const_size_in_2_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_in_2
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_in_2(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_in_2
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_in_2
						// regulate_c_name       : const_size_in_2
						// input_type_conversion : const_size_in_2
						if (&(const_size_in_2) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_in_2_tmp_mem;
							const_size_in_2_tmp_mem = const_size_in_2;
							const_size_in_2_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_in_2_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_in_2, "%s\n", (const_size_in_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_in_2, tvout_const_size_in_2);
		}

		tcl_file.set_num(1, &tcl_file.const_size_in_2_depth);
		sprintf(tvout_const_size_in_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_2, tvout_const_size_in_2);

		// release memory allocation
		delete [] const_size_in_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_in_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_3, tvout_const_size_in_3);

		sc_bv<16>* const_size_in_3_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_in_3
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_in_3(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_in_3
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_in_3
						// regulate_c_name       : const_size_in_3
						// input_type_conversion : const_size_in_3
						if (&(const_size_in_3) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_in_3_tmp_mem;
							const_size_in_3_tmp_mem = const_size_in_3;
							const_size_in_3_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_in_3_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_in_3, "%s\n", (const_size_in_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_in_3, tvout_const_size_in_3);
		}

		tcl_file.set_num(1, &tcl_file.const_size_in_3_depth);
		sprintf(tvout_const_size_in_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_3, tvout_const_size_in_3);

		// release memory allocation
		delete [] const_size_in_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_out_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		sc_bv<16>* const_size_out_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_out_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_out_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_out_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_out_1
						// regulate_c_name       : const_size_out_1
						// input_type_conversion : const_size_out_1
						if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_out_1_tmp_mem;
							const_size_out_1_tmp_mem = const_size_out_1;
							const_size_out_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_out_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_out_1, "%s\n", (const_size_out_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_out_1_depth);
		sprintf(tvout_const_size_out_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		// release memory allocation
		delete [] const_size_out_1_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "node_attr_0_V"
		delete [] tvin_node_attr_0_V;
		// release memory allocation: "node_attr_1_V"
		delete [] tvin_node_attr_1_V;
		// release memory allocation: "node_attr_2_V"
		delete [] tvin_node_attr_2_V;
		// release memory allocation: "node_attr_3_V"
		delete [] tvin_node_attr_3_V;
		// release memory allocation: "node_attr_4_V"
		delete [] tvin_node_attr_4_V;
		// release memory allocation: "node_attr_5_V"
		delete [] tvin_node_attr_5_V;
		// release memory allocation: "node_attr_6_V"
		delete [] tvin_node_attr_6_V;
		// release memory allocation: "node_attr_7_V"
		delete [] tvin_node_attr_7_V;
		// release memory allocation: "node_attr_8_V"
		delete [] tvin_node_attr_8_V;
		// release memory allocation: "node_attr_9_V"
		delete [] tvin_node_attr_9_V;
		// release memory allocation: "node_attr_10_V"
		delete [] tvin_node_attr_10_V;
		// release memory allocation: "node_attr_11_V"
		delete [] tvin_node_attr_11_V;
		// release memory allocation: "node_attr_12_V"
		delete [] tvin_node_attr_12_V;
		// release memory allocation: "node_attr_13_V"
		delete [] tvin_node_attr_13_V;
		// release memory allocation: "node_attr_14_V"
		delete [] tvin_node_attr_14_V;
		// release memory allocation: "node_attr_15_V"
		delete [] tvin_node_attr_15_V;
		// release memory allocation: "node_attr_16_V"
		delete [] tvin_node_attr_16_V;
		// release memory allocation: "node_attr_17_V"
		delete [] tvin_node_attr_17_V;
		// release memory allocation: "node_attr_18_V"
		delete [] tvin_node_attr_18_V;
		// release memory allocation: "node_attr_19_V"
		delete [] tvin_node_attr_19_V;
		// release memory allocation: "node_attr_20_V"
		delete [] tvin_node_attr_20_V;
		// release memory allocation: "node_attr_21_V"
		delete [] tvin_node_attr_21_V;
		// release memory allocation: "node_attr_22_V"
		delete [] tvin_node_attr_22_V;
		// release memory allocation: "node_attr_23_V"
		delete [] tvin_node_attr_23_V;
		// release memory allocation: "node_attr_24_V"
		delete [] tvin_node_attr_24_V;
		// release memory allocation: "node_attr_25_V"
		delete [] tvin_node_attr_25_V;
		// release memory allocation: "node_attr_26_V"
		delete [] tvin_node_attr_26_V;
		// release memory allocation: "node_attr_27_V"
		delete [] tvin_node_attr_27_V;
		// release memory allocation: "node_attr_28_V"
		delete [] tvin_node_attr_28_V;
		// release memory allocation: "node_attr_29_V"
		delete [] tvin_node_attr_29_V;
		// release memory allocation: "node_attr_30_V"
		delete [] tvin_node_attr_30_V;
		// release memory allocation: "node_attr_31_V"
		delete [] tvin_node_attr_31_V;
		// release memory allocation: "node_attr_32_V"
		delete [] tvin_node_attr_32_V;
		// release memory allocation: "node_attr_33_V"
		delete [] tvin_node_attr_33_V;
		// release memory allocation: "node_attr_34_V"
		delete [] tvin_node_attr_34_V;
		// release memory allocation: "node_attr_35_V"
		delete [] tvin_node_attr_35_V;
		// release memory allocation: "node_attr_36_V"
		delete [] tvin_node_attr_36_V;
		// release memory allocation: "node_attr_37_V"
		delete [] tvin_node_attr_37_V;
		// release memory allocation: "node_attr_38_V"
		delete [] tvin_node_attr_38_V;
		// release memory allocation: "node_attr_39_V"
		delete [] tvin_node_attr_39_V;
		// release memory allocation: "node_attr_40_V"
		delete [] tvin_node_attr_40_V;
		// release memory allocation: "node_attr_41_V"
		delete [] tvin_node_attr_41_V;
		// release memory allocation: "node_attr_42_V"
		delete [] tvin_node_attr_42_V;
		// release memory allocation: "node_attr_43_V"
		delete [] tvin_node_attr_43_V;
		// release memory allocation: "node_attr_44_V"
		delete [] tvin_node_attr_44_V;
		// release memory allocation: "node_attr_45_V"
		delete [] tvin_node_attr_45_V;
		// release memory allocation: "node_attr_46_V"
		delete [] tvin_node_attr_46_V;
		// release memory allocation: "node_attr_47_V"
		delete [] tvin_node_attr_47_V;
		// release memory allocation: "edge_attr_0_V"
		delete [] tvin_edge_attr_0_V;
		// release memory allocation: "edge_attr_1_V"
		delete [] tvin_edge_attr_1_V;
		// release memory allocation: "edge_attr_2_V"
		delete [] tvin_edge_attr_2_V;
		// release memory allocation: "edge_attr_3_V"
		delete [] tvin_edge_attr_3_V;
		// release memory allocation: "edge_attr_4_V"
		delete [] tvin_edge_attr_4_V;
		// release memory allocation: "edge_attr_5_V"
		delete [] tvin_edge_attr_5_V;
		// release memory allocation: "edge_attr_6_V"
		delete [] tvin_edge_attr_6_V;
		// release memory allocation: "edge_attr_7_V"
		delete [] tvin_edge_attr_7_V;
		// release memory allocation: "edge_attr_8_V"
		delete [] tvin_edge_attr_8_V;
		// release memory allocation: "edge_attr_9_V"
		delete [] tvin_edge_attr_9_V;
		// release memory allocation: "edge_attr_10_V"
		delete [] tvin_edge_attr_10_V;
		// release memory allocation: "edge_attr_11_V"
		delete [] tvin_edge_attr_11_V;
		// release memory allocation: "edge_attr_12_V"
		delete [] tvin_edge_attr_12_V;
		// release memory allocation: "edge_attr_13_V"
		delete [] tvin_edge_attr_13_V;
		// release memory allocation: "edge_attr_14_V"
		delete [] tvin_edge_attr_14_V;
		// release memory allocation: "edge_attr_15_V"
		delete [] tvin_edge_attr_15_V;
		// release memory allocation: "edge_attr_16_V"
		delete [] tvin_edge_attr_16_V;
		// release memory allocation: "edge_attr_17_V"
		delete [] tvin_edge_attr_17_V;
		// release memory allocation: "edge_attr_18_V"
		delete [] tvin_edge_attr_18_V;
		// release memory allocation: "edge_attr_19_V"
		delete [] tvin_edge_attr_19_V;
		// release memory allocation: "edge_attr_20_V"
		delete [] tvin_edge_attr_20_V;
		// release memory allocation: "edge_attr_21_V"
		delete [] tvin_edge_attr_21_V;
		// release memory allocation: "edge_attr_22_V"
		delete [] tvin_edge_attr_22_V;
		// release memory allocation: "edge_attr_23_V"
		delete [] tvin_edge_attr_23_V;
		// release memory allocation: "edge_attr_24_V"
		delete [] tvin_edge_attr_24_V;
		// release memory allocation: "edge_attr_25_V"
		delete [] tvin_edge_attr_25_V;
		// release memory allocation: "edge_attr_26_V"
		delete [] tvin_edge_attr_26_V;
		// release memory allocation: "edge_attr_27_V"
		delete [] tvin_edge_attr_27_V;
		// release memory allocation: "edge_attr_28_V"
		delete [] tvin_edge_attr_28_V;
		// release memory allocation: "edge_attr_29_V"
		delete [] tvin_edge_attr_29_V;
		// release memory allocation: "edge_attr_30_V"
		delete [] tvin_edge_attr_30_V;
		// release memory allocation: "edge_attr_31_V"
		delete [] tvin_edge_attr_31_V;
		// release memory allocation: "edge_attr_32_V"
		delete [] tvin_edge_attr_32_V;
		// release memory allocation: "edge_attr_33_V"
		delete [] tvin_edge_attr_33_V;
		// release memory allocation: "edge_attr_34_V"
		delete [] tvin_edge_attr_34_V;
		// release memory allocation: "edge_attr_35_V"
		delete [] tvin_edge_attr_35_V;
		// release memory allocation: "edge_attr_36_V"
		delete [] tvin_edge_attr_36_V;
		// release memory allocation: "edge_attr_37_V"
		delete [] tvin_edge_attr_37_V;
		// release memory allocation: "edge_attr_38_V"
		delete [] tvin_edge_attr_38_V;
		// release memory allocation: "edge_attr_39_V"
		delete [] tvin_edge_attr_39_V;
		// release memory allocation: "edge_attr_40_V"
		delete [] tvin_edge_attr_40_V;
		// release memory allocation: "edge_attr_41_V"
		delete [] tvin_edge_attr_41_V;
		// release memory allocation: "edge_attr_42_V"
		delete [] tvin_edge_attr_42_V;
		// release memory allocation: "edge_attr_43_V"
		delete [] tvin_edge_attr_43_V;
		// release memory allocation: "edge_attr_44_V"
		delete [] tvin_edge_attr_44_V;
		// release memory allocation: "edge_attr_45_V"
		delete [] tvin_edge_attr_45_V;
		// release memory allocation: "edge_attr_46_V"
		delete [] tvin_edge_attr_46_V;
		// release memory allocation: "edge_attr_47_V"
		delete [] tvin_edge_attr_47_V;
		// release memory allocation: "edge_attr_48_V"
		delete [] tvin_edge_attr_48_V;
		// release memory allocation: "edge_attr_49_V"
		delete [] tvin_edge_attr_49_V;
		// release memory allocation: "edge_attr_50_V"
		delete [] tvin_edge_attr_50_V;
		// release memory allocation: "edge_attr_51_V"
		delete [] tvin_edge_attr_51_V;
		// release memory allocation: "edge_attr_52_V"
		delete [] tvin_edge_attr_52_V;
		// release memory allocation: "edge_attr_53_V"
		delete [] tvin_edge_attr_53_V;
		// release memory allocation: "edge_attr_54_V"
		delete [] tvin_edge_attr_54_V;
		// release memory allocation: "edge_attr_55_V"
		delete [] tvin_edge_attr_55_V;
		// release memory allocation: "edge_attr_56_V"
		delete [] tvin_edge_attr_56_V;
		// release memory allocation: "edge_attr_57_V"
		delete [] tvin_edge_attr_57_V;
		// release memory allocation: "edge_attr_58_V"
		delete [] tvin_edge_attr_58_V;
		// release memory allocation: "edge_attr_59_V"
		delete [] tvin_edge_attr_59_V;
		// release memory allocation: "edge_attr_60_V"
		delete [] tvin_edge_attr_60_V;
		// release memory allocation: "edge_attr_61_V"
		delete [] tvin_edge_attr_61_V;
		// release memory allocation: "edge_attr_62_V"
		delete [] tvin_edge_attr_62_V;
		// release memory allocation: "edge_attr_63_V"
		delete [] tvin_edge_attr_63_V;
		// release memory allocation: "edge_index_0_V"
		delete [] tvin_edge_index_0_V;
		// release memory allocation: "edge_index_1_V"
		delete [] tvin_edge_index_1_V;
		// release memory allocation: "edge_index_2_V"
		delete [] tvin_edge_index_2_V;
		// release memory allocation: "edge_index_3_V"
		delete [] tvin_edge_index_3_V;
		// release memory allocation: "edge_index_4_V"
		delete [] tvin_edge_index_4_V;
		// release memory allocation: "edge_index_5_V"
		delete [] tvin_edge_index_5_V;
		// release memory allocation: "edge_index_6_V"
		delete [] tvin_edge_index_6_V;
		// release memory allocation: "edge_index_7_V"
		delete [] tvin_edge_index_7_V;
		// release memory allocation: "edge_index_8_V"
		delete [] tvin_edge_index_8_V;
		// release memory allocation: "edge_index_9_V"
		delete [] tvin_edge_index_9_V;
		// release memory allocation: "edge_index_10_V"
		delete [] tvin_edge_index_10_V;
		// release memory allocation: "edge_index_11_V"
		delete [] tvin_edge_index_11_V;
		// release memory allocation: "edge_index_12_V"
		delete [] tvin_edge_index_12_V;
		// release memory allocation: "edge_index_13_V"
		delete [] tvin_edge_index_13_V;
		// release memory allocation: "edge_index_14_V"
		delete [] tvin_edge_index_14_V;
		// release memory allocation: "edge_index_15_V"
		delete [] tvin_edge_index_15_V;
		// release memory allocation: "edge_index_16_V"
		delete [] tvin_edge_index_16_V;
		// release memory allocation: "edge_index_17_V"
		delete [] tvin_edge_index_17_V;
		// release memory allocation: "edge_index_18_V"
		delete [] tvin_edge_index_18_V;
		// release memory allocation: "edge_index_19_V"
		delete [] tvin_edge_index_19_V;
		// release memory allocation: "edge_index_20_V"
		delete [] tvin_edge_index_20_V;
		// release memory allocation: "edge_index_21_V"
		delete [] tvin_edge_index_21_V;
		// release memory allocation: "edge_index_22_V"
		delete [] tvin_edge_index_22_V;
		// release memory allocation: "edge_index_23_V"
		delete [] tvin_edge_index_23_V;
		// release memory allocation: "edge_index_24_V"
		delete [] tvin_edge_index_24_V;
		// release memory allocation: "edge_index_25_V"
		delete [] tvin_edge_index_25_V;
		// release memory allocation: "edge_index_26_V"
		delete [] tvin_edge_index_26_V;
		// release memory allocation: "edge_index_27_V"
		delete [] tvin_edge_index_27_V;
		// release memory allocation: "edge_index_28_V"
		delete [] tvin_edge_index_28_V;
		// release memory allocation: "edge_index_29_V"
		delete [] tvin_edge_index_29_V;
		// release memory allocation: "edge_index_30_V"
		delete [] tvin_edge_index_30_V;
		// release memory allocation: "edge_index_31_V"
		delete [] tvin_edge_index_31_V;
		// release memory allocation: "layer11_out_0_V"
		delete [] tvout_layer11_out_0_V;
		delete [] tvin_layer11_out_0_V;
		// release memory allocation: "layer11_out_1_V"
		delete [] tvout_layer11_out_1_V;
		delete [] tvin_layer11_out_1_V;
		// release memory allocation: "layer11_out_2_V"
		delete [] tvout_layer11_out_2_V;
		delete [] tvin_layer11_out_2_V;
		// release memory allocation: "layer11_out_3_V"
		delete [] tvout_layer11_out_3_V;
		delete [] tvin_layer11_out_3_V;
		// release memory allocation: "layer11_out_4_V"
		delete [] tvout_layer11_out_4_V;
		delete [] tvin_layer11_out_4_V;
		// release memory allocation: "layer11_out_5_V"
		delete [] tvout_layer11_out_5_V;
		delete [] tvin_layer11_out_5_V;
		// release memory allocation: "layer11_out_6_V"
		delete [] tvout_layer11_out_6_V;
		delete [] tvin_layer11_out_6_V;
		// release memory allocation: "layer11_out_7_V"
		delete [] tvout_layer11_out_7_V;
		delete [] tvin_layer11_out_7_V;
		// release memory allocation: "layer11_out_8_V"
		delete [] tvout_layer11_out_8_V;
		delete [] tvin_layer11_out_8_V;
		// release memory allocation: "layer11_out_9_V"
		delete [] tvout_layer11_out_9_V;
		delete [] tvin_layer11_out_9_V;
		// release memory allocation: "layer11_out_10_V"
		delete [] tvout_layer11_out_10_V;
		delete [] tvin_layer11_out_10_V;
		// release memory allocation: "layer11_out_11_V"
		delete [] tvout_layer11_out_11_V;
		delete [] tvin_layer11_out_11_V;
		// release memory allocation: "layer11_out_12_V"
		delete [] tvout_layer11_out_12_V;
		delete [] tvin_layer11_out_12_V;
		// release memory allocation: "layer11_out_13_V"
		delete [] tvout_layer11_out_13_V;
		delete [] tvin_layer11_out_13_V;
		// release memory allocation: "layer11_out_14_V"
		delete [] tvout_layer11_out_14_V;
		delete [] tvin_layer11_out_14_V;
		// release memory allocation: "layer11_out_15_V"
		delete [] tvout_layer11_out_15_V;
		delete [] tvin_layer11_out_15_V;
		// release memory allocation: "const_size_in_1"
		delete [] tvout_const_size_in_1;
		// release memory allocation: "const_size_in_2"
		delete [] tvout_const_size_in_2;
		// release memory allocation: "const_size_in_3"
		delete [] tvout_const_size_in_3;
		// release memory allocation: "const_size_out_1"
		delete [] tvout_const_size_out_1;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

