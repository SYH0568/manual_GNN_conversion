// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_resource_rf_leq_nin_0_0_0_0_0 (
        ap_clk,
        ap_rst,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        data_4_V_read,
        data_5_V_read,
        data_6_V_read,
        data_7_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_ce
);


input   ap_clk;
input   ap_rst;
input  [15:0] data_0_V_read;
input  [15:0] data_1_V_read;
input  [15:0] data_2_V_read;
input  [15:0] data_3_V_read;
input  [15:0] data_4_V_read;
input  [15:0] data_5_V_read;
input  [15:0] data_6_V_read;
input  [15:0] data_7_V_read;
output  [15:0] ap_return_0;
output  [15:0] ap_return_1;
output  [15:0] ap_return_2;
output  [15:0] ap_return_3;
input   ap_ce;

reg[15:0] ap_return_0;
reg[15:0] ap_return_1;
reg[15:0] ap_return_2;
reg[15:0] ap_return_3;

reg   [15:0] data_3_V_read_13_reg_1163;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg  signed [15:0] data_2_V_read_13_reg_1168;
reg  signed [15:0] data_1_V_read_13_reg_1177;
reg  signed [15:0] data_0_V_read_13_reg_1184;
wire   [15:0] add_ln703_69_fu_298_p2;
reg   [15:0] add_ln703_69_reg_1190;
reg   [12:0] trunc_ln708_12_reg_1195;
reg   [14:0] trunc_ln708_13_reg_1200;
wire   [15:0] add_ln703_76_fu_388_p2;
reg   [15:0] add_ln703_76_reg_1205;
wire   [15:0] add_ln703_85_fu_497_p2;
reg   [15:0] add_ln703_85_reg_1210;
wire   [15:0] add_ln703_93_fu_614_p2;
reg   [15:0] add_ln703_93_reg_1215;
wire    ap_block_pp0_stage0;
wire  signed [15:0] shl_ln_fu_180_p1;
wire   [19:0] shl_ln_fu_180_p3;
wire  signed [15:0] shl_ln1118_1_fu_192_p1;
wire   [16:0] shl_ln1118_1_fu_192_p3;
wire  signed [20:0] sext_ln1118_8_fu_200_p1;
wire  signed [20:0] sext_ln1118_7_fu_188_p1;
wire   [20:0] sub_ln1118_fu_204_p2;
wire   [12:0] trunc_ln708_4_fu_210_p4;
wire  signed [22:0] mul_ln1118_4_fu_1030_p2;
wire   [14:0] trunc_ln708_5_fu_228_p4;
wire  signed [15:0] sext_ln1118_11_fu_241_p0;
wire  signed [23:0] mul_ln1118_5_fu_1037_p2;
wire  signed [15:0] tmp_fu_262_p1;
wire   [13:0] tmp_fu_262_p4;
wire  signed [15:0] sext_ln708_2_fu_220_p1;
wire  signed [15:0] sext_ln708_3_fu_237_p1;
wire  signed [14:0] sext_ln703_fu_272_p1;
wire   [14:0] add_ln703_67_fu_282_p2;
wire  signed [15:0] sext_ln703_24_fu_288_p1;
wire   [15:0] trunc_ln708_6_fu_249_p4;
wire   [15:0] add_ln703_68_fu_292_p2;
wire   [15:0] add_ln703_66_fu_276_p2;
wire   [20:0] sub_ln1118_1_fu_304_p2;
wire  signed [15:0] shl_ln1118_4_fu_320_p1;
wire   [21:0] shl_ln1118_4_fu_320_p3;
wire  signed [15:0] shl_ln1118_5_fu_332_p1;
wire   [16:0] shl_ln1118_5_fu_332_p3;
wire  signed [22:0] sext_ln1118_15_fu_328_p1;
wire  signed [22:0] sext_ln1118_16_fu_340_p1;
wire   [22:0] sub_ln1118_2_fu_344_p2;
wire  signed [23:0] mul_ln1118_9_fu_1044_p2;
wire  signed [22:0] mul_ln1118_10_fu_1051_p2;
wire   [14:0] trunc_ln708_15_fu_369_p4;
wire  signed [15:0] sext_ln708_10_fu_378_p1;
wire   [15:0] add_ln703_75_fu_382_p2;
wire   [15:0] trunc_ln708_14_fu_360_p4;
wire  signed [15:0] trunc_ln708_20_fu_394_p1;
wire   [7:0] trunc_ln708_20_fu_394_p4;
wire  signed [15:0] trunc_ln708_21_fu_408_p1;
wire   [9:0] trunc_ln708_21_fu_408_p4;
wire  signed [22:0] mul_ln1118_13_fu_1058_p2;
wire   [14:0] trunc_ln708_22_fu_422_p4;
wire  signed [15:0] shl_ln1118_9_fu_435_p1;
wire  signed [18:0] shl_ln1118_9_fu_435_p3;
wire  signed [19:0] sext_ln1118_21_fu_447_p1;
wire   [19:0] sub_ln1118_6_fu_451_p2;
wire   [11:0] tmp_258_fu_457_p4;
wire  signed [15:0] sext_ln708_15_fu_418_p1;
wire  signed [15:0] sext_ln708_16_fu_431_p1;
wire  signed [8:0] sext_ln708_14_fu_404_p1;
wire   [8:0] add_ln703_83_fu_477_p2;
wire  signed [12:0] sext_ln703_26_fu_483_p1;
wire  signed [12:0] sext_ln703_25_fu_467_p1;
wire   [12:0] add_ln703_84_fu_487_p2;
wire  signed [15:0] sext_ln703_27_fu_493_p1;
wire   [15:0] add_ln703_82_fu_471_p2;
wire  signed [21:0] mul_ln1118_18_fu_1065_p2;
wire   [13:0] trunc_ln708_28_fu_503_p4;
wire  signed [15:0] shl_ln1118_10_fu_516_p1;
wire   [21:0] shl_ln1118_10_fu_516_p3;
wire  signed [15:0] shl_ln1118_11_fu_528_p1;
wire   [18:0] shl_ln1118_11_fu_528_p3;
wire  signed [22:0] sext_ln1118_22_fu_524_p1;
wire  signed [22:0] sext_ln1118_23_fu_536_p1;
wire   [22:0] sub_ln1118_7_fu_540_p2;
wire   [14:0] trunc_ln708_29_fu_546_p4;
wire  signed [15:0] shl_ln1118_12_fu_560_p1;
wire   [20:0] shl_ln1118_12_fu_560_p3;
wire  signed [21:0] sext_ln1118_20_fu_443_p1;
wire  signed [21:0] sext_ln1118_24_fu_568_p1;
wire   [21:0] sub_ln1118_8_fu_572_p2;
wire   [13:0] tmp_259_fu_578_p4;
wire  signed [15:0] sext_ln708_19_fu_512_p1;
wire  signed [14:0] sext_ln703_28_fu_588_p1;
wire   [14:0] add_ln703_91_fu_598_p2;
wire  signed [15:0] sext_ln703_29_fu_604_p1;
wire  signed [15:0] sext_ln708_20_fu_556_p1;
wire   [15:0] add_ln703_92_fu_608_p2;
wire   [15:0] add_ln703_90_fu_592_p2;
wire  signed [22:0] mul_ln1118_fu_1072_p2;
wire   [14:0] trunc_ln_fu_626_p4;
wire  signed [23:0] mul_ln1118_1_fu_1079_p2;
wire  signed [23:0] mul_ln1118_2_fu_1086_p2;
wire  signed [22:0] mul_ln1118_3_fu_1093_p2;
wire   [14:0] trunc_ln708_3_fu_669_p4;
wire  signed [15:0] sext_ln708_fu_635_p1;
wire   [15:0] trunc_ln708_1_fu_642_p4;
wire   [15:0] trunc_ln708_2_fu_657_p4;
wire  signed [15:0] sext_ln708_1_fu_678_p1;
wire   [15:0] add_ln703_64_fu_688_p2;
wire   [15:0] add_ln703_fu_682_p2;
wire   [15:0] add_ln703_65_fu_694_p2;
wire  signed [23:0] mul_ln1118_6_fu_1100_p2;
wire  signed [23:0] mul_ln1118_7_fu_1107_p2;
wire   [18:0] shl_ln1118_2_fu_723_p3;
wire   [16:0] shl_ln1118_3_fu_734_p3;
wire  signed [19:0] sext_ln1118_14_fu_741_p1;
wire  signed [19:0] sext_ln1118_13_fu_730_p1;
wire   [19:0] add_ln1118_fu_745_p2;
wire   [11:0] trunc_ln708_10_fu_751_p4;
wire  signed [22:0] mul_ln1118_8_fu_1114_p2;
wire   [14:0] trunc_ln708_11_fu_765_p4;
wire   [15:0] trunc_ln708_8_fu_705_p4;
wire   [15:0] trunc_ln708_9_fu_714_p4;
wire  signed [15:0] sext_ln708_6_fu_761_p1;
wire  signed [15:0] sext_ln708_7_fu_774_p1;
wire   [15:0] add_ln703_72_fu_790_p2;
wire   [15:0] add_ln703_71_fu_784_p2;
wire  signed [15:0] sext_ln708_8_fu_778_p1;
wire  signed [15:0] sext_ln708_9_fu_781_p1;
wire   [15:0] add_ln703_74_fu_802_p2;
wire   [15:0] add_ln703_77_fu_808_p2;
wire   [15:0] add_ln703_73_fu_796_p2;
wire  signed [23:0] mul_ln1118_11_fu_1121_p2;
wire   [18:0] shl_ln1118_6_fu_828_p3;
wire  signed [19:0] sext_ln1118_17_fu_835_p1;
wire   [16:0] shl_ln1118_7_fu_845_p3;
wire   [19:0] sub_ln1118_3_fu_839_p2;
wire  signed [19:0] sext_ln1118_18_fu_852_p1;
wire   [19:0] sub_ln1118_4_fu_856_p2;
wire   [11:0] trunc_ln708_17_fu_862_p4;
wire   [17:0] shl_ln1118_8_fu_876_p3;
wire  signed [18:0] sext_ln1118_19_fu_883_p1;
wire  signed [18:0] sext_ln1118_4_fu_654_p1;
wire   [18:0] sub_ln1118_5_fu_887_p2;
wire   [10:0] trunc_ln708_18_fu_893_p4;
wire  signed [22:0] mul_ln1118_12_fu_1128_p2;
wire   [14:0] trunc_ln708_19_fu_907_p4;
wire   [15:0] trunc_ln708_16_fu_819_p4;
wire  signed [15:0] sext_ln708_11_fu_872_p1;
wire  signed [15:0] sext_ln708_12_fu_903_p1;
wire  signed [15:0] sext_ln708_13_fu_916_p1;
wire   [15:0] add_ln703_80_fu_926_p2;
wire   [15:0] add_ln703_79_fu_920_p2;
wire   [15:0] add_ln703_81_fu_932_p2;
wire  signed [23:0] mul_ln1118_14_fu_1135_p2;
wire  signed [23:0] mul_ln1118_15_fu_1142_p2;
wire  signed [23:0] mul_ln1118_16_fu_1149_p2;
wire  signed [22:0] mul_ln1118_17_fu_1156_p2;
wire   [14:0] trunc_ln708_27_fu_970_p4;
wire   [15:0] trunc_ln708_24_fu_943_p4;
wire   [15:0] trunc_ln708_25_fu_952_p4;
wire   [15:0] trunc_ln708_26_fu_961_p4;
wire  signed [15:0] sext_ln708_18_fu_979_p1;
wire   [15:0] add_ln703_88_fu_989_p2;
wire   [15:0] add_ln703_87_fu_983_p2;
wire   [15:0] add_ln703_89_fu_995_p2;
wire   [15:0] add_ln703_318_fu_700_p2;
wire   [15:0] acc_1_V_fu_813_p2;
wire   [15:0] acc_2_V_fu_938_p2;
wire   [15:0] acc_3_V_fu_1001_p2;
wire  signed [6:0] mul_ln1118_4_fu_1030_p1;
wire  signed [15:0] mul_ln1118_5_fu_1037_p0;
wire  signed [23:0] sext_ln1118_11_fu_241_p1;
wire  signed [10:0] mul_ln1118_5_fu_1037_p1;
wire  signed [15:0] mul_ln1118_9_fu_1044_p0;
wire   [10:0] mul_ln1118_9_fu_1044_p1;
wire   [6:0] mul_ln1118_10_fu_1051_p1;
wire  signed [6:0] mul_ln1118_13_fu_1058_p1;
wire  signed [5:0] mul_ln1118_18_fu_1065_p1;
wire   [6:0] mul_ln1118_fu_1072_p1;
wire  signed [15:0] mul_ln1118_1_fu_1079_p0;
wire  signed [23:0] sext_ln1118_2_fu_639_p1;
wire  signed [10:0] mul_ln1118_1_fu_1079_p1;
wire  signed [15:0] mul_ln1118_2_fu_1086_p0;
wire  signed [23:0] sext_ln1118_3_fu_651_p1;
wire   [7:0] mul_ln1118_2_fu_1086_p1;
wire  signed [15:0] mul_ln1118_3_fu_1093_p0;
wire  signed [22:0] sext_ln1118_5_fu_666_p1;
wire   [6:0] mul_ln1118_3_fu_1093_p1;
wire  signed [15:0] mul_ln1118_6_fu_1100_p0;
wire  signed [23:0] sext_ln1118_fu_620_p1;
wire  signed [7:0] mul_ln1118_6_fu_1100_p1;
wire  signed [15:0] mul_ln1118_7_fu_1107_p0;
wire   [11:0] mul_ln1118_7_fu_1107_p1;
wire  signed [15:0] mul_ln1118_8_fu_1114_p0;
wire   [6:0] mul_ln1118_8_fu_1114_p1;
wire  signed [15:0] mul_ln1118_11_fu_1121_p0;
wire   [8:0] mul_ln1118_11_fu_1121_p1;
wire  signed [15:0] mul_ln1118_12_fu_1128_p0;
wire   [6:0] mul_ln1118_12_fu_1128_p1;
wire  signed [15:0] mul_ln1118_14_fu_1135_p0;
wire  signed [8:0] mul_ln1118_14_fu_1135_p1;
wire  signed [15:0] mul_ln1118_15_fu_1142_p0;
wire   [8:0] mul_ln1118_15_fu_1142_p1;
wire  signed [15:0] mul_ln1118_16_fu_1149_p0;
wire  signed [8:0] mul_ln1118_16_fu_1149_p1;
wire  signed [15:0] mul_ln1118_17_fu_1156_p0;
wire  signed [6:0] mul_ln1118_17_fu_1156_p1;
reg    ap_ce_reg;
reg   [15:0] ap_return_0_int_reg;
reg   [15:0] ap_return_1_int_reg;
reg   [15:0] ap_return_2_int_reg;
reg   [15:0] ap_return_3_int_reg;

