// Address: 0x00417a80
// Name: FUN_00417a80
// Category: Launcher


undefined4 FUN_00417a80(void)

{
  undefined4 uVar1;
  void *lpData;
  BOOL BVar2;
  undefined4 *unaff_EBX;
  LPCWSTR unaff_EDI;
  DWORD local_c;
  LPVOID local_8;
  DWORD local_4;
  
  if ((unaff_EDI == (LPCWSTR)0x0) || (unaff_EBX == (undefined4 *)0x0)) {
    return 0x80070057;
  }
  local_c = GetFileVersionInfoSizeW(unaff_EDI,&local_4);
  if (local_c == 0) {
    return 0x80004005;
  }
  lpData = thunk_FUN_00452728(local_c);
  if (lpData == (void *)0x0) {
    return 0x8007000e;
  }
  BVar2 = GetFileVersionInfoW(unaff_EDI,0,local_c,lpData);
  if (BVar2 != 0) {
    local_8 = (LPVOID)0x0;
    BVar2 = VerQueryValueW(lpData,(LPCWSTR)&lpSubBlock_004b29d8,&local_8,&local_c);
    if ((BVar2 != 0) && (local_8 != (LPVOID)0x0)) {
      uVar1 = *(undefined4 *)((int)local_8 + 0xc);
      unaff_EBX[1] = *(undefined4 *)((int)local_8 + 8);
      *unaff_EBX = uVar1;
                    /* WARNING: Subroutine does not return */
      _free(lpData);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(lpData);
}

