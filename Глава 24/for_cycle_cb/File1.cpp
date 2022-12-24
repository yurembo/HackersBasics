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
    int a;

	for (a = 0; a < 10; a++)
		printf("Оператор цикла for\n");

	return 0;
}
