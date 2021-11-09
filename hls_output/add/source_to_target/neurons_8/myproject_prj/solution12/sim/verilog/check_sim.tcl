# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
proc sc_sim_check {ret err logfile} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        while {[gets $fl line] >= 0} {
            if {[string first "AESL_mErrNo = " $line] == 0} {
                set mismatch_num [string range $line [string length "AESL_mErrNo = "] end]
                if {$mismatch_num != 0} {
                    ::AP::printMsg ERR COSIM 403 COSIM_403_986 ${mismatch_num}
                    break
                }
            }
        }
    }
    if {$ret || $err != ""} {
        if { [lindex $::errorCode 0] eq "CHILDSTATUS"} {
            set status [lindex $::errorCode 2]
            if {$status != ""} {
                ::AP::printMsg ERR COSIM 404 COSIM_404_987 $status
            } else {
                ::AP::printMsg ERR COSIM 405 COSIM_405_988
            }
        } else {
            ::AP::printMsg ERR COSIM 405 COSIM_405_989
        }
    }
    if {[file exists $logfile]} {
        set cmdret [catch {eval exec "grep \"Error:\" $logfile"} err]
        file delete -force $logfile
        if {$cmdret == 0} {
            ::AP::printMsg ERR COSIM 405 COSIM_405_990
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc rtl_sim_check {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        set unmatch_num 0
        while {[gets $fl line] >= 0} {
            if {[string first "unmatched" $line] != -1} {
                set unmatch_num [expr $unmatch_num + 1]
            }
        }
        if {$unmatch_num != 0} {
            ::AP::printMsg ERR COSIM 406 COSIM_406_991 ${unmatch_num}
        }
    }
    if {[file exists ".aesl_error"]} {
        set errfl [open ".aesl_error" r]
        gets $errfl line
        if {$line != 0} {
            ::AP::printMsg ERR COSIM 407 COSIM_407_992 $line
        }
    }
    if {[file exists ".exit.err"]} {
        ::AP::printMsg ERR COSIM 405 COSIM_405_993
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc check_tvin_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "c.myproject.autotvin_node_attr_0_V.dat"
         "c.myproject.autotvin_node_attr_1_V.dat"
         "c.myproject.autotvin_node_attr_2_V.dat"
         "c.myproject.autotvin_node_attr_3_V.dat"
         "c.myproject.autotvin_node_attr_4_V.dat"
         "c.myproject.autotvin_node_attr_5_V.dat"
         "c.myproject.autotvin_node_attr_6_V.dat"
         "c.myproject.autotvin_node_attr_7_V.dat"
         "c.myproject.autotvin_node_attr_8_V.dat"
         "c.myproject.autotvin_node_attr_9_V.dat"
         "c.myproject.autotvin_node_attr_10_V.dat"
         "c.myproject.autotvin_node_attr_11_V.dat"
         "c.myproject.autotvin_node_attr_12_V.dat"
         "c.myproject.autotvin_node_attr_13_V.dat"
         "c.myproject.autotvin_node_attr_14_V.dat"
         "c.myproject.autotvin_node_attr_15_V.dat"
         "c.myproject.autotvin_node_attr_16_V.dat"
         "c.myproject.autotvin_node_attr_17_V.dat"
         "c.myproject.autotvin_node_attr_18_V.dat"
         "c.myproject.autotvin_node_attr_19_V.dat"
         "c.myproject.autotvin_node_attr_20_V.dat"
         "c.myproject.autotvin_node_attr_21_V.dat"
         "c.myproject.autotvin_node_attr_22_V.dat"
         "c.myproject.autotvin_node_attr_23_V.dat"
         "c.myproject.autotvin_node_attr_24_V.dat"
         "c.myproject.autotvin_node_attr_25_V.dat"
         "c.myproject.autotvin_node_attr_26_V.dat"
         "c.myproject.autotvin_node_attr_27_V.dat"
         "c.myproject.autotvin_node_attr_28_V.dat"
         "c.myproject.autotvin_node_attr_29_V.dat"
         "c.myproject.autotvin_node_attr_30_V.dat"
         "c.myproject.autotvin_node_attr_31_V.dat"
         "c.myproject.autotvin_node_attr_32_V.dat"
         "c.myproject.autotvin_node_attr_33_V.dat"
         "c.myproject.autotvin_node_attr_34_V.dat"
         "c.myproject.autotvin_node_attr_35_V.dat"
         "c.myproject.autotvin_node_attr_36_V.dat"
         "c.myproject.autotvin_node_attr_37_V.dat"
         "c.myproject.autotvin_node_attr_38_V.dat"
         "c.myproject.autotvin_node_attr_39_V.dat"
         "c.myproject.autotvin_node_attr_40_V.dat"
         "c.myproject.autotvin_node_attr_41_V.dat"
         "c.myproject.autotvin_node_attr_42_V.dat"
         "c.myproject.autotvin_node_attr_43_V.dat"
         "c.myproject.autotvin_node_attr_44_V.dat"
         "c.myproject.autotvin_node_attr_45_V.dat"
         "c.myproject.autotvin_node_attr_46_V.dat"
         "c.myproject.autotvin_node_attr_47_V.dat"
         "c.myproject.autotvin_edge_attr_0_V.dat"
         "c.myproject.autotvin_edge_attr_1_V.dat"
         "c.myproject.autotvin_edge_attr_2_V.dat"
         "c.myproject.autotvin_edge_attr_3_V.dat"
         "c.myproject.autotvin_edge_attr_4_V.dat"
         "c.myproject.autotvin_edge_attr_5_V.dat"
         "c.myproject.autotvin_edge_attr_6_V.dat"
         "c.myproject.autotvin_edge_attr_7_V.dat"
         "c.myproject.autotvin_edge_attr_8_V.dat"
         "c.myproject.autotvin_edge_attr_9_V.dat"
         "c.myproject.autotvin_edge_attr_10_V.dat"
         "c.myproject.autotvin_edge_attr_11_V.dat"
         "c.myproject.autotvin_edge_attr_12_V.dat"
         "c.myproject.autotvin_edge_attr_13_V.dat"
         "c.myproject.autotvin_edge_attr_14_V.dat"
         "c.myproject.autotvin_edge_attr_15_V.dat"
         "c.myproject.autotvin_edge_attr_16_V.dat"
         "c.myproject.autotvin_edge_attr_17_V.dat"
         "c.myproject.autotvin_edge_attr_18_V.dat"
         "c.myproject.autotvin_edge_attr_19_V.dat"
         "c.myproject.autotvin_edge_attr_20_V.dat"
         "c.myproject.autotvin_edge_attr_21_V.dat"
         "c.myproject.autotvin_edge_attr_22_V.dat"
         "c.myproject.autotvin_edge_attr_23_V.dat"
         "c.myproject.autotvin_edge_attr_24_V.dat"
         "c.myproject.autotvin_edge_attr_25_V.dat"
         "c.myproject.autotvin_edge_attr_26_V.dat"
         "c.myproject.autotvin_edge_attr_27_V.dat"
         "c.myproject.autotvin_edge_attr_28_V.dat"
         "c.myproject.autotvin_edge_attr_29_V.dat"
         "c.myproject.autotvin_edge_attr_30_V.dat"
         "c.myproject.autotvin_edge_attr_31_V.dat"
         "c.myproject.autotvin_edge_attr_32_V.dat"
         "c.myproject.autotvin_edge_attr_33_V.dat"
         "c.myproject.autotvin_edge_attr_34_V.dat"
         "c.myproject.autotvin_edge_attr_35_V.dat"
         "c.myproject.autotvin_edge_attr_36_V.dat"
         "c.myproject.autotvin_edge_attr_37_V.dat"
         "c.myproject.autotvin_edge_attr_38_V.dat"
         "c.myproject.autotvin_edge_attr_39_V.dat"
         "c.myproject.autotvin_edge_attr_40_V.dat"
         "c.myproject.autotvin_edge_attr_41_V.dat"
         "c.myproject.autotvin_edge_attr_42_V.dat"
         "c.myproject.autotvin_edge_attr_43_V.dat"
         "c.myproject.autotvin_edge_attr_44_V.dat"
         "c.myproject.autotvin_edge_attr_45_V.dat"
         "c.myproject.autotvin_edge_attr_46_V.dat"
         "c.myproject.autotvin_edge_attr_47_V.dat"
         "c.myproject.autotvin_edge_attr_48_V.dat"
         "c.myproject.autotvin_edge_attr_49_V.dat"
         "c.myproject.autotvin_edge_attr_50_V.dat"
         "c.myproject.autotvin_edge_attr_51_V.dat"
         "c.myproject.autotvin_edge_attr_52_V.dat"
         "c.myproject.autotvin_edge_attr_53_V.dat"
         "c.myproject.autotvin_edge_attr_54_V.dat"
         "c.myproject.autotvin_edge_attr_55_V.dat"
         "c.myproject.autotvin_edge_attr_56_V.dat"
         "c.myproject.autotvin_edge_attr_57_V.dat"
         "c.myproject.autotvin_edge_attr_58_V.dat"
         "c.myproject.autotvin_edge_attr_59_V.dat"
         "c.myproject.autotvin_edge_attr_60_V.dat"
         "c.myproject.autotvin_edge_attr_61_V.dat"
         "c.myproject.autotvin_edge_attr_62_V.dat"
         "c.myproject.autotvin_edge_attr_63_V.dat"
         "c.myproject.autotvin_edge_index_0_V.dat"
         "c.myproject.autotvin_edge_index_1_V.dat"
         "c.myproject.autotvin_edge_index_2_V.dat"
         "c.myproject.autotvin_edge_index_3_V.dat"
         "c.myproject.autotvin_edge_index_4_V.dat"
         "c.myproject.autotvin_edge_index_5_V.dat"
         "c.myproject.autotvin_edge_index_6_V.dat"
         "c.myproject.autotvin_edge_index_7_V.dat"
         "c.myproject.autotvin_edge_index_8_V.dat"
         "c.myproject.autotvin_edge_index_9_V.dat"
         "c.myproject.autotvin_edge_index_10_V.dat"
         "c.myproject.autotvin_edge_index_11_V.dat"
         "c.myproject.autotvin_edge_index_12_V.dat"
         "c.myproject.autotvin_edge_index_13_V.dat"
         "c.myproject.autotvin_edge_index_14_V.dat"
         "c.myproject.autotvin_edge_index_15_V.dat"
         "c.myproject.autotvin_edge_index_16_V.dat"
         "c.myproject.autotvin_edge_index_17_V.dat"
         "c.myproject.autotvin_edge_index_18_V.dat"
         "c.myproject.autotvin_edge_index_19_V.dat"
         "c.myproject.autotvin_edge_index_20_V.dat"
         "c.myproject.autotvin_edge_index_21_V.dat"
         "c.myproject.autotvin_edge_index_22_V.dat"
         "c.myproject.autotvin_edge_index_23_V.dat"
         "c.myproject.autotvin_edge_index_24_V.dat"
         "c.myproject.autotvin_edge_index_25_V.dat"
         "c.myproject.autotvin_edge_index_26_V.dat"
         "c.myproject.autotvin_edge_index_27_V.dat"
         "c.myproject.autotvin_edge_index_28_V.dat"
         "c.myproject.autotvin_edge_index_29_V.dat"
         "c.myproject.autotvin_edge_index_30_V.dat"
         "c.myproject.autotvin_edge_index_31_V.dat"
         "c.myproject.autotvin_layer11_out_0_V.dat"
         "c.myproject.autotvin_layer11_out_1_V.dat"
         "c.myproject.autotvin_layer11_out_2_V.dat"
         "c.myproject.autotvin_layer11_out_3_V.dat"
         "c.myproject.autotvin_layer11_out_4_V.dat"
         "c.myproject.autotvin_layer11_out_5_V.dat"
         "c.myproject.autotvin_layer11_out_6_V.dat"
         "c.myproject.autotvin_layer11_out_7_V.dat"
         "c.myproject.autotvin_layer11_out_8_V.dat"
         "c.myproject.autotvin_layer11_out_9_V.dat"
         "c.myproject.autotvin_layer11_out_10_V.dat"
         "c.myproject.autotvin_layer11_out_11_V.dat"
         "c.myproject.autotvin_layer11_out_12_V.dat"
         "c.myproject.autotvin_layer11_out_13_V.dat"
         "c.myproject.autotvin_layer11_out_14_V.dat"
         "c.myproject.autotvin_layer11_out_15_V.dat"
         "c.myproject.autotvout_layer11_out_0_V.dat"
         "c.myproject.autotvout_layer11_out_1_V.dat"
         "c.myproject.autotvout_layer11_out_2_V.dat"
         "c.myproject.autotvout_layer11_out_3_V.dat"
         "c.myproject.autotvout_layer11_out_4_V.dat"
         "c.myproject.autotvout_layer11_out_5_V.dat"
         "c.myproject.autotvout_layer11_out_6_V.dat"
         "c.myproject.autotvout_layer11_out_7_V.dat"
         "c.myproject.autotvout_layer11_out_8_V.dat"
         "c.myproject.autotvout_layer11_out_9_V.dat"
         "c.myproject.autotvout_layer11_out_10_V.dat"
         "c.myproject.autotvout_layer11_out_11_V.dat"
         "c.myproject.autotvout_layer11_out_12_V.dat"
         "c.myproject.autotvout_layer11_out_13_V.dat"
         "c.myproject.autotvout_layer11_out_14_V.dat"
         "c.myproject.autotvout_layer11_out_15_V.dat"
         "c.myproject.autotvout_const_size_in_1.dat"
         "c.myproject.autotvout_const_size_in_2.dat"
         "c.myproject.autotvout_const_size_in_3.dat"
         "c.myproject.autotvout_const_size_out_1.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ::AP::printMsg ERR COSIM 320 COSIM_320_994
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ::AP::printMsg ERR COSIM 320 COSIM_320_995
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}

proc check_tvout_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "rtl.myproject.autotvout_layer11_out_0_V.dat"
         "rtl.myproject.autotvout_layer11_out_1_V.dat"
         "rtl.myproject.autotvout_layer11_out_2_V.dat"
         "rtl.myproject.autotvout_layer11_out_3_V.dat"
         "rtl.myproject.autotvout_layer11_out_4_V.dat"
         "rtl.myproject.autotvout_layer11_out_5_V.dat"
         "rtl.myproject.autotvout_layer11_out_6_V.dat"
         "rtl.myproject.autotvout_layer11_out_7_V.dat"
         "rtl.myproject.autotvout_layer11_out_8_V.dat"
         "rtl.myproject.autotvout_layer11_out_9_V.dat"
         "rtl.myproject.autotvout_layer11_out_10_V.dat"
         "rtl.myproject.autotvout_layer11_out_11_V.dat"
         "rtl.myproject.autotvout_layer11_out_12_V.dat"
         "rtl.myproject.autotvout_layer11_out_13_V.dat"
         "rtl.myproject.autotvout_layer11_out_14_V.dat"
         "rtl.myproject.autotvout_layer11_out_15_V.dat"
         "rtl.myproject.autotvout_const_size_in_1.dat"
         "rtl.myproject.autotvout_const_size_in_2.dat"
         "rtl.myproject.autotvout_const_size_in_3.dat"
         "rtl.myproject.autotvout_const_size_out_1.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ::AP::printMsg ERR COSIM 303 COSIM_303_996
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ::AP::printMsg ERR COSIM 303 COSIM_303_997
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}
