// Address: 0x004019b0
// Name: FUN_004019b0
// Category: Launcher


void FUN_004019b0(LPCSTR param_1)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00497d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int **)(*unaff_ESI + -0x10) != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(*unaff_ESI + -0x10) + 0x10))
                              (DAT_004c3750 ^ (uint)&pvStack_10);
    if (piVar2 != (int *)0x0) goto LAB_004019f3;
  }
  piVar2 = (int *)FUN_00453ed1();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x10))();
LAB_004019f3:
  FUN_00401c60(piVar2,param_1,(int *)&pvStack_10);
  uStack_4 = 0;
  FUN_00403380(unaff_ESI,pvStack_10,*(int *)((int)pvStack_10 + -0xc));
  uStack_4 = 0xffffffff;
  piVar2 = (int *)((int)pvStack_10 + -4);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)((int)pvStack_10 + -0x10) + 4))((undefined4 *)((int)pvStack_10 + -0x10));
  }
  ExceptionList = local_c;
  return;
}

