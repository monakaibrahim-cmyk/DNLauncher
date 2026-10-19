// Address: 0x0046690a
// Name: AUX_DATA::UpdateSysMetrics
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall AUX_DATA::UpdateSysMetrics(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall AUX_DATA::UpdateSysMetrics(AUX_DATA *this)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = GetSystemMetrics(0xb);
  *(int *)(this + 8) = iVar1;
  iVar1 = GetSystemMetrics(0xc);
  *(int *)(this + 0xc) = iVar1;
  iVar1 = GetSystemMetrics(2);
  DAT_004cab28 = iVar1 + 1;
  iVar1 = GetSystemMetrics(3);
  DAT_004cab2c = iVar1 + 1;
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  *(int *)(this + 0x18) = iVar1;
  iVar1 = GetDeviceCaps(hdc,0x5a);
  *(int *)(this + 0x1c) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  return;
}

