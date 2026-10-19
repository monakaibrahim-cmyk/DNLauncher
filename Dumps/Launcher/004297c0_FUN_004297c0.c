// Address: 0x004297c0
// Name: FUN_004297c0
// Category: Launcher


void __fastcall FUN_004297c0(LPCSTR param_1)

{
  char *_Dst;
  HANDLE pvVar1;
  BOOL BVar2;
  int unaff_ESI;
  undefined1 auStack_304 [4];
  DWORD local_300;
  undefined1 local_2fc [756];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)auStack_304;
  FUN_00429370(param_1,unaff_ESI);
  pvVar1 = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  *(HANDLE *)(unaff_ESI + 8) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    GetLastError();
  }
  else {
    _Dst = (char *)(unaff_ESI + 0xc);
    _memset(_Dst,0,0x110);
    _strcpy_s(_Dst,0x100,"EyedentityGames Packing File 0.1");
    *(undefined4 *)(unaff_ESI + 0x10c) = 0xb;
    *(undefined4 *)(unaff_ESI + 0x110) = 0;
    *(undefined4 *)(unaff_ESI + 0x114) = 0x400;
    if (*(HANDLE *)(unaff_ESI + 8) != (HANDLE)0xffffffff) {
      local_300 = 0;
      BVar2 = WriteFile(*(HANDLE *)(unaff_ESI + 8),_Dst,0x110,&local_300,(LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        _memset(local_2fc,0,0x2f0);
        if (*(HANDLE *)(unaff_ESI + 8) != (HANDLE)0xffffffff) {
          local_300 = 0;
          WriteFile(*(HANDLE *)(unaff_ESI + 8),local_2fc,0x2f0,&local_300,(LPOVERLAPPED)0x0);
        }
        *(undefined1 *)(unaff_ESI + 4) = 0;
        __security_check_cookie(local_8 ^ (uint)auStack_304);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)auStack_304);
  return;
}

