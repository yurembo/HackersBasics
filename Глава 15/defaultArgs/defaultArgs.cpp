// defaultArgs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void MyFunc(int a = 1, int b = 2, int c = 3)
{
    std::cout << a << ", " << b << ", " << c << std::endl;
}

int main()
{
    MyFunc();
}
