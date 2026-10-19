// Address: 0x0046149a
// Name: CFrameWnd::ShowControlBar
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::ShowControlBar(class CControlBar *,int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CFrameWnd::ShowControlBar(CFrameWnd *this,CControlBar *param_1,int param_2,int param_3)

{
  CFrameWnd *this_00;
  int iVar1;
  uint uVar2;
  
  if (param_1 == (CControlBar *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  this_00 = CControlBar::GetDockingFrame(param_1);
  if (param_3 == 0) {
    CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,0,0,0,0,
                       (-(uint)(param_2 != 0) & 0xffffffc0) + 0x80 | 0x17);
    (**(code **)(*(int *)param_1 + 0x150))(param_2);
    if ((param_2 != 0) || (iVar1 = CControlBar::IsFloating(param_1), iVar1 == 0)) {
      (**(code **)(*(int *)this_00 + 0x148))(0);
    }
  }
  else {
    (**(code **)(*(int *)param_1 + 0x150))(param_2);
    *(uint *)(this_00 + 0xd0) = *(uint *)(this_00 + 0xd0) | 0xc;
  }
  iVar1 = CControlBar::IsFloating(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x8c) == 0) {
    uVar2 = (uint)(param_2 != 0);
  }
  else {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x16c))();
  }
  if (uVar2 == 1) {
    if (param_2 != 0) {
      *(undefined4 *)(this_00 + 0xa0) = 0xffffffff;
      if (param_3 == 0) {
        iVar1 = 8;
        goto LAB_00461581;
      }
      *(undefined4 *)(this_00 + 0xa0) = 8;
      goto LAB_0046158f;
    }
  }
  else if (uVar2 == 0) {
    *(undefined4 *)(this_00 + 0xa0) = 0xffffffff;
    if (param_3 != 0) {
      *(undefined4 *)(this_00 + 0xa0) = 0;
      return;
    }
    iVar1 = 0;
LAB_00461581:
    CWnd::ShowWindow((CWnd *)this_00,iVar1);
    return;
  }
  if (param_3 != 0) {
    return;
  }
LAB_0046158f:
  (**(code **)(*(int *)this_00 + 0x148))(0);
  return;
}

