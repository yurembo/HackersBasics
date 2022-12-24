#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <string.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char s0[]="Hello, World!";
	char s1[]="Hello, Sailor!";
	if (strcmp(&s0[0],&s1[0]))
		printf("Woozl\n");
	else printf("OK\n");

	return 0;
}