myproject_mul_mul_16s_7s_23_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 23 ))
myproject_mul_mul_16s_7s_23_1_0_U815(
    .din0(data_5_V_read),
    .din1(mul_ln1118_4_fu_1030_p1),
    .dout(mul_ln1118_4_fu_1030_p2)
);

myproject_mul_mul_16s_11s_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_11s_24_1_0_U816(
    .din0(mul_ln1118_5_fu_1037_p0),
    .din1(mul_ln1118_5_fu_1037_p1),
    .dout(mul_ln1118_5_fu_1037_p2)
);

myproject_mul_mul_16s_11ns_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_11ns_24_1_0_U817(
    .din0(mul_ln1118_9_fu_1044_p0),
    .din1(mul_ln1118_9_fu_1044_p1),
    .dout(mul_ln1118_9_fu_1044_p2)
);

myproject_mul_mul_16s_7ns_23_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 23 ))
myproject_mul_mul_16s_7ns_23_1_0_U818(
    .din0(data_7_V_read),
    .din1(mul_ln1118_10_fu_1051_p1),
    .dout(mul_ln1118_10_fu_1051_p2)
);

myproject_mul_mul_16s_7s_23_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 23 ))
myproject_mul_mul_16s_7s_23_1_0_U819(
    .din0(data_6_V_read),
    .din1(mul_ln1118_13_fu_1058_p1),
    .dout(mul_ln1118_13_fu_1058_p2)
);

