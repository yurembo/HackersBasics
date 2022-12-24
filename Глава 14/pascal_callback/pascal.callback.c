#include <stdio.h> 
#include <windows.h>
#include <winuser.h>

// CALLBACK - процедура для приема сообщений от таймера 
VOID CALLBACK TimerProc(
    HWND hwnd,  	//	handle of window for timer messages
    UINT uMsg,  	//	WM_TIMER message
    UINT idEvent,	//	timer identifier
    DWORD dwTime	//	current system time
) 
{
    MessageBeep((dwTime % 5)*0x10);	
    // Бибикаем всеми пиками на все голоса
    // Выводим время в секундах, прошедшее с момента пуска системы 
    printf("\r:=%d", dwTime / 1000);
}

int main() 
{
    // Да, это консольное приложение, но оно также может иметь цикл выборки сообщений 
    // и устанавливать таймер!
    int a;
    MSG msg;
    // Устанавливаем таймер, передавая ему адрес процедуры TimerProc 
    SetTimer(0, 0, 1000, TimerProc);
    // Цикл выборки сообщений. Когда надоест - жмем Ctrl-Break и прерываем его 
    while (GetMessage(&msg, (HWND) NULL, 0, 0)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
    }
}
