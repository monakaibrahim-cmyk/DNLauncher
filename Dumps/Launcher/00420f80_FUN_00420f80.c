// Address: 0x00420f80
// Name: FUN_00420f80
// Category: Launcher


void __fastcall FUN_00420f80(CDialog *param_1)

{
  CDialog *pCVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  CDialog *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00499ed8;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0040a2b0();
  puVar4 = FUN_00416590(&local_10);
  local_4 = 0;
  iVar5 = AfxMessageBox((wchar_t *)*puVar4,4,0);
  local_4 = 0xffffffff;
  pCVar1 = local_10 + -4;
  LOCK();
  iVar2 = *(int *)pCVar1;
  *(int *)pCVar1 = *(int *)pCVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_10 + -0x10) + 4))(local_10 + -0x10,uVar3);
  }
  if (iVar5 == 6) {
    FUN_00418fd0(L"★ Launcher Closed");
    FUN_00459bea(param_1);
  }
  ExceptionList = local_c;
  return;
}

