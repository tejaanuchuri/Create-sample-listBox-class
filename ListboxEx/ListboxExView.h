
// ListboxExView.h : interface of the CListboxExView class
//

#pragma once


class CListboxExView : public CView
{
protected: // create from serialization only
	CListboxExView() noexcept;
	DECLARE_DYNCREATE(CListboxExView)

// Attributes
public:
	CListboxExDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CListboxExView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCheckClistboxdialog();
};

#ifndef _DEBUG  // debug version in ListboxExView.cpp
inline CListboxExDoc* CListboxExView::GetDocument() const
   { return reinterpret_cast<CListboxExDoc*>(m_pDocument); }
#endif

