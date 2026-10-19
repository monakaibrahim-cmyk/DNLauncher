// Address: 0x0047e3bf
// Name: FUN_0047e3bf
// Category: MFC_CRT


LPWSTR FUN_0047e3bf(void)

{
  LPWSTR pWVar1;
  DWORD DVar2;
  LPSTR lpMultiByteStr;
  size_t _Count;
  int iVar3;
  
  if (DAT_004cb3b0 == 0) {
    pWVar1 = GetCommandLineW();
    if (pWVar1 == (LPWSTR)0x0) {
      DVar2 = GetLastError();
      if (DVar2 != 0x78) {
        return (LPWSTR)0x0;
      }
      DAT_004cb3b0 = 2;
LAB_0047e40d:
      lpMultiByteStr = GetCommandLineA();
      _Count = MultiByteToWideChar(0,1,lpMultiByteStr,-1,(LPWSTR)0x0,0);
      if ((_Count != 0) && (pWVar1 = __calloc_crt(_Count,2), pWVar1 != (LPWSTR)0x0)) {
        iVar3 = MultiByteToWideChar(0,1,lpMultiByteStr,-1,pWVar1,_Count);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          _free(pWVar1);
        }
        return pWVar1;
      }
      return (LPWSTR)0x0;
    }
    DAT_004cb3b0 = 1;
  }
  else if (DAT_004cb3b0 != 1) {
    if (DAT_004cb3b0 != 2) {
      return (LPWSTR)0x0;
    }
    goto LAB_0047e40d;
  }
  pWVar1 = GetCommandLineW();
  return pWVar1;
}

