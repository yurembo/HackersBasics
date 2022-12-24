// return_heap_val.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

char* MyFunc(int a)
{
	char* x;
	x = (char*)malloc(100);
	_itoa_s(a, x, sizeof(x), 16); 
	
	return x;
}

int main()
{
	char* x;
	x = MyFunc(0x666);

	printf("0x%s\n", x);

	free(x);
}
