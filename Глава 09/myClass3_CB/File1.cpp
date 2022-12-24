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
	printf("Main\n");
	static MyClass zzz;
	zzz.demo();
}
