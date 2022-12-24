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
	unsigned int a = 512;
	std::cout << a / 256 << " " << a / 64 << std::endl;
	int b = 256;
	std::cout << b / 32 << " " << b / 10 << std::endl;
	double d = 0x1024;
	std::cout << d / 512 << " " << d / 0x128 << std::endl;
	float f = 102.f;
	std::cout << f / 51.f << " " << f / 25.5f << std::endl;

	return 0;
}
