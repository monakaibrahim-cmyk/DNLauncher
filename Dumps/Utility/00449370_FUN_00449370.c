// Address: 0x00449370
// Name: FUN_00449370
// Category: Utility


void __cdecl FUN_00449370(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar6 = *param_1;
  if ((char)param_1[2] == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      iVar2 = param_1[1] + param_2;
      if (iVar6 != 0) {
        do {
          pcVar3 = (char *)(iVar2 + -1);
          iVar2 = iVar2 + -4;
          iVar6 = iVar6 + -1;
          *pcVar3 = -1 - *pcVar3;
        } while (iVar6 != 0);
        return;
      }
    }
    else {
      iVar2 = param_1[1] + param_2;
      if (iVar6 != 0) {
        do {
          *(char *)(iVar2 + -1) = -1 - *(char *)(iVar2 + -1);
          iVar6 = iVar6 + -1;
          *(char *)(iVar2 + -2) = -1 - *(char *)(iVar2 + -2);
          iVar2 = iVar2 + -8;
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
          puVar5[-1] = -1 - puVar4[-1];
          puVar1 = puVar4 + -2;
          puVar4 = puVar4 + -2;
          iVar6 = iVar6 + -1;
          puVar5[-2] = *puVar1;
          puVar5 = puVar5 + -2;
        } while (iVar6 != 0);
        return;
      }
    }
    else {
      iVar2 = param_1[1] + param_2;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)(iVar2 + -1) = -1 - *(char *)(iVar2 + -1);
        *(char *)(iVar2 + -2) = -1 - *(char *)(iVar2 + -2);
        iVar2 = iVar2 + -4;
      }
    }
  }
  return;
}

