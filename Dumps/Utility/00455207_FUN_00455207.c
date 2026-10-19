// Address: 0x00455207
// Name: FUN_00455207
// Category: Utility


void FUN_00455207(void)

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

