#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

void MyFunc(char* a, int i)
{
	a[i] = '\n';
	a[i + 1] = 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	static char buff[] = "Hello,Sailor!";
	MyFunc(&buff[0], 5);

	return 0;
}
