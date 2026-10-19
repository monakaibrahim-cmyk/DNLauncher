// Address: 0x004491f0
// Name: FUN_004491f0
// Category: Utility


void __cdecl FUN_004491f0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar6 = *param_1;
  if ((char)param_1[2] == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar4 = (undefined1 *)(param_1[1] + param_2);
      puVar5 = puVar4;
      if (iVar6 != 0) {
        do {
          uVar2 = puVar4[-1];
          puVar5[-1] = puVar4[-2];
          puVar5[-2] = puVar4[-3];
          puVar1 = puVar4 + -4;
          puVar4 = puVar4 + -4;
          puVar5[-3] = *puVar1;
          iVar6 = iVar6 + -1;
          puVar5[-4] = uVar2;
          puVar5 = puVar5 + -4;
        } while (iVar6 != 0);
        return;
      }
    }
    else {
      puVar4 = (undefined1 *)(param_1[1] + param_2);
      puVar5 = puVar4;
      if (iVar6 != 0) {
        do {
          uVar2 = puVar4[-1];
          uVar3 = puVar4[-2];
          puVar5[-1] = puVar4[-3];
          puVar5[-2] = puVar4[-4];
          puVar5[-3] = puVar4[-5];
          puVar5[-4] = puVar4[-6];
          puVar5[-5] = puVar4[-7];
          puVar1 = puVar4 + -8;
          puVar4 = puVar4 + -8;
          puVar5[-6] = *puVar1;
          puVar5[-7] = uVar2;
          iVar6 = iVar6 + -1;
          puVar5[-8] = uVar3;
          puVar5 = puVar5 + -8;
        } while (iVar6 != 0);
        return;
      }
    }
  }
  else if ((char)param_1[2] == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar4 = (undefined1 *)(param_1[1] + param_2);
      puVar5 = puVar4;
      if (iVar6 != 0) {
        do {
          uVar2 = puVar4[-1];
          puVar1 = puVar4 + -2;
          puVar4 = puVar4 + -2;
          puVar5[-1] = *puVar1;
          iVar6 = iVar6 + -1;
          puVar5[-2] = uVar2;
          puVar5 = puVar5 + -2;
        } while (iVar6 != 0);
        return;
      }
    }
    else {
      puVar5 = (undefined1 *)(param_1[1] + param_2);
      puVar4 = puVar5;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar2 = puVar5[-1];
        uVar3 = puVar5[-2];
        puVar4[-1] = puVar5[-3];
        puVar1 = puVar5 + -4;
        puVar5 = puVar5 + -4;
        puVar4[-2] = *puVar1;
        puVar4[-3] = uVar2;
        puVar4 = puVar4 + -4;
        *puVar4 = uVar3;
      }
    }
  }
  return;
}

