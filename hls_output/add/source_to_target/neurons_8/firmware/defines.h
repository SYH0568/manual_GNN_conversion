#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"

//hls-fpga-machine-learning insert numbers
#define N_NODE 448
#define N_EDGE 592
#define NODE_DIM 3
#define LAYER7_OUT_DIM 4
#define LAYER10_OUT_DIM 3
#define EDGE_DIM 4
#define LAYER11_OUT_DIM 1
#define LAYER9_OUT_DIM 4
#define TWO 2

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,8> model_default_t;
typedef ap_fixed<16,8> input_t;
typedef ap_fixed<16,8> layer2_t;
typedef ap_fixed<16,8> input3_t;
typedef ap_uint<16> input4_t;
typedef ap_uint<16> layer5_t;
typedef ap_uint<16> layer6_t;
typedef ap_fixed<16,8> layer7_t;
typedef ap_fixed<16,8> layer8_t;
typedef ap_fixed<16,8> layer9_t;
typedef ap_fixed<16,8> layer10_t;
typedef ap_fixed<16,8> layer11_t;

#endif
