// Address: 0x0045f9da
// Name: CView::GetParentSplitter
// Category: Utility


/* Library Function - Single Match
    public: static class CSplitterWnd * __stdcall CView::GetParentSplitter(class CWnd const *,int)
   
   Library: Visual Studio 2005 Release */

CSplitterWnd * CView::GetParentSplitter(CWnd *param_1,int param_2)

{
  HWND pHVar1;
  CWnd *this;
  int iVar2;
  BOOL BVar3;
  
  if (param_1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
  this = CWnd::FromHandle(pHVar1);
  iVar2 = CObject::IsKindOf((CObject *)this,(CRuntimeClass *)&PTR_s_CSplitterWnd_004a27b0);
  if (iVar2 != 0) {
    if (param_2 != 0) {
      return (CSplitterWnd *)this;
    }
    do {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
      param_1 = CWnd::FromHandle(pHVar1);
      if (param_1 == (CWnd *)0x0) {
        return (CSplitterWnd *)this;
      }
      BVar3 = IsIconic(*(HWND *)(param_1 + 0x20));
    } while (BVar3 == 0);
  }
  return (CSplitterWnd *)0x0;
}

