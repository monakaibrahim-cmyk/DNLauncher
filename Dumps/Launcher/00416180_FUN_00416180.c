// Address: 0x00416180
// Name: FUN_00416180
// Category: Launcher


int * __thiscall FUN_00416180(void *this,LPCSTR param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  HMODULE pHVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00498108;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))(uVar1);
  *(int *)this = iVar3 + 0x10;
  uStack_4 = 0;
  if ((param_1 == (LPCSTR)0x0) || (((uint)param_1 & 0xffff0000) != 0)) {
    FUN_00402e90(this,param_1);
  }
  else {
    pHVar4 = (HMODULE)FUN_00452b55();
    if (pHVar4 != (HMODULE)0x0) {
      FUN_00402fa0(this,pHVar4,(uint)param_1 & 0xffff);
    }
  }
  ExceptionList = local_c;
  return this;
}

