
// passCompare3Dlg.cpp: файл реализации
//

#include "pch.h"
#include "framework.h"
#include "passCompare3.h"
#include "passCompare3Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Диалоговое окно CpassCompare3Dlg



CpassCompare3Dlg::CpassCompare3Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PASSCOMPARE3_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CpassCompare3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_password);
}

BEGIN_MESSAGE_MAP(CpassCompare3Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CpassCompare3Dlg::OnBnClickedOk)
END_MESSAGE_MAP()


// Обработчики сообщений CpassCompare3Dlg

BOOL CpassCompare3Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CpassCompare3Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CpassCompare3Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

const CString PASSWORD = _T("myGOODpassword");

void CpassCompare3Dlg::OnBnClickedOk()
{
	CString str = NULL;

	m_password.GetWindowText(str);
	if (PASSWORD.Compare(str))
	{
		MessageBox(_T("Wrong password"));
		m_password.SetSel(0, -1, 0);
		return;
	}
	else
	{
		MessageBox(_T("Password OK"));
	}
	CDialogEx::OnOK();
}
