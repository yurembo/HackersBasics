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
    double a = 3.1, b = 1.6, c;

    c = a - b;
    std::cout << c << std::endl;
    c = c - 10;
	std::cout << c << std::endl;

	return 0;
}
