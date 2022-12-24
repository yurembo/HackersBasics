﻿// PassPointer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <string.h>

struct zzz
{
	char s0[16];
	int a;
	float f;
};

void func(zzz *y)
{
	printf("%s %x %f\n", y->s0, y->a, y->f);
}

int main()
{
	zzz y;
	strcpy_s(&y.s0[0], 14, "Hello,Sailor!"); //для копирования строки
	y.a = 0x666;				//используется безопасная версия функции
	y.f = (float)6.6;			 
	func(&y);					
}
