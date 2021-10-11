//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t node_attr[N_NODE*NODE_DIM], input3_t edge_attr[N_EDGE*EDGE_DIM], input4_t edge_index[N_EDGE*TWO],
    layer11_t layer11_out[N_EDGE*LAYER11_OUT_DIM],
    unsigned short &const_size_in_1, unsigned short &const_size_in_2, unsigned short &const_size_in_3,
    unsigned short &const_size_out_1
) {

    //#pragma HLS DATAFLOW doesn't recognize macros
    int n_edge = N_EDGE;
    int n_node = N_NODE;
    int edge_dim = EDGE_DIM*16;
    int layer7_out_dim = LAYER7_OUT_DIM*16;
    int node_dim = NODE_DIM*16;
    int layer10_out_dim = LAYER10_OUT_DIM*16;
    int layer11_out_dim = LAYER11_OUT_DIM*16;
    int layer9_out_dim = LAYER9_OUT_DIM*16;
    int two = TWO*16;

    //hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_PARTITION variable=node_attr cyclic factor=node_dim dim=1
    #pragma HLS ARRAY_PARTITION variable=edge_attr cyclic factor=edge_dim dim=1
    #pragma HLS ARRAY_PARTITION variable=edge_index cyclic factor=two dim=1
    #pragma HLS ARRAY_PARTITION variable=layer11_out cyclic factor=layer11_out_dim dim=1
    #pragma HLS INTERFACE ap_vld port=node_attr,edge_attr,edge_index,layer11_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_NODE*NODE_DIM;
    const_size_in_2 = N_EDGE*EDGE_DIM;
    const_size_in_3 = N_EDGE*TWO;
    const_size_out_1 = N_EDGE*LAYER11_OUT_DIM;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 80>(R1_w0, "R1_w0.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(R1_w1, "R1_w1.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(R1_w2, "R1_w2.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(R1_w3, "R1_w3.txt");
        nnet::load_weights_from_txt<model_default_t, 8>(R1_b0, "R1_b0.txt");
        nnet::load_weights_from_txt<model_default_t, 8>(R1_b1, "R1_b1.txt");
        nnet::load_weights_from_txt<model_default_t, 4>(R1_b2, "R1_b2.txt");
        nnet::load_weights_from_txt<model_default_t, 4>(R1_b3, "R1_b3.txt");
        nnet::load_weights_from_txt<model_default_t, 56>(O_w0, "O_w0.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(O_w1, "O_w1.txt");
        nnet::load_weights_from_txt<model_default_t, 24>(O_w2, "O_w2.txt");
        nnet::load_weights_from_txt<model_default_t, 24>(O_w3, "O_w3.txt");
        nnet::load_weights_from_txt<model_default_t, 8>(O_b0, "O_b0.txt");
        nnet::load_weights_from_txt<model_default_t, 8>(O_b1, "O_b1.txt");
        nnet::load_weights_from_txt<model_default_t, 3>(O_b2, "O_b2.txt");
        nnet::load_weights_from_txt<model_default_t, 3>(O_b3, "O_b3.txt");
        nnet::load_weights_from_txt<model_default_t, 80>(R2_w0, "R2_w0.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(R2_w1, "R2_w1.txt");
        nnet::load_weights_from_txt<model_default_t, 8>(R2_w2, "R2_w2.txt");
        nnet::load_weights_from_txt<model_default_t, 8>(R2_w3, "R2_w3.txt");
        nnet::load_weights_from_txt<model_default_t, 8>(R2_b0, "R2_b0.txt");
        nnet::load_weights_from_txt<model_default_t, 8>(R2_b1, "R2_b1.txt");
        nnet::load_weights_from_txt<model_default_t, 1>(R2_b2, "R2_b2.txt");
        nnet::load_weights_from_txt<model_default_t, 1>(R2_b3, "R2_b3.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    layer2_t node_attr_cpy1[N_NODE*NODE_DIM];
    #pragma HLS ARRAY_PARTITION variable=node_attr_cpy1 cyclic factor=node_dim dim=1
    layer2_t node_attr_cpy2[N_NODE*NODE_DIM];
    #pragma HLS ARRAY_PARTITION variable=node_attr_cpy2 cyclic factor=node_dim dim=1
    nnet::clone_vec<input_t, node_attr_config>(node_attr, node_attr_cpy1, node_attr_cpy2); // node_attr_clone_0

    layer5_t edge_index_cpy1[N_EDGE*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy1 cyclic factor=two dim=1
    layer5_t edge_index_cpy2[N_EDGE*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy2 cyclic factor=two dim=1
    nnet::clone_vec<input4_t, edge_index_config>(edge_index, edge_index_cpy1, edge_index_cpy2); // edge_index_clone_0

    layer6_t edge_index_cpy3[N_EDGE*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy3 cyclic factor=two dim=1
    layer6_t edge_index_cpy4[N_EDGE*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy4 cyclic factor=two dim=1
    nnet::clone_vec<layer5_t, edge_index_config>(edge_index_cpy1, edge_index_cpy3, edge_index_cpy4); // edge_index_clone_1

    layer7_t layer7_out[N_EDGE*LAYER7_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer7_out cyclic factor=layer7_out_dim dim=1
    nnet::edgeblock<input3_t, input4_t, layer7_t, config7>(node_attr_cpy1, edge_attr, edge_index_cpy2, layer7_out, R1_w0, R1_b0, R1_w1, R1_b1, R1_w2, R1_b2, R1_w3, R1_b3); // R1

    layer8_t layer7_out_cpy1[N_EDGE*LAYER7_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer7_out_cpy1 cyclic factor=layer7_out_dim dim=1
    layer8_t layer7_out_cpy2[N_EDGE*LAYER7_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer7_out_cpy2 cyclic factor=layer7_out_dim dim=1
    nnet::clone_vec<layer7_t, layer7_out_config>(layer7_out, layer7_out_cpy1, layer7_out_cpy2); // layer7_out_clone_0

    layer9_t layer9_out[N_NODE*LAYER9_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer9_out cyclic factor=layer9_out_dim dim=1
    nnet::edge_aggregate<input3_t, input4_t, layer9_t, aggregation_config9>(layer7_out_cpy1, edge_index_cpy3, layer9_out); // aggr5

    layer10_t layer10_out[N_NODE*LAYER10_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer10_out cyclic factor=layer10_out_dim dim=1
    nnet::nodeblock<input_t, layer10_t, config10>(node_attr_cpy2, layer9_out, layer10_out, O_w0, O_b0, O_w1, O_b1, O_w2, O_b2, O_w3, O_b3); // O

    nnet::edgeblock<input3_t, input4_t, layer11_t, config11>(layer10_out, layer7_out_cpy2, edge_index_cpy4, layer11_out, R2_w0, R2_b0, R2_w1, R2_b1, R2_w2, R2_b2, R2_w3, R2_b3); // R2

}
