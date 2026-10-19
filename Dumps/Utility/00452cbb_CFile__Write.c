// Address: 0x00452cbb
// Name: CFile::Write
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CFile::Write(void const *,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CFile::Write(CFile *this,void *param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    BVar2 = WriteFile(*(HANDLE *)(this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      psVar4 = *(short **)(this + 0xc);
      DVar3 = GetLastError();
      ThrowOsError(DVar3,psVar4);
    }
    if (param_2 != uVar1) {
      FUN_00465ef2(0xd,0xffffffff,*(short **)(this + 0xc));
    }
  }
  return;
}

