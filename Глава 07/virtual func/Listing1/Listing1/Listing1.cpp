// Listing1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <stdio.h>

class Base
{
public:

	virtual void demo(void)
	{
		printf("BASE\n");
	};

	virtual void demo_2(void)
	{
		printf("BASE DEMO 2\n");
	};

	void demo_3(void)
	{
		printf("Non virtual BASE DEMO 3\n");
	};
};

class Derived : public Base
{
public:

	virtual void demo(void)
	{
		printf("DERIVED\n");
	};

	virtual void demo_2(void)
	{
		printf("DERIVED DEMO 2\n");
	};

	void demo_3(void)
	{
		printf("Non virtual DERIVED DEMO 3\n");
	};
};

int main()
{
	printf("main\n");
	Base *p = new Base;
	p->demo();
	p->demo_2();
	p->demo_3();

	p = new Derived;
	p->demo();
	p->demo_2();
	p->demo_3();

	delete p;
}