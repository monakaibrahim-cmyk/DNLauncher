// Address: 0x00452f8a
// Name: CFile::Duplicate
// Category: Utility


/* Library Function - Single Match
    public: virtual class CFile * __thiscall CFile::Duplicate(void)const 
   
   Library: Visual Studio 2005 Release */

CFile * __thiscall CFile::Duplicate(CFile *this)

{
  CFile *pCVar1;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  HANDLE hSourceHandle;
  CFile **lpTargetHandle;
  DWORD DVar2;
  BOOL BVar3;
  DWORD dwOptions;
  short *psVar4;
  CFile *local_8;
  
  local_8 = this;
  pCVar1 = FUN_00452728(0x10);
  if (pCVar1 == (CFile *)0x0) {
    pCVar1 = (CFile *)0x0;
  }
  else {
    pCVar1 = (CFile *)CFile(pCVar1);
  }
  dwOptions = 2;
  BVar3 = 0;
  DVar2 = 0;
  lpTargetHandle = &local_8;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = *(HANDLE *)(this + 4);
  hSourceProcessHandle = GetCurrentProcess();
  BVar3 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          DVar2,BVar3,dwOptions);
  if (BVar3 == 0) {
    if (pCVar1 != (CFile *)0x0) {
      (**(code **)(*(int *)pCVar1 + 4))(1);
    }
    psVar4 = *(short **)(this + 0xc);
    DVar2 = GetLastError();
    ThrowOsError(DVar2,psVar4);
  }
  *(CFile **)(pCVar1 + 4) = local_8;
  *(int *)(pCVar1 + 8) = *(int *)(this + 8);
  return pCVar1;
}

