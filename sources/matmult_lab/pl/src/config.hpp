// Copyright (C) 2022 Advanced Micro Devices, Inc
//
// SPDX-License-Identifier: MIT

#include <ap_int.h>
#include <hls_stream.h>
#include <ap_axi_sdata.h>

#define DWIDTH 64
typedef qdma_axis<DWIDTH, 0, 0, 0> data;