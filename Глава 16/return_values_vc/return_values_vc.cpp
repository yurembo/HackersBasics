// return_values_vc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

// Демонстрация возвращения переменной типа char оператором return
char char_func(char a, char b)
{
	return a + b;
}

// Демонстрация возвращения переменной типа int оператором return 
int int_func(int a, int b)
{
	return a + b;	
}

// Демонстрация возвращения переменной типа int64 оператором return
__int64 int64_func(__int64 a, __int64 b)
{
	return a + b;
}

// Демонстрация возвращения указателя на int оператором return 
// Демонстрация возвращения значения через аргументы, переданные по ссылке 
int* near_func(int* a, int* b)
{
	int* c = new int;
	c[0] = a[0] + b[0];

	return c;
}

int main()
{
	int a; 
	int b;

	a = 0x666;
	b = 0x777;

	printf("%I64x\n",
		char_func(0x1, 0x2) +
		int_func(0x3, 0x4) +
		int64_func(0x5, 0x6) +
		near_func(&a, &b)[0]);
}

