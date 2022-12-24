// struct_by_value.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h> 
#include <string.h>

struct XT {
	char s0[0x666]; 
	int x;
};

// функция возвращает значение типа структура XT по значению 
struct XT MyFunc(const char* a, int b)
{
	struct XT xt; 
	strcpy_s(&xt.s0[0], sizeof(xt.s0), a); 
	xt.x = b; 
	
	return xt;
}

int main()
{
	struct XT xt;
	xt = MyFunc("Hello, Sailor!", 0x666); 
	printf("%s %x\n", &xt.s0[0], xt.x);
}
