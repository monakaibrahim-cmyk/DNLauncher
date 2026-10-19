// Address: 0x00401ae0
// Name: FUN_00401ae0
// Category: Launcher


CSimpleStringT<char,0> * __cdecl
FUN_00401ae0(CSimpleStringT<char,0> *param_1,int *param_2,short *param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497a49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int **)(*param_2 + -0x10) != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(*param_2 + -0x10) + 0x10))
                              (DAT_004c3750 ^ (uint)&stack0xffffffe4);
    if (piVar2 != (int *)0x0) goto LAB_00401b3b;
  }
  piVar2 = (int *)FUN_00453ed1();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x10))();
LAB_00401b3b:
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)param_1 = iVar3 + 0x10;
  local_4 = 0;
  if (param_3 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    psVar4 = param_3;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)(param_3 + 1) >> 1;
  }
  FUN_00401da0(param_1,(void *)*param_2,*(int *)(*param_2 + -0xc),param_3,iVar3);
  ExceptionList = local_c;
  return param_1;
}

