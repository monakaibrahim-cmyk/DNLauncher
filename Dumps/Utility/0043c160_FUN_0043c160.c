// Address: 0x0043c160
// Name: FUN_0043c160
// Category: Utility


int __cdecl FUN_0043c160(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[100];
  if (*(char *)(iVar1 + 0x11) != '\0') {
    return 2;
  }
  iVar2 = (**(code **)(param_1[0x65] + 4))(param_1);
  if (iVar2 == 1) {
    if (*(char *)(iVar1 + 0x14) != '\0') {
      FUN_0043bcc0();
      *(undefined1 *)(iVar1 + 0x14) = 0;
      return 1;
    }
    if (*(char *)(iVar1 + 0x10) == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x23;
      (**(code **)*param_1)(param_1);
    }
    FUN_0043c120((int)param_1);
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    if (*(char *)(iVar1 + 0x14) == '\0') {
      if (param_1[0x1f] < param_1[0x21]) {
        param_1[0x21] = param_1[0x1f];
        return 2;
      }
    }
    else if (*(char *)(param_1[0x65] + 0xd) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x3b;
      (**(code **)*param_1)(param_1);
      return 2;
    }
  }
  return iVar2;
}

