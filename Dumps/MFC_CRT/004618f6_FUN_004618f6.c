// Address: 0x004618f6
// Name: FUN_004618f6
// Category: MFC_CRT


void __thiscall FUN_004618f6(void *this,int *param_1)

{
  int iVar1;
  CControlBar *this_00;
  ulong uVar2;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  this_00 = CFrameWnd::GetControlBar(this,param_1[1]);
  if (this_00 == (CControlBar *)0x0) {
    param_1[7] = 1;
  }
  else {
    iVar1 = *param_1;
    uVar2 = CWnd::GetExStyle((CWnd *)this_00);
    (**(code **)(iVar1 + 4))(uVar2 >> 0x1c & 1);
  }
  return;
}

