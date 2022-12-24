// self-modifying_code.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

int WriteMe(void* addr, int wb)
{
	HANDLE h = OpenProcess(PROCESS_VM_OPERATION | PROCESS_VM_WRITE, true, GetCurrentProcessId()); 
	return WriteProcessMemory(h, addr, &wb, 1, NULL);
}

int main(int argc, char* argv[])
{
	_asm {
		push 0x74 ; JMP -> JZ 
		push offset Here 
		call WriteMe 
		add esp, 8
		Here:	JMP short here
	}
	cout << "#JMP SHORT $-2 was changed to JZ $-2\n"; 
	return 0;
}
