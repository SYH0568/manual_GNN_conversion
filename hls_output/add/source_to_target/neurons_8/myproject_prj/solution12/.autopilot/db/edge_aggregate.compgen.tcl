# This script segment is generated automatically by AutoPilot

set id 1271
set name myproject_mux_1616_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 0
set din9_width 16
set din9_signed 0
set din10_width 16
set din10_signed 0
set din11_width 16
set din11_signed 0
set din12_width 16
set din12_signed 0
set din13_width 16
set din13_signed 0
set din14_width 16
set din14_signed 0
set din15_width 16
set din15_signed 0
set din16_width 16
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 1336
set hasByteEnable 0
set MemName edge_aggregate_edge_attr_aggr_0_0_0_V
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 16
set AddrRange 7
set AddrWd 3
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 0.594
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1337 \
    name edge_attr_1D_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_0_V \
    op interface \
    ports { edge_attr_1D_0_V_address0 { O 4 vector } edge_attr_1D_0_V_ce0 { O 1 bit } edge_attr_1D_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1338 \
    name edge_attr_1D_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_1_V \
    op interface \
    ports { edge_attr_1D_1_V_address0 { O 4 vector } edge_attr_1D_1_V_ce0 { O 1 bit } edge_attr_1D_1_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1339 \
    name edge_attr_1D_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_2_V \
    op interface \
    ports { edge_attr_1D_2_V_address0 { O 4 vector } edge_attr_1D_2_V_ce0 { O 1 bit } edge_attr_1D_2_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1340 \
    name edge_attr_1D_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_3_V \
    op interface \
    ports { edge_attr_1D_3_V_address0 { O 4 vector } edge_attr_1D_3_V_ce0 { O 1 bit } edge_attr_1D_3_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1341 \
    name edge_attr_1D_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_4_V \
    op interface \
    ports { edge_attr_1D_4_V_address0 { O 4 vector } edge_attr_1D_4_V_ce0 { O 1 bit } edge_attr_1D_4_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1342 \
    name edge_attr_1D_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_5_V \
    op interface \
    ports { edge_attr_1D_5_V_address0 { O 4 vector } edge_attr_1D_5_V_ce0 { O 1 bit } edge_attr_1D_5_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1343 \
    name edge_attr_1D_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_6_V \
    op interface \
    ports { edge_attr_1D_6_V_address0 { O 4 vector } edge_attr_1D_6_V_ce0 { O 1 bit } edge_attr_1D_6_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1344 \
    name edge_attr_1D_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_7_V \
    op interface \
    ports { edge_attr_1D_7_V_address0 { O 4 vector } edge_attr_1D_7_V_ce0 { O 1 bit } edge_attr_1D_7_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1345 \
    name edge_attr_1D_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_8_V \
    op interface \
    ports { edge_attr_1D_8_V_address0 { O 4 vector } edge_attr_1D_8_V_ce0 { O 1 bit } edge_attr_1D_8_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1346 \
    name edge_attr_1D_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_9_V \
    op interface \
    ports { edge_attr_1D_9_V_address0 { O 4 vector } edge_attr_1D_9_V_ce0 { O 1 bit } edge_attr_1D_9_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1347 \
    name edge_attr_1D_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_10_V \
    op interface \
    ports { edge_attr_1D_10_V_address0 { O 4 vector } edge_attr_1D_10_V_ce0 { O 1 bit } edge_attr_1D_10_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1348 \
    name edge_attr_1D_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_11_V \
    op interface \
    ports { edge_attr_1D_11_V_address0 { O 4 vector } edge_attr_1D_11_V_ce0 { O 1 bit } edge_attr_1D_11_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1349 \
    name edge_attr_1D_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_12_V \
    op interface \
    ports { edge_attr_1D_12_V_address0 { O 4 vector } edge_attr_1D_12_V_ce0 { O 1 bit } edge_attr_1D_12_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1350 \
    name edge_attr_1D_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_13_V \
    op interface \
    ports { edge_attr_1D_13_V_address0 { O 4 vector } edge_attr_1D_13_V_ce0 { O 1 bit } edge_attr_1D_13_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1351 \
    name edge_attr_1D_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_14_V \
    op interface \
    ports { edge_attr_1D_14_V_address0 { O 4 vector } edge_attr_1D_14_V_ce0 { O 1 bit } edge_attr_1D_14_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1352 \
    name edge_attr_1D_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_15_V \
    op interface \
    ports { edge_attr_1D_15_V_address0 { O 4 vector } edge_attr_1D_15_V_ce0 { O 1 bit } edge_attr_1D_15_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1353 \
    name edge_attr_1D_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_16_V \
    op interface \
    ports { edge_attr_1D_16_V_address0 { O 4 vector } edge_attr_1D_16_V_ce0 { O 1 bit } edge_attr_1D_16_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1354 \
    name edge_attr_1D_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_17_V \
    op interface \
    ports { edge_attr_1D_17_V_address0 { O 4 vector } edge_attr_1D_17_V_ce0 { O 1 bit } edge_attr_1D_17_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1355 \
    name edge_attr_1D_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_18_V \
    op interface \
    ports { edge_attr_1D_18_V_address0 { O 4 vector } edge_attr_1D_18_V_ce0 { O 1 bit } edge_attr_1D_18_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1356 \
    name edge_attr_1D_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_19_V \
    op interface \
    ports { edge_attr_1D_19_V_address0 { O 4 vector } edge_attr_1D_19_V_ce0 { O 1 bit } edge_attr_1D_19_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1357 \
    name edge_attr_1D_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_20_V \
    op interface \
    ports { edge_attr_1D_20_V_address0 { O 4 vector } edge_attr_1D_20_V_ce0 { O 1 bit } edge_attr_1D_20_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1358 \
    name edge_attr_1D_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_21_V \
    op interface \
    ports { edge_attr_1D_21_V_address0 { O 4 vector } edge_attr_1D_21_V_ce0 { O 1 bit } edge_attr_1D_21_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1359 \
    name edge_attr_1D_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_22_V \
    op interface \
    ports { edge_attr_1D_22_V_address0 { O 4 vector } edge_attr_1D_22_V_ce0 { O 1 bit } edge_attr_1D_22_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1360 \
    name edge_attr_1D_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_23_V \
    op interface \
    ports { edge_attr_1D_23_V_address0 { O 4 vector } edge_attr_1D_23_V_ce0 { O 1 bit } edge_attr_1D_23_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1361 \
    name edge_attr_1D_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_24_V \
    op interface \
    ports { edge_attr_1D_24_V_address0 { O 4 vector } edge_attr_1D_24_V_ce0 { O 1 bit } edge_attr_1D_24_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1362 \
    name edge_attr_1D_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_25_V \
    op interface \
    ports { edge_attr_1D_25_V_address0 { O 4 vector } edge_attr_1D_25_V_ce0 { O 1 bit } edge_attr_1D_25_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1363 \
    name edge_attr_1D_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_26_V \
    op interface \
    ports { edge_attr_1D_26_V_address0 { O 4 vector } edge_attr_1D_26_V_ce0 { O 1 bit } edge_attr_1D_26_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1364 \
    name edge_attr_1D_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_27_V \
    op interface \
    ports { edge_attr_1D_27_V_address0 { O 4 vector } edge_attr_1D_27_V_ce0 { O 1 bit } edge_attr_1D_27_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1365 \
    name edge_attr_1D_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_28_V \
    op interface \
    ports { edge_attr_1D_28_V_address0 { O 4 vector } edge_attr_1D_28_V_ce0 { O 1 bit } edge_attr_1D_28_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1366 \
    name edge_attr_1D_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_29_V \
    op interface \
    ports { edge_attr_1D_29_V_address0 { O 4 vector } edge_attr_1D_29_V_ce0 { O 1 bit } edge_attr_1D_29_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1367 \
    name edge_attr_1D_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_30_V \
    op interface \
    ports { edge_attr_1D_30_V_address0 { O 4 vector } edge_attr_1D_30_V_ce0 { O 1 bit } edge_attr_1D_30_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1368 \
    name edge_attr_1D_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_31_V \
    op interface \
    ports { edge_attr_1D_31_V_address0 { O 4 vector } edge_attr_1D_31_V_ce0 { O 1 bit } edge_attr_1D_31_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1369 \
    name edge_attr_1D_32_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_32_V \
    op interface \
    ports { edge_attr_1D_32_V_address0 { O 4 vector } edge_attr_1D_32_V_ce0 { O 1 bit } edge_attr_1D_32_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_32_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1370 \
    name edge_attr_1D_33_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_33_V \
    op interface \
    ports { edge_attr_1D_33_V_address0 { O 4 vector } edge_attr_1D_33_V_ce0 { O 1 bit } edge_attr_1D_33_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_33_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1371 \
    name edge_attr_1D_34_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_34_V \
    op interface \
    ports { edge_attr_1D_34_V_address0 { O 4 vector } edge_attr_1D_34_V_ce0 { O 1 bit } edge_attr_1D_34_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_34_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1372 \
    name edge_attr_1D_35_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_35_V \
    op interface \
    ports { edge_attr_1D_35_V_address0 { O 4 vector } edge_attr_1D_35_V_ce0 { O 1 bit } edge_attr_1D_35_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_35_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1373 \
    name edge_attr_1D_36_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_36_V \
    op interface \
    ports { edge_attr_1D_36_V_address0 { O 4 vector } edge_attr_1D_36_V_ce0 { O 1 bit } edge_attr_1D_36_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_36_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1374 \
    name edge_attr_1D_37_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_37_V \
    op interface \
    ports { edge_attr_1D_37_V_address0 { O 4 vector } edge_attr_1D_37_V_ce0 { O 1 bit } edge_attr_1D_37_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_37_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1375 \
    name edge_attr_1D_38_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_38_V \
    op interface \
    ports { edge_attr_1D_38_V_address0 { O 4 vector } edge_attr_1D_38_V_ce0 { O 1 bit } edge_attr_1D_38_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_38_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1376 \
    name edge_attr_1D_39_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_39_V \
    op interface \
    ports { edge_attr_1D_39_V_address0 { O 4 vector } edge_attr_1D_39_V_ce0 { O 1 bit } edge_attr_1D_39_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_39_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1377 \
    name edge_attr_1D_40_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_40_V \
    op interface \
    ports { edge_attr_1D_40_V_address0 { O 4 vector } edge_attr_1D_40_V_ce0 { O 1 bit } edge_attr_1D_40_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_40_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1378 \
    name edge_attr_1D_41_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_41_V \
    op interface \
    ports { edge_attr_1D_41_V_address0 { O 4 vector } edge_attr_1D_41_V_ce0 { O 1 bit } edge_attr_1D_41_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_41_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1379 \
    name edge_attr_1D_42_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_42_V \
    op interface \
    ports { edge_attr_1D_42_V_address0 { O 4 vector } edge_attr_1D_42_V_ce0 { O 1 bit } edge_attr_1D_42_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_42_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1380 \
    name edge_attr_1D_43_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_43_V \
    op interface \
    ports { edge_attr_1D_43_V_address0 { O 4 vector } edge_attr_1D_43_V_ce0 { O 1 bit } edge_attr_1D_43_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_43_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1381 \
    name edge_attr_1D_44_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_44_V \
    op interface \
    ports { edge_attr_1D_44_V_address0 { O 4 vector } edge_attr_1D_44_V_ce0 { O 1 bit } edge_attr_1D_44_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_44_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1382 \
    name edge_attr_1D_45_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_45_V \
    op interface \
    ports { edge_attr_1D_45_V_address0 { O 4 vector } edge_attr_1D_45_V_ce0 { O 1 bit } edge_attr_1D_45_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_45_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1383 \
    name edge_attr_1D_46_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_46_V \
    op interface \
    ports { edge_attr_1D_46_V_address0 { O 4 vector } edge_attr_1D_46_V_ce0 { O 1 bit } edge_attr_1D_46_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_46_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1384 \
    name edge_attr_1D_47_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_47_V \
    op interface \
    ports { edge_attr_1D_47_V_address0 { O 4 vector } edge_attr_1D_47_V_ce0 { O 1 bit } edge_attr_1D_47_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_47_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1385 \
    name edge_attr_1D_48_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_48_V \
    op interface \
    ports { edge_attr_1D_48_V_address0 { O 4 vector } edge_attr_1D_48_V_ce0 { O 1 bit } edge_attr_1D_48_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_48_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1386 \
    name edge_attr_1D_49_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_49_V \
    op interface \
    ports { edge_attr_1D_49_V_address0 { O 4 vector } edge_attr_1D_49_V_ce0 { O 1 bit } edge_attr_1D_49_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_49_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1387 \
    name edge_attr_1D_50_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_50_V \
    op interface \
    ports { edge_attr_1D_50_V_address0 { O 4 vector } edge_attr_1D_50_V_ce0 { O 1 bit } edge_attr_1D_50_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_50_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1388 \
    name edge_attr_1D_51_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_51_V \
    op interface \
    ports { edge_attr_1D_51_V_address0 { O 4 vector } edge_attr_1D_51_V_ce0 { O 1 bit } edge_attr_1D_51_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_51_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1389 \
    name edge_attr_1D_52_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_52_V \
    op interface \
    ports { edge_attr_1D_52_V_address0 { O 4 vector } edge_attr_1D_52_V_ce0 { O 1 bit } edge_attr_1D_52_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_52_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1390 \
    name edge_attr_1D_53_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_53_V \
    op interface \
    ports { edge_attr_1D_53_V_address0 { O 4 vector } edge_attr_1D_53_V_ce0 { O 1 bit } edge_attr_1D_53_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_53_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1391 \
    name edge_attr_1D_54_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_54_V \
    op interface \
    ports { edge_attr_1D_54_V_address0 { O 4 vector } edge_attr_1D_54_V_ce0 { O 1 bit } edge_attr_1D_54_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_54_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1392 \
    name edge_attr_1D_55_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_55_V \
    op interface \
    ports { edge_attr_1D_55_V_address0 { O 4 vector } edge_attr_1D_55_V_ce0 { O 1 bit } edge_attr_1D_55_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_55_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1393 \
    name edge_attr_1D_56_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_56_V \
    op interface \
    ports { edge_attr_1D_56_V_address0 { O 4 vector } edge_attr_1D_56_V_ce0 { O 1 bit } edge_attr_1D_56_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_56_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1394 \
    name edge_attr_1D_57_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_57_V \
    op interface \
    ports { edge_attr_1D_57_V_address0 { O 4 vector } edge_attr_1D_57_V_ce0 { O 1 bit } edge_attr_1D_57_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_57_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1395 \
    name edge_attr_1D_58_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_58_V \
    op interface \
    ports { edge_attr_1D_58_V_address0 { O 4 vector } edge_attr_1D_58_V_ce0 { O 1 bit } edge_attr_1D_58_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_58_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1396 \
    name edge_attr_1D_59_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_59_V \
    op interface \
    ports { edge_attr_1D_59_V_address0 { O 4 vector } edge_attr_1D_59_V_ce0 { O 1 bit } edge_attr_1D_59_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_59_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1397 \
    name edge_attr_1D_60_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_60_V \
    op interface \
    ports { edge_attr_1D_60_V_address0 { O 4 vector } edge_attr_1D_60_V_ce0 { O 1 bit } edge_attr_1D_60_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_60_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1398 \
    name edge_attr_1D_61_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_61_V \
    op interface \
    ports { edge_attr_1D_61_V_address0 { O 4 vector } edge_attr_1D_61_V_ce0 { O 1 bit } edge_attr_1D_61_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_61_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1399 \
    name edge_attr_1D_62_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_62_V \
    op interface \
    ports { edge_attr_1D_62_V_address0 { O 4 vector } edge_attr_1D_62_V_ce0 { O 1 bit } edge_attr_1D_62_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_62_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1400 \
    name edge_attr_1D_63_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1D_63_V \
    op interface \
    ports { edge_attr_1D_63_V_address0 { O 4 vector } edge_attr_1D_63_V_ce0 { O 1 bit } edge_attr_1D_63_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1D_63_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1401 \
    name edge_index_1D_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_1_V \
    op interface \
    ports { edge_index_1D_1_V_address0 { O 4 vector } edge_index_1D_1_V_ce0 { O 1 bit } edge_index_1D_1_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1402 \
    name edge_index_1D_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_3_V \
    op interface \
    ports { edge_index_1D_3_V_address0 { O 4 vector } edge_index_1D_3_V_ce0 { O 1 bit } edge_index_1D_3_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1403 \
    name edge_index_1D_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_5_V \
    op interface \
    ports { edge_index_1D_5_V_address0 { O 4 vector } edge_index_1D_5_V_ce0 { O 1 bit } edge_index_1D_5_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1404 \
    name edge_index_1D_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_7_V \
    op interface \
    ports { edge_index_1D_7_V_address0 { O 4 vector } edge_index_1D_7_V_ce0 { O 1 bit } edge_index_1D_7_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1405 \
    name edge_index_1D_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_9_V \
    op interface \
    ports { edge_index_1D_9_V_address0 { O 4 vector } edge_index_1D_9_V_ce0 { O 1 bit } edge_index_1D_9_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1406 \
    name edge_index_1D_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_11_V \
    op interface \
    ports { edge_index_1D_11_V_address0 { O 4 vector } edge_index_1D_11_V_ce0 { O 1 bit } edge_index_1D_11_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1407 \
    name edge_index_1D_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_13_V \
    op interface \
    ports { edge_index_1D_13_V_address0 { O 4 vector } edge_index_1D_13_V_ce0 { O 1 bit } edge_index_1D_13_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1408 \
    name edge_index_1D_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_15_V \
    op interface \
    ports { edge_index_1D_15_V_address0 { O 4 vector } edge_index_1D_15_V_ce0 { O 1 bit } edge_index_1D_15_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1409 \
    name edge_index_1D_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_17_V \
    op interface \
    ports { edge_index_1D_17_V_address0 { O 4 vector } edge_index_1D_17_V_ce0 { O 1 bit } edge_index_1D_17_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1410 \
    name edge_index_1D_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_19_V \
    op interface \
    ports { edge_index_1D_19_V_address0 { O 4 vector } edge_index_1D_19_V_ce0 { O 1 bit } edge_index_1D_19_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1411 \
    name edge_index_1D_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_21_V \
    op interface \
    ports { edge_index_1D_21_V_address0 { O 4 vector } edge_index_1D_21_V_ce0 { O 1 bit } edge_index_1D_21_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1412 \
    name edge_index_1D_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_23_V \
    op interface \
    ports { edge_index_1D_23_V_address0 { O 4 vector } edge_index_1D_23_V_ce0 { O 1 bit } edge_index_1D_23_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1413 \
    name edge_index_1D_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_25_V \
    op interface \
    ports { edge_index_1D_25_V_address0 { O 4 vector } edge_index_1D_25_V_ce0 { O 1 bit } edge_index_1D_25_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1414 \
    name edge_index_1D_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_27_V \
    op interface \
    ports { edge_index_1D_27_V_address0 { O 4 vector } edge_index_1D_27_V_ce0 { O 1 bit } edge_index_1D_27_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1415 \
    name edge_index_1D_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_29_V \
    op interface \
    ports { edge_index_1D_29_V_address0 { O 4 vector } edge_index_1D_29_V_ce0 { O 1 bit } edge_index_1D_29_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1416 \
    name edge_index_1D_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_31_V \
    op interface \
    ports { edge_index_1D_31_V_address0 { O 4 vector } edge_index_1D_31_V_ce0 { O 1 bit } edge_index_1D_31_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1417 \
    name edge_attr_aggr_1D_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_0_V \
    op interface \
    ports { edge_attr_aggr_1D_0_V_address0 { O 3 vector } edge_attr_aggr_1D_0_V_ce0 { O 1 bit } edge_attr_aggr_1D_0_V_we0 { O 1 bit } edge_attr_aggr_1D_0_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1418 \
    name edge_attr_aggr_1D_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_1_V \
    op interface \
    ports { edge_attr_aggr_1D_1_V_address0 { O 3 vector } edge_attr_aggr_1D_1_V_ce0 { O 1 bit } edge_attr_aggr_1D_1_V_we0 { O 1 bit } edge_attr_aggr_1D_1_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1419 \
    name edge_attr_aggr_1D_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_2_V \
    op interface \
    ports { edge_attr_aggr_1D_2_V_address0 { O 3 vector } edge_attr_aggr_1D_2_V_ce0 { O 1 bit } edge_attr_aggr_1D_2_V_we0 { O 1 bit } edge_attr_aggr_1D_2_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1420 \
    name edge_attr_aggr_1D_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_3_V \
    op interface \
    ports { edge_attr_aggr_1D_3_V_address0 { O 3 vector } edge_attr_aggr_1D_3_V_ce0 { O 1 bit } edge_attr_aggr_1D_3_V_we0 { O 1 bit } edge_attr_aggr_1D_3_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1421 \
    name edge_attr_aggr_1D_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_4_V \
    op interface \
    ports { edge_attr_aggr_1D_4_V_address0 { O 3 vector } edge_attr_aggr_1D_4_V_ce0 { O 1 bit } edge_attr_aggr_1D_4_V_we0 { O 1 bit } edge_attr_aggr_1D_4_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1422 \
    name edge_attr_aggr_1D_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_5_V \
    op interface \
    ports { edge_attr_aggr_1D_5_V_address0 { O 3 vector } edge_attr_aggr_1D_5_V_ce0 { O 1 bit } edge_attr_aggr_1D_5_V_we0 { O 1 bit } edge_attr_aggr_1D_5_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1423 \
    name edge_attr_aggr_1D_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_6_V \
    op interface \
    ports { edge_attr_aggr_1D_6_V_address0 { O 3 vector } edge_attr_aggr_1D_6_V_ce0 { O 1 bit } edge_attr_aggr_1D_6_V_we0 { O 1 bit } edge_attr_aggr_1D_6_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1424 \
    name edge_attr_aggr_1D_7_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_7_V \
    op interface \
    ports { edge_attr_aggr_1D_7_V_address0 { O 3 vector } edge_attr_aggr_1D_7_V_ce0 { O 1 bit } edge_attr_aggr_1D_7_V_we0 { O 1 bit } edge_attr_aggr_1D_7_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1425 \
    name edge_attr_aggr_1D_8_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_8_V \
    op interface \
    ports { edge_attr_aggr_1D_8_V_address0 { O 3 vector } edge_attr_aggr_1D_8_V_ce0 { O 1 bit } edge_attr_aggr_1D_8_V_we0 { O 1 bit } edge_attr_aggr_1D_8_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1426 \
    name edge_attr_aggr_1D_9_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_9_V \
    op interface \
    ports { edge_attr_aggr_1D_9_V_address0 { O 3 vector } edge_attr_aggr_1D_9_V_ce0 { O 1 bit } edge_attr_aggr_1D_9_V_we0 { O 1 bit } edge_attr_aggr_1D_9_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1427 \
    name edge_attr_aggr_1D_10_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_10_V \
    op interface \
    ports { edge_attr_aggr_1D_10_V_address0 { O 3 vector } edge_attr_aggr_1D_10_V_ce0 { O 1 bit } edge_attr_aggr_1D_10_V_we0 { O 1 bit } edge_attr_aggr_1D_10_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1428 \
    name edge_attr_aggr_1D_11_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_11_V \
    op interface \
    ports { edge_attr_aggr_1D_11_V_address0 { O 3 vector } edge_attr_aggr_1D_11_V_ce0 { O 1 bit } edge_attr_aggr_1D_11_V_we0 { O 1 bit } edge_attr_aggr_1D_11_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1429 \
    name edge_attr_aggr_1D_12_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_12_V \
    op interface \
    ports { edge_attr_aggr_1D_12_V_address0 { O 3 vector } edge_attr_aggr_1D_12_V_ce0 { O 1 bit } edge_attr_aggr_1D_12_V_we0 { O 1 bit } edge_attr_aggr_1D_12_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1430 \
    name edge_attr_aggr_1D_13_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_13_V \
    op interface \
    ports { edge_attr_aggr_1D_13_V_address0 { O 3 vector } edge_attr_aggr_1D_13_V_ce0 { O 1 bit } edge_attr_aggr_1D_13_V_we0 { O 1 bit } edge_attr_aggr_1D_13_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1431 \
    name edge_attr_aggr_1D_14_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_14_V \
    op interface \
    ports { edge_attr_aggr_1D_14_V_address0 { O 3 vector } edge_attr_aggr_1D_14_V_ce0 { O 1 bit } edge_attr_aggr_1D_14_V_we0 { O 1 bit } edge_attr_aggr_1D_14_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1432 \
    name edge_attr_aggr_1D_15_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_15_V \
    op interface \
    ports { edge_attr_aggr_1D_15_V_address0 { O 3 vector } edge_attr_aggr_1D_15_V_ce0 { O 1 bit } edge_attr_aggr_1D_15_V_we0 { O 1 bit } edge_attr_aggr_1D_15_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1433 \
    name edge_attr_aggr_1D_16_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_16_V \
    op interface \
    ports { edge_attr_aggr_1D_16_V_address0 { O 3 vector } edge_attr_aggr_1D_16_V_ce0 { O 1 bit } edge_attr_aggr_1D_16_V_we0 { O 1 bit } edge_attr_aggr_1D_16_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1434 \
    name edge_attr_aggr_1D_17_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_17_V \
    op interface \
    ports { edge_attr_aggr_1D_17_V_address0 { O 3 vector } edge_attr_aggr_1D_17_V_ce0 { O 1 bit } edge_attr_aggr_1D_17_V_we0 { O 1 bit } edge_attr_aggr_1D_17_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1435 \
    name edge_attr_aggr_1D_18_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_18_V \
    op interface \
    ports { edge_attr_aggr_1D_18_V_address0 { O 3 vector } edge_attr_aggr_1D_18_V_ce0 { O 1 bit } edge_attr_aggr_1D_18_V_we0 { O 1 bit } edge_attr_aggr_1D_18_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1436 \
    name edge_attr_aggr_1D_19_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_19_V \
    op interface \
    ports { edge_attr_aggr_1D_19_V_address0 { O 3 vector } edge_attr_aggr_1D_19_V_ce0 { O 1 bit } edge_attr_aggr_1D_19_V_we0 { O 1 bit } edge_attr_aggr_1D_19_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1437 \
    name edge_attr_aggr_1D_20_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_20_V \
    op interface \
    ports { edge_attr_aggr_1D_20_V_address0 { O 3 vector } edge_attr_aggr_1D_20_V_ce0 { O 1 bit } edge_attr_aggr_1D_20_V_we0 { O 1 bit } edge_attr_aggr_1D_20_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1438 \
    name edge_attr_aggr_1D_21_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_21_V \
    op interface \
    ports { edge_attr_aggr_1D_21_V_address0 { O 3 vector } edge_attr_aggr_1D_21_V_ce0 { O 1 bit } edge_attr_aggr_1D_21_V_we0 { O 1 bit } edge_attr_aggr_1D_21_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1439 \
    name edge_attr_aggr_1D_22_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_22_V \
    op interface \
    ports { edge_attr_aggr_1D_22_V_address0 { O 3 vector } edge_attr_aggr_1D_22_V_ce0 { O 1 bit } edge_attr_aggr_1D_22_V_we0 { O 1 bit } edge_attr_aggr_1D_22_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1440 \
    name edge_attr_aggr_1D_23_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_23_V \
    op interface \
    ports { edge_attr_aggr_1D_23_V_address0 { O 3 vector } edge_attr_aggr_1D_23_V_ce0 { O 1 bit } edge_attr_aggr_1D_23_V_we0 { O 1 bit } edge_attr_aggr_1D_23_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1441 \
    name edge_attr_aggr_1D_24_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_24_V \
    op interface \
    ports { edge_attr_aggr_1D_24_V_address0 { O 3 vector } edge_attr_aggr_1D_24_V_ce0 { O 1 bit } edge_attr_aggr_1D_24_V_we0 { O 1 bit } edge_attr_aggr_1D_24_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1442 \
    name edge_attr_aggr_1D_25_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_25_V \
    op interface \
    ports { edge_attr_aggr_1D_25_V_address0 { O 3 vector } edge_attr_aggr_1D_25_V_ce0 { O 1 bit } edge_attr_aggr_1D_25_V_we0 { O 1 bit } edge_attr_aggr_1D_25_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1443 \
    name edge_attr_aggr_1D_26_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_26_V \
    op interface \
    ports { edge_attr_aggr_1D_26_V_address0 { O 3 vector } edge_attr_aggr_1D_26_V_ce0 { O 1 bit } edge_attr_aggr_1D_26_V_we0 { O 1 bit } edge_attr_aggr_1D_26_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1444 \
    name edge_attr_aggr_1D_27_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_27_V \
    op interface \
    ports { edge_attr_aggr_1D_27_V_address0 { O 3 vector } edge_attr_aggr_1D_27_V_ce0 { O 1 bit } edge_attr_aggr_1D_27_V_we0 { O 1 bit } edge_attr_aggr_1D_27_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1445 \
    name edge_attr_aggr_1D_28_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_28_V \
    op interface \
    ports { edge_attr_aggr_1D_28_V_address0 { O 3 vector } edge_attr_aggr_1D_28_V_ce0 { O 1 bit } edge_attr_aggr_1D_28_V_we0 { O 1 bit } edge_attr_aggr_1D_28_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1446 \
    name edge_attr_aggr_1D_29_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_29_V \
    op interface \
    ports { edge_attr_aggr_1D_29_V_address0 { O 3 vector } edge_attr_aggr_1D_29_V_ce0 { O 1 bit } edge_attr_aggr_1D_29_V_we0 { O 1 bit } edge_attr_aggr_1D_29_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1447 \
    name edge_attr_aggr_1D_30_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_30_V \
    op interface \
    ports { edge_attr_aggr_1D_30_V_address0 { O 3 vector } edge_attr_aggr_1D_30_V_ce0 { O 1 bit } edge_attr_aggr_1D_30_V_we0 { O 1 bit } edge_attr_aggr_1D_30_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1448 \
    name edge_attr_aggr_1D_31_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_31_V \
    op interface \
    ports { edge_attr_aggr_1D_31_V_address0 { O 3 vector } edge_attr_aggr_1D_31_V_ce0 { O 1 bit } edge_attr_aggr_1D_31_V_we0 { O 1 bit } edge_attr_aggr_1D_31_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1449 \
    name edge_attr_aggr_1D_32_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_32_V \
    op interface \
    ports { edge_attr_aggr_1D_32_V_address0 { O 3 vector } edge_attr_aggr_1D_32_V_ce0 { O 1 bit } edge_attr_aggr_1D_32_V_we0 { O 1 bit } edge_attr_aggr_1D_32_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_32_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1450 \
    name edge_attr_aggr_1D_33_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_33_V \
    op interface \
    ports { edge_attr_aggr_1D_33_V_address0 { O 3 vector } edge_attr_aggr_1D_33_V_ce0 { O 1 bit } edge_attr_aggr_1D_33_V_we0 { O 1 bit } edge_attr_aggr_1D_33_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_33_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1451 \
    name edge_attr_aggr_1D_34_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_34_V \
    op interface \
    ports { edge_attr_aggr_1D_34_V_address0 { O 3 vector } edge_attr_aggr_1D_34_V_ce0 { O 1 bit } edge_attr_aggr_1D_34_V_we0 { O 1 bit } edge_attr_aggr_1D_34_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_34_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1452 \
    name edge_attr_aggr_1D_35_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_35_V \
    op interface \
    ports { edge_attr_aggr_1D_35_V_address0 { O 3 vector } edge_attr_aggr_1D_35_V_ce0 { O 1 bit } edge_attr_aggr_1D_35_V_we0 { O 1 bit } edge_attr_aggr_1D_35_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_35_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1453 \
    name edge_attr_aggr_1D_36_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_36_V \
    op interface \
    ports { edge_attr_aggr_1D_36_V_address0 { O 3 vector } edge_attr_aggr_1D_36_V_ce0 { O 1 bit } edge_attr_aggr_1D_36_V_we0 { O 1 bit } edge_attr_aggr_1D_36_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_36_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1454 \
    name edge_attr_aggr_1D_37_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_37_V \
    op interface \
    ports { edge_attr_aggr_1D_37_V_address0 { O 3 vector } edge_attr_aggr_1D_37_V_ce0 { O 1 bit } edge_attr_aggr_1D_37_V_we0 { O 1 bit } edge_attr_aggr_1D_37_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_37_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1455 \
    name edge_attr_aggr_1D_38_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_38_V \
    op interface \
    ports { edge_attr_aggr_1D_38_V_address0 { O 3 vector } edge_attr_aggr_1D_38_V_ce0 { O 1 bit } edge_attr_aggr_1D_38_V_we0 { O 1 bit } edge_attr_aggr_1D_38_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_38_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1456 \
    name edge_attr_aggr_1D_39_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_39_V \
    op interface \
    ports { edge_attr_aggr_1D_39_V_address0 { O 3 vector } edge_attr_aggr_1D_39_V_ce0 { O 1 bit } edge_attr_aggr_1D_39_V_we0 { O 1 bit } edge_attr_aggr_1D_39_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_39_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1457 \
    name edge_attr_aggr_1D_40_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_40_V \
    op interface \
    ports { edge_attr_aggr_1D_40_V_address0 { O 3 vector } edge_attr_aggr_1D_40_V_ce0 { O 1 bit } edge_attr_aggr_1D_40_V_we0 { O 1 bit } edge_attr_aggr_1D_40_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_40_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1458 \
    name edge_attr_aggr_1D_41_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_41_V \
    op interface \
    ports { edge_attr_aggr_1D_41_V_address0 { O 3 vector } edge_attr_aggr_1D_41_V_ce0 { O 1 bit } edge_attr_aggr_1D_41_V_we0 { O 1 bit } edge_attr_aggr_1D_41_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_41_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1459 \
    name edge_attr_aggr_1D_42_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_42_V \
    op interface \
    ports { edge_attr_aggr_1D_42_V_address0 { O 3 vector } edge_attr_aggr_1D_42_V_ce0 { O 1 bit } edge_attr_aggr_1D_42_V_we0 { O 1 bit } edge_attr_aggr_1D_42_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_42_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1460 \
    name edge_attr_aggr_1D_43_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_43_V \
    op interface \
    ports { edge_attr_aggr_1D_43_V_address0 { O 3 vector } edge_attr_aggr_1D_43_V_ce0 { O 1 bit } edge_attr_aggr_1D_43_V_we0 { O 1 bit } edge_attr_aggr_1D_43_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_43_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1461 \
    name edge_attr_aggr_1D_44_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_44_V \
    op interface \
    ports { edge_attr_aggr_1D_44_V_address0 { O 3 vector } edge_attr_aggr_1D_44_V_ce0 { O 1 bit } edge_attr_aggr_1D_44_V_we0 { O 1 bit } edge_attr_aggr_1D_44_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_44_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1462 \
    name edge_attr_aggr_1D_45_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_45_V \
    op interface \
    ports { edge_attr_aggr_1D_45_V_address0 { O 3 vector } edge_attr_aggr_1D_45_V_ce0 { O 1 bit } edge_attr_aggr_1D_45_V_we0 { O 1 bit } edge_attr_aggr_1D_45_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_45_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1463 \
    name edge_attr_aggr_1D_46_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_46_V \
    op interface \
    ports { edge_attr_aggr_1D_46_V_address0 { O 3 vector } edge_attr_aggr_1D_46_V_ce0 { O 1 bit } edge_attr_aggr_1D_46_V_we0 { O 1 bit } edge_attr_aggr_1D_46_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_46_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1464 \
    name edge_attr_aggr_1D_47_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_47_V \
    op interface \
    ports { edge_attr_aggr_1D_47_V_address0 { O 3 vector } edge_attr_aggr_1D_47_V_ce0 { O 1 bit } edge_attr_aggr_1D_47_V_we0 { O 1 bit } edge_attr_aggr_1D_47_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_47_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1465 \
    name edge_attr_aggr_1D_48_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_48_V \
    op interface \
    ports { edge_attr_aggr_1D_48_V_address0 { O 3 vector } edge_attr_aggr_1D_48_V_ce0 { O 1 bit } edge_attr_aggr_1D_48_V_we0 { O 1 bit } edge_attr_aggr_1D_48_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_48_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1466 \
    name edge_attr_aggr_1D_49_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_49_V \
    op interface \
    ports { edge_attr_aggr_1D_49_V_address0 { O 3 vector } edge_attr_aggr_1D_49_V_ce0 { O 1 bit } edge_attr_aggr_1D_49_V_we0 { O 1 bit } edge_attr_aggr_1D_49_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_49_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1467 \
    name edge_attr_aggr_1D_50_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_50_V \
    op interface \
    ports { edge_attr_aggr_1D_50_V_address0 { O 3 vector } edge_attr_aggr_1D_50_V_ce0 { O 1 bit } edge_attr_aggr_1D_50_V_we0 { O 1 bit } edge_attr_aggr_1D_50_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_50_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1468 \
    name edge_attr_aggr_1D_51_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_51_V \
    op interface \
    ports { edge_attr_aggr_1D_51_V_address0 { O 3 vector } edge_attr_aggr_1D_51_V_ce0 { O 1 bit } edge_attr_aggr_1D_51_V_we0 { O 1 bit } edge_attr_aggr_1D_51_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_51_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1469 \
    name edge_attr_aggr_1D_52_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_52_V \
    op interface \
    ports { edge_attr_aggr_1D_52_V_address0 { O 3 vector } edge_attr_aggr_1D_52_V_ce0 { O 1 bit } edge_attr_aggr_1D_52_V_we0 { O 1 bit } edge_attr_aggr_1D_52_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_52_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1470 \
    name edge_attr_aggr_1D_53_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_53_V \
    op interface \
    ports { edge_attr_aggr_1D_53_V_address0 { O 3 vector } edge_attr_aggr_1D_53_V_ce0 { O 1 bit } edge_attr_aggr_1D_53_V_we0 { O 1 bit } edge_attr_aggr_1D_53_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_53_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1471 \
    name edge_attr_aggr_1D_54_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_54_V \
    op interface \
    ports { edge_attr_aggr_1D_54_V_address0 { O 3 vector } edge_attr_aggr_1D_54_V_ce0 { O 1 bit } edge_attr_aggr_1D_54_V_we0 { O 1 bit } edge_attr_aggr_1D_54_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_54_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1472 \
    name edge_attr_aggr_1D_55_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_55_V \
    op interface \
    ports { edge_attr_aggr_1D_55_V_address0 { O 3 vector } edge_attr_aggr_1D_55_V_ce0 { O 1 bit } edge_attr_aggr_1D_55_V_we0 { O 1 bit } edge_attr_aggr_1D_55_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_55_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1473 \
    name edge_attr_aggr_1D_56_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_56_V \
    op interface \
    ports { edge_attr_aggr_1D_56_V_address0 { O 3 vector } edge_attr_aggr_1D_56_V_ce0 { O 1 bit } edge_attr_aggr_1D_56_V_we0 { O 1 bit } edge_attr_aggr_1D_56_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_56_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1474 \
    name edge_attr_aggr_1D_57_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_57_V \
    op interface \
    ports { edge_attr_aggr_1D_57_V_address0 { O 3 vector } edge_attr_aggr_1D_57_V_ce0 { O 1 bit } edge_attr_aggr_1D_57_V_we0 { O 1 bit } edge_attr_aggr_1D_57_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_57_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1475 \
    name edge_attr_aggr_1D_58_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_58_V \
    op interface \
    ports { edge_attr_aggr_1D_58_V_address0 { O 3 vector } edge_attr_aggr_1D_58_V_ce0 { O 1 bit } edge_attr_aggr_1D_58_V_we0 { O 1 bit } edge_attr_aggr_1D_58_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_58_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1476 \
    name edge_attr_aggr_1D_59_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_59_V \
    op interface \
    ports { edge_attr_aggr_1D_59_V_address0 { O 3 vector } edge_attr_aggr_1D_59_V_ce0 { O 1 bit } edge_attr_aggr_1D_59_V_we0 { O 1 bit } edge_attr_aggr_1D_59_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_59_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1477 \
    name edge_attr_aggr_1D_60_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_60_V \
    op interface \
    ports { edge_attr_aggr_1D_60_V_address0 { O 3 vector } edge_attr_aggr_1D_60_V_ce0 { O 1 bit } edge_attr_aggr_1D_60_V_we0 { O 1 bit } edge_attr_aggr_1D_60_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_60_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1478 \
    name edge_attr_aggr_1D_61_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_61_V \
    op interface \
    ports { edge_attr_aggr_1D_61_V_address0 { O 3 vector } edge_attr_aggr_1D_61_V_ce0 { O 1 bit } edge_attr_aggr_1D_61_V_we0 { O 1 bit } edge_attr_aggr_1D_61_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_61_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1479 \
    name edge_attr_aggr_1D_62_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_62_V \
    op interface \
    ports { edge_attr_aggr_1D_62_V_address0 { O 3 vector } edge_attr_aggr_1D_62_V_ce0 { O 1 bit } edge_attr_aggr_1D_62_V_we0 { O 1 bit } edge_attr_aggr_1D_62_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_62_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1480 \
    name edge_attr_aggr_1D_63_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_attr_aggr_1D_63_V \
    op interface \
    ports { edge_attr_aggr_1D_63_V_address0 { O 3 vector } edge_attr_aggr_1D_63_V_ce0 { O 1 bit } edge_attr_aggr_1D_63_V_we0 { O 1 bit } edge_attr_aggr_1D_63_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_aggr_1D_63_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


