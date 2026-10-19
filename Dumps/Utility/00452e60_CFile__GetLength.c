// Address: 0x00452e60
// Name: CFile::GetLength
// Category: Utility


/* Library Function - Single Match
    public: virtual unsigned __int64 __thiscall CFile::GetLength(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

__uint64 __thiscall CFile::GetLength(CFile *this)

{
  DWORD DVar1;
  DWORD DVar2;
  short *psVar3;
  CFile *local_8;
  
  local_8 = this;
  DVar1 = GetFileSize(*(HANDLE *)(this + 4),(LPDWORD)&local_8);
  if ((DVar1 == 0xffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    psVar3 = *(short **)(this + 0xc);
    DVar2 = GetLastError();
    ThrowOsError(DVar2,psVar3);
  }
  return CONCAT44(local_8,DVar1);
}

