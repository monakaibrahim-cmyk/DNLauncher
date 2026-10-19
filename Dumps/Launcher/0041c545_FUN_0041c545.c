// Address: 0x0041c545
// Name: FUN_0041c545
// Category: Launcher


void FUN_0041c545(void)

{
  DWORD dwErrCode;
  int unaff_EBX;
  int unaff_EDI;
  
  if (unaff_EBX != 2) {
    if (unaff_EDI != -1) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_00453641();
    if (unaff_EDI == -1) {
      SetLastError(dwErrCode);
    }
  }
  return;
}

