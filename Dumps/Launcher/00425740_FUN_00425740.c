// Address: 0x00425740
// Name: FUN_00425740
// Category: Launcher


void __cdecl
FUN_00425740(int *param_1,char *param_2,char *param_3,undefined4 param_4,int param_5,char *param_6)

{
  int iVar1;
  char *pcVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    iVar1 = _isspace((int)*param_2);
    pcVar2 = param_6;
    if (iVar1 == 0) {
      if (param_5 != -2) {
        if (param_5 == 0) {
          FUN_00475b26();
        }
        if (*(uint *)(param_5 + 0x18) < 0x10) {
          iVar1 = param_5 + 4;
        }
        else {
          iVar1 = *(int *)(param_5 + 4);
        }
        if ((char *)(*(int *)(param_5 + 0x14) + iVar1) <= param_6) {
          FUN_00475b26();
        }
      }
      pcVar2 = param_6 + 1;
      if (param_5 != -2) {
        if (param_5 == 0) {
          FUN_00475b26();
        }
        if (*(uint *)(param_5 + 0x18) < 0x10) {
          iVar1 = param_5 + 4;
        }
        else {
          iVar1 = *(int *)(param_5 + 4);
        }
        if ((char *)(*(int *)(param_5 + 0x14) + iVar1) <= param_6) {
          FUN_00475b26();
        }
      }
      *param_6 = *param_2;
    }
    param_6 = pcVar2;
  }
  param_1[1] = (int)param_6;
  *param_1 = param_5;
  return;
}

