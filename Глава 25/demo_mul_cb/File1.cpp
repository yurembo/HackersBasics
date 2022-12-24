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
	int a = 2;
	std::cout << a * 16 << " " << a * 4 + 5 << " " << a * 13 << std::endl;
	double d = 1.5;
	std::cout << d * 3 << " " << d * 5 + a << " " << std::endl;
	float f = 2.2f;
	std::cout << f * 3 << std::endl;

	return 0;
}

