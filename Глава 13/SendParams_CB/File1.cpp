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

struct XT {
    char s0[20];
    int x;
};

void MyFunc(double a, struct XT xt)
{
    printf("%f,%x,%s\n", a, xt.x, &xt.s0[0]);
}

int _tmain(int argc, _TCHAR* argv[])
{
    XT xt;
    strcpy_s(&xt.s0[0], 13, "Hello,World!");
    xt.x = 0x777;
	MyFunc(6.66, xt);

	return 0;
}
