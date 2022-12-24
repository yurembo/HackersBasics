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
	double num1 = 0.0001;
	double num2 = 0.0002;

	if (num1 < num2)
		std::cout << "num1 меньше, чем num2" << "\n";
	else
		std::cout << "num1 больше либо равно num2" << "\n";

	return 0;
}
