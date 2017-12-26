#pragma once

#include <omp.h>

#define Epsilon 0.0000001
#define UseThreads omp_set_num_threads
#define MaxThreads omp_get_max_num_threads
typedef void Void;
typedef bool Bit;
typedef unsigned char UByte;
typedef signed char Byte;
typedef unsigned short UShort;
typedef signed short Short;
typedef unsigned int UInt;
typedef signed int Int;
typedef unsigned long int UBig;
typedef signed long int Big;
typedef float Float;
typedef double Double;
typedef long double Quad;

template<class T, class C>
C Cast(const T a)
{
	return static_cast<C>(a);
}