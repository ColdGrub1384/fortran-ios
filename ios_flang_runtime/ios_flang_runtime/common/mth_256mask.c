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
extern "C" {
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



vrd4_t
__fd_acos_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_acos][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_acos_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_acos][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_acos_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_acos][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_acos_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_acos][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_acos_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_acos][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_acos_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_acos][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_asin_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_asin][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_asin_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_asin][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_asin_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_asin][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_asin_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_asin][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_asin_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_asin][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_asin_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_asin][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_atan_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_atan][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_atan_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_atan][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_atan_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_atan][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_atan_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_atan][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_atan_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_atan][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_atan_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_atan][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_atan2_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  y = (vrd4_t)((((vid4_t)y & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t , vrd4_t )) MTH_DISPATCH_TBL[func_atan2][sv_dv4][frp_f];
  return (fptr(x , y ));
}


vrs8_t
__fs_atan2_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  y = (vrs8_t)((((vis8_t)y & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t , vrs8_t )) MTH_DISPATCH_TBL[func_atan2][sv_sv8][frp_f];
  return (fptr(x , y ));
}


vrd4_t
__pd_atan2_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  y = (vrd4_t)((((vid4_t)y & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t , vrd4_t )) MTH_DISPATCH_TBL[func_atan2][sv_dv4][frp_p];
  return (fptr(x , y ));
}


vrs8_t
__ps_atan2_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  y = (vrs8_t)((((vis8_t)y & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t , vrs8_t )) MTH_DISPATCH_TBL[func_atan2][sv_sv8][frp_p];
  return (fptr(x , y ));
}


vrd4_t
__rd_atan2_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  y = (vrd4_t)((((vid4_t)y & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t , vrd4_t )) MTH_DISPATCH_TBL[func_atan2][sv_dv4][frp_r];
  return (fptr(x , y ));
}


vrs8_t
__rs_atan2_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  y = (vrs8_t)((((vis8_t)y & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t , vrs8_t )) MTH_DISPATCH_TBL[func_atan2][sv_sv8][frp_r];
  return (fptr(x , y ));
}


vrd4_t
__fd_cos_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_cos][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_cos_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_cos][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_cos_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_cos][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_cos_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_cos][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_cos_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_cos][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_cos_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_cos][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_sin_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_sin][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_sin_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_sin][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_sin_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_sin][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_sin_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_sin][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_sin_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_sin][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_sin_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_sin][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_tan_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_tan][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_tan_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_tan][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_tan_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_tan][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_tan_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_tan][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_tan_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_tan][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_tan_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_tan][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_sincos_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_sincos][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_sincos_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_sincos][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_sincos_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_sincos][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_sincos_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_sincos][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_sincos_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_sincos][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_sincos_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_sincos][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_cosh_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_cosh][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_cosh_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_cosh][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_cosh_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_cosh][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_cosh_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_cosh][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_cosh_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_cosh][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_cosh_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_cosh][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_sinh_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_sinh][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_sinh_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_sinh][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_sinh_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_sinh][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_sinh_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_sinh][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_sinh_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_sinh][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_sinh_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_sinh][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_tanh_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_tanh][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_tanh_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_tanh][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_tanh_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_tanh][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_tanh_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_tanh][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_tanh_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_tanh][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_tanh_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_tanh][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_exp_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_exp][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_exp_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_exp][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_exp_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_exp][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_exp_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_exp][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_exp_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_exp][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_exp_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_exp][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_log_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_log][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_log_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_log][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_log_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_log][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_log_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_log][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_log_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_log][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_log_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_log][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_log10_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_log10][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_log10_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_log10][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_log10_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_log10][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_log10_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_log10][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_log10_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_log10][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_log10_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_log10][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_pow_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  y = (vrd4_t)((((vid4_t)y & mask)));
  fptr = (vrd4_t(*) (vrd4_t , vrd4_t )) MTH_DISPATCH_TBL[func_pow][sv_dv4][frp_f];
  return (fptr(x , y ));
}


vrs8_t
__fs_pow_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  y = (vrs8_t)((((vis8_t)y & mask)));
  fptr = (vrs8_t(*) (vrs8_t , vrs8_t )) MTH_DISPATCH_TBL[func_pow][sv_sv8][frp_f];
  return (fptr(x , y ));
}


vrd4_t
__pd_pow_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  y = (vrd4_t)((((vid4_t)y & mask)));
  fptr = (vrd4_t(*) (vrd4_t , vrd4_t )) MTH_DISPATCH_TBL[func_pow][sv_dv4][frp_p];
  return (fptr(x , y ));
}


