// Address: 0x004489a0
// Name: FUN_004489a0
// Category: Utility


void __cdecl FUN_004489a0(int param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0) {
      do {
        *param_2 = ~*param_2;
        param_2 = param_2 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  else if (*(char *)(param_1 + 8) == '\x04') {
    if (*(char *)(param_1 + 9) == '\b') {
      if (*(int *)(param_1 + 4) != 0) {
        iVar2 = (*(int *)(param_1 + 4) - 1U >> 1) + 1;
        do {
          *param_2 = ~*param_2;
          param_2 = param_2 + 2;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        return;
      }
    }
    else if ((*(char *)(param_1 + 9) == '\x10') && (*(int *)(param_1 + 4) != 0)) {
      pbVar1 = param_2 + 1;
      iVar2 = (*(int *)(param_1 + 4) - 1U >> 2) + 1;
      do {
        pbVar1[-1] = ~pbVar1[-1];
        *pbVar1 = ~*pbVar1;
        pbVar1 = pbVar1 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

