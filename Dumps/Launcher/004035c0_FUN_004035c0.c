// Address: 0x004035c0
// Name: FUN_004035c0
// Category: Launcher


int * __thiscall FUN_004035c0(void *this,short *param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  HMODULE pHVar5;
  short *psVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00498108;
  local_c = ExceptionList;
  uVar2 = DAT_004c3750 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_00453ed1();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))(uVar2);
  *(int *)this = iVar4 + 0x10;
  uStack_4 = 0;
  if (param_1 == (short *)0x0) {
    iVar4 = 0;
  }
  else {
    if (((uint)param_1 & 0xffff0000) == 0) {
      pHVar5 = (HMODULE)FUN_00452b55();
      if (pHVar5 == (HMODULE)0x0) {
        ExceptionList = local_c;
        return this;
      }
      FUN_00402fa0(this,pHVar5,(uint)param_1 & 0xffff);
      ExceptionList = local_c;
      return this;
    }
    psVar6 = param_1;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    iVar4 = (int)psVar6 - (int)(param_1 + 1) >> 1;
  }
  FUN_00403520(this,param_1,iVar4);
  ExceptionList = local_c;
  return this;
}

