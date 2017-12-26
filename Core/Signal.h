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
			Bit Check();
		};
	}
}
