// Address: 0x00405eb0
// Name: FUN_00405eb0
// Category: Launcher


int FUN_00405eb0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  FUN_00418fd0(L"RemoveUsedFile");
  iVar1 = FUN_00416610(L"dnlauncher.tmp");
  if (iVar1 == 0) {
    FUN_00416790();
    iVar1 = FUN_00416610(L"dnlauncher.tmp");
    if (iVar1 == 0) {
      iVar2 = 0;
    }
  }
  iVar1 = FUN_00416610(L"PatchConfigList.xml");
  if (iVar1 == 0) {
    DAT_004cbcd0 = 4;
    return 0;
  }
  if (iVar2 == 0) {
    DAT_004cbcd0 = 4;
  }
  return iVar2;
}

