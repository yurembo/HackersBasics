// SimpleVars.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <string.h>

int main()
{
	char s0[16];
	int a;
	float f;
	strcpy_s(&s0[0], 14, "Hello,Sailor!");
	a = 0x666;
	f = (float)6.6;
	printf("%s %x %f\n", &s0[0], a, f);
}
