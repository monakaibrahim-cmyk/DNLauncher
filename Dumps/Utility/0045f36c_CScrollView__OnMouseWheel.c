// Address: 0x0045f36c
// Name: CScrollView::OnMouseWheel
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CScrollView::OnMouseWheel(unsigned int,short,class CPoint)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CScrollView::OnMouseWheel
          (CScrollView *this,uint param_1,undefined4 param_2,undefined4 param_4,undefined4 param_5)

{
  CSplitterWnd *pCVar1;
  int iVar2;
  
  if (((param_1 & 0xc) == 0) &&
     (pCVar1 = CView::GetParentSplitter((CWnd *)this,1), pCVar1 == (CSplitterWnd *)0x0)) {
    iVar2 = DoMouseWheel(this,param_1,param_2,param_4,param_5);
    return iVar2;
  }
  return 0;
}

