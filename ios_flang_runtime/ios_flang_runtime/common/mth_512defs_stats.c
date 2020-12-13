/*
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 */

#include "mth_intrinsics.h"
#include "mth_tbldefs.h"
vrs16_t
MTH_DISPATCH_FUNC_D(__fs_acos_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_acos][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_acos_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_acos][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_acos_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_acos][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_acos_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_acos][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_acos_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_acos][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_acos_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_acos][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_acos_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_acos][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_acos_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_acos][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_acos_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_acos][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_acos_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_acos][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_acos_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_acos][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_acos_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_acos][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_asin_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_asin][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_asin_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_asin][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_asin_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_asin][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_asin_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_asin][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_asin_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_asin][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_asin_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_asin][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_asin_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_asin][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_asin_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_asin][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_asin_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_asin][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_asin_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_asin][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_asin_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_asin][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_asin_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_asin][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_atan_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_atan][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_atan_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_atan][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_atan_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_atan][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_atan_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_atan][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_atan_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_atan][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_atan_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_atan][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_atan_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_atan][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_atan_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_atan][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_atan_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_atan][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_atan_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_atan][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_atan_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_atan][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_atan_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_atan][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_atan2_16)(vrs16_t x, vrs16_t y)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t))MTH_DISPATCH_TBL[func_atan2][sv_sv16][frp_f];
  return (fptr(x, y));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_atan2_16)(vrs16_t x, vrs16_t y)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t))MTH_DISPATCH_TBL[func_atan2][sv_sv16][frp_r];
  return (fptr(x, y));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_atan2_16)(vrs16_t x, vrs16_t y)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t))MTH_DISPATCH_TBL[func_atan2][sv_sv16][frp_p];
  return (fptr(x, y));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_atan2_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_atan2][sv_sv16m][frp_f];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_atan2_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_atan2][sv_sv16m][frp_r];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_atan2_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_atan2][sv_sv16m][frp_p];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_atan2_8)(vrd8_t x, vrd8_t y)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t))MTH_DISPATCH_TBL[func_atan2][sv_dv8][frp_f];
  return (fptr(x, y));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_atan2_8)(vrd8_t x, vrd8_t y)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t))MTH_DISPATCH_TBL[func_atan2][sv_dv8][frp_r];
  return (fptr(x, y));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_atan2_8)(vrd8_t x, vrd8_t y)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t))MTH_DISPATCH_TBL[func_atan2][sv_dv8][frp_p];
  return (fptr(x, y));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_atan2_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_atan2][sv_dv8m][frp_f];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_atan2_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_atan2][sv_dv8m][frp_r];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_atan2_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan2,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_atan2][sv_dv8m][frp_p];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_cos_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_cos][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_cos_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_cos][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_cos_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_cos][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_cos_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_cos][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_cos_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_cos][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_cos_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_cos][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_cos_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_cos][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_cos_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_cos][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_cos_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_cos][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_cos_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_cos][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_cos_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_cos][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_cos_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_cos][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_sin_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_sin][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_sin_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_sin][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_sin_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_sin][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_sin_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sin][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_sin_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sin][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_sin_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sin][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_sin_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_sin][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_sin_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_sin][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_sin_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_sin][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_sin_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sin][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_sin_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sin][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_sin_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sin][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_tan_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_tan][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_tan_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_tan][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_tan_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_tan][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_tan_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_tan][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_tan_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_tan][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_tan_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_tan][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_tan_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_tan][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_tan_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_tan][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_tan_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_tan][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_tan_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_tan][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_tan_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_tan][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_tan_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_tan][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_cosh_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_cosh][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_cosh_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_cosh][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_cosh_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_cosh][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_cosh_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_cosh_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_cosh_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_cosh_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_cosh][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_cosh_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_cosh][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_cosh_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_cosh][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_cosh_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_cosh_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_cosh_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_sinh_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_sinh][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_sinh_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_sinh][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_sinh_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_sinh][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_sinh_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_sinh_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_sinh_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_sinh_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_sinh][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_sinh_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_sinh][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_sinh_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_sinh][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_sinh_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_sinh_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_sinh_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_tanh_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_tanh][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_tanh_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_tanh][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_tanh_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_tanh][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_tanh_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_tanh_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_tanh_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_tanh_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_tanh][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_tanh_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_tanh][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_tanh_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_tanh][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_tanh_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_tanh_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_tanh_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_exp_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_exp][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_exp_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_exp][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_exp_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_exp][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_exp_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_exp][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_exp_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_exp][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_exp_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_exp][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_exp_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_exp][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_exp_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_exp][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_exp_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_exp][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_exp_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_exp][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_exp_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_exp][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_exp_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_exp][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_log_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_log][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_log_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_log][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_log_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_log][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_log_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_log][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_log_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_log][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_log_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_log][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_log_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_log][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_log_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_log][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_log_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_log][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_log_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_log][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_log_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_log][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_log_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_log][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_log10_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_log10][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_log10_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_log10][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_log10_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_log10][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_log10_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_log10][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_log10_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_log10][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_log10_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_log10][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_log10_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_log10][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_log10_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_log10][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_log10_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_log10][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_log10_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_log10][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_log10_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_log10][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_log10_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_log10][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_mod_16)(vrs16_t x, vrs16_t y)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t))MTH_DISPATCH_TBL[func_mod][sv_sv16][frp_f];
  return (fptr(x, y));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_mod_16)(vrs16_t x, vrs16_t y)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t))MTH_DISPATCH_TBL[func_mod][sv_sv16][frp_r];
  return (fptr(x, y));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_mod_16)(vrs16_t x, vrs16_t y)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t))MTH_DISPATCH_TBL[func_mod][sv_sv16][frp_p];
  return (fptr(x, y));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_mod_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_mod][sv_sv16m][frp_f];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_mod_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_mod][sv_sv16m][frp_r];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_mod_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_mod][sv_sv16m][frp_p];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_mod_8)(vrd8_t x, vrd8_t y)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t))MTH_DISPATCH_TBL[func_mod][sv_dv8][frp_f];
  return (fptr(x, y));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_mod_8)(vrd8_t x, vrd8_t y)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t))MTH_DISPATCH_TBL[func_mod][sv_dv8][frp_r];
  return (fptr(x, y));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_mod_8)(vrd8_t x, vrd8_t y)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t))MTH_DISPATCH_TBL[func_mod][sv_dv8][frp_p];
  return (fptr(x, y));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_mod_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_mod][sv_dv8m][frp_f];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_mod_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_mod][sv_dv8m][frp_r];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_mod_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_mod,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_mod][sv_dv8m][frp_p];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_pow_16)(vrs16_t x, vrs16_t y)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t))MTH_DISPATCH_TBL[func_pow][sv_sv16][frp_f];
  return (fptr(x, y));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_pow_16)(vrs16_t x, vrs16_t y)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t))MTH_DISPATCH_TBL[func_pow][sv_sv16][frp_r];
  return (fptr(x, y));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_pow_16)(vrs16_t x, vrs16_t y)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t))MTH_DISPATCH_TBL[func_pow][sv_sv16][frp_p];
  return (fptr(x, y));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_pow_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_pow][sv_sv16m][frp_f];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_pow_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_pow][sv_sv16m][frp_r];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_pow_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_pow][sv_sv16m][frp_p];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_pow_8)(vrd8_t x, vrd8_t y)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t))MTH_DISPATCH_TBL[func_pow][sv_dv8][frp_f];
  return (fptr(x, y));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_pow_8)(vrd8_t x, vrd8_t y)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t))MTH_DISPATCH_TBL[func_pow][sv_dv8][frp_r];
  return (fptr(x, y));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_pow_8)(vrd8_t x, vrd8_t y)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t))MTH_DISPATCH_TBL[func_pow][sv_dv8][frp_p];
  return (fptr(x, y));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_pow_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_pow][sv_dv8m][frp_f];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_pow_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_pow][sv_dv8m][frp_r];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_pow_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_pow][sv_dv8m][frp_p];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_powi1_16)(vrs16_t x, int32_t iy)
{
  vrs16_t (*fptr)(vrs16_t, int32_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, int32_t))MTH_DISPATCH_TBL[func_powi1][sv_sv16][frp_f];
  return(fptr(x,iy));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_powi1_16)(vrs16_t x, int32_t iy)
{
  vrs16_t (*fptr)(vrs16_t, int32_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, int32_t))MTH_DISPATCH_TBL[func_powi1][sv_sv16][frp_r];
  return(fptr(x,iy));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_powi1_16)(vrs16_t x, int32_t iy)
{
  vrs16_t (*fptr)(vrs16_t, int32_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, int32_t))MTH_DISPATCH_TBL[func_powi1][sv_sv16][frp_p];
  return(fptr(x,iy));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_powi1_16m)(vrs16_t x, int32_t iy, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, int32_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, int32_t, vis16_t))MTH_DISPATCH_TBL[func_powi1][sv_sv16m][frp_f];
  return(fptr(x,iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_powi1_16m)(vrs16_t x, int32_t iy, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, int32_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, int32_t, vis16_t))MTH_DISPATCH_TBL[func_powi1][sv_sv16m][frp_r];
  return(fptr(x,iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_powi1_16m)(vrs16_t x, int32_t iy, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, int32_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, int32_t, vis16_t))MTH_DISPATCH_TBL[func_powi1][sv_sv16m][frp_p];
  return(fptr(x,iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_powi_16)(vrs16_t x, vis16_t iy)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_powi][sv_sv16][frp_f];
  return(fptr(x, iy));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_powi_16)(vrs16_t x, vis16_t iy)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_powi][sv_sv16][frp_r];
  return(fptr(x, iy));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_powi_16)(vrs16_t x, vis16_t iy)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vis16_t))MTH_DISPATCH_TBL[func_powi][sv_sv16][frp_p];
  return(fptr(x, iy));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_powi_16m)(vrs16_t x, vis16_t iy, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vis16_t, vis16_t))MTH_DISPATCH_TBL[func_powi][sv_sv16m][frp_f];
  return(fptr(x, iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_powi_16m)(vrs16_t x, vis16_t iy, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vis16_t, vis16_t))MTH_DISPATCH_TBL[func_powi][sv_sv16m][frp_r];
  return(fptr(x, iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_powi_16m)(vrs16_t x, vis16_t iy, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vis16_t, vis16_t))MTH_DISPATCH_TBL[func_powi][sv_sv16m][frp_p];
  return(fptr(x, iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_powk1_16)(vrs16_t x, long long iy)
{
  vrs16_t (*fptr)(vrs16_t, long long);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, long long))MTH_DISPATCH_TBL[func_powk1][sv_sv16][frp_f];
  return(fptr(x, iy));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_powk1_16)(vrs16_t x, long long iy)
{
  vrs16_t (*fptr)(vrs16_t, long long);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, long long))MTH_DISPATCH_TBL[func_powk1][sv_sv16][frp_r];
  return(fptr(x, iy));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_powk1_16)(vrs16_t x, long long iy)
{
  vrs16_t (*fptr)(vrs16_t, long long);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, long long))MTH_DISPATCH_TBL[func_powk1][sv_sv16][frp_p];
  return(fptr(x, iy));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_powk1_16m)(vrs16_t x, long long iy, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, long long, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, long long, vis16_t))MTH_DISPATCH_TBL[func_powk1][sv_sv16m][frp_f];
  return(fptr(x, iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_powk1_16m)(vrs16_t x, long long iy, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, long long, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, long long, vis16_t))MTH_DISPATCH_TBL[func_powk1][sv_sv16m][frp_r];
  return(fptr(x, iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_powk1_16m)(vrs16_t x, long long iy, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, long long, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, long long, vis16_t))MTH_DISPATCH_TBL[func_powk1][sv_sv16m][frp_p];
  return(fptr(x, iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_powk_16)(vrs16_t x, vid8_t iyu, vid8_t iyl)
{
  vrs16_t (*fptr)(vrs16_t, vid8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vid8_t, vid8_t))MTH_DISPATCH_TBL[func_powk][sv_sv16][frp_f];
  return(fptr(x, iyu, iyl));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_powk_16)(vrs16_t x, vid8_t iyu, vid8_t iyl)
{
  vrs16_t (*fptr)(vrs16_t, vid8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vid8_t, vid8_t))MTH_DISPATCH_TBL[func_powk][sv_sv16][frp_r];
  return(fptr(x, iyu, iyl));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_powk_16)(vrs16_t x, vid8_t iyu, vid8_t iyl)
{
  vrs16_t (*fptr)(vrs16_t, vid8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vid8_t, vid8_t))MTH_DISPATCH_TBL[func_powk][sv_sv16][frp_p];
  return(fptr(x, iyu, iyl));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_powk_16m)(vrs16_t x, vid8_t iyu, vid8_t iyl, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, vid8_t, vid8_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)(vrs16_t, vid8_t, vid8_t, vis16_t))MTH_DISPATCH_TBL[func_powk][sv_sv16m][frp_f];
  return(fptr(x, iyu, iyl, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_powk_16m)(vrs16_t x, vid8_t iyu, vid8_t iyl, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, vid8_t, vid8_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)(vrs16_t, vid8_t, vid8_t, vis16_t))MTH_DISPATCH_TBL[func_powk][sv_sv16m][frp_r];
  return(fptr(x, iyu, iyl, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_powk_16m)(vrs16_t x, vid8_t iyu, vid8_t iyl, vis16_t mask)
{
  vrs16_t (*fptr)(vrs16_t, vid8_t, vid8_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)(vrs16_t, vid8_t, vid8_t, vis16_t))MTH_DISPATCH_TBL[func_powk][sv_sv16m][frp_p];
  return(fptr(x, iyu, iyl, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_powi1_8)(vrd8_t x, int32_t iy)
{
  vrd8_t (*fptr)(vrd8_t, int32_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, int32_t))MTH_DISPATCH_TBL[func_powi1][sv_dv8][frp_f];
  return(fptr(x,iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_powi1_8)(vrd8_t x, int32_t iy)
{
  vrd8_t (*fptr)(vrd8_t, int32_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, int32_t))MTH_DISPATCH_TBL[func_powi1][sv_dv8][frp_r];
  return(fptr(x,iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_powi1_8)(vrd8_t x, int32_t iy)
{
  vrd8_t (*fptr)(vrd8_t, int32_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, int32_t))MTH_DISPATCH_TBL[func_powi1][sv_dv8][frp_p];
  return(fptr(x,iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_powi1_8m)(vrd8_t x, int32_t iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, int32_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, int32_t, vid8_t))MTH_DISPATCH_TBL[func_powi1][sv_dv8m][frp_f];
  return(fptr(x,iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_powi1_8m)(vrd8_t x, int32_t iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, int32_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, int32_t, vid8_t))MTH_DISPATCH_TBL[func_powi1][sv_dv8m][frp_r];
  return(fptr(x,iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_powi1_8m)(vrd8_t x, int32_t iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, int32_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi1,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, int32_t, vid8_t))MTH_DISPATCH_TBL[func_powi1][sv_dv8m][frp_p];
  return(fptr(x,iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_powi_8)(vrd8_t x, vis8_t iy)
{
  vrd8_t (*fptr)(vrd8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vis8_t))MTH_DISPATCH_TBL[func_powi][sv_dv8][frp_f];
  return(fptr(x, iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_powi_8)(vrd8_t x, vis8_t iy)
{
  vrd8_t (*fptr)(vrd8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vis8_t))MTH_DISPATCH_TBL[func_powi][sv_dv8][frp_r];
  return(fptr(x, iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_powi_8)(vrd8_t x, vis8_t iy)
{
  vrd8_t (*fptr)(vrd8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vis8_t))MTH_DISPATCH_TBL[func_powi][sv_dv8][frp_p];
  return(fptr(x, iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_powi_8m)(vrd8_t x, vis8_t iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, vis8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vis8_t, vid8_t))MTH_DISPATCH_TBL[func_powi][sv_dv8m][frp_f];
  return(fptr(x, iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_powi_8m)(vrd8_t x, vis8_t iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, vis8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vis8_t, vid8_t))MTH_DISPATCH_TBL[func_powi][sv_dv8m][frp_r];
  return(fptr(x, iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_powi_8m)(vrd8_t x, vis8_t iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, vis8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powi,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vis8_t, vid8_t))MTH_DISPATCH_TBL[func_powi][sv_dv8m][frp_p];
  return(fptr(x, iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_powk1_8)(vrd8_t x, long long iy)
{
  vrd8_t (*fptr)(vrd8_t, long long);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, long long))MTH_DISPATCH_TBL[func_powk1][sv_dv8][frp_f];
  return(fptr(x, iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_powk1_8)(vrd8_t x, long long iy)
{
  vrd8_t (*fptr)(vrd8_t, long long);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, long long))MTH_DISPATCH_TBL[func_powk1][sv_dv8][frp_r];
  return(fptr(x, iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_powk1_8)(vrd8_t x, long long iy)
{
  vrd8_t (*fptr)(vrd8_t, long long);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, long long))MTH_DISPATCH_TBL[func_powk1][sv_dv8][frp_p];
  return(fptr(x, iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_powk1_8m)(vrd8_t x, long long iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, long long, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, long long, vid8_t))MTH_DISPATCH_TBL[func_powk1][sv_dv8m][frp_f];
  return(fptr(x, iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_powk1_8m)(vrd8_t x, long long iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, long long, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, long long, vid8_t))MTH_DISPATCH_TBL[func_powk1][sv_dv8m][frp_r];
  return(fptr(x, iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_powk1_8m)(vrd8_t x, long long iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, long long, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk1,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, long long, vid8_t))MTH_DISPATCH_TBL[func_powk1][sv_dv8m][frp_p];
  return(fptr(x, iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_powk_8)(vrd8_t x, vid8_t iy)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_powk][sv_dv8][frp_f];
  return(fptr(x, iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_powk_8)(vrd8_t x, vid8_t iy)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_powk][sv_dv8][frp_r];
  return(fptr(x, iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_powk_8)(vrd8_t x, vid8_t iy)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vid8_t))MTH_DISPATCH_TBL[func_powk][sv_dv8][frp_p];
  return(fptr(x, iy));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_powk_8m)(vrd8_t x, vid8_t iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)(vrd8_t, vid8_t, vid8_t))MTH_DISPATCH_TBL[func_powk][sv_dv8m][frp_f];
  return(fptr(x, iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_powk_8m)(vrd8_t x, vid8_t iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)(vrd8_t, vid8_t, vid8_t))MTH_DISPATCH_TBL[func_powk][sv_dv8m][frp_r];
  return(fptr(x, iy, mask));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_powk_8m)(vrd8_t x, vid8_t iy, vid8_t mask)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_powk,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)(vrd8_t, vid8_t, vid8_t))MTH_DISPATCH_TBL[func_powk][sv_dv8m][frp_p];
  return(fptr(x, iy, mask));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_sincos_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_sincos][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_sincos_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_sincos][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_sincos_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_sincos][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_sincos_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sincos][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_sincos_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sincos][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_sincos_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sincos][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_sincos_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_sincos][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_sincos_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_sincos][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_sincos_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_sincos][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_sincos_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sincos][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_sincos_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sincos][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_sincos_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sincos,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sincos][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_div_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t m);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_div][sv_dv8m][frp_f];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_div_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_div][sv_dv8m][frp_r];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_div_8m)(vrd8_t x, vrd8_t y, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_div][sv_dv8m][frp_p];
  return (fptr(x, y, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_sqrt_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t m);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_sqrt_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_sqrt_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_div_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_div][sv_sv16m][frp_f];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_div_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_div][sv_sv16m][frp_r];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_div_16m)(vrs16_t x, vrs16_t y, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_div][sv_sv16m][frp_p];
  return (fptr(x, y, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_sqrt_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_sqrt_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_sqrt_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_aint_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_aint][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_aint_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_aint][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_aint_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_aint][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_aint_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_aint][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_aint_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_aint][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_aint_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_aint][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_aint_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_aint][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_aint_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_aint][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_aint_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_aint][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_aint_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_aint][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_aint_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_aint][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_aint_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_aint,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_aint][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_ceil_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_ceil][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_ceil_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_ceil][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_ceil_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_ceil][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_ceil_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_ceil][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_ceil_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_ceil][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_ceil_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_ceil][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_ceil_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_ceil][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_ceil_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_ceil][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_ceil_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_ceil][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_ceil_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_ceil][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_ceil_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_ceil][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_ceil_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_ceil,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_ceil][sv_dv8m][frp_p];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_floor_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_sv16,frp_f);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_floor][sv_sv16][frp_f];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_floor_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_sv16,frp_r);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_floor][sv_sv16][frp_r];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_floor_16)(vrs16_t x)
{
  vrs16_t (*fptr)(vrs16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_sv16,frp_p);
  fptr = (vrs16_t(*)(vrs16_t))MTH_DISPATCH_TBL[func_floor][sv_sv16][frp_p];
  return (fptr(x));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__fs_floor_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_sv16m,frp_f);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_floor][sv_sv16m][frp_f];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__rs_floor_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_sv16m,frp_r);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_floor][sv_sv16m][frp_r];
  return (fptr(x, m));
}

