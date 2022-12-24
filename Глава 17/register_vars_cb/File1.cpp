#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
	int a = 0x666;
	int b = 0x777;
	int c;
	c = a + b;
	printf("%x + %x = %x\n", a, b, c);
	c = b - a;
	printf("%x - %x = %x\n", b, a, c);

    system("pause");

	return 0;
}
