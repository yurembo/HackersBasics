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
	int a = 0;

	while (a++ < 10)
		printf("�������� ����� while\n");

	do {
		printf("�������� ����� do\n");
	} while (--a > 0);

	return 0;
}
