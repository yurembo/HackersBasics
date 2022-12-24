#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>

class MyClass1 {
public:
	void print()
	{
		std::cout << "I'm allocated by new" << std::endl;
	}
};

class MyClass2 {
public:
	void print()
	{
		std::cout << "I'm allocated by malloc" << std::endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	auto c1 = new MyClass1();
	c1->print();
	delete c1;

	MyClass2 *c2 = (MyClass2*)malloc(sizeof(MyClass2));
	if (c2 == NULL)
		std::cout << "error";
	c2->print();
	free(c2);

	std::cin.get();

	return 0;
}