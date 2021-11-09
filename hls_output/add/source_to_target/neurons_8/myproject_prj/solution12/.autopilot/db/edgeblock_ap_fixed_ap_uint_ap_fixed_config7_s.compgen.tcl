# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 854
set hasByteEnable 0
set MemName edgeblock_ap_fixed_ap_uint_ap_fixed_config7_s_node_attr_1bkb
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 256
set AddrRange 7
set AddrWd 3
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.158
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
    id 855 \
    name node_attr_1D_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_0_V \
    op interface \
    ports { node_attr_1D_0_V_address0 { O 3 vector } node_attr_1D_0_V_ce0 { O 1 bit } node_attr_1D_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 856 \
    name node_attr_1D_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_1_V \
    op interface \
    ports { node_attr_1D_1_V_address0 { O 3 vector } node_attr_1D_1_V_ce0 { O 1 bit } node_attr_1D_1_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 857 \
    name node_attr_1D_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_2_V \
    op interface \
    ports { node_attr_1D_2_V_address0 { O 3 vector } node_attr_1D_2_V_ce0 { O 1 bit } node_attr_1D_2_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 858 \
    name node_attr_1D_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_3_V \
    op interface \
    ports { node_attr_1D_3_V_address0 { O 3 vector } node_attr_1D_3_V_ce0 { O 1 bit } node_attr_1D_3_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 859 \
    name node_attr_1D_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_4_V \
    op interface \
    ports { node_attr_1D_4_V_address0 { O 3 vector } node_attr_1D_4_V_ce0 { O 1 bit } node_attr_1D_4_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 860 \
    name node_attr_1D_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_5_V \
    op interface \
    ports { node_attr_1D_5_V_address0 { O 3 vector } node_attr_1D_5_V_ce0 { O 1 bit } node_attr_1D_5_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 861 \
    name node_attr_1D_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_6_V \
    op interface \
    ports { node_attr_1D_6_V_address0 { O 3 vector } node_attr_1D_6_V_ce0 { O 1 bit } node_attr_1D_6_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 862 \
    name node_attr_1D_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_7_V \
    op interface \
    ports { node_attr_1D_7_V_address0 { O 3 vector } node_attr_1D_7_V_ce0 { O 1 bit } node_attr_1D_7_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 863 \
    name node_attr_1D_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_8_V \
    op interface \
    ports { node_attr_1D_8_V_address0 { O 3 vector } node_attr_1D_8_V_ce0 { O 1 bit } node_attr_1D_8_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 864 \
    name node_attr_1D_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_9_V \
    op interface \
    ports { node_attr_1D_9_V_address0 { O 3 vector } node_attr_1D_9_V_ce0 { O 1 bit } node_attr_1D_9_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 865 \
    name node_attr_1D_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_10_V \
    op interface \
    ports { node_attr_1D_10_V_address0 { O 3 vector } node_attr_1D_10_V_ce0 { O 1 bit } node_attr_1D_10_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 866 \
    name node_attr_1D_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_11_V \
    op interface \
    ports { node_attr_1D_11_V_address0 { O 3 vector } node_attr_1D_11_V_ce0 { O 1 bit } node_attr_1D_11_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 867 \
    name node_attr_1D_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_12_V \
    op interface \
    ports { node_attr_1D_12_V_address0 { O 3 vector } node_attr_1D_12_V_ce0 { O 1 bit } node_attr_1D_12_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 868 \
    name node_attr_1D_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_13_V \
    op interface \
    ports { node_attr_1D_13_V_address0 { O 3 vector } node_attr_1D_13_V_ce0 { O 1 bit } node_attr_1D_13_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 869 \
    name node_attr_1D_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_14_V \
    op interface \
    ports { node_attr_1D_14_V_address0 { O 3 vector } node_attr_1D_14_V_ce0 { O 1 bit } node_attr_1D_14_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 870 \
    name node_attr_1D_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_15_V \
    op interface \
    ports { node_attr_1D_15_V_address0 { O 3 vector } node_attr_1D_15_V_ce0 { O 1 bit } node_attr_1D_15_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 871 \
    name node_attr_1D_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_16_V \
    op interface \
    ports { node_attr_1D_16_V_address0 { O 3 vector } node_attr_1D_16_V_ce0 { O 1 bit } node_attr_1D_16_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 872 \
    name node_attr_1D_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_17_V \
    op interface \
    ports { node_attr_1D_17_V_address0 { O 3 vector } node_attr_1D_17_V_ce0 { O 1 bit } node_attr_1D_17_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 873 \
    name node_attr_1D_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_18_V \
    op interface \
    ports { node_attr_1D_18_V_address0 { O 3 vector } node_attr_1D_18_V_ce0 { O 1 bit } node_attr_1D_18_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 874 \
    name node_attr_1D_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_19_V \
    op interface \
    ports { node_attr_1D_19_V_address0 { O 3 vector } node_attr_1D_19_V_ce0 { O 1 bit } node_attr_1D_19_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 875 \
    name node_attr_1D_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_20_V \
    op interface \
    ports { node_attr_1D_20_V_address0 { O 3 vector } node_attr_1D_20_V_ce0 { O 1 bit } node_attr_1D_20_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 876 \
    name node_attr_1D_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_21_V \
    op interface \
    ports { node_attr_1D_21_V_address0 { O 3 vector } node_attr_1D_21_V_ce0 { O 1 bit } node_attr_1D_21_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 877 \
    name node_attr_1D_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_22_V \
    op interface \
    ports { node_attr_1D_22_V_address0 { O 3 vector } node_attr_1D_22_V_ce0 { O 1 bit } node_attr_1D_22_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 878 \
    name node_attr_1D_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_23_V \
    op interface \
    ports { node_attr_1D_23_V_address0 { O 3 vector } node_attr_1D_23_V_ce0 { O 1 bit } node_attr_1D_23_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 879 \
    name node_attr_1D_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_24_V \
    op interface \
    ports { node_attr_1D_24_V_address0 { O 3 vector } node_attr_1D_24_V_ce0 { O 1 bit } node_attr_1D_24_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 880 \
    name node_attr_1D_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_25_V \
    op interface \
    ports { node_attr_1D_25_V_address0 { O 3 vector } node_attr_1D_25_V_ce0 { O 1 bit } node_attr_1D_25_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 881 \
    name node_attr_1D_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_26_V \
    op interface \
    ports { node_attr_1D_26_V_address0 { O 3 vector } node_attr_1D_26_V_ce0 { O 1 bit } node_attr_1D_26_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 882 \
    name node_attr_1D_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_27_V \
    op interface \
    ports { node_attr_1D_27_V_address0 { O 3 vector } node_attr_1D_27_V_ce0 { O 1 bit } node_attr_1D_27_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 883 \
    name node_attr_1D_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_28_V \
    op interface \
    ports { node_attr_1D_28_V_address0 { O 3 vector } node_attr_1D_28_V_ce0 { O 1 bit } node_attr_1D_28_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 884 \
    name node_attr_1D_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_29_V \
    op interface \
    ports { node_attr_1D_29_V_address0 { O 3 vector } node_attr_1D_29_V_ce0 { O 1 bit } node_attr_1D_29_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 885 \
    name node_attr_1D_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_30_V \
    op interface \
    ports { node_attr_1D_30_V_address0 { O 3 vector } node_attr_1D_30_V_ce0 { O 1 bit } node_attr_1D_30_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 886 \
    name node_attr_1D_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_31_V \
    op interface \
    ports { node_attr_1D_31_V_address0 { O 3 vector } node_attr_1D_31_V_ce0 { O 1 bit } node_attr_1D_31_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 887 \
    name node_attr_1D_32_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_32_V \
    op interface \
    ports { node_attr_1D_32_V_address0 { O 3 vector } node_attr_1D_32_V_ce0 { O 1 bit } node_attr_1D_32_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_32_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 888 \
    name node_attr_1D_33_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_33_V \
    op interface \
    ports { node_attr_1D_33_V_address0 { O 3 vector } node_attr_1D_33_V_ce0 { O 1 bit } node_attr_1D_33_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_33_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 889 \
    name node_attr_1D_34_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_34_V \
    op interface \
    ports { node_attr_1D_34_V_address0 { O 3 vector } node_attr_1D_34_V_ce0 { O 1 bit } node_attr_1D_34_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_34_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 890 \
    name node_attr_1D_35_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_35_V \
    op interface \
    ports { node_attr_1D_35_V_address0 { O 3 vector } node_attr_1D_35_V_ce0 { O 1 bit } node_attr_1D_35_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_35_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 891 \
    name node_attr_1D_36_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_36_V \
    op interface \
    ports { node_attr_1D_36_V_address0 { O 3 vector } node_attr_1D_36_V_ce0 { O 1 bit } node_attr_1D_36_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_36_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 892 \
    name node_attr_1D_37_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_37_V \
    op interface \
    ports { node_attr_1D_37_V_address0 { O 3 vector } node_attr_1D_37_V_ce0 { O 1 bit } node_attr_1D_37_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_37_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 893 \
    name node_attr_1D_38_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_38_V \
    op interface \
    ports { node_attr_1D_38_V_address0 { O 3 vector } node_attr_1D_38_V_ce0 { O 1 bit } node_attr_1D_38_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_38_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 894 \
    name node_attr_1D_39_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_39_V \
    op interface \
    ports { node_attr_1D_39_V_address0 { O 3 vector } node_attr_1D_39_V_ce0 { O 1 bit } node_attr_1D_39_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_39_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 895 \
    name node_attr_1D_40_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_40_V \
    op interface \
    ports { node_attr_1D_40_V_address0 { O 3 vector } node_attr_1D_40_V_ce0 { O 1 bit } node_attr_1D_40_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_40_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 896 \
    name node_attr_1D_41_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_41_V \
    op interface \
    ports { node_attr_1D_41_V_address0 { O 3 vector } node_attr_1D_41_V_ce0 { O 1 bit } node_attr_1D_41_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_41_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 897 \
    name node_attr_1D_42_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_42_V \
    op interface \
    ports { node_attr_1D_42_V_address0 { O 3 vector } node_attr_1D_42_V_ce0 { O 1 bit } node_attr_1D_42_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_42_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 898 \
    name node_attr_1D_43_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_43_V \
    op interface \
    ports { node_attr_1D_43_V_address0 { O 3 vector } node_attr_1D_43_V_ce0 { O 1 bit } node_attr_1D_43_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_43_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 899 \
    name node_attr_1D_44_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_44_V \
    op interface \
    ports { node_attr_1D_44_V_address0 { O 3 vector } node_attr_1D_44_V_ce0 { O 1 bit } node_attr_1D_44_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_44_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 900 \
    name node_attr_1D_45_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_45_V \
    op interface \
    ports { node_attr_1D_45_V_address0 { O 3 vector } node_attr_1D_45_V_ce0 { O 1 bit } node_attr_1D_45_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_45_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 901 \
    name node_attr_1D_46_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_46_V \
    op interface \
    ports { node_attr_1D_46_V_address0 { O 3 vector } node_attr_1D_46_V_ce0 { O 1 bit } node_attr_1D_46_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_46_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 902 \
    name node_attr_1D_47_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1D_47_V \
    op interface \
    ports { node_attr_1D_47_V_address0 { O 3 vector } node_attr_1D_47_V_ce0 { O 1 bit } node_attr_1D_47_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_47_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 903 \
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
    id 904 \
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
    id 905 \
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
    id 906 \
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
    id 907 \
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
    id 908 \
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
    id 909 \
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
    id 910 \
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
    id 911 \
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
    id 912 \
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
    id 913 \
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
    id 914 \
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
    id 915 \
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
    id 916 \
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
    id 917 \
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
    id 918 \
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
    id 919 \
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
    id 920 \
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
    id 921 \
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
    id 922 \
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
    id 923 \
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
    id 924 \
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
    id 925 \
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
    id 926 \
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
    id 927 \
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
    id 928 \
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
    id 929 \
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
    id 930 \
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
    id 931 \
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
    id 932 \
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
    id 933 \
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
    id 934 \
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
    id 935 \
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
    id 936 \
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
    id 937 \
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
    id 938 \
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
    id 939 \
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
    id 940 \
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
    id 941 \
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
    id 942 \
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
    id 943 \
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
    id 944 \
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
    id 945 \
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
    id 946 \
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
    id 947 \
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
    id 948 \
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
    id 949 \
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
    id 950 \
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
    id 951 \
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
    id 952 \
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
    id 953 \
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
    id 954 \
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
    id 955 \
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
    id 956 \
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
    id 957 \
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
    id 958 \
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
    id 959 \
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
    id 960 \
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
    id 961 \
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
    id 962 \
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
    id 963 \
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
    id 964 \
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
    id 965 \
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
    id 966 \
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
    id 967 \
    name edge_index_1D_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_0_V \
    op interface \
    ports { edge_index_1D_0_V_address0 { O 4 vector } edge_index_1D_0_V_ce0 { O 1 bit } edge_index_1D_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 968 \
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
    id 969 \
    name edge_index_1D_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_2_V \
    op interface \
    ports { edge_index_1D_2_V_address0 { O 4 vector } edge_index_1D_2_V_ce0 { O 1 bit } edge_index_1D_2_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 970 \
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
    id 971 \
    name edge_index_1D_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_4_V \
    op interface \
    ports { edge_index_1D_4_V_address0 { O 4 vector } edge_index_1D_4_V_ce0 { O 1 bit } edge_index_1D_4_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 972 \
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
    id 973 \
    name edge_index_1D_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_6_V \
    op interface \
    ports { edge_index_1D_6_V_address0 { O 4 vector } edge_index_1D_6_V_ce0 { O 1 bit } edge_index_1D_6_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 974 \
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
    id 975 \
    name edge_index_1D_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_8_V \
    op interface \
    ports { edge_index_1D_8_V_address0 { O 4 vector } edge_index_1D_8_V_ce0 { O 1 bit } edge_index_1D_8_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 976 \
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
    id 977 \
    name edge_index_1D_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_10_V \
    op interface \
    ports { edge_index_1D_10_V_address0 { O 4 vector } edge_index_1D_10_V_ce0 { O 1 bit } edge_index_1D_10_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 978 \
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
    id 979 \
    name edge_index_1D_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_12_V \
    op interface \
    ports { edge_index_1D_12_V_address0 { O 4 vector } edge_index_1D_12_V_ce0 { O 1 bit } edge_index_1D_12_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 980 \
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
    id 981 \
    name edge_index_1D_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_14_V \
    op interface \
    ports { edge_index_1D_14_V_address0 { O 4 vector } edge_index_1D_14_V_ce0 { O 1 bit } edge_index_1D_14_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 982 \
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
    id 983 \
    name edge_index_1D_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_16_V \
    op interface \
    ports { edge_index_1D_16_V_address0 { O 4 vector } edge_index_1D_16_V_ce0 { O 1 bit } edge_index_1D_16_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 984 \
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
    id 985 \
    name edge_index_1D_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_18_V \
    op interface \
    ports { edge_index_1D_18_V_address0 { O 4 vector } edge_index_1D_18_V_ce0 { O 1 bit } edge_index_1D_18_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 986 \
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
    id 987 \
    name edge_index_1D_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_20_V \
    op interface \
    ports { edge_index_1D_20_V_address0 { O 4 vector } edge_index_1D_20_V_ce0 { O 1 bit } edge_index_1D_20_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 988 \
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
    id 989 \
    name edge_index_1D_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_22_V \
    op interface \
    ports { edge_index_1D_22_V_address0 { O 4 vector } edge_index_1D_22_V_ce0 { O 1 bit } edge_index_1D_22_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 990 \
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
    id 991 \
    name edge_index_1D_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_24_V \
    op interface \
    ports { edge_index_1D_24_V_address0 { O 4 vector } edge_index_1D_24_V_ce0 { O 1 bit } edge_index_1D_24_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 992 \
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
    id 993 \
    name edge_index_1D_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_26_V \
    op interface \
    ports { edge_index_1D_26_V_address0 { O 4 vector } edge_index_1D_26_V_ce0 { O 1 bit } edge_index_1D_26_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 994 \
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
    id 995 \
    name edge_index_1D_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_28_V \
    op interface \
    ports { edge_index_1D_28_V_address0 { O 4 vector } edge_index_1D_28_V_ce0 { O 1 bit } edge_index_1D_28_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 996 \
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
    id 997 \
    name edge_index_1D_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1D_30_V \
    op interface \
    ports { edge_index_1D_30_V_address0 { O 4 vector } edge_index_1D_30_V_ce0 { O 1 bit } edge_index_1D_30_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1D_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 998 \
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
    id 999 \
    name edge_update_1D_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_0_V \
    op interface \
    ports { edge_update_1D_0_V_address0 { O 4 vector } edge_update_1D_0_V_ce0 { O 1 bit } edge_update_1D_0_V_we0 { O 1 bit } edge_update_1D_0_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1000 \
    name edge_update_1D_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_1_V \
    op interface \
    ports { edge_update_1D_1_V_address0 { O 4 vector } edge_update_1D_1_V_ce0 { O 1 bit } edge_update_1D_1_V_we0 { O 1 bit } edge_update_1D_1_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1001 \
    name edge_update_1D_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_2_V \
    op interface \
    ports { edge_update_1D_2_V_address0 { O 4 vector } edge_update_1D_2_V_ce0 { O 1 bit } edge_update_1D_2_V_we0 { O 1 bit } edge_update_1D_2_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1002 \
    name edge_update_1D_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_3_V \
    op interface \
    ports { edge_update_1D_3_V_address0 { O 4 vector } edge_update_1D_3_V_ce0 { O 1 bit } edge_update_1D_3_V_we0 { O 1 bit } edge_update_1D_3_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1003 \
    name edge_update_1D_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_4_V \
    op interface \
    ports { edge_update_1D_4_V_address0 { O 4 vector } edge_update_1D_4_V_ce0 { O 1 bit } edge_update_1D_4_V_we0 { O 1 bit } edge_update_1D_4_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1004 \
    name edge_update_1D_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_5_V \
    op interface \
    ports { edge_update_1D_5_V_address0 { O 4 vector } edge_update_1D_5_V_ce0 { O 1 bit } edge_update_1D_5_V_we0 { O 1 bit } edge_update_1D_5_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1005 \
    name edge_update_1D_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_6_V \
    op interface \
    ports { edge_update_1D_6_V_address0 { O 4 vector } edge_update_1D_6_V_ce0 { O 1 bit } edge_update_1D_6_V_we0 { O 1 bit } edge_update_1D_6_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1006 \
    name edge_update_1D_7_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_7_V \
    op interface \
    ports { edge_update_1D_7_V_address0 { O 4 vector } edge_update_1D_7_V_ce0 { O 1 bit } edge_update_1D_7_V_we0 { O 1 bit } edge_update_1D_7_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1007 \
    name edge_update_1D_8_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_8_V \
    op interface \
    ports { edge_update_1D_8_V_address0 { O 4 vector } edge_update_1D_8_V_ce0 { O 1 bit } edge_update_1D_8_V_we0 { O 1 bit } edge_update_1D_8_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1008 \
    name edge_update_1D_9_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_9_V \
    op interface \
    ports { edge_update_1D_9_V_address0 { O 4 vector } edge_update_1D_9_V_ce0 { O 1 bit } edge_update_1D_9_V_we0 { O 1 bit } edge_update_1D_9_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1009 \
    name edge_update_1D_10_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_10_V \
    op interface \
    ports { edge_update_1D_10_V_address0 { O 4 vector } edge_update_1D_10_V_ce0 { O 1 bit } edge_update_1D_10_V_we0 { O 1 bit } edge_update_1D_10_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1010 \
    name edge_update_1D_11_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_11_V \
    op interface \
    ports { edge_update_1D_11_V_address0 { O 4 vector } edge_update_1D_11_V_ce0 { O 1 bit } edge_update_1D_11_V_we0 { O 1 bit } edge_update_1D_11_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1011 \
    name edge_update_1D_12_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_12_V \
    op interface \
    ports { edge_update_1D_12_V_address0 { O 4 vector } edge_update_1D_12_V_ce0 { O 1 bit } edge_update_1D_12_V_we0 { O 1 bit } edge_update_1D_12_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1012 \
    name edge_update_1D_13_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_13_V \
    op interface \
    ports { edge_update_1D_13_V_address0 { O 4 vector } edge_update_1D_13_V_ce0 { O 1 bit } edge_update_1D_13_V_we0 { O 1 bit } edge_update_1D_13_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1013 \
    name edge_update_1D_14_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_14_V \
    op interface \
    ports { edge_update_1D_14_V_address0 { O 4 vector } edge_update_1D_14_V_ce0 { O 1 bit } edge_update_1D_14_V_we0 { O 1 bit } edge_update_1D_14_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1014 \
    name edge_update_1D_15_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_15_V \
    op interface \
    ports { edge_update_1D_15_V_address0 { O 4 vector } edge_update_1D_15_V_ce0 { O 1 bit } edge_update_1D_15_V_we0 { O 1 bit } edge_update_1D_15_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1015 \
    name edge_update_1D_16_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_16_V \
    op interface \
    ports { edge_update_1D_16_V_address0 { O 4 vector } edge_update_1D_16_V_ce0 { O 1 bit } edge_update_1D_16_V_we0 { O 1 bit } edge_update_1D_16_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1016 \
    name edge_update_1D_17_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_17_V \
    op interface \
    ports { edge_update_1D_17_V_address0 { O 4 vector } edge_update_1D_17_V_ce0 { O 1 bit } edge_update_1D_17_V_we0 { O 1 bit } edge_update_1D_17_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1017 \
    name edge_update_1D_18_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_18_V \
    op interface \
    ports { edge_update_1D_18_V_address0 { O 4 vector } edge_update_1D_18_V_ce0 { O 1 bit } edge_update_1D_18_V_we0 { O 1 bit } edge_update_1D_18_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1018 \
    name edge_update_1D_19_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_19_V \
    op interface \
    ports { edge_update_1D_19_V_address0 { O 4 vector } edge_update_1D_19_V_ce0 { O 1 bit } edge_update_1D_19_V_we0 { O 1 bit } edge_update_1D_19_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1019 \
    name edge_update_1D_20_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_20_V \
    op interface \
    ports { edge_update_1D_20_V_address0 { O 4 vector } edge_update_1D_20_V_ce0 { O 1 bit } edge_update_1D_20_V_we0 { O 1 bit } edge_update_1D_20_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1020 \
    name edge_update_1D_21_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_21_V \
    op interface \
    ports { edge_update_1D_21_V_address0 { O 4 vector } edge_update_1D_21_V_ce0 { O 1 bit } edge_update_1D_21_V_we0 { O 1 bit } edge_update_1D_21_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1021 \
    name edge_update_1D_22_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_22_V \
    op interface \
    ports { edge_update_1D_22_V_address0 { O 4 vector } edge_update_1D_22_V_ce0 { O 1 bit } edge_update_1D_22_V_we0 { O 1 bit } edge_update_1D_22_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1022 \
    name edge_update_1D_23_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_23_V \
    op interface \
    ports { edge_update_1D_23_V_address0 { O 4 vector } edge_update_1D_23_V_ce0 { O 1 bit } edge_update_1D_23_V_we0 { O 1 bit } edge_update_1D_23_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1023 \
    name edge_update_1D_24_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_24_V \
    op interface \
    ports { edge_update_1D_24_V_address0 { O 4 vector } edge_update_1D_24_V_ce0 { O 1 bit } edge_update_1D_24_V_we0 { O 1 bit } edge_update_1D_24_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1024 \
    name edge_update_1D_25_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_25_V \
    op interface \
    ports { edge_update_1D_25_V_address0 { O 4 vector } edge_update_1D_25_V_ce0 { O 1 bit } edge_update_1D_25_V_we0 { O 1 bit } edge_update_1D_25_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1025 \
    name edge_update_1D_26_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_26_V \
    op interface \
    ports { edge_update_1D_26_V_address0 { O 4 vector } edge_update_1D_26_V_ce0 { O 1 bit } edge_update_1D_26_V_we0 { O 1 bit } edge_update_1D_26_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1026 \
    name edge_update_1D_27_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_27_V \
    op interface \
    ports { edge_update_1D_27_V_address0 { O 4 vector } edge_update_1D_27_V_ce0 { O 1 bit } edge_update_1D_27_V_we0 { O 1 bit } edge_update_1D_27_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1027 \
    name edge_update_1D_28_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_28_V \
    op interface \
    ports { edge_update_1D_28_V_address0 { O 4 vector } edge_update_1D_28_V_ce0 { O 1 bit } edge_update_1D_28_V_we0 { O 1 bit } edge_update_1D_28_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1028 \
    name edge_update_1D_29_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_29_V \
    op interface \
    ports { edge_update_1D_29_V_address0 { O 4 vector } edge_update_1D_29_V_ce0 { O 1 bit } edge_update_1D_29_V_we0 { O 1 bit } edge_update_1D_29_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1029 \
    name edge_update_1D_30_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_30_V \
    op interface \
    ports { edge_update_1D_30_V_address0 { O 4 vector } edge_update_1D_30_V_ce0 { O 1 bit } edge_update_1D_30_V_we0 { O 1 bit } edge_update_1D_30_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1030 \
    name edge_update_1D_31_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_31_V \
    op interface \
    ports { edge_update_1D_31_V_address0 { O 4 vector } edge_update_1D_31_V_ce0 { O 1 bit } edge_update_1D_31_V_we0 { O 1 bit } edge_update_1D_31_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1031 \
    name edge_update_1D_32_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_32_V \
    op interface \
    ports { edge_update_1D_32_V_address0 { O 4 vector } edge_update_1D_32_V_ce0 { O 1 bit } edge_update_1D_32_V_we0 { O 1 bit } edge_update_1D_32_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_32_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1032 \
    name edge_update_1D_33_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_33_V \
    op interface \
    ports { edge_update_1D_33_V_address0 { O 4 vector } edge_update_1D_33_V_ce0 { O 1 bit } edge_update_1D_33_V_we0 { O 1 bit } edge_update_1D_33_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_33_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1033 \
    name edge_update_1D_34_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_34_V \
    op interface \
    ports { edge_update_1D_34_V_address0 { O 4 vector } edge_update_1D_34_V_ce0 { O 1 bit } edge_update_1D_34_V_we0 { O 1 bit } edge_update_1D_34_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_34_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1034 \
    name edge_update_1D_35_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_35_V \
    op interface \
    ports { edge_update_1D_35_V_address0 { O 4 vector } edge_update_1D_35_V_ce0 { O 1 bit } edge_update_1D_35_V_we0 { O 1 bit } edge_update_1D_35_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_35_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1035 \
    name edge_update_1D_36_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_36_V \
    op interface \
    ports { edge_update_1D_36_V_address0 { O 4 vector } edge_update_1D_36_V_ce0 { O 1 bit } edge_update_1D_36_V_we0 { O 1 bit } edge_update_1D_36_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_36_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1036 \
    name edge_update_1D_37_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_37_V \
    op interface \
    ports { edge_update_1D_37_V_address0 { O 4 vector } edge_update_1D_37_V_ce0 { O 1 bit } edge_update_1D_37_V_we0 { O 1 bit } edge_update_1D_37_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_37_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1037 \
    name edge_update_1D_38_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_38_V \
    op interface \
    ports { edge_update_1D_38_V_address0 { O 4 vector } edge_update_1D_38_V_ce0 { O 1 bit } edge_update_1D_38_V_we0 { O 1 bit } edge_update_1D_38_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_38_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1038 \
    name edge_update_1D_39_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_39_V \
    op interface \
    ports { edge_update_1D_39_V_address0 { O 4 vector } edge_update_1D_39_V_ce0 { O 1 bit } edge_update_1D_39_V_we0 { O 1 bit } edge_update_1D_39_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_39_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1039 \
    name edge_update_1D_40_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_40_V \
    op interface \
    ports { edge_update_1D_40_V_address0 { O 4 vector } edge_update_1D_40_V_ce0 { O 1 bit } edge_update_1D_40_V_we0 { O 1 bit } edge_update_1D_40_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_40_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1040 \
    name edge_update_1D_41_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_41_V \
    op interface \
    ports { edge_update_1D_41_V_address0 { O 4 vector } edge_update_1D_41_V_ce0 { O 1 bit } edge_update_1D_41_V_we0 { O 1 bit } edge_update_1D_41_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_41_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1041 \
    name edge_update_1D_42_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_42_V \
    op interface \
    ports { edge_update_1D_42_V_address0 { O 4 vector } edge_update_1D_42_V_ce0 { O 1 bit } edge_update_1D_42_V_we0 { O 1 bit } edge_update_1D_42_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_42_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1042 \
    name edge_update_1D_43_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_43_V \
    op interface \
    ports { edge_update_1D_43_V_address0 { O 4 vector } edge_update_1D_43_V_ce0 { O 1 bit } edge_update_1D_43_V_we0 { O 1 bit } edge_update_1D_43_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_43_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1043 \
    name edge_update_1D_44_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_44_V \
    op interface \
    ports { edge_update_1D_44_V_address0 { O 4 vector } edge_update_1D_44_V_ce0 { O 1 bit } edge_update_1D_44_V_we0 { O 1 bit } edge_update_1D_44_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_44_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1044 \
    name edge_update_1D_45_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_45_V \
    op interface \
    ports { edge_update_1D_45_V_address0 { O 4 vector } edge_update_1D_45_V_ce0 { O 1 bit } edge_update_1D_45_V_we0 { O 1 bit } edge_update_1D_45_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_45_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1045 \
    name edge_update_1D_46_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_46_V \
    op interface \
    ports { edge_update_1D_46_V_address0 { O 4 vector } edge_update_1D_46_V_ce0 { O 1 bit } edge_update_1D_46_V_we0 { O 1 bit } edge_update_1D_46_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_46_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1046 \
    name edge_update_1D_47_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_47_V \
    op interface \
    ports { edge_update_1D_47_V_address0 { O 4 vector } edge_update_1D_47_V_ce0 { O 1 bit } edge_update_1D_47_V_we0 { O 1 bit } edge_update_1D_47_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_47_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1047 \
    name edge_update_1D_48_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_48_V \
    op interface \
    ports { edge_update_1D_48_V_address0 { O 4 vector } edge_update_1D_48_V_ce0 { O 1 bit } edge_update_1D_48_V_we0 { O 1 bit } edge_update_1D_48_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_48_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1048 \
    name edge_update_1D_49_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_49_V \
    op interface \
    ports { edge_update_1D_49_V_address0 { O 4 vector } edge_update_1D_49_V_ce0 { O 1 bit } edge_update_1D_49_V_we0 { O 1 bit } edge_update_1D_49_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_49_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1049 \
    name edge_update_1D_50_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_50_V \
    op interface \
    ports { edge_update_1D_50_V_address0 { O 4 vector } edge_update_1D_50_V_ce0 { O 1 bit } edge_update_1D_50_V_we0 { O 1 bit } edge_update_1D_50_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_50_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1050 \
    name edge_update_1D_51_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_51_V \
    op interface \
    ports { edge_update_1D_51_V_address0 { O 4 vector } edge_update_1D_51_V_ce0 { O 1 bit } edge_update_1D_51_V_we0 { O 1 bit } edge_update_1D_51_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_51_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1051 \
    name edge_update_1D_52_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_52_V \
    op interface \
    ports { edge_update_1D_52_V_address0 { O 4 vector } edge_update_1D_52_V_ce0 { O 1 bit } edge_update_1D_52_V_we0 { O 1 bit } edge_update_1D_52_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_52_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1052 \
    name edge_update_1D_53_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_53_V \
    op interface \
    ports { edge_update_1D_53_V_address0 { O 4 vector } edge_update_1D_53_V_ce0 { O 1 bit } edge_update_1D_53_V_we0 { O 1 bit } edge_update_1D_53_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_53_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1053 \
    name edge_update_1D_54_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_54_V \
    op interface \
    ports { edge_update_1D_54_V_address0 { O 4 vector } edge_update_1D_54_V_ce0 { O 1 bit } edge_update_1D_54_V_we0 { O 1 bit } edge_update_1D_54_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_54_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1054 \
    name edge_update_1D_55_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_55_V \
    op interface \
    ports { edge_update_1D_55_V_address0 { O 4 vector } edge_update_1D_55_V_ce0 { O 1 bit } edge_update_1D_55_V_we0 { O 1 bit } edge_update_1D_55_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_55_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1055 \
    name edge_update_1D_56_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_56_V \
    op interface \
    ports { edge_update_1D_56_V_address0 { O 4 vector } edge_update_1D_56_V_ce0 { O 1 bit } edge_update_1D_56_V_we0 { O 1 bit } edge_update_1D_56_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_56_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1056 \
    name edge_update_1D_57_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_57_V \
    op interface \
    ports { edge_update_1D_57_V_address0 { O 4 vector } edge_update_1D_57_V_ce0 { O 1 bit } edge_update_1D_57_V_we0 { O 1 bit } edge_update_1D_57_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_57_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1057 \
    name edge_update_1D_58_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_58_V \
    op interface \
    ports { edge_update_1D_58_V_address0 { O 4 vector } edge_update_1D_58_V_ce0 { O 1 bit } edge_update_1D_58_V_we0 { O 1 bit } edge_update_1D_58_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_58_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1058 \
    name edge_update_1D_59_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_59_V \
    op interface \
    ports { edge_update_1D_59_V_address0 { O 4 vector } edge_update_1D_59_V_ce0 { O 1 bit } edge_update_1D_59_V_we0 { O 1 bit } edge_update_1D_59_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_59_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1059 \
    name edge_update_1D_60_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_60_V \
    op interface \
    ports { edge_update_1D_60_V_address0 { O 4 vector } edge_update_1D_60_V_ce0 { O 1 bit } edge_update_1D_60_V_we0 { O 1 bit } edge_update_1D_60_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_60_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1060 \
    name edge_update_1D_61_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_61_V \
    op interface \
    ports { edge_update_1D_61_V_address0 { O 4 vector } edge_update_1D_61_V_ce0 { O 1 bit } edge_update_1D_61_V_we0 { O 1 bit } edge_update_1D_61_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_61_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1061 \
    name edge_update_1D_62_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_62_V \
    op interface \
    ports { edge_update_1D_62_V_address0 { O 4 vector } edge_update_1D_62_V_ce0 { O 1 bit } edge_update_1D_62_V_we0 { O 1 bit } edge_update_1D_62_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_62_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1062 \
    name edge_update_1D_63_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename edge_update_1D_63_V \
    op interface \
    ports { edge_update_1D_63_V_address0 { O 4 vector } edge_update_1D_63_V_ce0 { O 1 bit } edge_update_1D_63_V_we0 { O 1 bit } edge_update_1D_63_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_update_1D_63_V'"
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


