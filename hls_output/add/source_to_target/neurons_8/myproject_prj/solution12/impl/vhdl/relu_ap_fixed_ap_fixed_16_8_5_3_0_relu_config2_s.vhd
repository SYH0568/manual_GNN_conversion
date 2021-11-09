-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config2_s is
port (
    ap_ready : OUT STD_LOGIC;
    data_0_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data_1_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data_2_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data_3_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data_4_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data_5_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data_6_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data_7_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_3 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_4 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_5 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_6 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_7 : OUT STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config2_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv15_0 : STD_LOGIC_VECTOR (14 downto 0) := "000000000000000";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal icmp_ln1494_fu_88_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln81_fu_94_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal select_ln81_fu_98_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal icmp_ln1494_1_fu_110_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln81_15_fu_116_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal select_ln81_15_fu_120_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal icmp_ln1494_2_fu_132_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln81_16_fu_138_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal select_ln81_16_fu_142_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal icmp_ln1494_3_fu_154_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln81_17_fu_160_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal select_ln81_17_fu_164_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal icmp_ln1494_4_fu_176_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln81_18_fu_182_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal select_ln81_18_fu_186_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal icmp_ln1494_5_fu_198_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln81_19_fu_204_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal select_ln81_19_fu_208_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal icmp_ln1494_6_fu_220_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln81_20_fu_226_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal select_ln81_20_fu_230_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal icmp_ln1494_7_fu_242_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln81_21_fu_248_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal select_ln81_21_fu_252_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal zext_ln81_fu_106_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal zext_ln81_1_fu_128_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal zext_ln81_2_fu_150_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal zext_ln81_3_fu_172_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal zext_ln81_4_fu_194_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal zext_ln81_5_fu_216_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal zext_ln81_6_fu_238_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal zext_ln81_7_fu_260_p1 : STD_LOGIC_VECTOR (15 downto 0);


begin



    ap_ready <= ap_const_logic_1;
    ap_return_0 <= zext_ln81_fu_106_p1;
    ap_return_1 <= zext_ln81_1_fu_128_p1;
    ap_return_2 <= zext_ln81_2_fu_150_p1;
    ap_return_3 <= zext_ln81_3_fu_172_p1;
    ap_return_4 <= zext_ln81_4_fu_194_p1;
    ap_return_5 <= zext_ln81_5_fu_216_p1;
    ap_return_6 <= zext_ln81_6_fu_238_p1;
    ap_return_7 <= zext_ln81_7_fu_260_p1;
    icmp_ln1494_1_fu_110_p2 <= "1" when (signed(data_1_V_read) > signed(ap_const_lv16_0)) else "0";
    icmp_ln1494_2_fu_132_p2 <= "1" when (signed(data_2_V_read) > signed(ap_const_lv16_0)) else "0";
    icmp_ln1494_3_fu_154_p2 <= "1" when (signed(data_3_V_read) > signed(ap_const_lv16_0)) else "0";
    icmp_ln1494_4_fu_176_p2 <= "1" when (signed(data_4_V_read) > signed(ap_const_lv16_0)) else "0";
    icmp_ln1494_5_fu_198_p2 <= "1" when (signed(data_5_V_read) > signed(ap_const_lv16_0)) else "0";
    icmp_ln1494_6_fu_220_p2 <= "1" when (signed(data_6_V_read) > signed(ap_const_lv16_0)) else "0";
    icmp_ln1494_7_fu_242_p2 <= "1" when (signed(data_7_V_read) > signed(ap_const_lv16_0)) else "0";
    icmp_ln1494_fu_88_p2 <= "1" when (signed(data_0_V_read) > signed(ap_const_lv16_0)) else "0";
    select_ln81_15_fu_120_p3 <= 
        trunc_ln81_15_fu_116_p1 when (icmp_ln1494_1_fu_110_p2(0) = '1') else 
        ap_const_lv15_0;
    select_ln81_16_fu_142_p3 <= 
        trunc_ln81_16_fu_138_p1 when (icmp_ln1494_2_fu_132_p2(0) = '1') else 
        ap_const_lv15_0;
    select_ln81_17_fu_164_p3 <= 
        trunc_ln81_17_fu_160_p1 when (icmp_ln1494_3_fu_154_p2(0) = '1') else 
        ap_const_lv15_0;
    select_ln81_18_fu_186_p3 <= 
        trunc_ln81_18_fu_182_p1 when (icmp_ln1494_4_fu_176_p2(0) = '1') else 
        ap_const_lv15_0;
    select_ln81_19_fu_208_p3 <= 
        trunc_ln81_19_fu_204_p1 when (icmp_ln1494_5_fu_198_p2(0) = '1') else 
        ap_const_lv15_0;
    select_ln81_20_fu_230_p3 <= 
        trunc_ln81_20_fu_226_p1 when (icmp_ln1494_6_fu_220_p2(0) = '1') else 
        ap_const_lv15_0;
    select_ln81_21_fu_252_p3 <= 
        trunc_ln81_21_fu_248_p1 when (icmp_ln1494_7_fu_242_p2(0) = '1') else 
        ap_const_lv15_0;
    select_ln81_fu_98_p3 <= 
        trunc_ln81_fu_94_p1 when (icmp_ln1494_fu_88_p2(0) = '1') else 
        ap_const_lv15_0;
    trunc_ln81_15_fu_116_p1 <= data_1_V_read(15 - 1 downto 0);
    trunc_ln81_16_fu_138_p1 <= data_2_V_read(15 - 1 downto 0);
    trunc_ln81_17_fu_160_p1 <= data_3_V_read(15 - 1 downto 0);
    trunc_ln81_18_fu_182_p1 <= data_4_V_read(15 - 1 downto 0);
    trunc_ln81_19_fu_204_p1 <= data_5_V_read(15 - 1 downto 0);
    trunc_ln81_20_fu_226_p1 <= data_6_V_read(15 - 1 downto 0);
    trunc_ln81_21_fu_248_p1 <= data_7_V_read(15 - 1 downto 0);
    trunc_ln81_fu_94_p1 <= data_0_V_read(15 - 1 downto 0);
    zext_ln81_1_fu_128_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln81_15_fu_120_p3),16));
    zext_ln81_2_fu_150_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln81_16_fu_142_p3),16));
    zext_ln81_3_fu_172_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln81_17_fu_164_p3),16));
    zext_ln81_4_fu_194_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln81_18_fu_186_p3),16));
    zext_ln81_5_fu_216_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln81_19_fu_208_p3),16));
    zext_ln81_6_fu_238_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln81_20_fu_230_p3),16));
    zext_ln81_7_fu_260_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln81_21_fu_252_p3),16));
    zext_ln81_fu_106_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln81_fu_98_p3),16));
end behav;
