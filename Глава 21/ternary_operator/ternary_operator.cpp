// ternary_operator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int a = -2;	
    int b = 2;	

    a = (a > 0) ? 1 : -1; // Тернарный оператор

    if (b > 0)	// Ветвление
        b = 1;
    else
        b = -1;

    std::cout << "a + b = " << a + b;
}