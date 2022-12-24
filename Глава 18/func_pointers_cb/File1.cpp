#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

int func(int a, int b)
{
	return a+b;
};


int _tmain(int argc, _TCHAR* argv[]) 
{
    int (*zzz) (int a, int b) = func;
	// Вызов функции происходит косвенно - по указателю zzz
	zzz(0x666, 0x777);

	return 0;
}
