#pragma once


// CNewDialog dialog

class CNewDialog : public CDialog
{
	DECLARE_DYNAMIC(CNewDialog)

public:
	CNewDialog(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CNewDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDC_NEW_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CListBox m_ListBox;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCreateDialog();
};
