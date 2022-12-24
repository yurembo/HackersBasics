// cipher_program.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <string.h>
#include <cstdlib>

int main(int argc, char* argv[])
{
	char buff[1000] = "";
	int (*_printf) (const char*, ...);
	void (*_Demo) (int (*) (const char*, ...));
	// эта последовательность байтов должна быть записана в одну строку
	char code[] = "\x22\xFC\x9B\xF4\x9B\x67\xB1\x32\x87\x3F\xB1\x32\x86\x12\xB1\x32\x85\x1B\xB1\x32\x84\x1B\xB1\x32\x83\x18\xB1\x32\x82\x5B\xB1\x32\x81\x57\xB1\x32\x80\x20\xB1\x32\x8F\x18\xB1\x32\x8E\x05\xB1\x32\x8D\x1B\xB1\x32\x8C\x13\xB1\x32\x8B\x56\xB1\x32\x8A\x7D\xB1\x32\x89\x77\xFA\x32\x87\x27\x88\x22\x7F\xF4\xB3\x73\xFC\x92\x2A\xB4";
	_printf = printf;
	int code_size = _countof(code);
	if (strcpy_s(buff, code_size, code) == 0) {
		for (int a = 0; a < code_size; a++)
			buff[a] = buff[a] ^ 0x77;
		_Demo = (void (*) (int (*) (const char*, ...))) &buff[0];
		_Demo(_printf);
	}
	return 0;
}