vrs8_t
__ps_pow_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  y = (vrs8_t)((((vis8_t)y & mask)));
  fptr = (vrs8_t(*) (vrs8_t , vrs8_t )) MTH_DISPATCH_TBL[func_pow][sv_sv8][frp_p];
  return (fptr(x , y ));
}


vrd4_t
__rd_pow_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  y = (vrd4_t)((((vid4_t)y & mask)));
  fptr = (vrd4_t(*) (vrd4_t , vrd4_t )) MTH_DISPATCH_TBL[func_pow][sv_dv4][frp_r];
  return (fptr(x , y ));
}


vrs8_t
__rs_pow_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  y = (vrs8_t)((((vis8_t)y & mask)));
  fptr = (vrs8_t(*) (vrs8_t , vrs8_t )) MTH_DISPATCH_TBL[func_pow][sv_sv8][frp_r];
  return (fptr(x , y ));
}


vrd4_t
__fd_div_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  y = (vrd4_t)((((vid4_t)y & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  return ( _mm256_div_pd((__m256d)x, (__m256d)y) );
}


vrs8_t
__fs_div_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  y = (vrs8_t)((((vis8_t)y & mask)) | ((vis8_t)Csp1_8 & ~mask));
  return ( _mm256_div_ps((__m256)x, (__m256)y) );
}


vrd4_t
__pd_div_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  y = (vrd4_t)((((vid4_t)y & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  return ( _mm256_div_pd((__m256d)x, (__m256d)y) );
}


vrs8_t
__ps_div_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  y = (vrs8_t)((((vis8_t)y & mask)) | ((vis8_t)Csp1_8 & ~mask));
  return ( _mm256_div_ps((__m256)x, (__m256)y) );
}


vrd4_t
__rd_div_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  y = (vrd4_t)((((vid4_t)y & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  return ( _mm256_mul_pd((__m256d)x, _mm256_div_pd(Cdp1_4, ( __m256d)y)) );
}


vrs8_t
__rs_div_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  y = (vrs8_t)((((vis8_t)y & mask)) | ((vis8_t)Csp1_8 & ~mask));
  return ( _mm256_mul_ps((__m256)x, _mm256_div_ps(Csp1_8, ( __m256)y)) );
}


vrd4_t
__fd_sqrt_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  return ( _mm256_sqrt_pd((__m256d)x) );
}


vrs8_t
__fs_sqrt_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  return ( _mm256_sqrt_ps((__m256)x) );
}


vrd4_t
__pd_sqrt_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  return ( _mm256_sqrt_pd((__m256d)x) );
}


vrs8_t
__ps_sqrt_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  return ( _mm256_sqrt_ps((__m256)x) );
}


vrd4_t
__rd_sqrt_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  return ( _mm256_sqrt_pd((__m256d)x) );
}


vrs8_t
__rs_sqrt_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  return ( _mm256_sqrt_ps((__m256)x) );
}


vrd4_t
__fd_mod_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  y = (vrd4_t)((((vid4_t)y & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t , vrd4_t )) MTH_DISPATCH_TBL[func_mod][sv_dv4][frp_f];
  return (fptr(x , y ));
}


vrs8_t
__fs_mod_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  y = (vrs8_t)((((vis8_t)y & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t , vrs8_t )) MTH_DISPATCH_TBL[func_mod][sv_sv8][frp_f];
  return (fptr(x , y ));
}


vrd4_t
__pd_mod_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  y = (vrd4_t)((((vid4_t)y & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t , vrd4_t )) MTH_DISPATCH_TBL[func_mod][sv_dv4][frp_p];
  return (fptr(x , y ));
}


vrs8_t
__ps_mod_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  y = (vrs8_t)((((vis8_t)y & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t , vrs8_t )) MTH_DISPATCH_TBL[func_mod][sv_sv8][frp_p];
  return (fptr(x , y ));
}


vrd4_t
__rd_mod_4_mn(vrd4_t x, vrd4_t y, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  y = (vrd4_t)((((vid4_t)y & mask)) | ((vid4_t)Cdp1_4 & ~mask));
  fptr = (vrd4_t(*) (vrd4_t , vrd4_t )) MTH_DISPATCH_TBL[func_mod][sv_dv4][frp_r];
  return (fptr(x , y ));
}


vrs8_t
__rs_mod_8_mn(vrs8_t x, vrs8_t y, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)) | ((vis8_t)Csp1_8 & ~mask));
  y = (vrs8_t)((((vis8_t)y & mask)) | ((vis8_t)Csp1_8 & ~mask));
  fptr = (vrs8_t(*) (vrs8_t , vrs8_t )) MTH_DISPATCH_TBL[func_mod][sv_sv8][frp_r];
  return (fptr(x , y ));
}


