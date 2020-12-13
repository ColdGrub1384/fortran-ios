/*
 *     Copyright (c) 2017-2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 *
 */


#ifdef __cplusplus
extern "C++" {
#endif

#include "mth_intrinsics.h" 
#include "mth_tbldefs.h" 


static const vrs4_t Csp1_4={1.0, 1.0, 1.0, 1.0}; 
static const vrd2_t Cdp1_2={1.0, 1.0}; 
static const vrs8_t Csp1_8={1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0}; 
static const vrd4_t Cdp1_4={1.0, 1.0, 1.0, 1.0}; 
static const vrs16_t Csp1_16={1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 
                             1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0}; 
static const vrd8_t Cdp1_8={1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0}; 


#ifdef __cplusplus
}
#endif
#if defined (TARGET_X8664) 
#include "immintrin.h" 
#elif defined (TARGET_LINUX_POWER) 
#include "altivec.h" 
#elif defined(TARGET_LINUX_ARM64) 
#include "arm64intrin.h" 
#include <search.h> 
#else 
#include <stddef.h> 
#include <stdint.h> 
#include <search.h> 
#include <assert.h> 
#endif

#if !defined(TARGET_X8664) && !defined(TARGET_LINUX_POWER)
static int u8nonzero(const void *a, const void *b) 
{ 
  assert(!a); 
  assert(b); 
  return !(*((uint8_t *)b)); 
} 

static inline int is_zero(const void *val, size_t nmemb) 
{ 
  return !lfind(NULL, val, &nmemb, sizeof(uint8_t), u8nonzero); 
} 

#endif 



vrd8_t
__fd_acos_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_acos][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_acos_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_acos][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_acos_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_acos][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_acos_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_acos][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_acos_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_acos][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_acos_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_acos][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_asin_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_asin][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_asin_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_asin][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_asin_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_asin][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_asin_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_asin][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_asin_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_asin][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_asin_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_asin][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_atan_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_atan][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_atan_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_atan][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_atan_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_atan][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_atan_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_atan][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_atan_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_atan][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_atan_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_atan][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_atan2_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  y = (vrd8_t)((((vid8_t)y & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t , vrd8_t )) MTH_DISPATCH_TBL[func_atan2][sv_dv8][frp_f];
  return (fptr(x , y ));
}


vrs16_t
__fs_atan2_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  y = (vrs16_t)((((vis16_t)y & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t , vrs16_t )) MTH_DISPATCH_TBL[func_atan2][sv_sv16][frp_f];
  return (fptr(x , y ));
}


vrd8_t
__pd_atan2_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  y = (vrd8_t)((((vid8_t)y & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t , vrd8_t )) MTH_DISPATCH_TBL[func_atan2][sv_dv8][frp_p];
  return (fptr(x , y ));
}


vrs16_t
__ps_atan2_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  y = (vrs16_t)((((vis16_t)y & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t , vrs16_t )) MTH_DISPATCH_TBL[func_atan2][sv_sv16][frp_p];
  return (fptr(x , y ));
}


vrd8_t
__rd_atan2_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  y = (vrd8_t)((((vid8_t)y & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t , vrd8_t )) MTH_DISPATCH_TBL[func_atan2][sv_dv8][frp_r];
  return (fptr(x , y ));
}


vrs16_t
__rs_atan2_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  y = (vrs16_t)((((vis16_t)y & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t , vrs16_t )) MTH_DISPATCH_TBL[func_atan2][sv_sv16][frp_r];
  return (fptr(x , y ));
}


vrd8_t
__fd_cos_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_cos][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_cos_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_cos][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_cos_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_cos][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_cos_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_cos][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_cos_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_cos][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_cos_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_cos][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_sin_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_sin][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_sin_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_sin][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_sin_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_sin][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_sin_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_sin][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_sin_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_sin][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_sin_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_sin][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_tan_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_tan][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_tan_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_tan][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_tan_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_tan][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_tan_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_tan][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_tan_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_tan][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_tan_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_tan][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_sincos_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_sincos][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_sincos_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_sincos][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_sincos_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_sincos][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_sincos_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_sincos][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_sincos_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_sincos][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_sincos_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_sincos][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_cosh_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_cosh][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_cosh_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_cosh][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_cosh_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_cosh][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_cosh_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_cosh][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_cosh_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_cosh][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_cosh_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_cosh][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_sinh_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_sinh][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_sinh_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_sinh][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_sinh_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_sinh][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_sinh_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_sinh][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_sinh_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_sinh][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_sinh_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_sinh][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_tanh_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_tanh][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_tanh_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_tanh][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_tanh_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_tanh][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_tanh_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_tanh][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_tanh_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_tanh][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_tanh_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_tanh][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_exp_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_exp][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_exp_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_exp][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_exp_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_exp][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_exp_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_exp][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_exp_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_exp][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_exp_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_exp][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_log_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_log][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_log_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_log][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_log_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_log][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_log_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_log][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_log_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_log][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_log_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_log][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_log10_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_log10][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_log10_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_log10][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_log10_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_log10][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_log10_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_log10][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_log10_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_log10][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_log10_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_log10][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_pow_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  y = (vrd8_t)((((vid8_t)y & mask)));
  fptr = (vrd8_t(*) (vrd8_t , vrd8_t )) MTH_DISPATCH_TBL[func_pow][sv_dv8][frp_f];
  return (fptr(x , y ));
}


