// Address: 0x00452f0b
// Name: CFile::Close
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CFile::Close(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CFile::Close(CFile *this)

{
  BOOL BVar1;
  DWORD DVar2;
  bool bVar3;
  short *psVar4;
  
  bVar3 = false;
  if (*(HANDLE *)(this + 4) != (HANDLE)0xffffffff) {
    BVar1 = CloseHandle(*(HANDLE *)(this + 4));
    bVar3 = BVar1 == 0;
  }
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(this + 0xc));
  if (bVar3) {
    psVar4 = *(short **)(this + 0xc);
    DVar2 = GetLastError();
    ThrowOsError(DVar2,psVar4);
  }
  return;
}

