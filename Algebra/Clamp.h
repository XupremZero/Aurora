//Copyright 2018 Samuel Alonso, All Rigths Reserved
#pragma once

#include <Aurora\Types.h>

namespace Aurora
{
	namespace Algebra
	{
		template<class T>
		Void Clamp(const T Min, const T Max, T& a)
		{
			if (a < Min)
				a = Min;
			if (a > Max)
				a = Max;
		}
	}
}
