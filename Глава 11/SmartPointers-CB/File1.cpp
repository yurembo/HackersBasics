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
#include <memory>

class MyClass {
public:
	void __fastcall print()
	{
		std::cout << "Hello C++ Builder" << std::endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	auto c = std::unique_ptr<MyClass>();
	c->print();
	std::cin.get();

	return 0;
}

