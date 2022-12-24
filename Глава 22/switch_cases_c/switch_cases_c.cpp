// switch_cases_c.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main()
{
    int a = 0x666;

    switch (a)
    {
    case 0:
        printf("a == 0");
        break;
    case 1:
        printf("a == 1");
        break;
    case 2:
        printf("a == 2");
        break;
    case 0x666:
        printf("a == 666h");
        break;
    default:
        printf("Default");
    }
}