vrs16_t
MTH_DISPATCH_FUNC_D(__ps_floor_16m)(vrs16_t x, vis16_t m)
{
  vrs16_t (*fptr)(vrs16_t, vis16_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_sv16m,frp_p);
  fptr = (vrs16_t(*)())MTH_DISPATCH_TBL[func_floor][sv_sv16m][frp_p];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_floor_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_dv8,frp_f);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_floor][sv_dv8][frp_f];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_floor_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_dv8,frp_r);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_floor][sv_dv8][frp_r];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_floor_8)(vrd8_t x)
{
  vrd8_t (*fptr)(vrd8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_dv8,frp_p);
  fptr = (vrd8_t(*)(vrd8_t))MTH_DISPATCH_TBL[func_floor][sv_dv8][frp_p];
  return (fptr(x));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__fd_floor_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_dv8m,frp_f);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_floor][sv_dv8m][frp_f];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__rd_floor_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_dv8m,frp_r);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_floor][sv_dv8m][frp_r];
  return (fptr(x, m));
}

vrd8_t
MTH_DISPATCH_FUNC_D(__pd_floor_8m)(vrd8_t x, vid8_t m)
{
  vrd8_t (*fptr)(vrd8_t, vid8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_floor,sv_dv8m,frp_p);
  fptr = (vrd8_t(*)())MTH_DISPATCH_TBL[func_floor][sv_dv8m][frp_p];
  return (fptr(x, m));
}

