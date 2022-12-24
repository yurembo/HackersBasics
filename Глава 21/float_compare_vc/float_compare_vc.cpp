// float_compare_vc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main()
{
    float a = 0.1f;
    float b = 0.1f;

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