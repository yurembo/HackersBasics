// data_size.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "size of 'char': " << sizeof(char) << "\n";
    std::cout << "size of 'wchar': " << sizeof(wchar_t) << "\n";

    char line1[] = "Hello, Sailor!";
    wchar_t line2[] = L"Hello, Sailor!";

    std::cout << "size of 'array of chars': " << sizeof(line1) << "\n";
    std::cout << "size of 'array of wchars': " << sizeof(line2) << "\n";

    std::string str = "Hello, Sailor! Hello, Sailor! Hello, Sailor!";
    std::cout << str << "\n";
    std::cout << "size of str: " << sizeof(str) << "\n";
}

