// Address: 0x0040bb10
// Name: FUN_0040bb10
// Category: Launcher


void FUN_0040bb10(void)

{
  int unaff_ESI;
  
  FUN_00418fd0(L"LoadPatchVersionInfo");
  if (*(int *)(unaff_ESI + 0x4c) == -1) {
    FUN_0040bb50(unaff_ESI);
  }
  if (*(int *)(unaff_ESI + 0x50) == -1) {
    FUN_0040c120(unaff_ESI);
  }
  FUN_00418fd0(L"LoadPatchVersionInfo Complete : Client Ver[%d] / Server Ver[%d]");
  return;
}

