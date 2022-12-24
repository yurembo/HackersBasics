
// passCompare3.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CpassCompare3App:
// Сведения о реализации этого класса: passCompare3.cpp
//

class CpassCompare3App : public CWinApp
{
public:
	CpassCompare3App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CpassCompare3App theApp;
