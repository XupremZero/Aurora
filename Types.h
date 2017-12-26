#pragma once

#include <omp.h>
#include <cstdalign>
#include <cstdarg>
#include <cstdint>

#define Epsilon 0.0000001
#define UseThreads omp_set_num_threads
#define MaxThreads omp_get_max_num_threads
typedef void Void;
typedef _Bool Bit;
typedef std::uint_fast8_t UByte;
typedef std::int_fast8_t Byte;
typedef std::uint_fast16_t UShort;
typedef std::int_fast16_t Short;
typedef std::uint_fast32_t UInt;
typedef std::int_fast32_t Int;
typedef std::uint_fast64_t UBig;
typedef std::int_fast64_t Big;
typedef float Float;
typedef double Double;
typedef long double Quad;

template<class T, class C>
C Cast(const T a)
{
	return static_cast<C>(a);
}
