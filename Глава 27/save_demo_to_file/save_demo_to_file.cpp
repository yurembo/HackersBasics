// save_demo_to_file.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <memory.h>

void Demo(int (*_printf) (const char*, ...))
{
	_printf("Hello, World!\n");
	return;
}

int write_file(const char* filename, unsigned char* buff, const int func_len)
{
	FILE* f;

	if (fopen_s(&f, filename, "wb") == 0) {
		for (int a = 0; a < func_len; a++) {
			unsigned char c = buff[a] ^ 0x77;
			buff[a] = c;
			fputc(c, f);
		}
		fclose(f);
	}
	else return -1;

	return 0;
}

int read_file(const char* filename, unsigned char* buff, const int func_len)
{
	FILE* f;

	if (fopen_s(&f, "Data.bin", "rb") == 0) {
		int bc = 0;
		while (!feof(f)) {
			unsigned char c = fgetc(f);
			buff[bc] = c ^ 0x77;
			bc++;
		}
		fclose(f);
	}
	else return -1;

	return 0;
}


int main(int argc, char* argv[])
{
	unsigned char buff[1000];
	void (*_Demo) (int (*) (const char*, ...));
	int(*_main) (int, char**);
	int (*_printf) (const char*, ...);
	_Demo = Demo;
	_main = main;
	_printf = printf;
	int func_len = (unsigned int)_main - (unsigned int)_Demo;

	for (int a = 0; a < func_len; a++)
		buff[a] = ((unsigned char*)_Demo)[a];

	const char* fname = "Data.bin";
	//выводим последовательности байтов на экран
	printf("%s\n", buff);
	//зашифровываем последовательность байтов и пишем в файл
	write_file(fname, buff, func_len);
	//выводим измененную последовательности байтов на экран
	printf("%s\n", buff);
	//очищаем массив байт
	memset(buff, 0, 1000);
	//выводим обнуленную последовательности байтов на экран
	printf("%s\n", buff);
	//читаем байты из файла, одновременно расшифровывая их
	read_file(fname, buff, func_len);
	//выводим итоговую последовательности байтов на экран
	printf("%s\n", buff);

	_Demo = (void (*) (int (*) (const char*, ...))) &buff[0];
	_Demo(_printf);

	return 0;
}
