// Address: 0x0042e9d0
// Name: FUN_0042e9d0
// Category: Launcher


void __fastcall FUN_0042e9d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != param_1) {
    while (iVar1 != param_2) {
      iVar1 = *(int *)(iVar1 + 0x50);
      if (iVar1 == param_1) {
        return;
      }
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(*(int *)(iVar1 + 0x50) + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  return;
}

