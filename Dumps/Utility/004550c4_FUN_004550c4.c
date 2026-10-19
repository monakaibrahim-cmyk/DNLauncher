// Address: 0x004550c4
// Name: FUN_004550c4
// Category: Utility


void FUN_004550c4(void)

{
  uint uVar1;
  DWORD dwErrCode;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    uVar1 = (uint)(*(uint *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (uVar1 == unaff_EBX) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_00453641();
    if (uVar1 != unaff_EBX) {
      SetLastError(dwErrCode);
    }
  }
  return;
}

