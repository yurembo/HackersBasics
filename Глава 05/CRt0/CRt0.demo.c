#include <stdio.h>
#include <stdlib.h> 
#include <Windows.h>

void main()
{
	OSVERSIONINFOEX osvi;
	ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
	osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
	GetVersionEx((OSVERSIONINFO*)&osvi);

	int a;
	printf(">OS Version:\t\t\t%d.%d\n\
	>Build:\t\t\t%d\n\
	>Arguments count:\t%d\n", \
		osvi.dwMajorVersion, osvi.dwMinorVersion, osvi.dwOSVersionInfoSize, __argc);
	for (a = 0; a < __argc; a++)
		printf(">\t Argument %02d:\t\t%s\n", a + 1, __argv[a]);
	a = !a - 1;
	while (_environ[++a]);
		printf(">Environment variables count:%d\n", a);
	while (a) 
		printf(">\tVariable %d:\t\t%s\n", a, _environ[--a]);
}