vrs16_t
__fs_pow_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  y = (vrs16_t)((((vis16_t)y & mask)));
  fptr = (vrs16_t(*) (vrs16_t , vrs16_t )) MTH_DISPATCH_TBL[func_pow][sv_sv16][frp_f];
  return (fptr(x , y ));
}


vrd8_t
__pd_pow_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  y = (vrd8_t)((((vid8_t)y & mask)));
  fptr = (vrd8_t(*) (vrd8_t , vrd8_t )) MTH_DISPATCH_TBL[func_pow][sv_dv8][frp_p];
  return (fptr(x , y ));
}


vrs16_t
__ps_pow_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  y = (vrs16_t)((((vis16_t)y & mask)));
  fptr = (vrs16_t(*) (vrs16_t , vrs16_t )) MTH_DISPATCH_TBL[func_pow][sv_sv16][frp_p];
  return (fptr(x , y ));
}


vrd8_t
__rd_pow_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  y = (vrd8_t)((((vid8_t)y & mask)));
  fptr = (vrd8_t(*) (vrd8_t , vrd8_t )) MTH_DISPATCH_TBL[func_pow][sv_dv8][frp_r];
  return (fptr(x , y ));
}


vrs16_t
__rs_pow_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  y = (vrs16_t)((((vis16_t)y & mask)));
  fptr = (vrs16_t(*) (vrs16_t , vrs16_t )) MTH_DISPATCH_TBL[func_pow][sv_sv16][frp_r];
  return (fptr(x , y ));
}


vrd8_t
__fd_div_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  y = (vrd8_t)((((vid8_t)y & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  return ( _mm512_div_pd((__m512d)x, (__m512d)y) );
}


vrs16_t
__fs_div_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  y = (vrs16_t)((((vis16_t)y & mask)) | ((vis16_t)Csp1_16 & ~mask));
  return ( _mm512_div_ps((__m512)x, (__m512)y) );
}


vrd8_t
__pd_div_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  y = (vrd8_t)((((vid8_t)y & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  return ( _mm512_div_pd((__m512d)x, (__m512d)y) );
}


vrs16_t
__ps_div_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  y = (vrs16_t)((((vis16_t)y & mask)) | ((vis16_t)Csp1_16 & ~mask));
  return ( _mm512_div_ps((__m512)x, (__m512)y) );
}


vrd8_t
__rd_div_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  y = (vrd8_t)((((vid8_t)y & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  return ( _mm512_mul_pd((__m512d)x, _mm512_div_pd(Cdp1_8, ( __m512d)y)) );
}


vrs16_t
__rs_div_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  y = (vrs16_t)((((vis16_t)y & mask)) | ((vis16_t)Csp1_16 & ~mask));
  return ( _mm512_mul_ps((__m512)x, _mm512_div_ps(Csp1_16, ( __m512)y)) );
}


vrd8_t
__fd_sqrt_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  return ( _mm512_sqrt_pd((__m512d)x) );
}


vrs16_t
__fs_sqrt_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  return ( _mm512_sqrt_ps((__m512)x) );
}


vrd8_t
__pd_sqrt_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  return ( _mm512_sqrt_pd((__m512d)x) );
}


