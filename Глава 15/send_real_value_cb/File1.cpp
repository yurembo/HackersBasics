#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

float MyFunc(float a, double b)
{
    return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	printf("%f\n", MyFunc(6.66, 7.77));
	return 0;
}
