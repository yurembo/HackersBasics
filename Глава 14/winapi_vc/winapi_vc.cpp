// winapi_vc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <string.h>
#include <windows.h>

int WINAPI MyFunc(int a, int b, const char* c)
{
	return a + b + strlen(c);
}

int main()
{
	printf("%x\n", MyFunc(0x666, 0x777, "Hello,World!"));
}
