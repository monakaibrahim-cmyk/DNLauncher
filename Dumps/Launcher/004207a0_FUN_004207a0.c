// Address: 0x004207a0
// Name: FUN_004207a0
// Category: Launcher


void __fastcall FUN_004207a0(CDialog *param_1)

{
  CDialog *pCVar1;
  HANDLE hHandle;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  CDialog *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00499ed8;
  local_c = ExceptionList;
  uVar2 = DAT_004c3750 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0040a2b0();
  puVar3 = FUN_00416590(&local_10);
  local_4 = 0;
  iVar4 = AfxMessageBox((wchar_t *)*puVar3,4,0);
  local_4 = 0xffffffff;
  pCVar1 = local_10 + -4;
  LOCK();
  iVar5 = *(int *)pCVar1;
  *(int *)pCVar1 = *(int *)pCVar1 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_10 + -0x10) + 4))(local_10 + -0x10,uVar2);
  }
  iVar5 = DAT_004cbcdc;
  if ((iVar4 == 6) && (*(int *)(param_1 + 0xb4) != 10)) {
    if (DAT_004cbcdc != 0) {
      *(undefined4 *)(DAT_004cbcdc + 0x48) = 1;
      hHandle = *(HANDLE *)(iVar5 + 8);
      if (hHandle != (HANDLE)0xffffffff) {
        WaitForSingleObject(hHandle,0xffffffff);
        iVar5 = DAT_004cbcdc;
      }
      if (iVar5 != 0) {
        (*(code *)**(undefined4 **)(iVar5 + 4))(1);
      }
      DAT_004cbcdc = 0;
    }
    FUN_00418fd0(L"★ Patch Canceled");
    FUN_00459bea(param_1);
  }
  ExceptionList = local_c;
  return;
}

