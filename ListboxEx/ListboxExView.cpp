
// ListboxExView.cpp : implementation of the CListboxExView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ListboxEx.h"
#endif

#include "ListboxExDoc.h"
#include "ListboxExView.h"

#include "CNewDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CListboxExView

IMPLEMENT_DYNCREATE(CListboxExView, CView)

BEGIN_MESSAGE_MAP(CListboxExView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_CHECK_CLISTBOXDIALOG, &CListboxExView::OnCheckClistboxdialog)
END_MESSAGE_MAP()

// CListboxExView construction/destruction

CListboxExView::CListboxExView() noexcept
{
	// TODO: add construction code here

}

CListboxExView::~CListboxExView()
{
}

BOOL CListboxExView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CListboxExView drawing

void CListboxExView::OnDraw(CDC* /*pDC*/)
{
	CListboxExDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}

void CListboxExView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CListboxExView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CListboxExView diagnostics

#ifdef _DEBUG
void CListboxExView::AssertValid() const
{
	CView::AssertValid();
}

void CListboxExView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CListboxExDoc* CListboxExView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CListboxExDoc)));
	return (CListboxExDoc*)m_pDocument;
}
#endif //_DEBUG


// CListboxExView message handlers


void CListboxExView::OnCheckClistboxdialog()
{
	CNewDialog dlg;
	dlg.DoModal();
}
