#include <Aurora\Core\Signal.h>

Bit Aurora::Core::Signal::Check()
{
	IsCompleted = true;
	return IsCompleted;
}