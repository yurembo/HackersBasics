#include <windows.h>
main()
{
void (*demo) (int a);
HMODULE h;
if ((h=LoadLibrary("fixupdemo.dll")) &&
	(h=LoadLibrary("fixupdemo2.dll")) &&
	(demo=(void (*)(int a))GetProcAddress(h,"meme")))
demo(0x777);
}
