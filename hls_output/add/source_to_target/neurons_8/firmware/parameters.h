#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_array.h"
#include "nnet_utils/nnet_common.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_resource.h"
#include "nnet_utils/nnet_graph.h"
#include "nnet_utils/nnet_merge.h"
 
//hls-fpga-machine-learning insert weights
#include "weights/R1_w0.h"
#include "weights/R1_w1.h"
#include "weights/R1_w2.h"
#include "weights/R1_w3.h"
#include "weights/R1_b0.h"
#include "weights/R1_b1.h"
#include "weights/R1_b2.h"
#include "weights/R1_b3.h"
#include "weights/O_w0.h"
#include "weights/O_w1.h"
#include "weights/O_w2.h"
#include "weights/O_w3.h"
#include "weights/O_b0.h"
#include "weights/O_b1.h"
#include "weights/O_b2.h"
#include "weights/O_b3.h"
#include "weights/R2_w0.h"
#include "weights/R2_w1.h"
#include "weights/R2_w2.h"
#include "weights/R2_w3.h"
#include "weights/R2_b0.h"
#include "weights/R2_b1.h"
#include "weights/R2_b2.h"
#include "weights/R2_b3.h"

//hls-fpga-machine-learning insert layer-config
// node_attr_clone_0
struct node_attr_config: nnet::matrix_config{
                            static const unsigned n_rows = N_NODE;
                            static const unsigned n_cols = 3;
                        };
// edge_index_clone_0
struct edge_index_config: nnet::matrix_config{
                            static const unsigned n_rows = N_EDGE;
                            static const unsigned n_cols = 2;
                        };
// edge_index_clone_1
struct edge_index_cpy1_config: nnet::matrix_config{
                            static const unsigned n_rows = N_EDGE;
                            static const unsigned n_cols = 2;
                        };
// R1
struct config7: nnet::graph_config{
    typedef layer7_t bias_t;
    typedef layer7_t weight_t;
    typedef layer7_t table_t;
    static const unsigned n_node = N_NODE;
    static const unsigned n_edge = N_EDGE;
    static const unsigned node_dim = NODE_DIM;
    static const unsigned edge_dim = EDGE_DIM;
    static const unsigned out_dim = 4;
    static const unsigned n_layers = 3;
    static const unsigned flow = 0;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const bool io_stream = false; 
    static const bool activate_final = false;
    static const bool gnn_resource_limit = true;

