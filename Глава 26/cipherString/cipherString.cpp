// cipherString.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	// зашифрованная строка Hello, Free World!
	char s0[] = "\x0C\x21\x28\x28\x2B\x68\x64\x02\x36\x21\x21\x64\x13\x2B\x36\x28\x20\x65\x49\x4E";

	_asm
	{
	BeginCode://начало контролируемого кода
		pusha	//сохранение всех регистров общего назначения
		lea	ebx, s0// ebx = &s0[0]
		GetNextChar :// do
		XOR	eax, eax// eax = 0;
		LEA	esi, BeginCode// esi = &BeginCode
		LEA	ecx, EndCode // вычисление длины...
		SUB	ecx, esi// ...контролируемого кода
		HarvestCRC : // do
		LODSB// загрузка очередного байта в al
		ADD	eax, eax// вычисление контрольной суммы
		LOOP HarvestCRC// until (-cx > 0)
		xor [ebx], ah// расшифровка очередного символа строки s0
		inc	ebx// указатель на след. символ
		cmp[ebx], 0// until (пока не конец строки) 
		jnz	GetNextChar// продолжить расшифровку
		popa// восстановить все регистры 
	EndCode :// конец контролируемого кода
		NOP // Safe Breakpoint 
	}

	std::cout << s0;// вывод строки на экран

	return 0;
}
