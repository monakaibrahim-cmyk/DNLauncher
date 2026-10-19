// Address: 0x00469846
// Name: CDialogTemplate::SetSystemFont
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CDialogTemplate::SetSystemFont(unsigned short)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDialogTemplate::SetSystemFont(CDialogTemplate *this,ushort param_1)

{
  HANDLE h;
  int iVar1;
  HDC hdc;
  wchar_t *pwVar2;
  ushort uVar3;
  int local_64 [7];
  wchar_t local_48 [32];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  uVar3 = 10;
  pwVar2 = L"System";
  h = GetStockObject(0x11);
  if (h == (HGDIOBJ)0x0) {
    h = GetStockObject(0xd);
    if (h == (HGDIOBJ)0x0) goto LAB_004698c2;
  }
  iVar1 = GetObjectW(h,0x5c,local_64);
  if (iVar1 != 0) {
    pwVar2 = local_48;
    hdc = GetDC((HWND)0x0);
    if (local_64[0] < 0) {
      local_64[0] = -local_64[0];
    }
    iVar1 = GetDeviceCaps(hdc,0x5a);
    iVar1 = MulDiv(local_64[0],0x48,iVar1);
    uVar3 = (ushort)iVar1;
    ReleaseDC((HWND)0x0,hdc);
  }
LAB_004698c2:
  if (param_1 == 0) {
    param_1 = uVar3;
  }
  SetFont(this,pwVar2,param_1);
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

