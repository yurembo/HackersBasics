// branching.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main()
{
    int a = 1; 
    char* p;
    static char s0[] = "Sailor"; 
    static char s1[] = "World"; 
    if (a > 0) p = s0; else p = s1;
    printf("Hello, %s\n", p);

}