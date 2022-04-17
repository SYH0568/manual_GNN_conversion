set moduleName reduce_ap_fixed_16_Op_add_ap_fixed_16_8_5_3_0_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {reduce<ap_fixed,16,Op_add<ap_fixed<16,8,5,3,0>>>}
set C_modelType { int 16 }
set C_modelArgList {
	{ x_0_V_read int 16 regular  }
	{ x_1_V_read int 16 regular  }
	{ x_2_V_read int 16 regular  }
	{ x_3_V_read int 16 regular  }
	{ x_4_V_read int 16 regular  }
	{ x_5_V_read int 16 regular  }
	{ x_6_V_read int 16 regular  }
	{ x_7_V_read int 16 regular  }
	{ x_8_V_read int 16 regular  }
	{ x_9_V_read int 16 regular  }
	{ x_10_V_read int 16 regular  }
	{ x_11_V_read int 16 regular  }
	{ x_12_V_read int 16 regular  }
	{ x_13_V_read int 16 regular  }
	{ x_14_V_read int 16 regular  }
	{ x_15_V_read int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "x_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_6_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_7_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_8_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_9_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_10_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_11_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_12_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_13_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_14_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "x_15_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 16} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ x_0_V_read sc_in sc_lv 16 signal 0 } 
	{ x_1_V_read sc_in sc_lv 16 signal 1 } 
	{ x_2_V_read sc_in sc_lv 16 signal 2 } 
	{ x_3_V_read sc_in sc_lv 16 signal 3 } 
	{ x_4_V_read sc_in sc_lv 16 signal 4 } 
	{ x_5_V_read sc_in sc_lv 16 signal 5 } 
	{ x_6_V_read sc_in sc_lv 16 signal 6 } 
	{ x_7_V_read sc_in sc_lv 16 signal 7 } 
	{ x_8_V_read sc_in sc_lv 16 signal 8 } 
	{ x_9_V_read sc_in sc_lv 16 signal 9 } 
	{ x_10_V_read sc_in sc_lv 16 signal 10 } 
	{ x_11_V_read sc_in sc_lv 16 signal 11 } 
	{ x_12_V_read sc_in sc_lv 16 signal 12 } 
	{ x_13_V_read sc_in sc_lv 16 signal 13 } 
	{ x_14_V_read sc_in sc_lv 16 signal 14 } 
	{ x_15_V_read sc_in sc_lv 16 signal 15 } 
	{ ap_return sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "x_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_0_V_read", "role": "default" }} , 
 	{ "name": "x_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_1_V_read", "role": "default" }} , 
 	{ "name": "x_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_2_V_read", "role": "default" }} , 
 	{ "name": "x_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_3_V_read", "role": "default" }} , 
 	{ "name": "x_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_4_V_read", "role": "default" }} , 
 	{ "name": "x_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_5_V_read", "role": "default" }} , 
 	{ "name": "x_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_6_V_read", "role": "default" }} , 
 	{ "name": "x_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_7_V_read", "role": "default" }} , 
 	{ "name": "x_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_8_V_read", "role": "default" }} , 
 	{ "name": "x_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_9_V_read", "role": "default" }} , 
 	{ "name": "x_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_10_V_read", "role": "default" }} , 
 	{ "name": "x_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_11_V_read", "role": "default" }} , 
 	{ "name": "x_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_12_V_read", "role": "default" }} , 
 	{ "name": "x_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_13_V_read", "role": "default" }} , 
 	{ "name": "x_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_14_V_read", "role": "default" }} , 
 	{ "name": "x_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "x_15_V_read", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "reduce_ap_fixed_16_Op_add_ap_fixed_16_8_5_3_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_15_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	reduce_ap_fixed_16_Op_add_ap_fixed_16_8_5_3_0_s {
		x_0_V_read {Type I LastRead 0 FirstWrite -1}
		x_1_V_read {Type I LastRead 0 FirstWrite -1}
		x_2_V_read {Type I LastRead 0 FirstWrite -1}
		x_3_V_read {Type I LastRead 0 FirstWrite -1}
		x_4_V_read {Type I LastRead 0 FirstWrite -1}
		x_5_V_read {Type I LastRead 0 FirstWrite -1}
		x_6_V_read {Type I LastRead 0 FirstWrite -1}
		x_7_V_read {Type I LastRead 0 FirstWrite -1}
		x_8_V_read {Type I LastRead 0 FirstWrite -1}
		x_9_V_read {Type I LastRead 0 FirstWrite -1}
		x_10_V_read {Type I LastRead 0 FirstWrite -1}
		x_11_V_read {Type I LastRead 0 FirstWrite -1}
		x_12_V_read {Type I LastRead 0 FirstWrite -1}
		x_13_V_read {Type I LastRead 0 FirstWrite -1}
		x_14_V_read {Type I LastRead 0 FirstWrite -1}
		x_15_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	x_0_V_read { ap_none {  { x_0_V_read in_data 0 16 } } }
	x_1_V_read { ap_none {  { x_1_V_read in_data 0 16 } } }
	x_2_V_read { ap_none {  { x_2_V_read in_data 0 16 } } }
	x_3_V_read { ap_none {  { x_3_V_read in_data 0 16 } } }
	x_4_V_read { ap_none {  { x_4_V_read in_data 0 16 } } }
	x_5_V_read { ap_none {  { x_5_V_read in_data 0 16 } } }
	x_6_V_read { ap_none {  { x_6_V_read in_data 0 16 } } }
	x_7_V_read { ap_none {  { x_7_V_read in_data 0 16 } } }
	x_8_V_read { ap_none {  { x_8_V_read in_data 0 16 } } }
	x_9_V_read { ap_none {  { x_9_V_read in_data 0 16 } } }
	x_10_V_read { ap_none {  { x_10_V_read in_data 0 16 } } }
	x_11_V_read { ap_none {  { x_11_V_read in_data 0 16 } } }
	x_12_V_read { ap_none {  { x_12_V_read in_data 0 16 } } }
	x_13_V_read { ap_none {  { x_13_V_read in_data 0 16 } } }
	x_14_V_read { ap_none {  { x_14_V_read in_data 0 16 } } }
	x_15_V_read { ap_none {  { x_15_V_read in_data 0 16 } } }
}