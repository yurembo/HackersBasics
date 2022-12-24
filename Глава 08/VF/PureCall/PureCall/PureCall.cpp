// PureCall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>

class Base {

public:
	virtual void demo(void) = 0;
};

class Derived :public Base {

public:
	virtual void demo(void) {
		printf("DERIVED\n");
	};
};

int main()
{
	Base *p = new Derived; 
	p->demo();
	delete p;
}
