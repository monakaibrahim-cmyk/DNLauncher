// Address: 0x0045ed2d
// Name: CScrollView::DoMouseWheel
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CScrollView::DoMouseWheel(unsigned int,short,class CPoint)
   
   Library: Visual Studio 2005 Release */

int __thiscall CScrollView::DoMouseWheel(CScrollView *this,undefined4 param_1,short param_2)

{
  int iVar1;
  uint nNumerator;
  int iVar2;
  int iVar3;
  CScrollView *local_c;
  CScrollView *local_8;
  
  local_c = this;
  local_8 = this;
  CheckScrollBars(this,(int *)&local_c,(int *)&local_8);
  if ((local_8 == (CScrollView *)0x0) && (local_c == (CScrollView *)0x0)) {
    iVar1 = 0;
  }
  else {
    nNumerator = _AfxGetMouseScrollLines();
    iVar1 = MulDiv(-(int)param_2,nNumerator,0x78);
    if (local_8 == (CScrollView *)0x0) {
      if (local_c == (CScrollView *)0x0) {
        return 0;
      }
      if (nNumerator == 0xffffffff) {
        iVar2 = *(int *)(this + 0x70);
        if (0 < param_2) {
          iVar2 = -*(int *)(this + 0x70);
        }
      }
      else {
        iVar2 = *(int *)(this + 0x78) * iVar1;
        if (*(int *)(this + 0x70) <= *(int *)(this + 0x78) * iVar1) {
          iVar2 = *(int *)(this + 0x70);
        }
      }
      iVar3 = 0;
    }
    else {
      if (nNumerator == 0xffffffff) {
        iVar3 = *(int *)(this + 0x74);
        if (0 < param_2) {
          iVar3 = -*(int *)(this + 0x74);
        }
      }
      else {
        iVar3 = *(int *)(this + 0x7c) * iVar1;
        if (*(int *)(this + 0x74) <= *(int *)(this + 0x7c) * iVar1) {
          iVar3 = *(int *)(this + 0x74);
        }
      }
      iVar2 = 0;
    }
    iVar1 = (**(code **)(*(int *)this + 0x13c))(iVar2,iVar3,1);
    if (iVar1 != 0) {
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  return iVar1;
}

