//Copyright 2018 Samuel Alonso, All Rigths Reserved
#pragma once

#include <Aurora\Types.h>

namespace Aurora
{
	namespace Algebra
	{
		template<class T>
		Void Swap(T& a, T& b)
		{
			T c = a;
			a = b;
			b = c;
		}
	}
}