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


int MyFunc(int a, int b)
{
	int c;
	char x[50];
	c = a + b;
	itoa(c, &x[0], 0x10);
	printf("%x == %s == ", c, &x[0]);

	return c;
}

int _tmain(int argc, _TCHAR* argv[]) 
{
	int a = 0x666;
	int b = 0x777;
	int c[1];

	c[0] = MyFunc(a, b);
	printf("%x\n", &c[0]);

	system("pause");

	return 0;
}
