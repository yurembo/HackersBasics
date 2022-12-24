// stringTypes_vc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <string.h>

int main()
{
	char s0[] = "Hello, World!";
	char s1[] = "Hello, Sailor!";
	if (strcmp(&s0[0], &s1[0]))
		printf("Woozl\n");
	else printf("OK\n");

	return 0;

}