myproject_mul_mul_16s_6s_22_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 6 ),
    .dout_WIDTH( 22 ))
myproject_mul_mul_16s_6s_22_1_0_U820(
    .din0(data_4_V_read),
    .din1(mul_ln1118_18_fu_1065_p1),
    .dout(mul_ln1118_18_fu_1065_p2)
);

myproject_mul_mul_16s_7ns_23_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 23 ))
myproject_mul_mul_16s_7ns_23_1_0_U821(
    .din0(data_0_V_read_13_reg_1184),
    .din1(mul_ln1118_fu_1072_p1),
    .dout(mul_ln1118_fu_1072_p2)
);

myproject_mul_mul_16s_11s_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_11s_24_1_0_U822(
    .din0(mul_ln1118_1_fu_1079_p0),
    .din1(mul_ln1118_1_fu_1079_p1),
    .dout(mul_ln1118_1_fu_1079_p2)
);

myproject_mul_mul_16s_8ns_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_8ns_24_1_0_U823(
    .din0(mul_ln1118_2_fu_1086_p0),
    .din1(mul_ln1118_2_fu_1086_p1),
    .dout(mul_ln1118_2_fu_1086_p2)
);

myproject_mul_mul_16s_7ns_23_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 23 ))
myproject_mul_mul_16s_7ns_23_1_0_U824(
    .din0(mul_ln1118_3_fu_1093_p0),
    .din1(mul_ln1118_3_fu_1093_p1),
    .dout(mul_ln1118_3_fu_1093_p2)
);

