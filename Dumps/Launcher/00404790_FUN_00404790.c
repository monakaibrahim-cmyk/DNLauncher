// Address: 0x00404790
// Name: FUN_00404790
// Category: Launcher


CSimpleStringT<char,0> * __thiscall
FUN_00404790(void *this,CSimpleStringT<char,0> *param_1,short *param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497c49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int **)(*(int *)this + -0x10) != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(*(int *)this + -0x10) + 0x10))
                              (DAT_004c3750 ^ (uint)&stack0xffffffe0);
    if (piVar2 != (int *)0x0) goto LAB_004047f2;
  }
  piVar2 = (int *)FUN_00453ed1();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x10))();
LAB_004047f2:
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)param_1 = iVar3 + 0x10;
  local_4 = 0;
  if (param_2 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    psVar4 = param_2;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)(param_2 + 1) >> 1;
  }
  FUN_00401da0(param_1,param_2,iVar3,*(void **)this,*(int *)((int)*(void **)this + -0xc));
  ExceptionList = local_c;
  return param_1;
}

