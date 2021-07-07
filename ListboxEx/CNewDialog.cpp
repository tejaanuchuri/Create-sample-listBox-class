// CNewDialog.cpp : implementation file
//

#include "pch.h"
#include "ListboxEx.h"
#include "CNewDialog.h"
#include "afxdialogex.h"
#include "CNewDialog.h"

// CNewDialog dialog

IMPLEMENT_DYNAMIC(CNewDialog, CDialog)

CNewDialog::CNewDialog(CWnd* pParent /*=nullptr*/)
	: CDialog(IDC_NEW_DIALOG, pParent)
{

}

CNewDialog::~CNewDialog()
{
}

void CNewDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTBOX, m_ListBox);
}


BEGIN_MESSAGE_MAP(CNewDialog, CDialog)
	ON_BN_CLICKED(IDC_CREATE_DIALOG, &CNewDialog::OnBnClickedCreateDialog)
END_MESSAGE_MAP()


// CNewDialog message handlers


BOOL CNewDialog::OnInitDialog()
{
	CDialog::OnInitDialog();
	// TODO:  Add extra initialization here
	for (int N = 1; N <= 60; N++)
	{
		CString TestData;
		TestData.Format(L"(%02d) XXXXXXXXXXXXXXXXXXXXXX", N);
		this->m_ListBox.AddString(TestData);
	}

	// TODO:  Add extra initialization here

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void CNewDialog::OnBnClickedCreateDialog()
{
	
}
