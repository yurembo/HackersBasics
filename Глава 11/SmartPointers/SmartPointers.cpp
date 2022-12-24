// SmartPointers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <memory>

class MyClass {
public:
    void print()
    {
        std::cout << "Hello Visual C++" << std::endl;
    }
};

int main()
{
    auto c = std::make_unique<MyClass>();
    c->print();
    std::cin.get();
}