vrd4_t
__fd_aint_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_aint][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_aint_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_aint][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_aint_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_aint][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_aint_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_aint][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_aint_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_aint][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_aint_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_aint][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_ceil_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_ceil][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_ceil_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_ceil][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_ceil_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_ceil][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_ceil_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_ceil][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_ceil_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_ceil][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_ceil_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_ceil][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_floor_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_floor][sv_dv4][frp_f];
  return (fptr(x  ));
}


vrs8_t
__fs_floor_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_floor][sv_sv8][frp_f];
  return (fptr(x  ));
}


vrd4_t
__pd_floor_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_floor][sv_dv4][frp_p];
  return (fptr(x  ));
}


vrs8_t
__ps_floor_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_floor][sv_sv8][frp_p];
  return (fptr(x  ));
}


vrd4_t
__rd_floor_4_mn(vrd4_t x, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((((vid4_t)x & mask)));
  fptr = (vrd4_t(*) (vrd4_t  )) MTH_DISPATCH_TBL[func_floor][sv_dv4][frp_r];
  return (fptr(x  ));
}


vrs8_t
__rs_floor_8_mn(vrs8_t x, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t);
  (void) fptr;
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((((vis8_t)x & mask)));
  fptr = (vrs8_t(*) (vrs8_t  )) MTH_DISPATCH_TBL[func_floor][sv_sv8][frp_r];
  return (fptr(x  ));
}


vrd4_t
__fd_powi1_4_mn(vrd4_t x, int32_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, int32_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  fptr = (vrd4_t(*) (vrd4_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_dv4][frp_f];
  return (fptr(x,  iy));
}

vrd4_t
__fd_powi_4_mn(vrd4_t x, vis8_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vis8_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 4; i++) {
      if (mask[i] == 0) {
        iy[i] = 0;
      }
    }
  }
  fptr = (vrd4_t(*) (vrd4_t, vis8_t)) MTH_DISPATCH_TBL[func_powi][sv_dv4][frp_f];
  return (fptr(x,  iy));
}

vrd4_t
__fd_powk1_4_mn(vrd4_t x, int64_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, int64_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  fptr = (vrd4_t(*) (vrd4_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_dv4][frp_f];
  return (fptr(x,  iy));
}

vrd4_t
__fd_powk_4_mn(vrd4_t x, vid4_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vid4_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  iy = iy & mask;
  fptr = (vrd4_t(*) (vrd4_t, vid4_t)) MTH_DISPATCH_TBL[func_powk][sv_dv4][frp_f];
  return (fptr(x,  iy));
}

vrs8_t
__fs_powi1_8_mn(vrs8_t x, int32_t iy, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, int32_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  fptr = (vrs8_t(*) (vrs8_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_sv8][frp_f];
  return (fptr(x,  iy));
}

vrs8_t
__fs_powi_8_mn(vrs8_t x, vis8_t iy, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vis8_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  iy = iy & mask;
  fptr = (vrs8_t(*) (vrs8_t, vis8_t)) MTH_DISPATCH_TBL[func_powi][sv_sv8][frp_f];
  return (fptr(x,  iy));
}

vrs8_t
__fs_powk1_8_mn(vrs8_t x, int64_t iy, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, int64_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  fptr = (vrs8_t(*) (vrs8_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_sv8][frp_f];
  return (fptr(x,  iy));
}

vrs8_t
__fs_powk_8_mn(vrs8_t x, vid4_t iyu, vid4_t iyl, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vid4_t, vid4_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 8; i++) {
      if (mask[i] == 0) {
        if(i < 4) {
          iyu[i] = 0;
        } else {
          iyl[i-4] = 0;
        }
      }
    }
  }
  fptr = (vrs8_t(*) (vrs8_t, vid4_t, vid4_t)) MTH_DISPATCH_TBL[func_powk][sv_sv8][frp_f];
  return (fptr(x,  iyu, iyl));
}

vrd4_t
__pd_powi1_4_mn(vrd4_t x, int32_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, int32_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  fptr = (vrd4_t(*) (vrd4_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_dv4][frp_p];
  return (fptr(x,  iy));
}

vrd4_t
__pd_powi_4_mn(vrd4_t x, vis8_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vis8_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 4; i++) {
      if (mask[i] == 0) {
        iy[i] = 0;
      }
    }
  }
  fptr = (vrd4_t(*) (vrd4_t, vis8_t)) MTH_DISPATCH_TBL[func_powi][sv_dv4][frp_p];
  return (fptr(x,  iy));
}