myproject_mul_mul_16s_8s_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_8s_24_1_0_U825(
    .din0(mul_ln1118_6_fu_1100_p0),
    .din1(mul_ln1118_6_fu_1100_p1),
    .dout(mul_ln1118_6_fu_1100_p2)
);

myproject_mul_mul_16s_12ns_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 12 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_12ns_24_1_0_U826(
    .din0(mul_ln1118_7_fu_1107_p0),
    .din1(mul_ln1118_7_fu_1107_p1),
    .dout(mul_ln1118_7_fu_1107_p2)
);

myproject_mul_mul_16s_7ns_23_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 23 ))
myproject_mul_mul_16s_7ns_23_1_0_U827(
    .din0(mul_ln1118_8_fu_1114_p0),
    .din1(mul_ln1118_8_fu_1114_p1),
    .dout(mul_ln1118_8_fu_1114_p2)
);

myproject_mul_mul_16s_9ns_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 9 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_9ns_24_1_0_U828(
    .din0(mul_ln1118_11_fu_1121_p0),
    .din1(mul_ln1118_11_fu_1121_p1),
    .dout(mul_ln1118_11_fu_1121_p2)
);

myproject_mul_mul_16s_7ns_23_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 23 ))
myproject_mul_mul_16s_7ns_23_1_0_U829(
    .din0(mul_ln1118_12_fu_1128_p0),
    .din1(mul_ln1118_12_fu_1128_p1),
    .dout(mul_ln1118_12_fu_1128_p2)
);

myproject_mul_mul_16s_9s_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 9 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_9s_24_1_0_U830(
    .din0(mul_ln1118_14_fu_1135_p0),
    .din1(mul_ln1118_14_fu_1135_p1),
    .dout(mul_ln1118_14_fu_1135_p2)
);

myproject_mul_mul_16s_9ns_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 9 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_9ns_24_1_0_U831(
    .din0(mul_ln1118_15_fu_1142_p0),
    .din1(mul_ln1118_15_fu_1142_p1),
    .dout(mul_ln1118_15_fu_1142_p2)
);

myproject_mul_mul_16s_9s_24_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 9 ),
    .dout_WIDTH( 24 ))
myproject_mul_mul_16s_9s_24_1_0_U832(
    .din0(mul_ln1118_16_fu_1149_p0),
    .din1(mul_ln1118_16_fu_1149_p1),
    .dout(mul_ln1118_16_fu_1149_p2)
);

