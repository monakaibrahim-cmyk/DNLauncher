// Address: 0x0048b3f0
// Name: FUN_0048b3f0
// Category: MFC_CRT


undefined4 FUN_0048b3f0(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Count;
  int iVar1;
  undefined4 *puVar2;
  LPSTR local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWSTR)*DAT_004cae64;
  puVar2 = DAT_004cae64;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Count = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Count == 0) || (local_8 = __calloc_crt(_Count,1), local_8 == (LPSTR)0x0)) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,local_8,_Count,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      _free(local_8);
    }
    iVar1 = FUN_00492dd6(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) break;
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_8);
}

