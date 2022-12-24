// cycle_break_vc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h> 

int main()
{
	int a = 0; 
	
	while (1)
	{
		printf("1-й оператор\n");
		if (++a > 2) break; 
		printf("2-й оператор\n");
	}

	do
	{
		printf("1-й оператор\n");
		if (--a < 0) break; 
		printf("2-й оператор\n");
	} 
	while (1);
}
