// Address: 0x00422e00
// Name: FUN_00422e00
// Category: Launcher


void __fastcall FUN_00422e00(CDialog *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = FUN_0040a2b0();
  iVar2 = AfxMessageBox(*(int *)(puVar1 + 0x5c) + 0x418,4,0xffffffff);
  if (iVar2 == 6) {
    FUN_00418fd0(L"★ Launcher Closed");
    FUN_00459bea(param_1);
    return;
  }
  return;
}

