// Address: 0x004668c6
// Name: AUX_DATA::UpdateSysColors
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall AUX_DATA::UpdateSysColors(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall AUX_DATA::UpdateSysColors(AUX_DATA *this)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  
  DVar1 = GetSysColor(0xf);
  *(DWORD *)(this + 0x28) = DVar1;
  DVar1 = GetSysColor(0x10);
  *(DWORD *)(this + 0x2c) = DVar1;
  DVar1 = GetSysColor(0x14);
  *(DWORD *)(this + 0x30) = DVar1;
  DVar1 = GetSysColor(0x12);
  *(DWORD *)(this + 0x34) = DVar1;
  DVar1 = GetSysColor(6);
  *(DWORD *)(this + 0x38) = DVar1;
  pHVar2 = GetSysColorBrush(0xf);
  *(HBRUSH *)(this + 0x24) = pHVar2;
  pHVar2 = GetSysColorBrush(6);
  *(HBRUSH *)(this + 0x20) = pHVar2;
  return;
}

