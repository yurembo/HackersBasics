// UsingVT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>

class Base {

public:
	virtual void demo()
	{
		printf("Base\n");
	}
};

class Derived : public Base {

public:
	virtual void demo()
	{
		printf("Derived\n");
	}
};

int main()
{
	Base * obj1 = new Derived; 
	Base * obj2 = new Derived;

	obj1->demo();
	obj2->demo();

	delete obj1;
	delete obj2;
}
