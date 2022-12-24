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
	float a = 0.7f, b = 1.4f, c;
	c = a + b;
	std::cout << c << std::endl;
	c = c + 0.3f;
	std::cout << c << std::endl;

	return 0;
}
