// struct_return_vc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct mystruct {
    double d_var1;
    double d_var2;
    double d_var3;
};

mystruct MyFunc1(double a, double b, double c)
{
    mystruct my;
    my.d_var1 = a;
    my.d_var2 = b;
    my.d_var3 = c;

    return my;
}
    
void MyFunc2(struct mystruct* my, double a, double b, double c)
{
	my->d_var1 = a;
	my->d_var2 = b;
    my->d_var3 = c;
}

int main()
{
    mystruct my;
    my = MyFunc1(1.001, 2.002, 3.003);
    std::cout << my.d_var1 << " " << my.d_var2 << " " << my.d_var3 << std::endl;

    MyFunc2(&my, 3.004, 5.005, 6.006);
    std::cout << my.d_var1 << " " << my.d_var2 << " " << my.d_var3 << std::endl;
}
