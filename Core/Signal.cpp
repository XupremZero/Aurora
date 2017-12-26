//Copyright 2018 Samuel Alonso, All Rigths Reserved
#include <Aurora\Core\Signal.h>

Bit Aurora::Core::Signal::Check()
{
	IsCompleted = true;
	return IsCompleted;
}
