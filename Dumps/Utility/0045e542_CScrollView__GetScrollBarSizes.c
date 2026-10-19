// Address: 0x0045e542
// Name: CScrollView::GetScrollBarSizes
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CScrollView::GetScrollBarSizes(class CSize &)
   
   Library: Visual Studio 2005 Release */

void __thiscall CScrollView::GetScrollBarSizes(CScrollView *this,CSize *param_1)

{
  ulong uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0;
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  iVar2 = (**(code **)(*(int *)this + 0x70))(1);
  if ((iVar2 == 0) && (*(undefined4 *)param_1 = DAT_004cab28, (uVar1 & 0x800000) != 0)) {
    *(int *)param_1 = *(int *)param_1 + -1;
  }
  iVar2 = (**(code **)(*(int *)this + 0x70))(0);
  if ((iVar2 == 0) && (*(undefined4 *)(param_1 + 4) = DAT_004cab2c, (uVar1 & 0x800000) != 0)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return;
}

