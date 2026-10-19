// Address: 0x00440fc0
// Name: FUN_00440fc0
// Category: Utility


void __cdecl FUN_00440fc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x69] = (int)puVar1;
  *puVar1 = FUN_00443790;
  switch(param_1[10]) {
  case 1:
    if (param_1[9] != 1) {
LAB_00441013:
      *(undefined4 *)(*param_1 + 0x14) = 10;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 2:
  case 3:
    if (param_1[9] != 3) goto LAB_00441013;
    break;
  case 4:
  case 5:
    if (param_1[9] != 4) goto LAB_00441013;
    break;
  default:
    if (param_1[9] < 1) goto LAB_00441013;
  }
  iVar2 = param_1[0xb];
  if (iVar2 == 1) {
    param_1[0x19] = 1;
    if ((param_1[10] == 1) || (param_1[10] == 3)) {
      puVar1[1] = &LAB_00440dd0;
      iVar2 = 1;
      if (1 < param_1[9]) {
        iVar3 = 0x54;
        do {
          *(undefined1 *)(param_1[0x31] + 0x30 + iVar3) = 0;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x54;
        } while (iVar2 < param_1[9]);
      }
      goto LAB_00441135;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = param_1[10];
    param_1[0x19] = 3;
    if (iVar2 == 3) {
      puVar1[1] = FUN_00440c20;
      FUN_00440b50();
      goto LAB_00441135;
    }
    if (iVar2 == 1) {
      puVar1[1] = &LAB_00440e00;
      goto LAB_00441135;
    }
    if (iVar2 == 2) {
      puVar1[1] = &LAB_00440d40;
      goto LAB_00441135;
    }
  }
  else {
    iVar3 = param_1[10];
    if (iVar2 != 4) {
      if ((iVar2 == iVar3) || (param_1[0xb] = iVar3, iVar3 != 0)) {
        param_1[0x19] = param_1[9];
        puVar1[1] = &LAB_00440d40;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x1b;
        (**(code **)*param_1)(param_1);
      }
      goto LAB_00441135;
    }
    param_1[0x19] = 4;
    if (iVar3 == 5) {
      puVar1[1] = FUN_00440e60;
      FUN_00440b50();
      goto LAB_00441135;
    }
    if (iVar3 == 4) {
      puVar1[1] = &LAB_00440d40;
      goto LAB_00441135;
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x1b;
  (**(code **)*param_1)(param_1);
LAB_00441135:
  if (*(char *)((int)param_1 + 0x4a) == '\0') {
    param_1[0x1a] = param_1[0x19];
    return;
  }
  param_1[0x1a] = 1;
  return;
}

