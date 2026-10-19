// Address: 0x00452c7b
// Name: CFile::Read
// Category: Utility


/* Library Function - Single Match
    public: virtual unsigned int __thiscall CFile::Read(void *,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

uint __thiscall CFile::Read(CFile *this,void *param_1,uint param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  short *psVar3;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    BVar1 = ReadFile(*(HANDLE *)(this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      psVar3 = *(short **)(this + 0xc);
      DVar2 = GetLastError();
      ThrowOsError(DVar2,psVar3);
    }
  }
  return param_2;
}