vrs16_t
__ps_sqrt_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  return ( _mm512_sqrt_ps((__m512)x) );
}


vrd8_t
__rd_sqrt_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  return ( _mm512_sqrt_pd((__m512d)x) );
}


vrs16_t
__rs_sqrt_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  return ( _mm512_sqrt_ps((__m512)x) );
}


vrd8_t
__fd_mod_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  y = (vrd8_t)((((vid8_t)y & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t , vrd8_t )) MTH_DISPATCH_TBL[func_mod][sv_dv8][frp_f];
  return (fptr(x , y ));
}


vrs16_t
__fs_mod_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  y = (vrs16_t)((((vis16_t)y & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t , vrs16_t )) MTH_DISPATCH_TBL[func_mod][sv_sv16][frp_f];
  return (fptr(x , y ));
}


vrd8_t
__pd_mod_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  y = (vrd8_t)((((vid8_t)y & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t , vrd8_t )) MTH_DISPATCH_TBL[func_mod][sv_dv8][frp_p];
  return (fptr(x , y ));
}


vrs16_t
__ps_mod_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  y = (vrs16_t)((((vis16_t)y & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t , vrs16_t )) MTH_DISPATCH_TBL[func_mod][sv_sv16][frp_p];
  return (fptr(x , y ));
}


vrd8_t
__rd_mod_8_mn(vrd8_t x, vrd8_t y, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  y = (vrd8_t)((((vid8_t)y & mask)) | ((vid8_t)Cdp1_8 & ~mask));
  fptr = (vrd8_t(*) (vrd8_t , vrd8_t )) MTH_DISPATCH_TBL[func_mod][sv_dv8][frp_r];
  return (fptr(x , y ));
}


vrs16_t
__rs_mod_16_mn(vrs16_t x, vrs16_t y, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)) | ((vis16_t)Csp1_16 & ~mask));
  y = (vrs16_t)((((vis16_t)y & mask)) | ((vis16_t)Csp1_16 & ~mask));
  fptr = (vrs16_t(*) (vrs16_t , vrs16_t )) MTH_DISPATCH_TBL[func_mod][sv_sv16][frp_r];
  return (fptr(x , y ));
}


vrd8_t
__fd_aint_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_aint][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_aint_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_aint][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_aint_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_aint][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_aint_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_aint][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_aint_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_aint][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_aint_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_aint][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_ceil_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_ceil][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_ceil_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_ceil][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_ceil_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_ceil][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_ceil_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_ceil][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_ceil_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_ceil][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_ceil_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_ceil][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_floor_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_floor][sv_dv8][frp_f];
  return (fptr(x  ));
}


vrs16_t
__fs_floor_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_floor][sv_sv16][frp_f];
  return (fptr(x  ));
}


vrd8_t
__pd_floor_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_floor][sv_dv8][frp_p];
  return (fptr(x  ));
}


vrs16_t
__ps_floor_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_floor][sv_sv16][frp_p];
  return (fptr(x  ));
}


vrd8_t
__rd_floor_8_mn(vrd8_t x, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((((vid8_t)x & mask)));
  fptr = (vrd8_t(*) (vrd8_t  )) MTH_DISPATCH_TBL[func_floor][sv_dv8][frp_r];
  return (fptr(x  ));
}


vrs16_t
__rs_floor_16_mn(vrs16_t x, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t);
  (void) fptr;
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((((vis16_t)x & mask)));
  fptr = (vrs16_t(*) (vrs16_t  )) MTH_DISPATCH_TBL[func_floor][sv_sv16][frp_r];
  return (fptr(x  ));
}


