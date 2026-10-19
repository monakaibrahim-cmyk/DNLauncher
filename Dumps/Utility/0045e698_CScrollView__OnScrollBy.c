// Address: 0x0045e698
// Name: CScrollView::OnScrollBy
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CScrollView::OnScrollBy(class CSize,int)
   
   Library: Visual Studio 2008 Release */

int __thiscall CScrollView::OnScrollBy(CScrollView *this,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  CWnd *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x70))(1);
  if (pCVar2 == (CWnd *)0x0) {
    uVar3 = uVar1 & 0x200000;
  }
  else {
    uVar3 = CWnd::IsWindowEnabled(pCVar2);
  }
  if (uVar3 == 0) {
    param_3 = 0;
  }
  pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x70))(0);
  if (pCVar2 == (CWnd *)0x0) {
    uVar3 = uVar1 & 0x100000;
  }
  else {
    uVar3 = CWnd::IsWindowEnabled(pCVar2);
  }
  if (uVar3 == 0) {
    param_2 = 0;
  }
  iVar4 = CWnd::GetScrollPos((CWnd *)this,0);
  iVar5 = CWnd::GetScrollLimit((CWnd *)this,0);
  param_2 = iVar4 + param_2;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (iVar5 < param_2) {
    param_2 = iVar5;
  }
  iVar5 = CWnd::GetScrollPos((CWnd *)this,1);
  iVar6 = CWnd::GetScrollLimit((CWnd *)this,1);
  param_3 = iVar5 + param_3;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (iVar6 < param_3) {
    param_3 = iVar6;
  }
  if ((param_2 == iVar4) && (param_3 == iVar5)) {
    iVar4 = 0;
  }
  else {
    if (param_4 != 0) {
      CWnd::ScrollWindow((CWnd *)this,iVar4 - param_2,iVar5 - param_3,(tagRECT *)0x0,(tagRECT *)0x0)
      ;
      if (param_2 != iVar4) {
        CWnd::SetScrollPos((CWnd *)this,0,param_2,1);
      }
      if (param_3 != iVar5) {
        CWnd::SetScrollPos((CWnd *)this,1,param_3,1);
      }
    }
    iVar4 = 1;
  }
  return iVar4;
}

