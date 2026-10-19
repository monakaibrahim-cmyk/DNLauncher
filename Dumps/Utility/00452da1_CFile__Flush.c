// Address: 0x00452da1
// Name: CFile::Flush
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CFile::Flush(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CFile::Flush(CFile *this)

{
  BOOL BVar1;
  DWORD DVar2;
  short *psVar3;
  
  if (*(HANDLE *)(this + 4) != (HANDLE)0xffffffff) {
    BVar1 = FlushFileBuffers(*(HANDLE *)(this + 4));
    if (BVar1 == 0) {
      psVar3 = *(short **)(this + 0xc);
      DVar2 = GetLastError();
      ThrowOsError(DVar2,psVar3);
    }
  }
  return;
}

