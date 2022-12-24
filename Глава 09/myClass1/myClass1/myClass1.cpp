// myClass1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>

class MyClass {

public:
	MyClass(void); 
	void demo(void); 
	~MyClass(void);
};

MyClass::MyClass()
{
	printf("Constructor\n");
}

MyClass::~MyClass()
{
	printf("Destructor\n");
}

void MyClass::demo(void)
{
	printf("MyClass\n");
}

int main()
{
	printf("Main_Debug\n");
	MyClass *zzz = new MyClass();
	zzz->demo();
	delete zzz;
}
