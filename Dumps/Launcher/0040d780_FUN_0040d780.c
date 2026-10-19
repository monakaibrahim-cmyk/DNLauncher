// Address: 0x0040d780
// Name: FUN_0040d780
// Category: Launcher


void FUN_0040d780(void)

{
  int iVar1;
  void *this;
  int *piVar2;
  CSimpleStringT<char,0> *unaff_ESI;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00497d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int **)(*(int *)unaff_ESI + -0x10) != (int *)0x0) {
    this = (void *)(**(code **)(**(int **)(*(int *)unaff_ESI + -0x10) + 0x10))
                             (DAT_004c3750 ^ (uint)&pvStack_10);
    if (this != (void *)0x0) goto LAB_0040d7c3;
  }
  piVar2 = (int *)FUN_00453ed1();
  this = (void *)(**(code **)(*piVar2 + 0x10))();
LAB_0040d7c3:
  FUN_0040dad0(this,(int *)&pvStack_10);
  uStack_4 = 0;
  FUN_0040e9f0(unaff_ESI,pvStack_10,*(rsize_t *)((int)pvStack_10 + -0xc));
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

