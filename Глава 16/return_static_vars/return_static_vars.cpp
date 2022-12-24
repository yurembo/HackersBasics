// return_static_vars.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

char* MyFunc(int a)
{
 	static char x[7][16] = { "Monday", "Tuesday", "Wednesday",
 					"Thursday", "Friday", "Saturday", "Sunday" };

	return &x[a - 1][0];
}

int main()
{
	printf("%s\n", MyFunc(6));
}
