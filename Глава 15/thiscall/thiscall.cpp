// thiscall.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class MyClass
{
public:
	// прототип demo_1 в действительности выглядит так: demo_1(this, int a);
	void demo_1(int a)
	{
		std::cout << "demo_1" << ": " << a << std::endl;
	}
	// прототип demo_2 в действительности выглядит так: demo_2(this, int a, int b); 
	void demo_2(int a, int b)
	{
		std::cout << "demo_2" << ": " << a << ", " << b << std::endl;
	}
	// прототип demo_3 в действительности выглядит так: demo_3(this, int a, int b, int c);
	void demo_3(int a, int b, int c)
	{
		std::cout << "demo_3" << ": " << a << ", " << b << ", " << c << std::endl;
	}
	// прототип demo_4 в действительности выглядит так: demo_4(this, int a, int b, int c, int d);
	void demo_4(int a, int b, int c, int d)
	{
		std::cout << "demo_4" << ": " << a << ", " << b << ", " << c << ", " << d << std::endl;
	}
};

int main()
{
	MyClass* zzz = new MyClass(); 

	zzz->demo_1(0); 
	zzz->demo_2(1,2); 
	zzz->demo_3(3,4,5);
	zzz->demo_4(6,7,8,9);

	delete zzz;

	return 0;
}