vrd4_t
__pd_powk1_4_mn(vrd4_t x, int64_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, int64_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  fptr = (vrd4_t(*) (vrd4_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_dv4][frp_p];
  return (fptr(x,  iy));
}

vrd4_t
__pd_powk_4_mn(vrd4_t x, vid4_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vid4_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  iy = iy & mask;
  fptr = (vrd4_t(*) (vrd4_t, vid4_t)) MTH_DISPATCH_TBL[func_powk][sv_dv4][frp_p];
  return (fptr(x,  iy));
}

vrs8_t
__ps_powi1_8_mn(vrs8_t x, int32_t iy, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, int32_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  fptr = (vrs8_t(*) (vrs8_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_sv8][frp_p];
  return (fptr(x,  iy));
}

vrs8_t
__ps_powi_8_mn(vrs8_t x, vis8_t iy, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vis8_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  iy = iy & mask;
  fptr = (vrs8_t(*) (vrs8_t, vis8_t)) MTH_DISPATCH_TBL[func_powi][sv_sv8][frp_p];
  return (fptr(x,  iy));
}

vrs8_t
__ps_powk1_8_mn(vrs8_t x, int64_t iy, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, int64_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  fptr = (vrs8_t(*) (vrs8_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_sv8][frp_p];
  return (fptr(x,  iy));
}

vrs8_t
__ps_powk_8_mn(vrs8_t x, vid4_t iyu, vid4_t iyl, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vid4_t, vid4_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 8; i++) {
      if (mask[i] == 0) {
        if(i < 4) {
          iyu[i] = 0;
        } else {
          iyl[i-4] = 0;
        }
      }
    }
  }
  fptr = (vrs8_t(*) (vrs8_t, vid4_t, vid4_t)) MTH_DISPATCH_TBL[func_powk][sv_sv8][frp_p];
  return (fptr(x,  iyu, iyl));
}

vrd4_t
__rd_powi1_4_mn(vrd4_t x, int32_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, int32_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  fptr = (vrd4_t(*) (vrd4_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_dv4][frp_r];
  return (fptr(x,  iy));
}

vrd4_t
__rd_powi_4_mn(vrd4_t x, vis8_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vis8_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 4; i++) {
      if (mask[i] == 0) {
        iy[i] = 0;
      }
    }
  }
  fptr = (vrd4_t(*) (vrd4_t, vis8_t)) MTH_DISPATCH_TBL[func_powi][sv_dv4][frp_r];
  return (fptr(x,  iy));
}

vrd4_t
__rd_powk1_4_mn(vrd4_t x, int64_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, int64_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  fptr = (vrd4_t(*) (vrd4_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_dv4][frp_r];
  return (fptr(x,  iy));
}

vrd4_t
__rd_powk_4_mn(vrd4_t x, vid4_t iy, vid4_t mask)
{
  vrd4_t (*fptr) (vrd4_t, vid4_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrd4_t)((vid4_t)x & mask);
  iy = iy & mask;
  fptr = (vrd4_t(*) (vrd4_t, vid4_t)) MTH_DISPATCH_TBL[func_powk][sv_dv4][frp_r];
  return (fptr(x,  iy));
}

vrs8_t
__rs_powi1_8_mn(vrs8_t x, int32_t iy, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, int32_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  fptr = (vrs8_t(*) (vrs8_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_sv8][frp_r];
  return (fptr(x,  iy));
}

vrs8_t
__rs_powi_8_mn(vrs8_t x, vis8_t iy, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vis8_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  iy = iy & mask;
  fptr = (vrs8_t(*) (vrs8_t, vis8_t)) MTH_DISPATCH_TBL[func_powi][sv_sv8][frp_r];
  return (fptr(x,  iy));
}

vrs8_t
__rs_powk1_8_mn(vrs8_t x, int64_t iy, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, int64_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  fptr = (vrs8_t(*) (vrs8_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_sv8][frp_r];
  return (fptr(x,  iy));
}

vrs8_t
__rs_powk_8_mn(vrs8_t x, vid4_t iyu, vid4_t iyl, vis8_t mask)
{
  vrs8_t (*fptr) (vrs8_t, vid4_t, vid4_t);
  if((_mm256_testz_si256((__m256i)mask, _mm256_set1_epi32(-1)) == 1)) return x;
  x = (vrs8_t)((vis8_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 8; i++) {
      if (mask[i] == 0) {
        if(i < 4) {
          iyu[i] = 0;
        } else {
          iyl[i-4] = 0;
        }
      }
    }
  }
  fptr = (vrs8_t(*) (vrs8_t, vid4_t, vid4_t)) MTH_DISPATCH_TBL[func_powk][sv_sv8][frp_r];
  return (fptr(x,  iyu, iyl));
}
