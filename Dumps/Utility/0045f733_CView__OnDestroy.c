// Address: 0x0045f733
// Name: CView::OnDestroy
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CView::OnDestroy(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CView::OnDestroy(CView *this)

{
  CFrameWnd *this_00;
  CView *pCVar1;
  
  this_00 = CWnd::GetParentFrame((CWnd *)this);
  if (this_00 != (CFrameWnd *)0x0) {
    pCVar1 = (CView *)FUN_0046081c((int)this_00);
    if (pCVar1 == this) {
      CFrameWnd::SetActiveView(this_00,(CView *)0x0,1);
    }
  }
  CWnd::OnDestroy((CWnd *)this);
  return;
}