vrd8_t
__fd_powi1_8_mn(vrd8_t x, int32_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, int32_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  fptr = (vrd8_t(*) (vrd8_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_dv8][frp_f];
  return (fptr(x,  iy));
}

vrd8_t
__fd_powi_8_mn(vrd8_t x, vis16_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vis16_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 8; i++) {
      if (mask[i] == 0) {
        iy[i] = 0;
      }
    }
  }
  fptr = (vrd8_t(*) (vrd8_t, vis16_t)) MTH_DISPATCH_TBL[func_powi][sv_dv8][frp_f];
  return (fptr(x,  iy));
}

vrd8_t
__fd_powk1_8_mn(vrd8_t x, int64_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, int64_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  fptr = (vrd8_t(*) (vrd8_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_dv8][frp_f];
  return (fptr(x,  iy));
}

vrd8_t
__fd_powk_8_mn(vrd8_t x, vid8_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vid8_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  iy = iy & mask;
  fptr = (vrd8_t(*) (vrd8_t, vid8_t)) MTH_DISPATCH_TBL[func_powk][sv_dv8][frp_f];
  return (fptr(x,  iy));
}

vrs16_t
__fs_powi1_16_mn(vrs16_t x, int32_t iy, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, int32_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  fptr = (vrs16_t(*) (vrs16_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_sv16][frp_f];
  return (fptr(x,  iy));
}

vrs16_t
__fs_powi_16_mn(vrs16_t x, vis16_t iy, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vis16_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  iy = iy & mask;
  fptr = (vrs16_t(*) (vrs16_t, vis16_t)) MTH_DISPATCH_TBL[func_powi][sv_sv16][frp_f];
  return (fptr(x,  iy));
}

vrs16_t
__fs_powk1_16_mn(vrs16_t x, int64_t iy, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, int64_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  fptr = (vrs16_t(*) (vrs16_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_sv16][frp_f];
  return (fptr(x,  iy));
}

vrs16_t
__fs_powk_16_mn(vrs16_t x, vid8_t iyu, vid8_t iyl, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vid8_t, vid8_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 16; i++) {
      if (mask[i] == 0) {
        if(i < 8) {
          iyu[i] = 0;
        } else {
          iyl[i-8] = 0;
        }
      }
    }
  }
  fptr = (vrs16_t(*) (vrs16_t, vid8_t, vid8_t)) MTH_DISPATCH_TBL[func_powk][sv_sv16][frp_f];
  return (fptr(x,  iyu, iyl));
}

vrd8_t
__pd_powi1_8_mn(vrd8_t x, int32_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, int32_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  fptr = (vrd8_t(*) (vrd8_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_dv8][frp_p];
  return (fptr(x,  iy));
}

vrd8_t
__pd_powi_8_mn(vrd8_t x, vis16_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vis16_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 8; i++) {
      if (mask[i] == 0) {
        iy[i] = 0;
      }
    }
  }
  fptr = (vrd8_t(*) (vrd8_t, vis16_t)) MTH_DISPATCH_TBL[func_powi][sv_dv8][frp_p];
  return (fptr(x,  iy));
}

