#pragma once

#include <Aurora\Types.h>

namespace Aurora
{
	namespace Core
	{
		class Process
		{
		private:
			//This process ID
			U16 ID;
		public:
			//Init this process and create and set the PID to 'ID'
			Process();

			//Init an external process by name and set it PID to 'ID'
			Process(const S8*);

			//Init an external process by pid and set it PID to 'ID'
			Process(const U16);

			//Abort this process, no cleanup
			Void Abort();

			//Exit this process, cleanup
			Void Exit();
		};
	}
}
