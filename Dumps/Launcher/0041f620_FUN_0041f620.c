// Address: 0x0041f620
// Name: FUN_0041f620
// Category: Launcher


void __fastcall FUN_0041f620(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a5d8;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x44d0) != 0) {
    FUN_0040a2b0();
    puVar4 = (undefined4 *)FUN_00422530();
    local_4 = 0;
    CHtmlView::Navigate(*(CHtmlView **)(param_1 + 0x44d0),(wchar_t *)*puVar4,0,(wchar_t *)0x0,
                        (wchar_t *)0x0,(void *)0x0,0);
    local_4 = 0xffffffff;
    piVar1 = (int *)(param_1 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(param_1 + -0x10) + 4))((undefined4 *)(param_1 + -0x10),uVar3);
    }
  }
  ExceptionList = local_c;
  return;
}

