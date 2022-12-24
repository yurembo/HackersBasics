#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

int MyFunc(char a, int* b, int c)
{
    return a + b[0] + c;
}

int _tmain(int argc, _TCHAR* argv[]) 
{
    int a = 2;
	printf("%x\n", MyFunc(strlen("1"), &a, strlen("333")));
	return 0;
}
