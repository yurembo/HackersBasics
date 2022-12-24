// compare_double.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    double num1 = 0.0001;
    double num2 = 0.0002;

    if (num1 < num2)
        std::cout << "num1 меньше, чем num2" << "\n";
    else
        std::cout << "num1 больше либо равно num2" << "\n";
}
