//Copyright 2018 Samuel Alonso, All Rigths Reserved
#pragma once

#include <Aurora\Types.h>

namespace Aurora
{
	namespace Algebra
	{
		template <class T>
		T Floor(const F32 a)
		{
			if(a < 0)
				return Cast<F32, T>(a + 1);
			return Cast<F32, T>(a);
		}

		template <class T>
		T Floor(const F64 a)
		{
			if(a < 0)
				return Cast<F64, T>(a + 1);
			return Cast<F64, T>(a);
		}
	}
}