#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <string>

// Функция MyFunc с различными типами аргументов для демонстрации механизма
// их передачи
int MyFunc(char a, int b, long int c, int d)
{
	return a + b + c + d;
}

int _tmain(int argc, _TCHAR* argv[])
{
	printf("%x\n", MyFunc(0x1, 0x2, 0x3, 0x4));
	return 0;
}
