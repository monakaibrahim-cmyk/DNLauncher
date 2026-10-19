// Address: 0x00452e2e
// Name: CFile::SetLength
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CFile::SetLength(unsigned __int64)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CFile::SetLength(CFile *this,__uint64 param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  short *psVar3;
  
  (**(code **)(*(int *)this + 0x28))(param_1,0);
  BVar1 = SetEndOfFile(*(HANDLE *)(this + 4));
  if (BVar1 == 0) {
    psVar3 = *(short **)(this + 0xc);
    DVar2 = GetLastError();
    ThrowOsError(DVar2,psVar3);
  }
  return;
}

