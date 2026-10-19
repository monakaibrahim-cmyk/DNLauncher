// Address: 0x004164c0
// Name: FUN_004164c0
// Category: Launcher


undefined4 FUN_004164c0(short *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    while (*param_1 != 0) {
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) {
        return 0x80070057;
      }
    }
    if (iVar1 != 0) {
      if (param_3 != (int *)0x0) {
        *param_3 = param_2 - iVar1;
      }
      return 0;
    }
  }
  return 0x80070057;
}

