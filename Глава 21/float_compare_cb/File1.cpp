#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    float a = 0.1f;
    float b = 0.1f;

    if (a < b)
        printf("a < b\n");
    if (a > b)
        printf("a > b\n");
    if (a == b)
        printf("a == b\n");
    if (a != b)
        printf("a != b\n");
    if (a >= b)
        printf("a >= b\n");
    if (a <= b)
        printf("a <= b\n");

	return 0;
}