    struct dense_config1 : nnet::dense_config {
        static const unsigned n_in = 10;
        static const unsigned n_out = 8;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer7_t accum_t;
        typedef layer7_t bias_t;
        typedef layer7_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct relu_config1 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct dense_config2 : nnet::dense_config {
        static const unsigned n_in = 8;
        static const unsigned n_out = 8;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer7_t accum_t;
        typedef layer7_t bias_t;
        typedef layer7_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct relu_config2 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct dense_config3 : nnet::dense_config {
        static const unsigned n_in = 8;
        static const unsigned n_out = 4;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer7_t accum_t;
        typedef layer7_t bias_t;
        typedef layer7_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct dense_config4 : nnet::dense_config {
        static const unsigned n_in = 8;
        static const unsigned n_out = 4;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer7_t accum_t;
        typedef layer7_t bias_t;
        typedef layer7_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct relu_config3 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct relu_config4 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct activation_config : nnet::activ_config {
        static const unsigned n_in = LAYER7_OUT_DIM;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned activation_type = 0;
        typedef ap_fixed<18,8> table_t;
    };
    

    struct node_attr_config: nnet::matrix_config{
                        static const unsigned n_rows = N_NODE;
                        static const unsigned n_cols = NODE_DIM;
                        static const bool gnn_resource_limit = true;
                    };

    struct edge_attr_config: nnet::matrix_config{
                        static const unsigned n_rows = N_EDGE;
                        static const unsigned n_cols = EDGE_DIM;
                        static const bool gnn_resource_limit = true;
                    };

    struct edge_update_config: nnet::matrix_config{
                        static const unsigned n_rows = N_EDGE;
                        static const unsigned n_cols = LAYER7_OUT_DIM;
                        static const bool gnn_resource_limit = true;
                    };

    struct merge_config1 : nnet::concat_config {
        static const unsigned n_elem1_0 = NODE_DIM;
        static const unsigned n_elem1_1 = 1;
        static const unsigned n_elem1_2 = 0;
        static const unsigned n_elem2_0 = NODE_DIM;
        static const unsigned n_elem2_1 = 1;
        static const unsigned n_elem2_2 = 0;
        static const bool gnn_resource_limit = true;
    
        static const int axis = 0;
    };
    

    struct merge_config2 : nnet::concat_config {
        static const unsigned n_elem1_0 = 2*NODE_DIM;
        static const unsigned n_elem1_1 = 1;
        static const unsigned n_elem1_2 = 0;
        static const unsigned n_elem2_0 = EDGE_DIM;
        static const unsigned n_elem2_1 = 1;
        static const unsigned n_elem2_2 = 0;
        static const bool gnn_resource_limit = true;
    
        static const int axis = 0;
    };
    
};
// layer7_out_clone_0
struct layer7_out_config: nnet::matrix_config{
                            static const unsigned n_rows = N_EDGE;
                            static const unsigned n_cols = 4;
                        };
// aggr5
struct aggregation_config9: nnet::edge_aggregate_config{
    typedef layer9_t table_t;
    static const unsigned n_node = N_NODE;
    static const unsigned n_edge = N_EDGE;
    static const unsigned edge_dim = LAYER7_OUT_DIM;
    static const unsigned aggr = 0;
    static const unsigned flow = 0;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool io_stream = false;
    static const bool activate_final = false;
    static const bool gnn_resource_limit = true;

    struct edge_attr_config: nnet::matrix_config{
                                static const unsigned n_rows = N_EDGE;
                                static const unsigned n_cols = LAYER7_OUT_DIM;
                                static const bool gnn_resource_limit = true;
                            };

    struct edge_attr_aggr_config: nnet::matrix_config{
                                static const unsigned n_rows = N_NODE;
                                static const unsigned n_cols = LAYER9_OUT_DIM;
                                static const bool gnn_resource_limit = true;
                            };
};
// O
struct config10: nnet::graph_config{
    typedef layer10_t bias_t;
    typedef layer10_t weight_t;
    typedef layer10_t table_t;
    static const unsigned n_node = N_NODE;
    static const unsigned n_edge = N_NODE;
    static const unsigned node_dim = NODE_DIM; 
    static const unsigned edge_dim = LAYER9_OUT_DIM;
    static const unsigned out_dim = 3;
    static const unsigned n_layers = 3;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const bool io_stream = false; 
    static const bool activate_final = false;
    static const bool gnn_resource_limit = true;

    struct dense_config1 : nnet::dense_config {
        static const unsigned n_in = 7;
        static const unsigned n_out = 8;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer10_t accum_t;
        typedef layer10_t bias_t;
        typedef layer10_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct relu_config1 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct dense_config2 : nnet::dense_config {
        static const unsigned n_in = 8;
        static const unsigned n_out = 8;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer10_t accum_t;
        typedef layer10_t bias_t;
        typedef layer10_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct relu_config2 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct dense_config3 : nnet::dense_config {
        static const unsigned n_in = 8;
        static const unsigned n_out = 3;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer10_t accum_t;
        typedef layer10_t bias_t;
        typedef layer10_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct dense_config4 : nnet::dense_config {
        static const unsigned n_in = 8;
        static const unsigned n_out = 3;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer10_t accum_t;
        typedef layer10_t bias_t;
        typedef layer10_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct relu_config3 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct relu_config4 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct activation_config : nnet::activ_config {
        static const unsigned n_in = LAYER10_OUT_DIM;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned activation_type = 0;
        typedef ap_fixed<18,8> table_t;
    };
    

    struct node_attr_config: nnet::matrix_config{
                                static const unsigned n_rows = N_NODE;
                                static const unsigned n_cols = NODE_DIM;
                                static const bool gnn_resource_limit = true;
                            };

    struct edge_attr_aggr_config: nnet::matrix_config{
                                static const unsigned n_rows = N_NODE;
                                static const unsigned n_cols = LAYER9_OUT_DIM;
                                static const bool gnn_resource_limit = true;
                            };

    struct node_update_config: nnet::matrix_config{
                                static const unsigned n_rows = N_NODE;
                                static const unsigned n_cols = LAYER10_OUT_DIM;
                                static const bool gnn_resource_limit = true;
                            };

    struct merge_config1 : nnet::concat_config {
        static const unsigned n_elem1_0 = NODE_DIM;
        static const unsigned n_elem1_1 = 1;
        static const unsigned n_elem1_2 = 0;
        static const unsigned n_elem2_0 = LAYER9_OUT_DIM;
        static const unsigned n_elem2_1 = 1;
        static const unsigned n_elem2_2 = 0;
        static const bool gnn_resource_limit = true;
    
        static const int axis = 0;
    };
    
};
// R2
struct config11: nnet::graph_config{
    typedef layer11_t bias_t;
    typedef layer11_t weight_t;
    typedef layer11_t table_t;
    static const unsigned n_node = N_NODE;
    static const unsigned n_edge = N_EDGE;
    static const unsigned node_dim = LAYER10_OUT_DIM;
    static const unsigned edge_dim = LAYER7_OUT_DIM;
    static const unsigned out_dim = 1;
    static const unsigned n_layers = 3;
    static const unsigned flow = 0;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const bool io_stream = false; 
    static const bool activate_final = true;
    static const bool gnn_resource_limit = true;

    struct dense_config1 : nnet::dense_config {
        static const unsigned n_in = 10;
        static const unsigned n_out = 8;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer11_t accum_t;
        typedef layer11_t bias_t;
        typedef layer11_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct relu_config1 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct dense_config2 : nnet::dense_config {
        static const unsigned n_in = 8;
        static const unsigned n_out = 8;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer11_t accum_t;
        typedef layer11_t bias_t;
        typedef layer11_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct relu_config2 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct dense_config3 : nnet::dense_config {
        static const unsigned n_in = 8;
        static const unsigned n_out = 1;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer11_t accum_t;
        typedef layer11_t bias_t;
        typedef layer11_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct dense_config4 : nnet::dense_config {
        static const unsigned n_in = 8;
        static const unsigned n_out = 1;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef layer11_t accum_t;
        typedef layer11_t bias_t;
        typedef layer11_t weight_t;
        static const bool remove_pipeline_pragma = true;
        static const bool gnn_resource_limit = true;
    };
    

    struct relu_config3 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct relu_config4 : nnet::activ_config {
        static const unsigned n_in = 8;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
    };
    

    struct activation_config : nnet::activ_config {
        static const unsigned n_in = LAYER11_OUT_DIM;
        static const unsigned table_size = 1024;
        static const unsigned io_type = nnet::io_parallel;
        static const unsigned reuse_factor = 1;
        static const unsigned activation_type = 2;
        typedef ap_fixed<18,8> table_t;
    };
    

    struct node_attr_config: nnet::matrix_config{
                        static const unsigned n_rows = N_NODE;
                        static const unsigned n_cols = LAYER10_OUT_DIM;
                        static const bool gnn_resource_limit = true;
                    };

    struct edge_attr_config: nnet::matrix_config{
                        static const unsigned n_rows = N_EDGE;
                        static const unsigned n_cols = LAYER7_OUT_DIM;
                        static const bool gnn_resource_limit = true;
                    };

    struct edge_update_config: nnet::matrix_config{
                        static const unsigned n_rows = N_EDGE;
                        static const unsigned n_cols = LAYER11_OUT_DIM;
                        static const bool gnn_resource_limit = true;
                    };

    struct merge_config1 : nnet::concat_config {
        static const unsigned n_elem1_0 = LAYER10_OUT_DIM;
        static const unsigned n_elem1_1 = 1;
        static const unsigned n_elem1_2 = 0;
        static const unsigned n_elem2_0 = LAYER10_OUT_DIM;
        static const unsigned n_elem2_1 = 1;
        static const unsigned n_elem2_2 = 0;
        static const bool gnn_resource_limit = true;
    
        static const int axis = 0;
    };
    

    struct merge_config2 : nnet::concat_config {
        static const unsigned n_elem1_0 = 2*LAYER10_OUT_DIM;
        static const unsigned n_elem1_1 = 1;
        static const unsigned n_elem1_2 = 0;
        static const unsigned n_elem2_0 = LAYER7_OUT_DIM;
        static const unsigned n_elem2_1 = 1;
        static const unsigned n_elem2_2 = 0;
        static const bool gnn_resource_limit = true;
    
        static const int axis = 0;
    };
    
};

#endif