//////////
//// EXPERIMENTAL - COMPLEX - start
////////////
vcs8_t
MTH_DISPATCH_FUNC_D(__fc_acos_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_acos][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_acos_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_acos][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_acos_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_acos][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_acos_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_acos][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_acos_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_acos][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_acos_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_acos][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_acos_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_acos][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_acos_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_acos][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_acos_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_acos][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_acos_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_acos][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_acos_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_acos][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_acos_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_acos,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_acos][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_asin_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_asin][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_asin_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_asin][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_asin_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_asin][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_asin_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_asin][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_asin_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_asin][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_asin_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_asin][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_asin_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_asin][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_asin_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_asin][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_asin_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_asin][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_asin_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_asin][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_asin_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_asin][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_asin_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_asin,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_asin][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_atan_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_atan][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_atan_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_atan][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_atan_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_atan][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_atan_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_atan][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_atan_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_atan][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_atan_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_atan][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_atan_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_atan][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_atan_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_atan][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_atan_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_atan][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_atan_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_atan][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_atan_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_atan][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_atan_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_atan,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_atan][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_cos_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_cos][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_cos_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_cos][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_cos_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_cos][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_cos_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_cos][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_cos_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_cos][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_cos_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_cos][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_cos_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_cos][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_cos_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_cos][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_cos_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_cos][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_cos_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_cos][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_cos_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_cos][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_cos_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cos,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_cos][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_sin_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_sin][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_sin_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_sin][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_sin_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_sin][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_sin_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_sin][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_sin_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_sin][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_sin_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_sin][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_sin_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_sin][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_sin_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_sin][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_sin_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_sin][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_sin_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_sin][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_sin_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_sin][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_sin_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sin,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_sin][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_tan_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_tan][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_tan_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_tan][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_tan_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_tan][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_tan_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_tan][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_tan_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_tan][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_tan_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_tan][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_tan_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_tan][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_tan_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_tan][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_tan_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_tan][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_tan_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_tan][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_tan_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_tan][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_tan_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tan,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_tan][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_cosh_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_cosh][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_cosh_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_cosh][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_cosh_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_cosh][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_cosh_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_cosh_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_cosh_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_cosh_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_cosh][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_cosh_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_cosh][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_cosh_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_cosh][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_cosh_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_cosh_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_cosh_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_cosh,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_cosh][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_sinh_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_sinh][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_sinh_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_sinh][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_sinh_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_sinh][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_sinh_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_sinh_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_sinh_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_sinh_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_sinh][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_sinh_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_sinh][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_sinh_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_sinh][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_sinh_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_sinh_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_sinh_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sinh,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_sinh][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_tanh_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_tanh][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_tanh_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_tanh][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_tanh_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_tanh][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_tanh_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_tanh_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_tanh_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_tanh_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_tanh][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_tanh_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_tanh][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_tanh_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_tanh][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_tanh_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_tanh_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_tanh_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_tanh,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_tanh][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_exp_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_exp][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_exp_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_exp][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_exp_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_exp][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_exp_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_exp][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_exp_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_exp][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_exp_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_exp][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_exp_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_exp][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_exp_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_exp][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_exp_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_exp][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_exp_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_exp][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_exp_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_exp][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_exp_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_exp,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_exp][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_log_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_log][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_log_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_log][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_log_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_log][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_log_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_log][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_log_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_log][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_log_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_log][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_log_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_log][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_log_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_log][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_log_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_log][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_log_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_log][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_log_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_log][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_log_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_log][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_log10_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_log10][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_log10_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_log10][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_log10_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_log10][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_log10_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_log10][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_log10_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_log10][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_log10_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_log10][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_log10_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_log10][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_log10_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_log10][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_log10_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_log10][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_log10_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_log10][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_log10_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_log10][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_log10_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_log10,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_log10][sv_zv4m][frp_p];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_pow_8)(vcs8_t x, vcs8_t y)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t))MTH_DISPATCH_TBL[func_pow][sv_cv8][frp_f];
  return (fptr(x, y));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_pow_8)(vcs8_t x, vcs8_t y)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t))MTH_DISPATCH_TBL[func_pow][sv_cv8][frp_r];
  return (fptr(x, y));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_pow_8)(vcs8_t x, vcs8_t y)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t))MTH_DISPATCH_TBL[func_pow][sv_cv8][frp_p];
  return (fptr(x, y));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_pow_8m)(vcs8_t x, vcs8_t y, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t, vis8_t))MTH_DISPATCH_TBL[func_pow][sv_cv8m][frp_f];
  return (fptr(x, y, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_pow_8m)(vcs8_t x, vcs8_t y, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t, vis8_t))MTH_DISPATCH_TBL[func_pow][sv_cv8m][frp_r];
  return (fptr(x, y, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_pow_8m)(vcs8_t x, vcs8_t y, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t, vis8_t))MTH_DISPATCH_TBL[func_pow][sv_cv8m][frp_p];
  return (fptr(x, y, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_pow_4)(vcd4_t x, vcd4_t y)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t))MTH_DISPATCH_TBL[func_pow][sv_zv4][frp_f];
  return (fptr(x, y));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_pow_4)(vcd4_t x, vcd4_t y)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t))MTH_DISPATCH_TBL[func_pow][sv_zv4][frp_r];
  return (fptr(x, y));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_pow_4)(vcd4_t x, vcd4_t y)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t))MTH_DISPATCH_TBL[func_pow][sv_zv4][frp_p];
  return (fptr(x, y));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_pow_4m)(vcd4_t x, vcd4_t y, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t, vid4_t))MTH_DISPATCH_TBL[func_pow][sv_zv4m][frp_f];
  return (fptr(x, y, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_pow_4m)(vcd4_t x, vcd4_t y, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t, vid4_t))MTH_DISPATCH_TBL[func_pow][sv_zv4m][frp_r];
  return (fptr(x, y, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_pow_4m)(vcd4_t x, vcd4_t y, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_pow,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t, vid4_t))MTH_DISPATCH_TBL[func_pow][sv_zv4m][frp_p];
  return (fptr(x, y, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_div_8)(vcs8_t x, vcs8_t y)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t))MTH_DISPATCH_TBL[func_div][sv_cv8][frp_f];
  return (fptr(x, y));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_div_8)(vcs8_t x, vcs8_t y)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t))MTH_DISPATCH_TBL[func_div][sv_cv8][frp_r];
  return (fptr(x, y));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_div_8)(vcs8_t x, vcs8_t y)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t))MTH_DISPATCH_TBL[func_div][sv_cv8][frp_p];
  return (fptr(x, y));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_div_8m)(vcs8_t x, vcs8_t y, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t, vis8_t))MTH_DISPATCH_TBL[func_div][sv_cv8m][frp_f];
  return (fptr(x, y, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_div_8m)(vcs8_t x, vcs8_t y, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t, vis8_t))MTH_DISPATCH_TBL[func_div][sv_cv8m][frp_r];
  return (fptr(x, y, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_div_8m)(vcs8_t x, vcs8_t y, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)(vcs8_t, vcs8_t, vis8_t))MTH_DISPATCH_TBL[func_div][sv_cv8m][frp_p];
  return (fptr(x, y, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_div_4)(vcd4_t x, vcd4_t y)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t))MTH_DISPATCH_TBL[func_div][sv_zv4][frp_f];
  return (fptr(x, y));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_div_4)(vcd4_t x, vcd4_t y)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t))MTH_DISPATCH_TBL[func_div][sv_zv4][frp_r];
  return (fptr(x, y));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_div_4)(vcd4_t x, vcd4_t y)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t))MTH_DISPATCH_TBL[func_div][sv_zv4][frp_p];
  return (fptr(x, y));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_div_4m)(vcd4_t x, vcd4_t y, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t, vid4_t))MTH_DISPATCH_TBL[func_div][sv_zv4m][frp_f];
  return (fptr(x, y, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_div_4m)(vcd4_t x, vcd4_t y, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t, vid4_t))MTH_DISPATCH_TBL[func_div][sv_zv4m][frp_r];
  return (fptr(x, y, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_div_4m)(vcd4_t x, vcd4_t y, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_div,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)(vcd4_t, vcd4_t, vid4_t))MTH_DISPATCH_TBL[func_div][sv_zv4m][frp_p];
  return (fptr(x, y, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_sqrt_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_cv8,frp_f);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_sqrt][sv_cv8][frp_f];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_sqrt_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_cv8,frp_r);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_sqrt][sv_cv8][frp_r];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_sqrt_8)(vcs8_t x)
{
  vcs8_t (*fptr)(vcs8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_cv8,frp_p);
  fptr = (vcs8_t(*)(vcs8_t))MTH_DISPATCH_TBL[func_sqrt][sv_cv8][frp_p];
  return (fptr(x));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__fc_sqrt_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_cv8m,frp_f);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_cv8m][frp_f];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__rc_sqrt_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_cv8m,frp_r);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_cv8m][frp_r];
  return (fptr(x, m));
}

