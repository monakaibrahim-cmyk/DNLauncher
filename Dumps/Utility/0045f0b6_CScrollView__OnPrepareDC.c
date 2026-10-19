// Address: 0x0045f0b6
// Name: CScrollView::OnPrepareDC
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CScrollView::OnPrepareDC(class CDC *,struct CPrintInfo *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CScrollView::OnPrepareDC(CScrollView *this,CDC *param_1,CPrintInfo *param_2)

{
  int *piVar1;
  int iVar2;
  tagRECT local_1c;
  int local_c [2];
  
  if (*(int *)(this + 0x5c) == -1) {
    (**(code **)(*(int *)param_1 + 0x34))(8);
    (**(code **)(*(int *)param_1 + 0x48))
              (local_c,*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100));
    (**(code **)(*(int *)param_1 + 0x40))
              (&local_1c.right,*(undefined4 *)(this + 0x68),*(undefined4 *)(this + 0x6c));
  }
  else {
    (**(code **)(*(int *)param_1 + 0x34))(*(int *)(this + 0x5c));
  }
  iVar2 = 0;
  local_c[0] = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar1 = (int *)GetDeviceScrollPosition(this);
    local_c[0] = -*piVar1;
    iVar2 = -piVar1[1];
    if (*(int *)(this + 0x80) != 0) {
      GetClientRect(*(HWND *)(this + 0x20),&local_1c);
      if (*(int *)(this + 0x68) < local_1c.right - local_1c.left) {
        local_c[0] = ((local_1c.right - *(int *)(this + 0x68)) - local_1c.left) / 2;
      }
      if (*(int *)(this + 0x6c) < local_1c.bottom - local_1c.top) {
        iVar2 = ((local_1c.bottom - *(int *)(this + 0x6c)) - local_1c.top) / 2;
      }
    }
  }
  (**(code **)(*(int *)param_1 + 0x38))(&local_1c.right,local_c[0],iVar2);
  CView::OnPrepareDC((CView *)this,param_1,param_2);
  return;
}

