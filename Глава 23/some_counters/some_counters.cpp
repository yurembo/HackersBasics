// some_counters.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    for (int a = 0, b = 10; (a < 10 || b > 5); a++, b--)
        std::cout << a << " | " << b << std::endl;
}