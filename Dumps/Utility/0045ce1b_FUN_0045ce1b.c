// Address: 0x0045ce1b
// Name: FUN_0045ce1b
// Category: Utility


void FUN_0045ce1b(void)

{
  DWORD dwErrCode;
  int unaff_EBP;
  bool bVar1;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    bVar1 = *(int *)(unaff_EBP + -0x1c) != 0;
    if (bVar1) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_00453641();
    if (!bVar1) {
      SetLastError(dwErrCode);
    }
  }
  return;
}

