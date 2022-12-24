// StackGrow.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// направление роста стека
#include <stdio.h> 

int main()
{
    int a, b;

    if (&a < &b)
        printf("%s", "Stack grows up\n");
    else
        printf("%s", "Stack grows down\n");

    printf("First variable adress:  %p\nSecond variable adress: %p\n", &a, &b);

    return 0;
}