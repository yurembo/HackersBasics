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
    int a = 0x666;

	switch (a)
	{
	case 0:
		printf("a == 0");
		break;
	case 1:
		printf("a == 1");
		break;
	case 2:
		printf("a == 2");
		break;
	case 0x666:
		printf("a == 666h");
		break;
	default:
		printf("Default");
	}

	return 0;
}
