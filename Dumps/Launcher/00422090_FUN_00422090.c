// Address: 0x00422090
// Name: FUN_00422090
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00422090(int *param_1,double param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004982c9;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))(uVar1);
  *param_1 = iVar3 + 0x10;
  local_4 = 0;
  if (param_2 < _DAT_004b4750) {
    if (_DAT_004b4740 < param_2 == (_DAT_004b4740 == param_2)) {
      pwVar4 = L"%d B";
    }
    else {
      pwVar4 = L"%.1f KB";
    }
  }
  else {
    pwVar4 = L"%.1f MB";
  }
  FUN_00403f30(param_1,pwVar4);
  ExceptionList = local_c;
  return param_1;
}

