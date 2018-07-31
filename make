#!/bin/bash

TC=/auto/spvss-evo-infra/shrkamat/gviews/k-aophysb2/code/BLD_SAM_BCM_MIPS4K_LNUX_ASTRO_06/platform_cfg/linux/compiler/brcm_gcc_x86_linux_06/bin/mipsel-linux-gnu

mkdir -p build && cd build

/users/shrkamat/softs/Qt5p5/bin/qmake \
       "QMAKE_CXX=$TC-g++" \
       "QMAKE_CC=$TC-gcc" \
       "QMAKE_LINK=$TC-g++" .. && make
