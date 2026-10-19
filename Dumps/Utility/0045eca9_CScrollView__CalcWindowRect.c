// Address: 0x0045eca9
// Name: CScrollView::CalcWindowRect
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CScrollView::CalcWindowRect(struct tagRECT *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CScrollView::CalcWindowRect(CScrollView *this,tagRECT *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint dwExStyle;
  int iVar5;
  BOOL bMenu;
  CScrollView *local_c;
  CScrollView *local_8;
  
  local_c = this;
  local_8 = this;
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  if (param_2 == 1) {
    AdjustWindowRectEx(param_1,0,0,uVar3);
    if (*(int *)(this + 0x5c) != -1) {
      iVar4 = param_1->right - param_1->left;
      iVar5 = param_1->bottom - param_1->top;
      iVar1 = *(int *)(this + 0x68);
      iVar2 = *(int *)(this + 0x6c);
      GetScrollBarSizes(local_8,(CSize *)&local_c);
      if (iVar2 != iVar5 && -1 < iVar2 - iVar5) {
        param_1->right = (LONG)(local_c + param_1->right);
      }
      if (iVar1 != iVar4 && -1 < iVar1 - iVar4) {
        param_1->bottom = (LONG)(local_8 + param_1->bottom);
      }
    }
  }
  else {
    dwExStyle = uVar3 & 0xfffffdff;
    bMenu = 0;
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    AdjustWindowRectEx(param_1,uVar3,bMenu,dwExStyle);
  }
  return;
}

