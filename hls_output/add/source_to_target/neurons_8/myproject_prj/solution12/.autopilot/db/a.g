#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ShiYuHuang/manual_GNN_conversion/hls_output/add/source_to_target/neurons_8/myproject_prj/solution12/.autopilot/db/a.g.bc ${1+"$@"}