vcs8_t
MTH_DISPATCH_FUNC_D(__pc_sqrt_8m)(vcs8_t x, vis8_t m)
{
  vcs8_t (*fptr)(vcs8_t, vis8_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_cv8m,frp_p);
  fptr = (vcs8_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_cv8m][frp_p];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_sqrt_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_zv4,frp_f);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_sqrt][sv_zv4][frp_f];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_sqrt_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_zv4,frp_r);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_sqrt][sv_zv4][frp_r];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_sqrt_4)(vcd4_t x)
{
  vcd4_t (*fptr)(vcd4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_zv4,frp_p);
  fptr = (vcd4_t(*)(vcd4_t))MTH_DISPATCH_TBL[func_sqrt][sv_zv4][frp_p];
  return (fptr(x));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__fz_sqrt_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_zv4m,frp_f);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_zv4m][frp_f];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__rz_sqrt_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_zv4m,frp_r);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_zv4m][frp_r];
  return (fptr(x, m));
}

vcd4_t
MTH_DISPATCH_FUNC_D(__pz_sqrt_4m)(vcd4_t x, vid4_t m)
{
  vcd4_t (*fptr)(vcd4_t, vid4_t);
  _MTH_I_INIT();
  _MTH_I_STATS_INC(func_sqrt,sv_zv4m,frp_p);
  fptr = (vcd4_t(*)())MTH_DISPATCH_TBL[func_sqrt][sv_zv4m][frp_p];
  return (fptr(x, m));
}
//////////
//// EXPERIMENTAL - COMPLEX - end
////////////
