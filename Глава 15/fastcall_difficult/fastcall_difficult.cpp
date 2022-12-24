// fastcall_difficult.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>
#include <string.h>

int MyFunc(char a, int* b, int c)
{
    return a + b[0] + c;
}

int main()
{
    int a = 2;
    printf("%x\n", MyFunc(strlen("1"), &a, strlen("333")));
}
