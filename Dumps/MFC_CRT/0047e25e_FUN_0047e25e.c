// Address: 0x0047e25e
// Name: FUN_0047e25e
// Category: MFC_CRT


LPWSTR FUN_0047e25e(void)

{
  char *pcVar1;
  char cVar2;
  WCHAR WVar3;
  LPWSTR lpWideCharStr;
  DWORD DVar4;
  WCHAR *pWVar5;
  WCHAR *pWVar6;
  size_t sVar7;
  LPWSTR pWVar8;
  LPCH pCVar9;
  int iVar10;
  LPWCH _Src;
  int iVar11;
  
  iVar11 = 0;
  _Src = (LPWCH)0x0;
  if (DAT_004cb3ac == 0) {
    _Src = GetEnvironmentStringsW();
    if (_Src != (LPWCH)0x0) {
      DAT_004cb3ac = 1;
      goto LAB_0047e2a9;
    }
    DVar4 = GetLastError();
    if (DVar4 == 0x78) {
      DAT_004cb3ac = 2;
    }
  }
  if (DAT_004cb3ac != 1) {
    if ((DAT_004cb3ac != 2) && (DAT_004cb3ac != 0)) {
      return (LPWSTR)0x0;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPWSTR)0x0;
    }
    cVar2 = *pCVar9;
    pcVar1 = pCVar9;
    while (cVar2 != '\0') {
      iVar10 = MultiByteToWideChar(0,1,pcVar1,-1,(LPWSTR)0x0,0);
      if (iVar10 == 0) {
        return (LPWSTR)0x0;
      }
      iVar11 = iVar11 + iVar10;
      sVar7 = _strlen(pcVar1);
      pcVar1 = pcVar1 + sVar7 + 1;
      cVar2 = *pcVar1;
    }
    pWVar8 = __calloc_crt(iVar11 + 1U,2);
    if (pWVar8 == (LPWSTR)0x0) {
      FreeEnvironmentStringsA(pCVar9);
      return (LPWSTR)0x0;
    }
    cVar2 = *pCVar9;
    lpWideCharStr = pWVar8;
    pcVar1 = pCVar9;
    while( true ) {
      if (cVar2 == '\0') {
        *lpWideCharStr = L'\0';
        FreeEnvironmentStringsA(pCVar9);
        return pWVar8;
      }
      iVar10 = MultiByteToWideChar(0,1,pcVar1,-1,lpWideCharStr,
                                   (iVar11 + 1U) - ((int)lpWideCharStr - (int)pWVar8 >> 1));
      if (iVar10 == 0) break;
      sVar7 = _strlen(pcVar1);
      pcVar1 = pcVar1 + sVar7 + 1;
      iVar10 = FUN_0047b6a4(lpWideCharStr);
      cVar2 = *pcVar1;
      lpWideCharStr = lpWideCharStr + iVar10 + 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(pWVar8);
  }
LAB_0047e2a9:
  if ((_Src == (LPWCH)0x0) && (_Src = GetEnvironmentStringsW(), _Src == (LPWCH)0x0)) {
    return (LPWSTR)0x0;
  }
  WVar3 = *_Src;
  pWVar6 = _Src;
  while (WVar3 != L'\0') {
    do {
      pWVar5 = pWVar6;
      pWVar6 = pWVar5 + 1;
    } while (*pWVar6 != L'\0');
    pWVar6 = pWVar5 + 2;
    WVar3 = *pWVar6;
  }
  sVar7 = (int)pWVar6 + (2 - (int)_Src);
  pWVar8 = __malloc_crt(sVar7);
  if (pWVar8 != (LPWSTR)0x0) {
    _memcpy(pWVar8,_Src,sVar7);
  }
  FreeEnvironmentStringsW(_Src);
  return pWVar8;
}

