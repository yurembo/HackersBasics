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

	while (1)
	{
		printf("1-� ��������\n");
		if (++a > 2) break;
		printf("2-� ��������\n");
	}

	do
	{
		printf("1-� ��������\n");
		if (--a < 0) break;
		printf("2-� ��������\n");
	}
	while (1);

	return 0;
}
