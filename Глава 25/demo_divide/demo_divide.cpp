// demo_divide.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	unsigned int a = 512;
	std::cout << a / 256 << " " << a / 64 << std::endl;
	int b = 256;
	std::cout << b / 32 << " " << b / 10 << std::endl;
	double d = 0x1024;
	std::cout << d / 512 << " " << d / 0x128 << std::endl;
	float f = 102.f;
	std::cout << f / 51.f << " " << f / 25.5f << std::endl;
}
