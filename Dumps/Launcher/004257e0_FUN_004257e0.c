// Address: 0x004257e0
// Name: FUN_004257e0
// Category: Launcher


void __cdecl
FUN_004257e0(int *param_1,wint_t *param_2,wint_t *param_3,undefined4 param_4,int param_5,
            wint_t *param_6)

{
  int iVar1;
  wint_t *pwVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    iVar1 = _iswspace(*param_2);
    pwVar2 = param_6;
    if (iVar1 == 0) {
      if (param_5 != -2) {
        if (param_5 == 0) {
          FUN_00475b26();
        }
        if (*(uint *)(param_5 + 0x18) < 8) {
          iVar1 = param_5 + 4;
        }
        else {
          iVar1 = *(int *)(param_5 + 4);
        }
        if ((wint_t *)(iVar1 + *(int *)(param_5 + 0x14) * 2) <= param_6) {
          FUN_00475b26();
        }
      }
      pwVar2 = param_6 + 1;
      if (param_5 != -2) {
        if (param_5 == 0) {
          FUN_00475b26();
        }
        if (*(uint *)(param_5 + 0x18) < 8) {
          iVar1 = param_5 + 4;
        }
        else {
          iVar1 = *(int *)(param_5 + 4);
        }
        if ((wint_t *)(iVar1 + *(int *)(param_5 + 0x14) * 2) <= param_6) {
          FUN_00475b26();
        }
      }
      *param_6 = *param_2;
    }
    param_6 = pwVar2;
  }
  param_1[1] = (int)param_6;
  *param_1 = param_5;
  return;
}

