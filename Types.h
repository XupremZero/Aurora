#pragma once

#include <omp.h>
#include <cstdarg>
#include <cstdint>

#define Epsilon 0.0000001
typedef void Void;
typedef bool Bit;
#define Yes 1
#define True 1
#define No 0
#define False 0
typedef std::uint_fast8_t U8;
typedef std::int_fast8_t S8;
typedef std::uint_fast16_t U16;
typedef std::int_fast16_t S16;
typedef std::uint_fast32_t U32;
typedef std::int_fast32_t S32;
typedef std::uint_fast64_t U64;
typedef std::int_fast64_t S64;
typedef float F32;
typedef double F64;

template<class T, class C>
C Cast(const T a)
{
	return static_cast<C>(a);
}
