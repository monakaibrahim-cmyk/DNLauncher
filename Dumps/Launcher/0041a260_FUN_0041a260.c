// Address: 0x0041a260
// Name: FUN_0041a260
// Category: Launcher


undefined4 FUN_0041a260(void *param_1)

{
  void *lpvBits;
  HBITMAP pHVar1;
  int unaff_EBX;
  BITMAP local_18;
  
  if (unaff_EBX != 0) {
    GetObjectW(*(HANDLE *)(unaff_EBX + 4),0x18,&local_18);
    lpvBits = thunk_FUN_00452728(local_18.bmHeight * local_18.bmWidthBytes);
    if (lpvBits != (void *)0x0) {
      GetBitmapBits(*(HBITMAP *)(unaff_EBX + 4),local_18.bmHeight * local_18.bmWidthBytes,lpvBits);
      local_18.bmBits = lpvBits;
      pHVar1 = CreateBitmapIndirect(&local_18);
      Attach(param_1,(int)pHVar1);
                    /* WARNING: Subroutine does not return */
      _free(lpvBits);
    }
  }
  return 0;
}