myproject_mul_mul_16s_7s_23_1_0 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 23 ))
myproject_mul_mul_16s_7s_23_1_0_U833(
    .din0(mul_ln1118_17_fu_1156_p0),
    .din1(mul_ln1118_17_fu_1156_p1),
    .dout(mul_ln1118_17_fu_1156_p2)
);

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if (((1'b1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln703_69_reg_1190 <= add_ln703_69_fu_298_p2;
        add_ln703_76_reg_1205 <= add_ln703_76_fu_388_p2;
        add_ln703_85_reg_1210 <= add_ln703_85_fu_497_p2;
        add_ln703_93_reg_1215 <= add_ln703_93_fu_614_p2;
        data_0_V_read_13_reg_1184 <= data_0_V_read;
        data_1_V_read_13_reg_1177 <= data_1_V_read;
        data_2_V_read_13_reg_1168 <= data_2_V_read;
        data_3_V_read_13_reg_1163 <= data_3_V_read;
        trunc_ln708_12_reg_1195 <= {{sub_ln1118_1_fu_304_p2[20:8]}};
        trunc_ln708_13_reg_1200 <= {{sub_ln1118_2_fu_344_p2[22:8]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_0_int_reg <= add_ln703_318_fu_700_p2;
        ap_return_1_int_reg <= acc_1_V_fu_813_p2;
        ap_return_2_int_reg <= acc_2_V_fu_938_p2;
        ap_return_3_int_reg <= acc_3_V_fu_1001_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_0 = ap_return_0_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_0 = add_ln703_318_fu_700_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_1 = ap_return_1_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_1 = acc_1_V_fu_813_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_2 = ap_return_2_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_2 = acc_2_V_fu_938_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_3 = ap_return_3_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_3 = acc_3_V_fu_1001_p2;
    end
end

assign acc_1_V_fu_813_p2 = (add_ln703_77_fu_808_p2 + add_ln703_73_fu_796_p2);

assign acc_2_V_fu_938_p2 = (add_ln703_85_reg_1210 + add_ln703_81_fu_932_p2);

assign acc_3_V_fu_1001_p2 = (add_ln703_93_reg_1215 + add_ln703_89_fu_995_p2);

assign add_ln1118_fu_745_p2 = ($signed(sext_ln1118_14_fu_741_p1) + $signed(sext_ln1118_13_fu_730_p1));

assign add_ln703_318_fu_700_p2 = (add_ln703_69_reg_1190 + add_ln703_65_fu_694_p2);

assign add_ln703_64_fu_688_p2 = ($signed(trunc_ln708_2_fu_657_p4) + $signed(sext_ln708_1_fu_678_p1));

assign add_ln703_65_fu_694_p2 = (add_ln703_64_fu_688_p2 + add_ln703_fu_682_p2);

assign add_ln703_66_fu_276_p2 = ($signed(sext_ln708_2_fu_220_p1) + $signed(sext_ln708_3_fu_237_p1));

assign add_ln703_67_fu_282_p2 = ($signed(sext_ln703_fu_272_p1) + $signed(15'd32702));

assign add_ln703_68_fu_292_p2 = ($signed(sext_ln703_24_fu_288_p1) + $signed(trunc_ln708_6_fu_249_p4));

assign add_ln703_69_fu_298_p2 = (add_ln703_68_fu_292_p2 + add_ln703_66_fu_276_p2);

assign add_ln703_71_fu_784_p2 = (trunc_ln708_8_fu_705_p4 + trunc_ln708_9_fu_714_p4);

assign add_ln703_72_fu_790_p2 = ($signed(sext_ln708_6_fu_761_p1) + $signed(sext_ln708_7_fu_774_p1));

assign add_ln703_73_fu_796_p2 = (add_ln703_72_fu_790_p2 + add_ln703_71_fu_784_p2);

assign add_ln703_74_fu_802_p2 = ($signed(sext_ln708_8_fu_778_p1) + $signed(sext_ln708_9_fu_781_p1));

assign add_ln703_75_fu_382_p2 = ($signed(sext_ln708_10_fu_378_p1) + $signed(16'd65468));

assign add_ln703_76_fu_388_p2 = (add_ln703_75_fu_382_p2 + trunc_ln708_14_fu_360_p4);

assign add_ln703_77_fu_808_p2 = (add_ln703_76_reg_1205 + add_ln703_74_fu_802_p2);

assign add_ln703_79_fu_920_p2 = ($signed(trunc_ln708_16_fu_819_p4) + $signed(sext_ln708_11_fu_872_p1));

assign add_ln703_80_fu_926_p2 = ($signed(sext_ln708_12_fu_903_p1) + $signed(sext_ln708_13_fu_916_p1));

assign add_ln703_81_fu_932_p2 = (add_ln703_80_fu_926_p2 + add_ln703_79_fu_920_p2);

assign add_ln703_82_fu_471_p2 = ($signed(sext_ln708_15_fu_418_p1) + $signed(sext_ln708_16_fu_431_p1));

assign add_ln703_83_fu_477_p2 = ($signed(sext_ln708_14_fu_404_p1) + $signed(9'd103));

assign add_ln703_84_fu_487_p2 = ($signed(sext_ln703_26_fu_483_p1) + $signed(sext_ln703_25_fu_467_p1));

assign add_ln703_85_fu_497_p2 = ($signed(sext_ln703_27_fu_493_p1) + $signed(add_ln703_82_fu_471_p2));

assign add_ln703_87_fu_983_p2 = (trunc_ln708_24_fu_943_p4 + trunc_ln708_25_fu_952_p4);

assign add_ln703_88_fu_989_p2 = ($signed(trunc_ln708_26_fu_961_p4) + $signed(sext_ln708_18_fu_979_p1));

assign add_ln703_89_fu_995_p2 = (add_ln703_88_fu_989_p2 + add_ln703_87_fu_983_p2);

assign add_ln703_90_fu_592_p2 = ($signed(sext_ln708_19_fu_512_p1) + $signed(sext_ln708_3_fu_237_p1));

assign add_ln703_91_fu_598_p2 = ($signed(sext_ln703_28_fu_588_p1) + $signed(15'd32694));

assign add_ln703_92_fu_608_p2 = ($signed(sext_ln703_29_fu_604_p1) + $signed(sext_ln708_20_fu_556_p1));

assign add_ln703_93_fu_614_p2 = (add_ln703_92_fu_608_p2 + add_ln703_90_fu_592_p2);

assign add_ln703_fu_682_p2 = ($signed(sext_ln708_fu_635_p1) + $signed(trunc_ln708_1_fu_642_p4));

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign mul_ln1118_10_fu_1051_p1 = 23'd39;

assign mul_ln1118_11_fu_1121_p0 = sext_ln1118_fu_620_p1;

assign mul_ln1118_11_fu_1121_p1 = 24'd174;

assign mul_ln1118_12_fu_1128_p0 = sext_ln1118_5_fu_666_p1;

assign mul_ln1118_12_fu_1128_p1 = 23'd49;

assign mul_ln1118_13_fu_1058_p1 = 23'd8388550;

assign mul_ln1118_14_fu_1135_p0 = sext_ln1118_fu_620_p1;

assign mul_ln1118_14_fu_1135_p1 = 24'd16776999;

assign mul_ln1118_15_fu_1142_p0 = sext_ln1118_2_fu_639_p1;

assign mul_ln1118_15_fu_1142_p1 = 24'd145;

assign mul_ln1118_16_fu_1149_p0 = sext_ln1118_3_fu_651_p1;

assign mul_ln1118_16_fu_1149_p1 = 24'd16777066;

assign mul_ln1118_17_fu_1156_p0 = sext_ln1118_5_fu_666_p1;

assign mul_ln1118_17_fu_1156_p1 = 23'd8388558;

assign mul_ln1118_18_fu_1065_p1 = 22'd4194278;

assign mul_ln1118_1_fu_1079_p0 = sext_ln1118_2_fu_639_p1;

assign mul_ln1118_1_fu_1079_p1 = 24'd16776202;

assign mul_ln1118_2_fu_1086_p0 = sext_ln1118_3_fu_651_p1;

assign mul_ln1118_2_fu_1086_p1 = 24'd85;

assign mul_ln1118_3_fu_1093_p0 = sext_ln1118_5_fu_666_p1;

assign mul_ln1118_3_fu_1093_p1 = 23'd39;

assign mul_ln1118_4_fu_1030_p1 = 23'd8388566;

assign mul_ln1118_5_fu_1037_p0 = sext_ln1118_11_fu_241_p1;

assign mul_ln1118_5_fu_1037_p1 = 24'd16776648;

assign mul_ln1118_6_fu_1100_p0 = sext_ln1118_fu_620_p1;

assign mul_ln1118_6_fu_1100_p1 = 24'd16777127;

assign mul_ln1118_7_fu_1107_p0 = sext_ln1118_2_fu_639_p1;

assign mul_ln1118_7_fu_1107_p1 = 24'd1391;

assign mul_ln1118_8_fu_1114_p0 = sext_ln1118_5_fu_666_p1;

assign mul_ln1118_8_fu_1114_p1 = 23'd45;

assign mul_ln1118_9_fu_1044_p0 = sext_ln1118_11_fu_241_p1;

assign mul_ln1118_9_fu_1044_p1 = 24'd688;

assign mul_ln1118_fu_1072_p1 = 23'd47;

assign sext_ln1118_11_fu_241_p0 = data_6_V_read;

assign sext_ln1118_11_fu_241_p1 = sext_ln1118_11_fu_241_p0;

assign sext_ln1118_13_fu_730_p1 = $signed(shl_ln1118_2_fu_723_p3);

assign sext_ln1118_14_fu_741_p1 = $signed(shl_ln1118_3_fu_734_p3);

assign sext_ln1118_15_fu_328_p1 = $signed(shl_ln1118_4_fu_320_p3);

assign sext_ln1118_16_fu_340_p1 = $signed(shl_ln1118_5_fu_332_p3);

assign sext_ln1118_17_fu_835_p1 = $signed(shl_ln1118_6_fu_828_p3);

assign sext_ln1118_18_fu_852_p1 = $signed(shl_ln1118_7_fu_845_p3);

assign sext_ln1118_19_fu_883_p1 = $signed(shl_ln1118_8_fu_876_p3);

assign sext_ln1118_20_fu_443_p1 = shl_ln1118_9_fu_435_p3;

assign sext_ln1118_21_fu_447_p1 = shl_ln1118_9_fu_435_p3;

assign sext_ln1118_22_fu_524_p1 = $signed(shl_ln1118_10_fu_516_p3);

assign sext_ln1118_23_fu_536_p1 = $signed(shl_ln1118_11_fu_528_p3);

assign sext_ln1118_24_fu_568_p1 = $signed(shl_ln1118_12_fu_560_p3);

assign sext_ln1118_2_fu_639_p1 = data_1_V_read_13_reg_1177;

assign sext_ln1118_3_fu_651_p1 = data_2_V_read_13_reg_1168;

assign sext_ln1118_4_fu_654_p1 = data_2_V_read_13_reg_1168;

assign sext_ln1118_5_fu_666_p1 = $signed(data_3_V_read_13_reg_1163);

assign sext_ln1118_7_fu_188_p1 = $signed(shl_ln_fu_180_p3);

assign sext_ln1118_8_fu_200_p1 = $signed(shl_ln1118_1_fu_192_p3);

assign sext_ln1118_fu_620_p1 = data_0_V_read_13_reg_1184;

assign sext_ln703_24_fu_288_p1 = $signed(add_ln703_67_fu_282_p2);

assign sext_ln703_25_fu_467_p1 = $signed(tmp_258_fu_457_p4);

assign sext_ln703_26_fu_483_p1 = $signed(add_ln703_83_fu_477_p2);

assign sext_ln703_27_fu_493_p1 = $signed(add_ln703_84_fu_487_p2);

assign sext_ln703_28_fu_588_p1 = $signed(tmp_259_fu_578_p4);

assign sext_ln703_29_fu_604_p1 = $signed(add_ln703_91_fu_598_p2);

assign sext_ln703_fu_272_p1 = $signed(tmp_fu_262_p4);

assign sext_ln708_10_fu_378_p1 = $signed(trunc_ln708_15_fu_369_p4);

assign sext_ln708_11_fu_872_p1 = $signed(trunc_ln708_17_fu_862_p4);

assign sext_ln708_12_fu_903_p1 = $signed(trunc_ln708_18_fu_893_p4);

assign sext_ln708_13_fu_916_p1 = $signed(trunc_ln708_19_fu_907_p4);

assign sext_ln708_14_fu_404_p1 = $signed(trunc_ln708_20_fu_394_p4);

assign sext_ln708_15_fu_418_p1 = $signed(trunc_ln708_21_fu_408_p4);

assign sext_ln708_16_fu_431_p1 = $signed(trunc_ln708_22_fu_422_p4);

assign sext_ln708_18_fu_979_p1 = $signed(trunc_ln708_27_fu_970_p4);

assign sext_ln708_19_fu_512_p1 = $signed(trunc_ln708_28_fu_503_p4);

assign sext_ln708_1_fu_678_p1 = $signed(trunc_ln708_3_fu_669_p4);

assign sext_ln708_20_fu_556_p1 = $signed(trunc_ln708_29_fu_546_p4);

assign sext_ln708_2_fu_220_p1 = $signed(trunc_ln708_4_fu_210_p4);

assign sext_ln708_3_fu_237_p1 = $signed(trunc_ln708_5_fu_228_p4);

assign sext_ln708_6_fu_761_p1 = $signed(trunc_ln708_10_fu_751_p4);

assign sext_ln708_7_fu_774_p1 = $signed(trunc_ln708_11_fu_765_p4);

assign sext_ln708_8_fu_778_p1 = $signed(trunc_ln708_12_reg_1195);

assign sext_ln708_9_fu_781_p1 = $signed(trunc_ln708_13_reg_1200);

assign sext_ln708_fu_635_p1 = $signed(trunc_ln_fu_626_p4);

assign shl_ln1118_10_fu_516_p1 = data_6_V_read;

assign shl_ln1118_10_fu_516_p3 = {{shl_ln1118_10_fu_516_p1}, {6'd0}};

assign shl_ln1118_11_fu_528_p1 = data_6_V_read;

assign shl_ln1118_11_fu_528_p3 = {{shl_ln1118_11_fu_528_p1}, {3'd0}};

assign shl_ln1118_12_fu_560_p1 = data_7_V_read;

assign shl_ln1118_12_fu_560_p3 = {{shl_ln1118_12_fu_560_p1}, {5'd0}};

assign shl_ln1118_1_fu_192_p1 = data_4_V_read;

assign shl_ln1118_1_fu_192_p3 = {{shl_ln1118_1_fu_192_p1}, {1'd0}};

assign shl_ln1118_2_fu_723_p3 = {{data_2_V_read_13_reg_1168}, {3'd0}};

assign shl_ln1118_3_fu_734_p3 = {{data_2_V_read_13_reg_1168}, {1'd0}};

assign shl_ln1118_4_fu_320_p1 = data_5_V_read;

assign shl_ln1118_4_fu_320_p3 = {{shl_ln1118_4_fu_320_p1}, {6'd0}};

assign shl_ln1118_5_fu_332_p1 = data_5_V_read;

assign shl_ln1118_5_fu_332_p3 = {{shl_ln1118_5_fu_332_p1}, {1'd0}};

assign shl_ln1118_6_fu_828_p3 = {{data_1_V_read_13_reg_1177}, {3'd0}};

assign shl_ln1118_7_fu_845_p3 = {{data_1_V_read_13_reg_1177}, {1'd0}};

assign shl_ln1118_8_fu_876_p3 = {{data_2_V_read_13_reg_1168}, {2'd0}};

assign shl_ln1118_9_fu_435_p1 = data_7_V_read;

assign shl_ln1118_9_fu_435_p3 = {{shl_ln1118_9_fu_435_p1}, {3'd0}};

assign shl_ln_fu_180_p1 = data_4_V_read;

assign shl_ln_fu_180_p3 = {{shl_ln_fu_180_p1}, {4'd0}};

assign sub_ln1118_1_fu_304_p2 = ($signed(sext_ln1118_7_fu_188_p1) - $signed(sext_ln1118_8_fu_200_p1));

assign sub_ln1118_2_fu_344_p2 = ($signed(sext_ln1118_15_fu_328_p1) - $signed(sext_ln1118_16_fu_340_p1));

assign sub_ln1118_3_fu_839_p2 = ($signed(20'd0) - $signed(sext_ln1118_17_fu_835_p1));

assign sub_ln1118_4_fu_856_p2 = ($signed(sub_ln1118_3_fu_839_p2) - $signed(sext_ln1118_18_fu_852_p1));

assign sub_ln1118_5_fu_887_p2 = ($signed(sext_ln1118_19_fu_883_p1) - $signed(sext_ln1118_4_fu_654_p1));

assign sub_ln1118_6_fu_451_p2 = ($signed(20'd0) - $signed(sext_ln1118_21_fu_447_p1));

assign sub_ln1118_7_fu_540_p2 = ($signed(sext_ln1118_22_fu_524_p1) - $signed(sext_ln1118_23_fu_536_p1));

assign sub_ln1118_8_fu_572_p2 = ($signed(sext_ln1118_20_fu_443_p1) - $signed(sext_ln1118_24_fu_568_p1));

assign sub_ln1118_fu_204_p2 = ($signed(sext_ln1118_8_fu_200_p1) - $signed(sext_ln1118_7_fu_188_p1));

assign tmp_258_fu_457_p4 = {{sub_ln1118_6_fu_451_p2[19:8]}};

assign tmp_259_fu_578_p4 = {{sub_ln1118_8_fu_572_p2[21:8]}};

assign tmp_fu_262_p1 = data_7_V_read;

assign tmp_fu_262_p4 = {{tmp_fu_262_p1[15:2]}};

assign trunc_ln708_10_fu_751_p4 = {{add_ln1118_fu_745_p2[19:8]}};

assign trunc_ln708_11_fu_765_p4 = {{mul_ln1118_8_fu_1114_p2[22:8]}};

assign trunc_ln708_14_fu_360_p4 = {{mul_ln1118_9_fu_1044_p2[23:8]}};

assign trunc_ln708_15_fu_369_p4 = {{mul_ln1118_10_fu_1051_p2[22:8]}};

assign trunc_ln708_16_fu_819_p4 = {{mul_ln1118_11_fu_1121_p2[23:8]}};

assign trunc_ln708_17_fu_862_p4 = {{sub_ln1118_4_fu_856_p2[19:8]}};

assign trunc_ln708_18_fu_893_p4 = {{sub_ln1118_5_fu_887_p2[18:8]}};

assign trunc_ln708_19_fu_907_p4 = {{mul_ln1118_12_fu_1128_p2[22:8]}};

assign trunc_ln708_1_fu_642_p4 = {{mul_ln1118_1_fu_1079_p2[23:8]}};

assign trunc_ln708_20_fu_394_p1 = data_4_V_read;

assign trunc_ln708_20_fu_394_p4 = {{trunc_ln708_20_fu_394_p1[15:8]}};

assign trunc_ln708_21_fu_408_p1 = data_5_V_read;

assign trunc_ln708_21_fu_408_p4 = {{trunc_ln708_21_fu_408_p1[15:6]}};

assign trunc_ln708_22_fu_422_p4 = {{mul_ln1118_13_fu_1058_p2[22:8]}};

assign trunc_ln708_24_fu_943_p4 = {{mul_ln1118_14_fu_1135_p2[23:8]}};

assign trunc_ln708_25_fu_952_p4 = {{mul_ln1118_15_fu_1142_p2[23:8]}};

assign trunc_ln708_26_fu_961_p4 = {{mul_ln1118_16_fu_1149_p2[23:8]}};

assign trunc_ln708_27_fu_970_p4 = {{mul_ln1118_17_fu_1156_p2[22:8]}};

assign trunc_ln708_28_fu_503_p4 = {{mul_ln1118_18_fu_1065_p2[21:8]}};

assign trunc_ln708_29_fu_546_p4 = {{sub_ln1118_7_fu_540_p2[22:8]}};

assign trunc_ln708_2_fu_657_p4 = {{mul_ln1118_2_fu_1086_p2[23:8]}};

assign trunc_ln708_3_fu_669_p4 = {{mul_ln1118_3_fu_1093_p2[22:8]}};

assign trunc_ln708_4_fu_210_p4 = {{sub_ln1118_fu_204_p2[20:8]}};

assign trunc_ln708_5_fu_228_p4 = {{mul_ln1118_4_fu_1030_p2[22:8]}};

assign trunc_ln708_6_fu_249_p4 = {{mul_ln1118_5_fu_1037_p2[23:8]}};

assign trunc_ln708_8_fu_705_p4 = {{mul_ln1118_6_fu_1100_p2[23:8]}};

assign trunc_ln708_9_fu_714_p4 = {{mul_ln1118_7_fu_1107_p2[23:8]}};

assign trunc_ln_fu_626_p4 = {{mul_ln1118_fu_1072_p2[22:8]}};

endmodule //dense_resource_rf_leq_nin_0_0_0_0_0
