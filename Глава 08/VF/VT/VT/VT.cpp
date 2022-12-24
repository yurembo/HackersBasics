// VT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>

void demo_1(void)
{
	printf("Demo 1\n");
}

void demo_2(void)
{
	printf("Demo 2\n");
}

void call_demo(void **x)
{
	((void(*)(void)) x[0])();
	((void(*)(void)) x[1])();
}

int main()
{
	static void* x[2] =
	{ 
		(void*)demo_1,
		(void*)demo_2 
	};

	call_demo(&x[0]);
}
