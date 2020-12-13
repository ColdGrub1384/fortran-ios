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


#include "mth_intrinsics.h"
#include "mth_tbldefs.h"

#ifdef __cplusplus
extern "C" {
#endif


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



#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_acos_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_acos][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_acos_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_acos][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_acos_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_acos][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_acos_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_acos][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_acos_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_acos][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_acos_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_acos][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_asin_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_asin][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_asin_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_asin][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_asin_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_asin][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_asin_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_asin][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_asin_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_asin][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_asin_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_asin][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_atan_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_atan][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_atan_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_atan][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_atan_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_atan][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_atan_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_atan][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_atan_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_atan][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_atan_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_atan][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_atan2_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  y = (vrd2_t)((((vid2_t)y & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t , vrd2_t )) MTH_DISPATCH_TBL[func_atan2][sv_dv2][frp_f];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_atan2_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  y = (vrs4_t)((((vis4_t)y & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t , vrs4_t )) MTH_DISPATCH_TBL[func_atan2][sv_sv4][frp_f];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_atan2_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  y = (vrd2_t)((((vid2_t)y & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t , vrd2_t )) MTH_DISPATCH_TBL[func_atan2][sv_dv2][frp_p];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_atan2_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  y = (vrs4_t)((((vis4_t)y & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t , vrs4_t )) MTH_DISPATCH_TBL[func_atan2][sv_sv4][frp_p];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_atan2_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  y = (vrd2_t)((((vid2_t)y & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t , vrd2_t )) MTH_DISPATCH_TBL[func_atan2][sv_dv2][frp_r];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_atan2_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  y = (vrs4_t)((((vis4_t)y & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t , vrs4_t )) MTH_DISPATCH_TBL[func_atan2][sv_sv4][frp_r];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_cos_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_cos][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_cos_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_cos][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_cos_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_cos][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_cos_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_cos][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_cos_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_cos][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_cos_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_cos][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_sin_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_sin][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_sin_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_sin][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_sin_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_sin][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_sin_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_sin][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_sin_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_sin][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_sin_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_sin][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_tan_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_tan][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_tan_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_tan][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_tan_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_tan][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_tan_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_tan][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_tan_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_tan][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_tan_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_tan][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_sincos_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_sincos][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_sincos_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_sincos][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_sincos_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_sincos][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_sincos_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_sincos][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_sincos_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_sincos][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_sincos_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_sincos][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_cosh_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_cosh][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_cosh_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_cosh][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_cosh_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_cosh][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_cosh_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_cosh][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_cosh_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_cosh][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_cosh_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_cosh][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_sinh_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_sinh][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_sinh_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_sinh][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_sinh_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_sinh][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_sinh_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_sinh][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_sinh_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_sinh][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_sinh_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_sinh][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_tanh_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_tanh][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_tanh_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_tanh][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_tanh_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_tanh][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_tanh_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_tanh][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_tanh_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_tanh][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_tanh_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_tanh][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_exp_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_exp][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_exp_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_exp][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_exp_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_exp][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_exp_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_exp][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_exp_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_exp][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_exp_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_exp][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_log_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_log][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_log_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_log][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_log_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_log][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_log_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_log][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_log_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_log][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_log_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_log][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_log10_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_log10][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_log10_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_log10][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_log10_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_log10][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_log10_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_log10][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_log10_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_log10][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_log10_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_log10][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_pow_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  y = (vrd2_t)((((vid2_t)y & mask)));
  fptr = (vrd2_t(*) (vrd2_t , vrd2_t )) MTH_DISPATCH_TBL[func_pow][sv_dv2][frp_f];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_pow_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  y = (vrs4_t)((((vis4_t)y & mask)));
  fptr = (vrs4_t(*) (vrs4_t , vrs4_t )) MTH_DISPATCH_TBL[func_pow][sv_sv4][frp_f];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_pow_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  y = (vrd2_t)((((vid2_t)y & mask)));
  fptr = (vrd2_t(*) (vrd2_t , vrd2_t )) MTH_DISPATCH_TBL[func_pow][sv_dv2][frp_p];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_pow_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  y = (vrs4_t)((((vis4_t)y & mask)));
  fptr = (vrs4_t(*) (vrs4_t , vrs4_t )) MTH_DISPATCH_TBL[func_pow][sv_sv4][frp_p];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_pow_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  y = (vrd2_t)((((vid2_t)y & mask)));
  fptr = (vrd2_t(*) (vrd2_t , vrd2_t )) MTH_DISPATCH_TBL[func_pow][sv_dv2][frp_r];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_pow_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  y = (vrs4_t)((((vis4_t)y & mask)));
  fptr = (vrs4_t(*) (vrs4_t , vrs4_t )) MTH_DISPATCH_TBL[func_pow][sv_sv4][frp_r];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_div_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  y = (vrd2_t)((((vid2_t)y & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  return ( ((x) / (y)) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_div_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  y = (vrs4_t)((((vis4_t)y & mask)) | ((vis4_t)Csp1_4 & ~mask));
  return ( ((x) / (y)) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_div_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  y = (vrd2_t)((((vid2_t)y & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  return ( ((x) / (y)) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_div_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  y = (vrs4_t)((((vis4_t)y & mask)) | ((vis4_t)Csp1_4 & ~mask));
  return ( ((x) / (y)) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_div_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  y = (vrd2_t)((((vid2_t)y & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  return ( ((x) / (y)) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_div_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  y = (vrs4_t)((((vis4_t)y & mask)) | ((vis4_t)Csp1_4 & ~mask));
  return ( ((x) / (y)) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_sqrt_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  return ( (assert(!"vsqrt"), x) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_sqrt_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  return ( (assert(!"vsqrt"), x) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_sqrt_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  return ( (assert(!"vsqrt"), x) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_sqrt_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  return ( (assert(!"vsqrt"), x) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_sqrt_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  return ( (assert(!"vsqrt"), x) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_sqrt_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  return ( (assert(!"vsqrt"), x) );
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_mod_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  y = (vrd2_t)((((vid2_t)y & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t , vrd2_t )) MTH_DISPATCH_TBL[func_mod][sv_dv2][frp_f];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_mod_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  y = (vrs4_t)((((vis4_t)y & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t , vrs4_t )) MTH_DISPATCH_TBL[func_mod][sv_sv4][frp_f];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_mod_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  y = (vrd2_t)((((vid2_t)y & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t , vrd2_t )) MTH_DISPATCH_TBL[func_mod][sv_dv2][frp_p];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_mod_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  y = (vrs4_t)((((vis4_t)y & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t , vrs4_t )) MTH_DISPATCH_TBL[func_mod][sv_sv4][frp_p];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_mod_2_mn(vrd2_t x, vrd2_t y, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  y = (vrd2_t)((((vid2_t)y & mask)) | ((vid2_t)Cdp1_2 & ~mask));
  fptr = (vrd2_t(*) (vrd2_t , vrd2_t )) MTH_DISPATCH_TBL[func_mod][sv_dv2][frp_r];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_mod_4_mn(vrs4_t x, vrs4_t y, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)) | ((vis4_t)Csp1_4 & ~mask));
  y = (vrs4_t)((((vis4_t)y & mask)) | ((vis4_t)Csp1_4 & ~mask));
  fptr = (vrs4_t(*) (vrs4_t , vrs4_t )) MTH_DISPATCH_TBL[func_mod][sv_sv4][frp_r];
  return (fptr(x , y ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_aint_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_aint][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_aint_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_aint][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_aint_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_aint][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_aint_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_aint][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_aint_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_aint][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_aint_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_aint][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_ceil_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_ceil][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_ceil_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_ceil][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_ceil_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_ceil][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_ceil_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_ceil][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_ceil_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_ceil][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_ceil_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_ceil][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_floor_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_floor][sv_dv2][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_floor_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_floor][sv_sv4][frp_f];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_floor_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_floor][sv_dv2][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_floor_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_floor][sv_sv4][frp_p];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_floor_2_mn(vrd2_t x, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((((vid2_t)x & mask)));
  fptr = (vrd2_t(*) (vrd2_t  )) MTH_DISPATCH_TBL[func_floor][sv_dv2][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_floor_4_mn(vrs4_t x, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t);
  (void) fptr;
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((((vis4_t)x & mask)));
  fptr = (vrs4_t(*) (vrs4_t  )) MTH_DISPATCH_TBL[func_floor][sv_sv4][frp_r];
  return (fptr(x  ));
}


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_powi1_2_mn(vrd2_t x, int32_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, int32_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  fptr = (vrd2_t(*) (vrd2_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_dv2][frp_f];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_powi_2_mn(vrd2_t x, vis4_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vis4_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 2; i++) {
      if (mask[i] == 0) {
        iy[i] = 0;
      }
    }
  }
  fptr = (vrd2_t(*) (vrd2_t, vis4_t)) MTH_DISPATCH_TBL[func_powi][sv_dv2][frp_f];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_powk1_2_mn(vrd2_t x, int64_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, int64_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  fptr = (vrd2_t(*) (vrd2_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_dv2][frp_f];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__fd_powk_2_mn(vrd2_t x, vid2_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vid2_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  iy = iy & mask;
  fptr = (vrd2_t(*) (vrd2_t, vid2_t)) MTH_DISPATCH_TBL[func_powk][sv_dv2][frp_f];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_powi1_4_mn(vrs4_t x, int32_t iy, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, int32_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  fptr = (vrs4_t(*) (vrs4_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_sv4][frp_f];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_powi_4_mn(vrs4_t x, vis4_t iy, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vis4_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  iy = iy & mask;
  fptr = (vrs4_t(*) (vrs4_t, vis4_t)) MTH_DISPATCH_TBL[func_powi][sv_sv4][frp_f];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_powk1_4_mn(vrs4_t x, int64_t iy, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, int64_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  fptr = (vrs4_t(*) (vrs4_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_sv4][frp_f];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__fs_powk_4_mn(vrs4_t x, vid2_t iyu, vid2_t iyl, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vid2_t, vid2_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 4; i++) {
      if (mask[i] == 0) {
        if(i < 2) {
          iyu[i] = 0;
        } else {
          iyl[i-2] = 0;
        }
      }
    }
  }
  fptr = (vrs4_t(*) (vrs4_t, vid2_t, vid2_t)) MTH_DISPATCH_TBL[func_powk][sv_sv4][frp_f];
  return (fptr(x,  iyu, iyl));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_powi1_2_mn(vrd2_t x, int32_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, int32_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  fptr = (vrd2_t(*) (vrd2_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_dv2][frp_p];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_powi_2_mn(vrd2_t x, vis4_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vis4_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 2; i++) {
      if (mask[i] == 0) {
        iy[i] = 0;
      }
    }
  }
  fptr = (vrd2_t(*) (vrd2_t, vis4_t)) MTH_DISPATCH_TBL[func_powi][sv_dv2][frp_p];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_powk1_2_mn(vrd2_t x, int64_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, int64_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  fptr = (vrd2_t(*) (vrd2_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_dv2][frp_p];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__pd_powk_2_mn(vrd2_t x, vid2_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vid2_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  iy = iy & mask;
  fptr = (vrd2_t(*) (vrd2_t, vid2_t)) MTH_DISPATCH_TBL[func_powk][sv_dv2][frp_p];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_powi1_4_mn(vrs4_t x, int32_t iy, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, int32_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  fptr = (vrs4_t(*) (vrs4_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_sv4][frp_p];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_powi_4_mn(vrs4_t x, vis4_t iy, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vis4_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  iy = iy & mask;
  fptr = (vrs4_t(*) (vrs4_t, vis4_t)) MTH_DISPATCH_TBL[func_powi][sv_sv4][frp_p];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_powk1_4_mn(vrs4_t x, int64_t iy, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, int64_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  fptr = (vrs4_t(*) (vrs4_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_sv4][frp_p];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__ps_powk_4_mn(vrs4_t x, vid2_t iyu, vid2_t iyl, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vid2_t, vid2_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 4; i++) {
      if (mask[i] == 0) {
        if(i < 2) {
          iyu[i] = 0;
        } else {
          iyl[i-2] = 0;
        }
      }
    }
  }
  fptr = (vrs4_t(*) (vrs4_t, vid2_t, vid2_t)) MTH_DISPATCH_TBL[func_powk][sv_sv4][frp_p];
  return (fptr(x,  iyu, iyl));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_powi1_2_mn(vrd2_t x, int32_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, int32_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  fptr = (vrd2_t(*) (vrd2_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_dv2][frp_r];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_powi_2_mn(vrd2_t x, vis4_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vis4_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 2; i++) {
      if (mask[i] == 0) {
        iy[i] = 0;
      }
    }
  }
  fptr = (vrd2_t(*) (vrd2_t, vis4_t)) MTH_DISPATCH_TBL[func_powi][sv_dv2][frp_r];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_powk1_2_mn(vrd2_t x, int64_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, int64_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  fptr = (vrd2_t(*) (vrd2_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_dv2][frp_r];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrd2_t
__rd_powk_2_mn(vrd2_t x, vid2_t iy, vid2_t mask)
{
  vrd2_t (*fptr) (vrd2_t, vid2_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrd2_t)((vid2_t)x & mask);
  iy = iy & mask;
  fptr = (vrd2_t(*) (vrd2_t, vid2_t)) MTH_DISPATCH_TBL[func_powk][sv_dv2][frp_r];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_powi1_4_mn(vrs4_t x, int32_t iy, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, int32_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  fptr = (vrs4_t(*) (vrs4_t, int32_t)) MTH_DISPATCH_TBL[func_powi1][sv_sv4][frp_r];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_powi_4_mn(vrs4_t x, vis4_t iy, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vis4_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  iy = iy & mask;
  fptr = (vrs4_t(*) (vrs4_t, vis4_t)) MTH_DISPATCH_TBL[func_powi][sv_sv4][frp_r];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_powk1_4_mn(vrs4_t x, int64_t iy, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, int64_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  fptr = (vrs4_t(*) (vrs4_t, int64_t)) MTH_DISPATCH_TBL[func_powk1][sv_sv4][frp_r];
  return (fptr(x,  iy));
}

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

vrs4_t
__rs_powk_4_mn(vrs4_t x, vid2_t iyu, vid2_t iyl, vis4_t mask)
{
  vrs4_t (*fptr) (vrs4_t, vid2_t, vid2_t);
  if((is_zero(&mask, sizeof mask))) return x;
  x = (vrs4_t)((vis4_t)x & mask);
  {
    int i;
    for (i = 0 ; i < 4; i++) {
      if (mask[i] == 0) {
        if(i < 2) {
          iyu[i] = 0;
        } else {
          iyl[i-2] = 0;
        }
      }
    }
  }
  fptr = (vrs4_t(*) (vrs4_t, vid2_t, vid2_t)) MTH_DISPATCH_TBL[func_powk][sv_sv4][frp_r];
  return (fptr(x,  iyu, iyl));
}

#ifdef __cplusplus
}
#endif
