// cycle_continue_vc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h> 

int main()
{
	int a = 0;

	while (a++ < 10) 
	{
		if (a == 2) continue; 
		printf("%x\n", a);
	}

	do
	{
		if (a == 2) continue; 
		printf("%x\n", a);
	} while (--a > 0);
}
