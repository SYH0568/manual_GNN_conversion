-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity concatenate1d_ap_fixed_ap_fixed_ap_fixed_merge_config1_s is
port (
    ap_ready : OUT STD_LOGIC;
    data1_0_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data1_1_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data1_2_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data2_0_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data2_1_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data2_2_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data2_3_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_3 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_4 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_5 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_6 : OUT STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of concatenate1d_ap_fixed_ap_fixed_ap_fixed_merge_config1_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_logic_0 : STD_LOGIC := '0';



begin



    ap_ready <= ap_const_logic_1;
    ap_return_0 <= data1_0_V_read;
    ap_return_1 <= data1_1_V_read;
    ap_return_2 <= data1_2_V_read;
    ap_return_3 <= data2_0_V_read;
    ap_return_4 <= data2_1_V_read;
    ap_return_5 <= data2_2_V_read;
    ap_return_6 <= data2_3_V_read;
end behav;
