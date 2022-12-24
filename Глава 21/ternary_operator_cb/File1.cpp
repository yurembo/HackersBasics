#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a = -2;
	int b = 2;

	a = (a > 0) ? 1 : -1; // Тернарный оператор

	if (b > 0)	// Ветвление
		b = 1;
	else
		b = -1;

	std::cout << "a + b = " << a + b;

	return 0;
}
