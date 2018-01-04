//Copyright 2018 Samuel Alonso, All Rights Reserved

//AuroraAEM: Aurora can use ARM __n128 and derived types
//Aurorax86: Aurora is using x86, 0 is for AMD, 1 is for Intel
//AuroraArm: Aurora is using Arm, 0 is for 32 bits, 1 is for 64 bits
//AuroraNeon: Aurora is using Arm NEON extension
//AuroraSSE: Aurora is using x86 SSE extension
//AuroraSSE2: Aurora is using x86 SSE2 extension
//AuroraSSE3: Aurora is using x86 SSE3 extension
//AuroraSSE3_1: Aurora is using x86 SSSE3 extension
//AuroraSSE4: Aurora is using x86 SSE4 extension
//AuroraSSE4_1: Aurora is using x86 SSE4.1 extension
//AuroraSSE4_2: Aurora is using x86 SSE4.2 extension
//AuroraSSE4_3: Aurora is using x86 SSE4a AMD-only extension
//AuroraF16C: Aurora is using x86 F16C extension
//AuroraXOP: Aurora is using x86 XOP extension
//AuroraFMA: Aurora is using x86 FMA extension
//AuroraFMA2: Aurora is using x86 FMA 3 extension
//AuroraFMA3: Aurora is using x86 FMA 4 extension
//AuroraAVX: Aurora is using x86 AVX extension
//AuroraAVX2: Aurora is using x86 AVX2 extension
//AuroraAVX3: Aurora is using x86 AVX512 extension
//AuroraAVX3_1: Aurora is using x86 AVX512 CD extension
//AuroraAVX3_2: Aurora is using x86 AVX512 ER extension
//AuroraAVX3_3: Aurora is using x86 AVX512 PF extension
//AuroraAVX3_4: Aurora is using x86 AVX512 BW extension
//AuroraAVX3_5: Aurora is using x86 AVX512 DQ extension
//AuroraAVX3_6: Aurora is using x86 AVX512 VL extension
//AuroraAVX3_7: Aurora is using x86 AVX512 IFMA extension
//AuroraAVX3_8: Aurora is using x86 AVX512 VBMI extension
//AuroraAVX3_9: Aurora is using x86 AVX512 VNNIW extension
//AuroraAVX3_10: Aurora is using x86 AVX512 FMAPS extension

#pragma once

#include <omp.h>
#include <intrin.h>



#if defined( _M_ARM) || defined(_M_ARM64)
#ifdef AuroraAEM
typedef __n128 V128;
typedef __n128x2 V256;
typedef __n128x3 V384;
typedef __n128x4 V512;
#else
typedef __n64x2 V128;
typedef __n64x3 V192;
typedef __n64x4 V256;
#endif
#elif defined(_M_X86) || defined(_M_X64)
typedef __m128 V128;
typedef __m256 V256;
typedef __m512 V512;
#endif