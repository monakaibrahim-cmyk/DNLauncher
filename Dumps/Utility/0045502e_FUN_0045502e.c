// Address: 0x0045502e
// Name: FUN_0045502e
// Category: Utility


void FUN_0045502e(void)

{
  DWORD dwErrCode;
  int unaff_EBP;
  bool bVar1;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    bVar1 = *(short *)(unaff_EBP + -0x1c) != 0;
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

