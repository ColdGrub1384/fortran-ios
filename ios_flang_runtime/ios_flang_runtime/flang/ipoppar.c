/*
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 */

#include <stdint.h>

int32_t
__mth_i_ipoppar(uint32_t u32)
{
  uint32_t r32;

#if     defined(TARGET_X8664)
    asm("popcnt %1, %0\n"
        "\tandl $0x1, %0"
       : "=r"(r32)
       : "r"(u32)
       );
#elif   defined(TARGET_LINUX_POWER)
    asm("popcntw    %0, %1\n"
        "\trldicl   %0, %0, 0, 63"
       : "=r"(r32)
       : "r"(u32)
       );
#else
  r32 = u32;
  r32 ^= r32 >> 16;
  r32 ^= r32 >> 8;
  r32 ^= r32 >> 4;
  r32 ^= r32 >> 2;
  r32 ^= r32 >> 1;
  r32 &= 0x1;
#endif

  return r32;
}
