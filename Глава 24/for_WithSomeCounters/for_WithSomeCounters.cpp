// for_WithSomeCounters.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main()
{
	for (int a = 1, b = 10; (a < 10 || b > 1); a++, b--) 
		printf("%x %x\n", a, b);
}
