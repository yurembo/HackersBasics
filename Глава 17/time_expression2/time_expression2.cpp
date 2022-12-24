// time_expression2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int myfunc(int a, int b)
{
    return a + b;
}

int myfunc_2(int c)
{
    return c + 1;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int d = myfunc(a + b, myfunc_2(c));
}
