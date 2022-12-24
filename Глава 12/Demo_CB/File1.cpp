#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

void demo()
{
	printf("DERIVED\n");
}

int _tmain(int argc, _TCHAR* argv[])
{
	demo();
	return 0;
}

