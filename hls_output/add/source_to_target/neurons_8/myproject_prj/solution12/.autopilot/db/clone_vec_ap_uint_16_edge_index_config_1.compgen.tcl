# This script segment is generated automatically by AutoPilot

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
    id 149 \
    name IN_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_0_V \
    op interface \
    ports { IN_0_V_address0 { O 4 vector } IN_0_V_ce0 { O 1 bit } IN_0_V_q0 { I 16 vector } IN_0_V_address1 { O 4 vector } IN_0_V_ce1 { O 1 bit } IN_0_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 150 \
    name IN_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_1_V \
    op interface \
    ports { IN_1_V_address0 { O 4 vector } IN_1_V_ce0 { O 1 bit } IN_1_V_q0 { I 16 vector } IN_1_V_address1 { O 4 vector } IN_1_V_ce1 { O 1 bit } IN_1_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 151 \
    name IN_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_2_V \
    op interface \
    ports { IN_2_V_address0 { O 4 vector } IN_2_V_ce0 { O 1 bit } IN_2_V_q0 { I 16 vector } IN_2_V_address1 { O 4 vector } IN_2_V_ce1 { O 1 bit } IN_2_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 152 \
    name IN_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_3_V \
    op interface \
    ports { IN_3_V_address0 { O 4 vector } IN_3_V_ce0 { O 1 bit } IN_3_V_q0 { I 16 vector } IN_3_V_address1 { O 4 vector } IN_3_V_ce1 { O 1 bit } IN_3_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 153 \
    name IN_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_4_V \
    op interface \
    ports { IN_4_V_address0 { O 4 vector } IN_4_V_ce0 { O 1 bit } IN_4_V_q0 { I 16 vector } IN_4_V_address1 { O 4 vector } IN_4_V_ce1 { O 1 bit } IN_4_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 154 \
    name IN_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_5_V \
    op interface \
    ports { IN_5_V_address0 { O 4 vector } IN_5_V_ce0 { O 1 bit } IN_5_V_q0 { I 16 vector } IN_5_V_address1 { O 4 vector } IN_5_V_ce1 { O 1 bit } IN_5_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 155 \
    name IN_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_6_V \
    op interface \
    ports { IN_6_V_address0 { O 4 vector } IN_6_V_ce0 { O 1 bit } IN_6_V_q0 { I 16 vector } IN_6_V_address1 { O 4 vector } IN_6_V_ce1 { O 1 bit } IN_6_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 156 \
    name IN_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_7_V \
    op interface \
    ports { IN_7_V_address0 { O 4 vector } IN_7_V_ce0 { O 1 bit } IN_7_V_q0 { I 16 vector } IN_7_V_address1 { O 4 vector } IN_7_V_ce1 { O 1 bit } IN_7_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 157 \
    name IN_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_8_V \
    op interface \
    ports { IN_8_V_address0 { O 4 vector } IN_8_V_ce0 { O 1 bit } IN_8_V_q0 { I 16 vector } IN_8_V_address1 { O 4 vector } IN_8_V_ce1 { O 1 bit } IN_8_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 158 \
    name IN_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_9_V \
    op interface \
    ports { IN_9_V_address0 { O 4 vector } IN_9_V_ce0 { O 1 bit } IN_9_V_q0 { I 16 vector } IN_9_V_address1 { O 4 vector } IN_9_V_ce1 { O 1 bit } IN_9_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 159 \
    name IN_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_10_V \
    op interface \
    ports { IN_10_V_address0 { O 4 vector } IN_10_V_ce0 { O 1 bit } IN_10_V_q0 { I 16 vector } IN_10_V_address1 { O 4 vector } IN_10_V_ce1 { O 1 bit } IN_10_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 160 \
    name IN_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_11_V \
    op interface \
    ports { IN_11_V_address0 { O 4 vector } IN_11_V_ce0 { O 1 bit } IN_11_V_q0 { I 16 vector } IN_11_V_address1 { O 4 vector } IN_11_V_ce1 { O 1 bit } IN_11_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 161 \
    name IN_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_12_V \
    op interface \
    ports { IN_12_V_address0 { O 4 vector } IN_12_V_ce0 { O 1 bit } IN_12_V_q0 { I 16 vector } IN_12_V_address1 { O 4 vector } IN_12_V_ce1 { O 1 bit } IN_12_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 162 \
    name IN_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_13_V \
    op interface \
    ports { IN_13_V_address0 { O 4 vector } IN_13_V_ce0 { O 1 bit } IN_13_V_q0 { I 16 vector } IN_13_V_address1 { O 4 vector } IN_13_V_ce1 { O 1 bit } IN_13_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 163 \
    name IN_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_14_V \
    op interface \
    ports { IN_14_V_address0 { O 4 vector } IN_14_V_ce0 { O 1 bit } IN_14_V_q0 { I 16 vector } IN_14_V_address1 { O 4 vector } IN_14_V_ce1 { O 1 bit } IN_14_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 164 \
    name IN_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_15_V \
    op interface \
    ports { IN_15_V_address0 { O 4 vector } IN_15_V_ce0 { O 1 bit } IN_15_V_q0 { I 16 vector } IN_15_V_address1 { O 4 vector } IN_15_V_ce1 { O 1 bit } IN_15_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 165 \
    name IN_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_16_V \
    op interface \
    ports { IN_16_V_address0 { O 4 vector } IN_16_V_ce0 { O 1 bit } IN_16_V_q0 { I 16 vector } IN_16_V_address1 { O 4 vector } IN_16_V_ce1 { O 1 bit } IN_16_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 166 \
    name IN_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_17_V \
    op interface \
    ports { IN_17_V_address0 { O 4 vector } IN_17_V_ce0 { O 1 bit } IN_17_V_q0 { I 16 vector } IN_17_V_address1 { O 4 vector } IN_17_V_ce1 { O 1 bit } IN_17_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 167 \
    name IN_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_18_V \
    op interface \
    ports { IN_18_V_address0 { O 4 vector } IN_18_V_ce0 { O 1 bit } IN_18_V_q0 { I 16 vector } IN_18_V_address1 { O 4 vector } IN_18_V_ce1 { O 1 bit } IN_18_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 168 \
    name IN_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_19_V \
    op interface \
    ports { IN_19_V_address0 { O 4 vector } IN_19_V_ce0 { O 1 bit } IN_19_V_q0 { I 16 vector } IN_19_V_address1 { O 4 vector } IN_19_V_ce1 { O 1 bit } IN_19_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 169 \
    name IN_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_20_V \
    op interface \
    ports { IN_20_V_address0 { O 4 vector } IN_20_V_ce0 { O 1 bit } IN_20_V_q0 { I 16 vector } IN_20_V_address1 { O 4 vector } IN_20_V_ce1 { O 1 bit } IN_20_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 170 \
    name IN_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_21_V \
    op interface \
    ports { IN_21_V_address0 { O 4 vector } IN_21_V_ce0 { O 1 bit } IN_21_V_q0 { I 16 vector } IN_21_V_address1 { O 4 vector } IN_21_V_ce1 { O 1 bit } IN_21_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 171 \
    name IN_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_22_V \
    op interface \
    ports { IN_22_V_address0 { O 4 vector } IN_22_V_ce0 { O 1 bit } IN_22_V_q0 { I 16 vector } IN_22_V_address1 { O 4 vector } IN_22_V_ce1 { O 1 bit } IN_22_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 172 \
    name IN_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_23_V \
    op interface \
    ports { IN_23_V_address0 { O 4 vector } IN_23_V_ce0 { O 1 bit } IN_23_V_q0 { I 16 vector } IN_23_V_address1 { O 4 vector } IN_23_V_ce1 { O 1 bit } IN_23_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 173 \
    name IN_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_24_V \
    op interface \
    ports { IN_24_V_address0 { O 4 vector } IN_24_V_ce0 { O 1 bit } IN_24_V_q0 { I 16 vector } IN_24_V_address1 { O 4 vector } IN_24_V_ce1 { O 1 bit } IN_24_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 174 \
    name IN_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_25_V \
    op interface \
    ports { IN_25_V_address0 { O 4 vector } IN_25_V_ce0 { O 1 bit } IN_25_V_q0 { I 16 vector } IN_25_V_address1 { O 4 vector } IN_25_V_ce1 { O 1 bit } IN_25_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 175 \
    name IN_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_26_V \
    op interface \
    ports { IN_26_V_address0 { O 4 vector } IN_26_V_ce0 { O 1 bit } IN_26_V_q0 { I 16 vector } IN_26_V_address1 { O 4 vector } IN_26_V_ce1 { O 1 bit } IN_26_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 176 \
    name IN_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_27_V \
    op interface \
    ports { IN_27_V_address0 { O 4 vector } IN_27_V_ce0 { O 1 bit } IN_27_V_q0 { I 16 vector } IN_27_V_address1 { O 4 vector } IN_27_V_ce1 { O 1 bit } IN_27_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 177 \
    name IN_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_28_V \
    op interface \
    ports { IN_28_V_address0 { O 4 vector } IN_28_V_ce0 { O 1 bit } IN_28_V_q0 { I 16 vector } IN_28_V_address1 { O 4 vector } IN_28_V_ce1 { O 1 bit } IN_28_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 178 \
    name IN_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_29_V \
    op interface \
    ports { IN_29_V_address0 { O 4 vector } IN_29_V_ce0 { O 1 bit } IN_29_V_q0 { I 16 vector } IN_29_V_address1 { O 4 vector } IN_29_V_ce1 { O 1 bit } IN_29_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 179 \
    name IN_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_30_V \
    op interface \
    ports { IN_30_V_address0 { O 4 vector } IN_30_V_ce0 { O 1 bit } IN_30_V_q0 { I 16 vector } IN_30_V_address1 { O 4 vector } IN_30_V_ce1 { O 1 bit } IN_30_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 180 \
    name IN_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_31_V \
    op interface \
    ports { IN_31_V_address0 { O 4 vector } IN_31_V_ce0 { O 1 bit } IN_31_V_q0 { I 16 vector } IN_31_V_address1 { O 4 vector } IN_31_V_ce1 { O 1 bit } IN_31_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 181 \
    name OUT2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_0_V \
    op interface \
    ports { OUT2_0_V_address0 { O 4 vector } OUT2_0_V_ce0 { O 1 bit } OUT2_0_V_we0 { O 1 bit } OUT2_0_V_d0 { O 16 vector } OUT2_0_V_address1 { O 4 vector } OUT2_0_V_ce1 { O 1 bit } OUT2_0_V_we1 { O 1 bit } OUT2_0_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 182 \
    name OUT2_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_1_V \
    op interface \
    ports { OUT2_1_V_address0 { O 4 vector } OUT2_1_V_ce0 { O 1 bit } OUT2_1_V_we0 { O 1 bit } OUT2_1_V_d0 { O 16 vector } OUT2_1_V_address1 { O 4 vector } OUT2_1_V_ce1 { O 1 bit } OUT2_1_V_we1 { O 1 bit } OUT2_1_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 183 \
    name OUT2_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_2_V \
    op interface \
    ports { OUT2_2_V_address0 { O 4 vector } OUT2_2_V_ce0 { O 1 bit } OUT2_2_V_we0 { O 1 bit } OUT2_2_V_d0 { O 16 vector } OUT2_2_V_address1 { O 4 vector } OUT2_2_V_ce1 { O 1 bit } OUT2_2_V_we1 { O 1 bit } OUT2_2_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 184 \
    name OUT2_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_3_V \
    op interface \
    ports { OUT2_3_V_address0 { O 4 vector } OUT2_3_V_ce0 { O 1 bit } OUT2_3_V_we0 { O 1 bit } OUT2_3_V_d0 { O 16 vector } OUT2_3_V_address1 { O 4 vector } OUT2_3_V_ce1 { O 1 bit } OUT2_3_V_we1 { O 1 bit } OUT2_3_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 185 \
    name OUT2_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_4_V \
    op interface \
    ports { OUT2_4_V_address0 { O 4 vector } OUT2_4_V_ce0 { O 1 bit } OUT2_4_V_we0 { O 1 bit } OUT2_4_V_d0 { O 16 vector } OUT2_4_V_address1 { O 4 vector } OUT2_4_V_ce1 { O 1 bit } OUT2_4_V_we1 { O 1 bit } OUT2_4_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 186 \
    name OUT2_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_5_V \
    op interface \
    ports { OUT2_5_V_address0 { O 4 vector } OUT2_5_V_ce0 { O 1 bit } OUT2_5_V_we0 { O 1 bit } OUT2_5_V_d0 { O 16 vector } OUT2_5_V_address1 { O 4 vector } OUT2_5_V_ce1 { O 1 bit } OUT2_5_V_we1 { O 1 bit } OUT2_5_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 187 \
    name OUT2_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_6_V \
    op interface \
    ports { OUT2_6_V_address0 { O 4 vector } OUT2_6_V_ce0 { O 1 bit } OUT2_6_V_we0 { O 1 bit } OUT2_6_V_d0 { O 16 vector } OUT2_6_V_address1 { O 4 vector } OUT2_6_V_ce1 { O 1 bit } OUT2_6_V_we1 { O 1 bit } OUT2_6_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 188 \
    name OUT2_7_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_7_V \
    op interface \
    ports { OUT2_7_V_address0 { O 4 vector } OUT2_7_V_ce0 { O 1 bit } OUT2_7_V_we0 { O 1 bit } OUT2_7_V_d0 { O 16 vector } OUT2_7_V_address1 { O 4 vector } OUT2_7_V_ce1 { O 1 bit } OUT2_7_V_we1 { O 1 bit } OUT2_7_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 189 \
    name OUT2_8_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_8_V \
    op interface \
    ports { OUT2_8_V_address0 { O 4 vector } OUT2_8_V_ce0 { O 1 bit } OUT2_8_V_we0 { O 1 bit } OUT2_8_V_d0 { O 16 vector } OUT2_8_V_address1 { O 4 vector } OUT2_8_V_ce1 { O 1 bit } OUT2_8_V_we1 { O 1 bit } OUT2_8_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 190 \
    name OUT2_9_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_9_V \
    op interface \
    ports { OUT2_9_V_address0 { O 4 vector } OUT2_9_V_ce0 { O 1 bit } OUT2_9_V_we0 { O 1 bit } OUT2_9_V_d0 { O 16 vector } OUT2_9_V_address1 { O 4 vector } OUT2_9_V_ce1 { O 1 bit } OUT2_9_V_we1 { O 1 bit } OUT2_9_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 191 \
    name OUT2_10_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_10_V \
    op interface \
    ports { OUT2_10_V_address0 { O 4 vector } OUT2_10_V_ce0 { O 1 bit } OUT2_10_V_we0 { O 1 bit } OUT2_10_V_d0 { O 16 vector } OUT2_10_V_address1 { O 4 vector } OUT2_10_V_ce1 { O 1 bit } OUT2_10_V_we1 { O 1 bit } OUT2_10_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 192 \
    name OUT2_11_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_11_V \
    op interface \
    ports { OUT2_11_V_address0 { O 4 vector } OUT2_11_V_ce0 { O 1 bit } OUT2_11_V_we0 { O 1 bit } OUT2_11_V_d0 { O 16 vector } OUT2_11_V_address1 { O 4 vector } OUT2_11_V_ce1 { O 1 bit } OUT2_11_V_we1 { O 1 bit } OUT2_11_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 193 \
    name OUT2_12_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_12_V \
    op interface \
    ports { OUT2_12_V_address0 { O 4 vector } OUT2_12_V_ce0 { O 1 bit } OUT2_12_V_we0 { O 1 bit } OUT2_12_V_d0 { O 16 vector } OUT2_12_V_address1 { O 4 vector } OUT2_12_V_ce1 { O 1 bit } OUT2_12_V_we1 { O 1 bit } OUT2_12_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 194 \
    name OUT2_13_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_13_V \
    op interface \
    ports { OUT2_13_V_address0 { O 4 vector } OUT2_13_V_ce0 { O 1 bit } OUT2_13_V_we0 { O 1 bit } OUT2_13_V_d0 { O 16 vector } OUT2_13_V_address1 { O 4 vector } OUT2_13_V_ce1 { O 1 bit } OUT2_13_V_we1 { O 1 bit } OUT2_13_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 195 \
    name OUT2_14_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_14_V \
    op interface \
    ports { OUT2_14_V_address0 { O 4 vector } OUT2_14_V_ce0 { O 1 bit } OUT2_14_V_we0 { O 1 bit } OUT2_14_V_d0 { O 16 vector } OUT2_14_V_address1 { O 4 vector } OUT2_14_V_ce1 { O 1 bit } OUT2_14_V_we1 { O 1 bit } OUT2_14_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 196 \
    name OUT2_15_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_15_V \
    op interface \
    ports { OUT2_15_V_address0 { O 4 vector } OUT2_15_V_ce0 { O 1 bit } OUT2_15_V_we0 { O 1 bit } OUT2_15_V_d0 { O 16 vector } OUT2_15_V_address1 { O 4 vector } OUT2_15_V_ce1 { O 1 bit } OUT2_15_V_we1 { O 1 bit } OUT2_15_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 197 \
    name OUT2_16_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_16_V \
    op interface \
    ports { OUT2_16_V_address0 { O 4 vector } OUT2_16_V_ce0 { O 1 bit } OUT2_16_V_we0 { O 1 bit } OUT2_16_V_d0 { O 16 vector } OUT2_16_V_address1 { O 4 vector } OUT2_16_V_ce1 { O 1 bit } OUT2_16_V_we1 { O 1 bit } OUT2_16_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 198 \
    name OUT2_17_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_17_V \
    op interface \
    ports { OUT2_17_V_address0 { O 4 vector } OUT2_17_V_ce0 { O 1 bit } OUT2_17_V_we0 { O 1 bit } OUT2_17_V_d0 { O 16 vector } OUT2_17_V_address1 { O 4 vector } OUT2_17_V_ce1 { O 1 bit } OUT2_17_V_we1 { O 1 bit } OUT2_17_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 199 \
    name OUT2_18_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_18_V \
    op interface \
    ports { OUT2_18_V_address0 { O 4 vector } OUT2_18_V_ce0 { O 1 bit } OUT2_18_V_we0 { O 1 bit } OUT2_18_V_d0 { O 16 vector } OUT2_18_V_address1 { O 4 vector } OUT2_18_V_ce1 { O 1 bit } OUT2_18_V_we1 { O 1 bit } OUT2_18_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 200 \
    name OUT2_19_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_19_V \
    op interface \
    ports { OUT2_19_V_address0 { O 4 vector } OUT2_19_V_ce0 { O 1 bit } OUT2_19_V_we0 { O 1 bit } OUT2_19_V_d0 { O 16 vector } OUT2_19_V_address1 { O 4 vector } OUT2_19_V_ce1 { O 1 bit } OUT2_19_V_we1 { O 1 bit } OUT2_19_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 201 \
    name OUT2_20_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_20_V \
    op interface \
    ports { OUT2_20_V_address0 { O 4 vector } OUT2_20_V_ce0 { O 1 bit } OUT2_20_V_we0 { O 1 bit } OUT2_20_V_d0 { O 16 vector } OUT2_20_V_address1 { O 4 vector } OUT2_20_V_ce1 { O 1 bit } OUT2_20_V_we1 { O 1 bit } OUT2_20_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 202 \
    name OUT2_21_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_21_V \
    op interface \
    ports { OUT2_21_V_address0 { O 4 vector } OUT2_21_V_ce0 { O 1 bit } OUT2_21_V_we0 { O 1 bit } OUT2_21_V_d0 { O 16 vector } OUT2_21_V_address1 { O 4 vector } OUT2_21_V_ce1 { O 1 bit } OUT2_21_V_we1 { O 1 bit } OUT2_21_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 203 \
    name OUT2_22_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_22_V \
    op interface \
    ports { OUT2_22_V_address0 { O 4 vector } OUT2_22_V_ce0 { O 1 bit } OUT2_22_V_we0 { O 1 bit } OUT2_22_V_d0 { O 16 vector } OUT2_22_V_address1 { O 4 vector } OUT2_22_V_ce1 { O 1 bit } OUT2_22_V_we1 { O 1 bit } OUT2_22_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 204 \
    name OUT2_23_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_23_V \
    op interface \
    ports { OUT2_23_V_address0 { O 4 vector } OUT2_23_V_ce0 { O 1 bit } OUT2_23_V_we0 { O 1 bit } OUT2_23_V_d0 { O 16 vector } OUT2_23_V_address1 { O 4 vector } OUT2_23_V_ce1 { O 1 bit } OUT2_23_V_we1 { O 1 bit } OUT2_23_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 205 \
    name OUT2_24_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_24_V \
    op interface \
    ports { OUT2_24_V_address0 { O 4 vector } OUT2_24_V_ce0 { O 1 bit } OUT2_24_V_we0 { O 1 bit } OUT2_24_V_d0 { O 16 vector } OUT2_24_V_address1 { O 4 vector } OUT2_24_V_ce1 { O 1 bit } OUT2_24_V_we1 { O 1 bit } OUT2_24_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 206 \
    name OUT2_25_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_25_V \
    op interface \
    ports { OUT2_25_V_address0 { O 4 vector } OUT2_25_V_ce0 { O 1 bit } OUT2_25_V_we0 { O 1 bit } OUT2_25_V_d0 { O 16 vector } OUT2_25_V_address1 { O 4 vector } OUT2_25_V_ce1 { O 1 bit } OUT2_25_V_we1 { O 1 bit } OUT2_25_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 207 \
    name OUT2_26_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_26_V \
    op interface \
    ports { OUT2_26_V_address0 { O 4 vector } OUT2_26_V_ce0 { O 1 bit } OUT2_26_V_we0 { O 1 bit } OUT2_26_V_d0 { O 16 vector } OUT2_26_V_address1 { O 4 vector } OUT2_26_V_ce1 { O 1 bit } OUT2_26_V_we1 { O 1 bit } OUT2_26_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 208 \
    name OUT2_27_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_27_V \
    op interface \
    ports { OUT2_27_V_address0 { O 4 vector } OUT2_27_V_ce0 { O 1 bit } OUT2_27_V_we0 { O 1 bit } OUT2_27_V_d0 { O 16 vector } OUT2_27_V_address1 { O 4 vector } OUT2_27_V_ce1 { O 1 bit } OUT2_27_V_we1 { O 1 bit } OUT2_27_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 209 \
    name OUT2_28_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_28_V \
    op interface \
    ports { OUT2_28_V_address0 { O 4 vector } OUT2_28_V_ce0 { O 1 bit } OUT2_28_V_we0 { O 1 bit } OUT2_28_V_d0 { O 16 vector } OUT2_28_V_address1 { O 4 vector } OUT2_28_V_ce1 { O 1 bit } OUT2_28_V_we1 { O 1 bit } OUT2_28_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 210 \
    name OUT2_29_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_29_V \
    op interface \
    ports { OUT2_29_V_address0 { O 4 vector } OUT2_29_V_ce0 { O 1 bit } OUT2_29_V_we0 { O 1 bit } OUT2_29_V_d0 { O 16 vector } OUT2_29_V_address1 { O 4 vector } OUT2_29_V_ce1 { O 1 bit } OUT2_29_V_we1 { O 1 bit } OUT2_29_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 211 \
    name OUT2_30_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_30_V \
    op interface \
    ports { OUT2_30_V_address0 { O 4 vector } OUT2_30_V_ce0 { O 1 bit } OUT2_30_V_we0 { O 1 bit } OUT2_30_V_d0 { O 16 vector } OUT2_30_V_address1 { O 4 vector } OUT2_30_V_ce1 { O 1 bit } OUT2_30_V_we1 { O 1 bit } OUT2_30_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 212 \
    name OUT2_31_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_31_V \
    op interface \
    ports { OUT2_31_V_address0 { O 4 vector } OUT2_31_V_ce0 { O 1 bit } OUT2_31_V_we0 { O 1 bit } OUT2_31_V_d0 { O 16 vector } OUT2_31_V_address1 { O 4 vector } OUT2_31_V_ce1 { O 1 bit } OUT2_31_V_we1 { O 1 bit } OUT2_31_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_31_V'"
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

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
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
    id -4 \
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


