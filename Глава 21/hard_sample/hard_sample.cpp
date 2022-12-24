// hard_sample.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main()
{
	unsigned int a = 0;
	unsigned int b = 2;

	int c = 1;
	int d = -1;

	if (d) 
		printf("TRUE\n"); 
	else if (((a > b) && (a != 0)) || ((a == c) && (c != 0)))
		printf("OK\n");

	if (c == d) 
		printf("+++\n");
}
