// MyClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

class MyClass
{
public:
    int x;
    void demo(void);

private:
    int y;
    void demo_private(void);
};

void MyClass::demo_private(void)
{
    printf("Private\n");
}

void MyClass::demo(void)
{
    printf("MyClass\n");
    this->demo_private();
    this->y = 0x666;
}

int main()
{
    MyClass* zzz = new MyClass;
    zzz->demo();
    zzz->x = 0x777;
    delete zzz;
}