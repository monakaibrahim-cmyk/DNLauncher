// Address: 0x0045fa40
// Name: CView::GetScrollBarCtrl
// Category: Utility


/* Library Function - Single Match
    public: virtual class CScrollBar * __thiscall CView::GetScrollBarCtrl(int)const 
   
   Library: Visual Studio 2005 Release */

CScrollBar * __thiscall CView::GetScrollBarCtrl(CView *this,int param_1)

{
  ulong uVar1;
  CSplitterWnd *this_00;
  uint uVar2;
  int iVar3;
  CWnd *pCVar4;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  if ((((-(uint)(param_1 != 0) & 0x100000) + 0x100000 & uVar1) == 0) &&
     (this_00 = GetParentSplitter((CWnd *)this,1), this_00 != (CSplitterWnd *)0x0)) {
    uVar2 = GetDlgCtrlID(*(HWND *)(this + 0x20));
    if ((uVar2 & 0xffff) - 0xe900 < 0x100) {
      if (param_1 == 0) {
        iVar3 = (uVar2 & 0xf) + 0xea00;
      }
      else {
        iVar3 = ((uVar2 & 0xffff) - 0xe900 >> 4) + 0xea10;
      }
      pCVar4 = CWnd::GetDlgItem((CWnd *)this_00,iVar3);
      return (CScrollBar *)pCVar4;
    }
  }
  return (CScrollBar *)0x0;
}

