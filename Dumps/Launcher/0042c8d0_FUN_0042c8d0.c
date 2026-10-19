// Address: 0x0042c8d0
// Name: FUN_0042c8d0
// Category: Launcher


LPWSTR FUN_0042c8d0(void)

{
  LPCSTR lpMultiByteStr;
  int unaff_EDI;
  LPWSTR pWStack00000004;
  
  if (*(int *)(unaff_EDI + 4) != 0) {
    (**(code **)(**(int **)(unaff_EDI + 4) + 0x14))();
    lpMultiByteStr = (LPCSTR)FUN_0042da90();
    if (lpMultiByteStr != (LPCSTR)0x0) {
      pWStack00000004 = thunk_FUN_00452728(0x800);
      pWStack00000004[0] = L'\0';
      pWStack00000004[1] = L'\0';
      MultiByteToWideChar(0xfde9,0,lpMultiByteStr,-1,pWStack00000004,0x400);
      FUN_0042c9b0();
      return pWStack00000004;
    }
  }
  return (LPWSTR)0x0;
}

