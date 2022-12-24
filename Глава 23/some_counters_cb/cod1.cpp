#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	for (int a = 0, b = 10; a < 10, b > 5; a++, b--)
		std::cout << a << " | " << b << std::endl;

	return 0;
}
