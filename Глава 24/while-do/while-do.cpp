// while-do.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main()
{
	int a = 0;

	while (a++ < 10)
		printf("Оператор цикла while\n");

	do {
		printf("Оператор цикла do\n");
	} while (--a > 0);
}
