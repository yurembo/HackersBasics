// send_real_value_vs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

float MyFunc(float a, double b)
{
    return a + b;
}

int main()
{
    printf("%f\n", MyFunc(6.66, 7.77));
}