vrd8_t
__pd_powk1_8_mn(vrd8_t x, int64_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, int64_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  fptr = (vrd8_t(*) (vrd8_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_dv8][frp_p];
  return (fptr(x,  iy));
}

vrd8_t
__pd_powk_8_mn(vrd8_t x, vid8_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vid8_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  iy = iy & mask;
  fptr = (vrd8_t(*) (vrd8_t, vid8_t)) MTH_DISPATCH_TBL[func_powk][sv_dv8][frp_p];
  return (fptr(x,  iy));
}

vrs16_t
__ps_powi1_16_mn(vrs16_t x, int32_t iy, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, int32_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  fptr = (vrs16_t(*) (vrs16_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_sv16][frp_p];
  return (fptr(x,  iy));
}

vrs16_t
__ps_powi_16_mn(vrs16_t x, vis16_t iy, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vis16_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  iy = iy & mask;
  fptr = (vrs16_t(*) (vrs16_t, vis16_t)) MTH_DISPATCH_TBL[func_powi][sv_sv16][frp_p];
  return (fptr(x,  iy));
}

vrs16_t
__ps_powk1_16_mn(vrs16_t x, int64_t iy, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, int64_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  fptr = (vrs16_t(*) (vrs16_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_sv16][frp_p];
  return (fptr(x,  iy));
}

vrs16_t
__ps_powk_16_mn(vrs16_t x, vid8_t iyu, vid8_t iyl, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vid8_t, vid8_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 16; i++) {
      if (mask[i] == 0) {
        if(i < 8) {
          iyu[i] = 0;
        } else {
          iyl[i-8] = 0;
        }
      }
    }
  }
  fptr = (vrs16_t(*) (vrs16_t, vid8_t, vid8_t)) MTH_DISPATCH_TBL[func_powk][sv_sv16][frp_p];
  return (fptr(x,  iyu, iyl));
}

vrd8_t
__rd_powi1_8_mn(vrd8_t x, int32_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, int32_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  fptr = (vrd8_t(*) (vrd8_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_dv8][frp_r];
  return (fptr(x,  iy));
}

vrd8_t
__rd_powi_8_mn(vrd8_t x, vis16_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vis16_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 8; i++) {
      if (mask[i] == 0) {
        iy[i] = 0;
      }
    }
  }
  fptr = (vrd8_t(*) (vrd8_t, vis16_t)) MTH_DISPATCH_TBL[func_powi][sv_dv8][frp_r];
  return (fptr(x,  iy));
}

vrd8_t
__rd_powk1_8_mn(vrd8_t x, int64_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, int64_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  fptr = (vrd8_t(*) (vrd8_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_dv8][frp_r];
  return (fptr(x,  iy));
}

vrd8_t
__rd_powk_8_mn(vrd8_t x, vid8_t iy, vid8_t mask)
{
  vrd8_t (*fptr) (vrd8_t, vid8_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrd8_t)((vid8_t)x & mask);
  iy = iy & mask;
  fptr = (vrd8_t(*) (vrd8_t, vid8_t)) MTH_DISPATCH_TBL[func_powk][sv_dv8][frp_r];
  return (fptr(x,  iy));
}

vrs16_t
__rs_powi1_16_mn(vrs16_t x, int32_t iy, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, int32_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  fptr = (vrs16_t(*) (vrs16_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_sv16][frp_r];
  return (fptr(x,  iy));
}

vrs16_t
__rs_powi_16_mn(vrs16_t x, vis16_t iy, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vis16_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  iy = iy & mask;
  fptr = (vrs16_t(*) (vrs16_t, vis16_t)) MTH_DISPATCH_TBL[func_powi][sv_sv16][frp_r];
  return (fptr(x,  iy));
}

vrs16_t
__rs_powk1_16_mn(vrs16_t x, int64_t iy, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, int64_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  fptr = (vrs16_t(*) (vrs16_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_sv16][frp_r];
  return (fptr(x,  iy));
}

vrs16_t
__rs_powk_16_mn(vrs16_t x, vid8_t iyu, vid8_t iyl, vis16_t mask)
{
  vrs16_t (*fptr) (vrs16_t, vid8_t, vid8_t);
  if((_mm512_test_epi32_mask((__m512i)mask, _mm512_set1_epi32(-1)) == 0)) return x;
  x = (vrs16_t)((vis16_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 16; i++) {
      if (mask[i] == 0) {
        if(i < 8) {
          iyu[i] = 0;
        } else {
          iyl[i-8] = 0;
        }
      }
    }
  }
  fptr = (vrs16_t(*) (vrs16_t, vid8_t, vid8_t)) MTH_DISPATCH_TBL[func_powk][sv_sv16][frp_r];
  return (fptr(x,  iyu, iyl));
}
