// HardSample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>

class A {

public:
	virtual void f()
	{ 
		printf("A_F\n");
	}
};

class B {

public:
	virtual void f() 
	{ 
		printf("B_F\n"); 
	} 
	virtual void g() 
	{ 
		printf("B_G\n"); 
	}
};

class C : public A, public B {

public:
	void f() 
	{ 
		printf("C_F\n"); 
	}
};

int main()
{
	A *a = new A;
	B *b = new B;
	C *c = new C;

	a->f();
	b->f();
	b->g();
	c->f();

	delete a;
	delete b;
	delete c;
}
