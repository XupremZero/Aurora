//Copyright 2018 Samuel Alonso, All Rigths Reserved
#pragma once

#include <Aurora\Types.h>

namespace Aurora
{
	namespace Algebra
	{
		template<class T>
		Void Absolute(T& a)
		{
			if (a < 0)
				a = -a;
		}
	}
}