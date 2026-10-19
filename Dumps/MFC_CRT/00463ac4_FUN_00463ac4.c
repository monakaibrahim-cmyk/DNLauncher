// Address: 0x00463ac4
// Name: FUN_00463ac4
// Category: MFC_CRT


void __thiscall FUN_00463ac4(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0041c6c0();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  PostMessageW((HWND)piVar1[8],0x36a,0,0);
  (**(code **)(*piVar1 + 0x78))(param_1,param_2);
  return;
}

