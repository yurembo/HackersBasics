#include <iostream>

const int byte = 8;

int main()
{
	std::cout << "int = " << sizeof(int) * byte << '\n';
	std::cout << "long = " << sizeof(long) * byte << '\n';
	std::cout << "bool = " << sizeof(bool) * byte << '\n';
	std::cout << "float = " << sizeof(float) * byte << '\n';
	std::cout << "double = " << sizeof(double) * byte << '\n';

	return 0;
}