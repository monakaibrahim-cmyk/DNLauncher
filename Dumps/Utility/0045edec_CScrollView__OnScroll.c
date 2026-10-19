// Address: 0x0045edec
// Name: CScrollView::OnScroll
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CScrollView::OnScroll(unsigned int,unsigned int,int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CScrollView::OnScroll(CScrollView *this,uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = CWnd::GetScrollPos((CWnd *)this,0);
  uVar2 = param_1 & 0xff;
  if (uVar2 == 0) {
    uVar5 = uVar1 - *(int *)(this + 0x78);
  }
  else if (uVar2 == 1) {
    uVar5 = uVar1 + *(int *)(this + 0x78);
  }
  else if (uVar2 == 2) {
    uVar5 = uVar1 - *(int *)(this + 0x70);
  }
  else if (uVar2 == 3) {
    uVar5 = uVar1 + *(int *)(this + 0x70);
  }
  else {
    uVar5 = param_2;
    if (uVar2 != 5) {
      if (uVar2 == 6) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar1;
        if (uVar2 == 7) {
          uVar5 = 0x7fffffff;
        }
      }
    }
  }
  uVar2 = CWnd::GetScrollPos((CWnd *)this,1);
  uVar4 = param_1 >> 8 & 0xff;
  if (uVar4 == 0) {
    param_2 = uVar2 - *(int *)(this + 0x7c);
  }
  else if (uVar4 == 1) {
    param_2 = uVar2 + *(int *)(this + 0x7c);
  }
  else if (uVar4 == 2) {
    param_2 = uVar2 - *(int *)(this + 0x74);
  }
  else if (uVar4 == 3) {
    param_2 = uVar2 + *(int *)(this + 0x74);
  }
  else if (uVar4 != 5) {
    if (uVar4 == 6) {
      param_2 = 0;
    }
    else {
      param_2 = uVar2;
      if (uVar4 == 7) {
        param_2 = 0x7fffffff;
      }
    }
  }
  iVar3 = (**(code **)(*(int *)this + 0x13c))(uVar5 - uVar1,param_2 - uVar2,param_3);
  if ((iVar3 != 0) && (param_3 != 0)) {
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  return iVar3;
}

