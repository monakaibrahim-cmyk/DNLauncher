// Address: 0x004428a0
// Name: FUN_004428a0
// Category: Utility


void __cdecl FUN_004428a0(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = param_1[0x6a];
  iVar2 = *(int *)(iVar1 + 0x18);
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_2 == '\0') {
    if (param_1[0x13] == 2) {
      *(code **)(iVar1 + 4) = FUN_00442500;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_00442430;
    }
    *(code **)(iVar1 + 8) = FUN_00443790;
    iVar5 = param_1[0x1c];
    if (iVar5 < 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 1;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar5) {
      *(undefined4 *)(*param_1 + 0x14) = 0x39;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x13] == 2) {
      sVar3 = (param_1[0x17] + 2) * 6;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar4 = (**(code **)(param_1[1] + 4))(param_1,1,sVar3);
        *(undefined4 *)(iVar1 + 0x20) = uVar4;
      }
      FUN_0043bca0(*(void **)(iVar1 + 0x20),sVar3);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_004427c0();
      }
      *(undefined1 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(undefined1 **)(iVar1 + 4) = &LAB_00441760;
    *(undefined1 **)(iVar1 + 8) = &LAB_00442870;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
  }
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    iVar5 = 0;
    do {
      FUN_0043bca0(*(void **)(iVar2 + iVar5 * 4),0x1000);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}

