// Address: 0x0041a2e0
// Name: FUN_0041a2e0
// Category: Launcher


undefined4 FUN_0041a2e0(void *param_1,int param_2,CClientDC *param_3)

{
  CWnd *in_EAX;
  HDC hdc;
  uint uVar1;
  void *lpvBits;
  HBITMAP ho;
  size_t cb;
  CClientDC local_58 [20];
  undefined1 local_44 [4];
  LONG local_40;
  int local_3c;
  int local_38;
  WORD local_34;
  ushort local_32;
  void *local_30;
  BITMAPINFOHEADER local_2c;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    if (param_3 == (CClientDC *)0x0) {
      CClientDC::CClientDC(local_58,in_EAX);
      param_3 = local_58;
      CClientDC::~CClientDC(param_3);
    }
    GetObjectW(*(HANDLE *)(param_2 + 4),0x18,local_44);
    if (param_3 == (CClientDC *)0x0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_3 + 4);
    }
    uVar1 = GetDeviceCaps(hdc,0xc);
    if (local_32 == uVar1) {
      FUN_0041a260(param_1);
    }
    else {
      cb = local_3c * local_38;
      lpvBits = thunk_FUN_00452728(cb);
      if (lpvBits != (void *)0x0) {
        GetBitmapBits(*(HBITMAP *)(param_2 + 4),cb,lpvBits);
        local_2c.biHeight = -local_3c;
        local_2c.biWidth = local_40;
        local_2c.biPlanes = local_34;
        local_2c.biBitCount = local_32;
        local_4 = 0;
        local_3 = 0;
        local_2 = 0;
        local_1 = 0;
        local_2c.biSize = 0x28;
        local_2c.biCompression = 0;
        local_2c.biSizeImage = 0;
        local_2c.biXPelsPerMeter = 0;
        local_2c.biYPelsPerMeter = 0;
        local_2c.biClrUsed = 0;
        local_2c.biClrImportant = 0;
        local_30 = lpvBits;
        ho = CreateDIBitmap(*(HDC *)(param_3 + 4),&local_2c,4,lpvBits,(BITMAPINFO *)&local_2c,0);
        CGdiObject::FromHandle(ho);
        FUN_0041a260(param_1);
        DeleteObject(ho);
                    /* WARNING: Subroutine does not return */
        _free(lpvBits);
      }
    }
  }
  return 0;
}

