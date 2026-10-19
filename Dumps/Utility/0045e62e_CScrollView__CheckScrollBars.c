// Address: 0x0045e62e
// Name: CScrollView::CheckScrollBars
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CScrollView::CheckScrollBars(int &,int &)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CScrollView::CheckScrollBars(CScrollView *this,int *param_1,int *param_2)

{
  ulong uVar1;
  CWnd *pCVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_ESI;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x70))(1);
  if (pCVar2 == (CWnd *)0x0) {
LAB_0045e651:
    if ((uVar1 & 0x200000) != 0) goto LAB_0045e65d;
    iVar3 = 0;
  }
  else {
    iVar3 = CWnd::IsWindowEnabled(pCVar2);
    if (iVar3 == 0) goto LAB_0045e651;
LAB_0045e65d:
    iVar3 = 1;
  }
  *param_1 = iVar3;
  pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x70))(0);
  if (pCVar2 == (CWnd *)0x0) {
LAB_0045e67e:
    if ((uVar1 & 0x100000) == 0) {
      uVar4 = 0;
      goto LAB_0045e68d;
    }
  }
  else {
    iVar3 = CWnd::IsWindowEnabled(pCVar2);
    if (iVar3 == 0) goto LAB_0045e67e;
  }
  uVar4 = 1;
LAB_0045e68d:
  *unaff_ESI = uVar4;
  return;
}

