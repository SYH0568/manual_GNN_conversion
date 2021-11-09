
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set const_size_out_1_group [add_wave_group const_size_out_1(wire) -into $coutputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_out_1_ap_vld -into $const_size_out_1_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_out_1 -into $const_size_out_1_group -radix hex
set const_size_in_3_group [add_wave_group const_size_in_3(wire) -into $coutputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_in_3_ap_vld -into $const_size_in_3_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_in_3 -into $const_size_in_3_group -radix hex
set const_size_in_2_group [add_wave_group const_size_in_2(wire) -into $coutputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_in_2_ap_vld -into $const_size_in_2_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_in_2 -into $const_size_in_2_group -radix hex
set const_size_in_1_group [add_wave_group const_size_in_1(wire) -into $coutputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_in_1_ap_vld -into $const_size_in_1_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_in_1 -into $const_size_in_1_group -radix hex
set layer11_out_group [add_wave_group layer11_out(memory) -into $coutputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_15_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_14_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_13_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_12_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_11_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_10_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_9_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_8_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_7_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_6_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_5_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_4_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_3_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_2_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_1_V_address0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_we1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_q1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_d1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_ce1 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_address1 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_we0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_q0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_d0 -into $layer11_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_ce0 -into $layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer11_out_0_V_address0 -into $layer11_out_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set edge_index_group [add_wave_group edge_index(memory) -into $cinputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_31_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_30_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_29_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_28_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_27_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_26_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_25_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_24_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_23_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_22_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_21_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_20_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_19_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_18_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_17_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_16_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_15_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_14_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_13_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_12_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_11_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_10_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_9_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_8_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_7_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_6_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_5_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_4_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_3_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_2_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_1_V_address0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_we1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_q1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_d1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_ce1 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_address1 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_we0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_q0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_d0 -into $edge_index_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_ce0 -into $edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_index_0_V_address0 -into $edge_index_group -radix hex
set edge_attr_group [add_wave_group edge_attr(memory) -into $cinputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_63_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_62_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_61_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_60_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_59_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_58_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_57_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_56_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_55_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_54_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_53_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_52_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_51_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_50_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_49_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_48_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_47_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_46_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_45_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_44_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_43_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_42_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_41_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_40_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_39_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_38_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_37_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_36_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_35_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_34_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_33_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_32_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_31_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_30_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_29_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_28_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_27_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_26_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_25_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_24_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_23_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_22_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_21_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_20_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_19_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_18_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_17_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_16_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_15_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_14_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_13_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_12_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_11_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_10_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_9_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_8_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_7_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_6_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_5_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_4_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_3_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_2_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_1_V_address0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_we1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_q1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_d1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_ce1 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_address1 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_we0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_q0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_d0 -into $edge_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_ce0 -into $edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/edge_attr_0_V_address0 -into $edge_attr_group -radix hex
set node_attr_group [add_wave_group node_attr(memory) -into $cinputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_47_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_46_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_45_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_44_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_43_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_42_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_41_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_40_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_39_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_38_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_37_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_36_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_35_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_34_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_33_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_32_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_31_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_30_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_29_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_28_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_27_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_26_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_25_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_24_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_23_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_22_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_21_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_20_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_19_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_18_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_17_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_16_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_15_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_14_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_13_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_12_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_11_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_10_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_9_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_8_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_7_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_6_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_5_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_4_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_3_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_2_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_1_V_address0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_we1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_q1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_d1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_ce1 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_address1 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_we0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_q0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_d0 -into $node_attr_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_ce0 -into $node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/node_attr_0_V_address0 -into $node_attr_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_start -into $blocksiggroup
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_done -into $blocksiggroup
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_ready -into $blocksiggroup
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_idle -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_myproject_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_myproject_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_myproject_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_2_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_3_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_4_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_5_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_6_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_7_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_8_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_9_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_10_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_11_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_12_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_13_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_14_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_15_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_16_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_17_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_18_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_19_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_20_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_21_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_22_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_23_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_24_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_25_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_26_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_27_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_28_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_29_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_30_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_31_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_32_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_33_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_34_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_35_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_36_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_37_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_38_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_39_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_40_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_41_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_42_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_43_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_44_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_45_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_46_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_node_attr_47_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_2_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_3_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_4_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_5_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_6_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_7_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_8_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_9_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_10_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_11_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_12_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_13_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_14_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_15_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_16_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_17_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_18_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_19_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_20_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_21_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_22_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_23_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_24_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_25_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_26_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_27_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_28_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_29_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_30_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_31_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_32_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_33_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_34_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_35_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_36_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_37_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_38_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_39_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_40_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_41_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_42_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_43_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_44_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_45_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_46_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_47_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_48_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_49_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_50_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_51_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_52_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_53_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_54_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_55_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_56_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_57_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_58_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_59_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_60_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_61_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_62_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_attr_63_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_2_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_3_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_4_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_5_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_6_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_7_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_8_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_9_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_10_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_11_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_12_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_13_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_14_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_15_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_16_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_17_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_18_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_19_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_20_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_21_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_22_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_23_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_24_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_25_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_26_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_27_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_28_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_29_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_30_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_edge_index_31_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_2_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_3_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_4_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_5_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_6_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_7_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_8_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_9_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_10_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_11_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_12_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_13_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_14_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer11_out_15_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_const_size_in_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_const_size_in_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_const_size_in_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_const_size_out_1 -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_const_size_out_1_group [add_wave_group const_size_out_1(wire) -into $tbcoutputgroup]
add_wave /apatb_myproject_top/const_size_out_1_ap_vld -into $tb_const_size_out_1_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/const_size_out_1 -into $tb_const_size_out_1_group -radix hex
set tb_const_size_in_3_group [add_wave_group const_size_in_3(wire) -into $tbcoutputgroup]
add_wave /apatb_myproject_top/const_size_in_3_ap_vld -into $tb_const_size_in_3_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/const_size_in_3 -into $tb_const_size_in_3_group -radix hex
set tb_const_size_in_2_group [add_wave_group const_size_in_2(wire) -into $tbcoutputgroup]
add_wave /apatb_myproject_top/const_size_in_2_ap_vld -into $tb_const_size_in_2_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/const_size_in_2 -into $tb_const_size_in_2_group -radix hex
set tb_const_size_in_1_group [add_wave_group const_size_in_1(wire) -into $tbcoutputgroup]
add_wave /apatb_myproject_top/const_size_in_1_ap_vld -into $tb_const_size_in_1_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/const_size_in_1 -into $tb_const_size_in_1_group -radix hex
set tb_layer11_out_group [add_wave_group layer11_out(memory) -into $tbcoutputgroup]
add_wave /apatb_myproject_top/layer11_out_15_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_15_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_15_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_15_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_15_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_15_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_15_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_15_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_15_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_15_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_14_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_13_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_12_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_11_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_10_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_9_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_8_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_7_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_6_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_5_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_4_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_3_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_2_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_1_V_address0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_we1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_q1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_d1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_ce1 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_address1 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_we0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_q0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_d0 -into $tb_layer11_out_group -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_ce0 -into $tb_layer11_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer11_out_0_V_address0 -into $tb_layer11_out_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_edge_index_group [add_wave_group edge_index(memory) -into $tbcinputgroup]
add_wave /apatb_myproject_top/edge_index_31_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_31_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_31_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_31_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_31_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_31_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_31_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_31_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_31_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_31_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_30_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_29_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_28_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_27_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_26_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_25_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_24_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_23_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_22_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_21_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_20_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_19_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_18_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_17_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_16_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_15_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_14_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_13_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_12_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_11_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_10_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_9_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_8_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_7_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_6_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_5_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_4_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_3_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_2_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_1_V_address0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_we1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_q1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_d1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_ce1 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_address1 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_we0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_q0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_d0 -into $tb_edge_index_group -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_ce0 -into $tb_edge_index_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_index_0_V_address0 -into $tb_edge_index_group -radix hex
set tb_edge_attr_group [add_wave_group edge_attr(memory) -into $tbcinputgroup]
add_wave /apatb_myproject_top/edge_attr_63_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_63_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_63_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_63_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_63_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_63_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_63_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_63_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_63_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_63_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_62_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_61_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_60_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_59_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_58_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_57_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_56_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_55_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_54_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_53_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_52_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_51_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_50_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_49_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_48_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_47_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_46_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_45_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_44_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_43_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_42_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_41_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_40_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_39_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_38_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_37_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_36_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_35_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_34_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_33_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_32_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_31_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_30_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_29_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_28_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_27_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_26_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_25_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_24_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_23_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_22_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_21_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_20_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_19_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_18_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_17_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_16_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_15_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_14_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_13_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_12_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_11_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_10_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_9_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_8_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_7_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_6_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_5_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_4_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_3_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_2_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_1_V_address0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_we1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_q1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_d1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_ce1 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_address1 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_we0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_q0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_d0 -into $tb_edge_attr_group -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_ce0 -into $tb_edge_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/edge_attr_0_V_address0 -into $tb_edge_attr_group -radix hex
set tb_node_attr_group [add_wave_group node_attr(memory) -into $tbcinputgroup]
add_wave /apatb_myproject_top/node_attr_47_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_47_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_47_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_47_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_47_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_47_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_47_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_47_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_47_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_47_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_46_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_45_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_44_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_43_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_42_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_41_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_40_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_39_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_38_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_37_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_36_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_35_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_34_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_33_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_32_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_31_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_30_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_29_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_28_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_27_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_26_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_25_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_24_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_23_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_22_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_21_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_20_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_19_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_18_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_17_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_16_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_15_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_14_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_13_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_12_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_11_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_10_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_9_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_8_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_7_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_6_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_5_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_4_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_3_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_2_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_1_V_address0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_we1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_q1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_d1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_ce1 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_address1 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_we0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_q0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_d0 -into $tb_node_attr_group -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_ce0 -into $tb_node_attr_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/node_attr_0_V_address0 -into $tb_node_attr_group -radix hex
save_wave_config myproject.wcfg
run all
quit

