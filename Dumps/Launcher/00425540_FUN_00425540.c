// Address: 0x00425540
// Name: FUN_00425540
// Category: Launcher


uint * __cdecl FUN_00425540(uint *param_1,uint param_2,wint_t *param_3,uint param_4,wint_t *param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  while ((param_3 != param_5 && (iVar2 = _iswspace(*param_3), iVar2 == 0))) {
    param_3 = param_3 + 1;
  }
  if ((param_2 != 0xfffffffe) && ((param_2 == 0 || (param_2 != param_4)))) {
    FUN_00475b26();
  }
  if (param_3 == param_5) {
    *param_1 = param_2;
    param_1[1] = (uint)param_3;
    return param_1;
  }
  if (param_2 != 0xfffffffe) {
    if (param_2 == 0) {
      FUN_00475b26();
    }
    if (*(uint *)(param_2 + 0x18) < 8) {
      iVar2 = param_2 + 4;
    }
    else {
      iVar2 = *(int *)(param_2 + 4);
    }
    if ((wint_t *)(iVar2 + *(int *)(param_2 + 0x14) * 2) <= param_3) {
      FUN_00475b26();
    }
  }
  param_2 = param_2 & 0xffffff00;
  FUN_004257e0((int *)param_1,param_3 + 1,param_5,param_2,uVar1,param_3);
  return param_1;
}

