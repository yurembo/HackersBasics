// local_vars_identified.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <stdlib.h>

int MyFunc(int a, int b)
{
	int c;	// Локальная переменная типа int.
	char x[50];	// Массив (демонстрирует схему размещения массивов в памяти)
	c = a + b;	//	Заносим в c сумму аргументов a и b
	_itoa_s(c, &x[0], sizeof(x), 0x10); // Переводим сумму a и b в строку
	printf("%x == %s == ", c, &x[0]); // Выводим строку на экран

	return c;
}

int main()
{
	int a = 0x666;	// Объявляем локальные переменные a и b для того, чтобы
	int b = 0x777;	// продемонстрировать механизм их инициализации компилятором.
	int c[1];// Такие извращения понадобились для того, чтобы запретить
			 // оптимизирующему компилятору помещать локальную переменную 
			 // в регистр (см. "Идентификация регистровых переменных").
			 
			 // Так как функции printf передается указатель на с, а 
			 // указатель на регистр быть передан не может, компилятор 
			 // вынужден оставить переменную в памяти
	c[0] = MyFunc(a, b);
	printf("%x\n", &c[0]);

	return 0;
}
