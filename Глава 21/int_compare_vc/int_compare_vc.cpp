// int_compare_vc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;

    if (a < b)
        printf("a < b\n"); 
    if (a > b) 
        printf("a > b\n"); 
    if (a == b)
        printf("a == b\n"); 
    if (a != b)
        printf("a != b\n"); 
    if (a >= b)
        printf("a >= b\n"); 
    if (a <= b)
        printf("a <= b\n");
}