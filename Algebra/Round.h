//Copyright 2018 Samuel Alonso, All Rigths Reserved
#pragma once

#include <Aurora\Types.h>

namespace Aurora
{
	namespace Algebra
	{
		template <class T>
		T Round(const F32 a)
		{
			if (a < 0)
				return Cast<F32, T>(a - 0.5);
			return Cast<F32, T>(a + 0.5);
		}

		template <class T>
		T Round(const F64 a)
		{
			if (a < 0)
				return Cast<F64, T>(a - 0.5);
			return Cast<F64, T>(a + 0.5);
		}
	}
}