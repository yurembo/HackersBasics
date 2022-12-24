
// passCompare3Dlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CpassCompare3Dlg
class CpassCompare3Dlg : public CDialogEx
{
// Создание
public:
	CpassCompare3Dlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PASSCOMPARE3_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit m_password;
	afx_msg void OnBnClickedOk();
};
