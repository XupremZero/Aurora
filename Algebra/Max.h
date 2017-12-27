//Copyright 2018 Samuel Alonso, All Rigths Reserved
#pragma once

#include <Aurora\Types.h>

namespace Aurora
{
	namespace Algebra
	{
		template<class T>
		T Max(const T a, const T b)
		{
			if (a > b)
				return a;
			return b;
		}

		template<>
		F32 Max<F32>(const F32 a, const F32 b)
		{
			if ((a - b) > Epsilon)
				return a;
			return b;
		}

		template<>
		F64 Max<F64>(const F64 a, const F64 b)
		{
			if ((a - b) > Epsilon)
				return a;
			return b;
		}
	}
}
