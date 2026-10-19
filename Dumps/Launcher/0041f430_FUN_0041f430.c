// Address: 0x0041f430
// Name: FUN_0041f430
// Category: Launcher


undefined4 __fastcall FUN_0041f430(CDialog *param_1)

{
  int *piVar1;
  LPCWSTR lpString;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  CSimpleStringT<wchar_t,0> *this;
  int local_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a9b0;
  local_c = ExceptionList;
  lpString = (LPCWSTR)(DAT_004c3750 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  FUN_00418fd0(L"InitDialog Start!");
  CDialog::OnInitDialog(param_1);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,1,*(LPARAM *)(param_1 + 0x90));
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,0,*(LPARAM *)(param_1 + 0x90));
  FUN_0040a2b0();
  puVar2 = FUN_00416590(&local_14);
  local_4 = 0;
  FID_conflict_SetWindowTextW((HWND)*puVar2,lpString);
  local_4 = 0xffffffff;
  piVar1 = (int *)(local_14 + -4);
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_14 + -0x10) + 4))((undefined4 *)(local_14 + -0x10));
  }
  puVar3 = FUN_00407210();
  FUN_00407530((int)puVar3,*(HWND *)(param_1 + 0x20));
  iVar4 = FUN_0041f780();
  if (iVar4 == 0) {
    DAT_004cbcd0 = 7;
    uVar5 = FUN_0041f320((CWnd *)param_1);
    ExceptionList = local_c;
    return uVar5;
  }
  iVar4 = (**(code **)(*(int *)param_1 + 0x174))();
  if (iVar4 == 0) {
    DAT_004cbcd0 = 8;
    uVar5 = FUN_0041f320((CWnd *)param_1);
    ExceptionList = local_c;
    return uVar5;
  }
  (**(code **)(*(int *)param_1 + 0x170))();
  FUN_0040a2b0();
  this = (CSimpleStringT<wchar_t,0> *)FUN_0040d6f0();
  local_4 = 1;
  if (1 < *(int *)(*(int *)this + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
  }
  FUN_0040a2b0();
  FUN_00403f30(param_1 + 0x4128,L"Ver.%d \t (%s)");
  local_4 = 0xffffffff;
  piVar1 = (int *)(iStack_10 + -4);
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(iStack_10 + -0x10) + 4))((undefined4 *)(iStack_10 + -0x10));
  }
  SetTimer(*(HWND *)(param_1 + 0x20),0,0x28,(TIMERPROC)0x0);
  FUN_00421120((int)param_1);
  FUN_00418fd0(L"InitDialog Success!");
  ExceptionList = local_c;
  return 1;
}

