// fastcall_4_args.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <string>

// Функция MyFunc с различными типами аргументов для демонстрации механизма 
// их передачи
int MyFunc(char a, int b, long int c, int d)
{
	return a + b + c + d;
}

int main()
{
	printf("%x\n", MyFunc(0x1, 0x2, 0x3, 0x4)); 
	return 0;
}

