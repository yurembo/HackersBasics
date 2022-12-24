// global_vars.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int a; 
int b; 
int c;

void Sum()
{
	c = a + b;
}

void MyFunc()
{
	a = 0x666;
	b = 0x777;
	Sum();
}

int main()
{
	MyFunc();
	printf("%x\n", c);
}
