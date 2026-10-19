// Address: 0x0040a620
// Name: FUN_0040a620
// Category: Launcher


void __fastcall FUN_0040a620(void *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00498bd8;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (0 < *(int *)(*(int *)((int)param_1 + 0x78) + -0xc)) {
    pvStack_10 = param_1;
    piVar4 = (int *)FUN_00453ed1();
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80004005);
    }
    iVar5 = (**(code **)(*piVar4 + 0xc))(uVar3);
    pvStack_10 = (void *)(iVar5 + 0x10);
    uStack_4 = 0;
    FUN_00403f30(&pvStack_10,L" /language:%s");
    pvVar2 = pvStack_10;
    FUN_00403380((void *)((int)param_1 + 0x74),pvStack_10,*(int *)((int)pvStack_10 + -0xc));
    puVar1 = (undefined4 *)((int)pvVar2 + -0x10);
    uStack_4 = 0xffffffff;
    piVar4 = (int *)((int)pvVar2 + -4);
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 1 || iVar5 + -1 < 0) {
      (**(code **)(*(int *)*puVar1 + 4))(puVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

