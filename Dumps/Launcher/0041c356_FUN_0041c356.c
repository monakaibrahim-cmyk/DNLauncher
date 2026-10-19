// Address: 0x0041c356
// Name: FUN_0041c356
// Category: Launcher


void FUN_0041c356(void)

{
  DWORD dwErrCode;
  int unaff_EBX;
  int unaff_EDI;
  
  if (unaff_EDI != 2) {
    if (unaff_EBX != 0) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_00453641();
    if (unaff_EBX == 0) {
      SetLastError(dwErrCode);
    }
  }
  return;
}

