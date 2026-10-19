// Address: 0x0045e180
// Name: CFormView::OnActivateView
// Category: Utility


/* Library Function - Single Match
    protected: virtual void __thiscall CFormView::OnActivateView(int,class CView *,class CView *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CFormView::OnActivateView(CFormView *this,int param_1,CView *param_2,CView *param_3)

{
  int iVar1;
  
  iVar1 = SaveFocusControl(this);
  if (iVar1 == 0) {
    CView::OnActivateView((CView *)this,param_1,param_2,param_3);
  }
  return;
}

