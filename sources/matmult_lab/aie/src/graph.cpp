// Copyright (C) 2022 Advanced Micro Devices, Inc
//
// SPDX-License-Identifier: MIT

#include "graph.h"

TopGraph G;

#if defined(__AIESIM__) || defined(__X86SIM__)
   int main(int argc, char ** argv)
   {
      G.init();
      G.run(NITERATIONS);
      G.end();

      return 0;
   }
#endif
