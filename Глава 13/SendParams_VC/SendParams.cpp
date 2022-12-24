// SendParams.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <string.h>

struct XT {
    char s0[20];
    int x;
};

void MyFunc(double a, struct XT xt)
{
    printf("%f,%x,%s\n", a, xt.x, &xt.s0[0]);
}

int main()
{
    XT xt;
    strcpy_s(&xt.s0[0], 13, "Hello,World!");
    xt.x = 0x777;
    MyFunc(6.66, xt);
}

