//Copyright 2018 Samuel Alonso, All Rigths Reserved
#pragma once

#include <Aurora\Types.h>

namespace Aurora
{
	namespace Core
	{
		class Signal
		{
		private:
			Bit IsCompleted = false;
		public:
			//Check if a thread or function was completed
			Bit Check();
		};
	}
}
