// Address: 0x00452d06
// Name: CFile::Seek
// Category: Utility


/* Library Function - Single Match
    public: virtual unsigned __int64 __thiscall CFile::Seek(__int64,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

__uint64 __thiscall CFile::Seek(CFile *this,__int64 param_1,uint param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  short *psVar3;
  LONG local_8;
  
  local_8 = param_1._4_4_;
  DVar1 = SetFilePointer(*(HANDLE *)(this + 4),(LONG)param_1,&local_8,param_2);
  if ((DVar1 == 0xffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    psVar3 = *(short **)(this + 0xc);
    DVar2 = GetLastError();
    ThrowOsError(DVar2,psVar3);
  }
  return CONCAT44(local_8,DVar1);
}

