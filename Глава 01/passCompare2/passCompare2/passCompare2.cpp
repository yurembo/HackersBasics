// passCompare2.cpp : Defines the entry point for the console application.
//

// Простейшая система аутентификации 
// посимвольное сравнение пароля 
#include <stdio.h>
#include <string.h>

// с этого момента все инициализированные переменные
// будут размещаться в секции .kpnc
#pragma data_seg(".kpnc") 
	#define PASSWORD_SIZE 100
	#define PASSWORD "myGOODpassword\n"
	char passwd[] = PASSWORD;
#pragma data_seg()

// Теперь все инициализированные переменные вновь будут
// размещаться в секции по умолчанию, т.е. .data 
//(или .rdata)
char buff[PASSWORD_SIZE]="";

int main()
{
	// Счетчик неудачных попыток аутентификации 
	int count = 0;
	// Главный цикл аутентификации 
	for (;;)
	{	
		// Запрашиваем и считываем пользовательский 
		// пароль
		printf("Enter password:"); fgets(&buff[0], PASSWORD_SIZE, stdin);
		// Сравниваем оригинальный и введенный пароль 
		if (strcmp(&buff[0],&passwd[0]))
			// Если пароли не совпадают – "ругаемся"
			printf("Wrong password\n");
		// Иначе (если пароли идентичны)
		// выходим из цикла аутентификации 
		else break;
		// Увеличиваем счетчик неудачных попыток 
		// аутентификации и, если все попытки 
		// исчерпаны, завершаем программу 
		if (++count>3) return -1;
	}
	// Раз мы здесь, то пользователь ввел правильный пароль 
	printf("Password OK\n");
}