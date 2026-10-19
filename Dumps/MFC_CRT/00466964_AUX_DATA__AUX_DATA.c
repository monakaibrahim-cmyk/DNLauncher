// Address: 0x00466964
// Name: AUX_DATA::AUX_DATA
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall AUX_DATA::AUX_DATA(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

AUX_DATA * __thiscall AUX_DATA::AUX_DATA(AUX_DATA *this)

{
  DWORD DVar1;
  HCURSOR pHVar2;
  
  DVar1 = GetVersion();
  *(DWORD *)(this + 0x54) = DVar1 >> 0x1f;
  UpdateSysMetrics(this);
  *(undefined4 *)(this + 0x24) = 0;
  UpdateSysColors(this);
  pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
  *(HCURSOR *)(this + 0x3c) = pHVar2;
  pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  *(HCURSOR *)(this + 0x40) = pHVar2;
  *(undefined4 *)(this + 0x10) = 2;
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  return this;
}

