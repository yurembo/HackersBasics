// return_float_values_vc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

float MyFunc(float a, float b)
{
	return a + b;
}

int main()
{
	printf("%f\n", MyFunc(6.66f, 7.77f));
}
