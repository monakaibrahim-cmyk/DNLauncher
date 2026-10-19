// Address: 0x00443590
// Name: FUN_00443590
// Category: Utility


void __cdecl FUN_00443590(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = param_1[0x6a];
  param_1[0x1d] = *(int *)(iVar1 + 0x10);
  iVar3 = param_1[0x13];
  param_1[0x1c] = *(int *)(iVar1 + 0x14);
  if (iVar3 == 0) {
    if (param_1[0x19] != 3) {
      *(undefined1 **)(iVar1 + 4) = &LAB_00442fe0;
      return;
    }
    *(code **)(iVar1 + 4) = FUN_00443090;
    return;
  }
  if (iVar3 == 1) {
    if (param_1[0x19] == 3) {
      *(code **)(iVar1 + 4) = FUN_00443270;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_00443150;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      FUN_00442dc0((int)param_1);
    }
    if (*(int *)(iVar1 + 0x34) == 0) {
      FUN_00442f90();
      return;
    }
  }
  else {
    if (iVar3 != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)(param_1);
      return;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x44);
    *(code **)(iVar1 + 4) = FUN_004433a0;
    *(undefined1 *)(iVar1 + 0x54) = 0;
    if (*(int *)(iVar1 + 0x44) == 0) {
      FUN_00443550();
    }
    iVar1 = param_1[0x17];
    if (0 < param_1[0x19]) {
      iVar3 = 0;
      do {
        FUN_0043bca0((void *)*puVar2,iVar1 * 2 + 4);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < param_1[0x19]);
    }
  }
  return;
}

