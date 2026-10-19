// Address: 0x0045f837
// Name: CView::OnActivateView
// Category: Utility


/* Library Function - Single Match
    protected: virtual void __thiscall CView::OnActivateView(int,class CView *,class CView *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CView::OnActivateView(CView *this,int param_1,CView *param_2,CView *param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = CWnd::IsTopParentActive((CWnd *)this);
    if (iVar1 != 0) {
      CWnd::SetFocus((CWnd *)this);
    }
  }
  return;
}

