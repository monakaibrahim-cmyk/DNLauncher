// Address: 0x0045e9f8
// Name: CScrollView::GetTrueClientSize
// Category: Utility


/* Library Function - Single Match
    protected: int __thiscall CScrollView::GetTrueClientSize(class CSize &,class CSize &)
   
   Library: Visual Studio 2005 Release */

int __thiscall CScrollView::GetTrueClientSize(CScrollView *this,CSize *param_1,CSize *param_2)

{
  ulong uVar1;
  int iVar2;
  tagRECT local_14;
  
  GetClientRect(*(HWND *)(this + 0x20),&local_14);
  *(LONG *)param_1 = local_14.right;
  *(LONG *)(param_1 + 4) = local_14.bottom;
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  GetScrollBarSizes(this,param_2);
  if ((*(int *)param_2 != 0) && ((uVar1 & 0x200000) != 0)) {
    *(int *)param_1 = *(int *)param_1 + *(int *)param_2;
  }
  if ((*(int *)(param_2 + 4) != 0) && ((uVar1 & 0x100000) != 0)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(param_2 + 4);
  }
  if ((*(int *)param_2 < *(int *)param_1) && (*(int *)(param_2 + 4) < *(int *)(param_1 + 4))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

