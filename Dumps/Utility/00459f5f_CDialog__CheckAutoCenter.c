// Address: 0x00459f5f
// Name: CDialog::CheckAutoCenter
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CDialog::CheckAutoCenter(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  HMODULE hModule;
  short sVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  HGLOBAL local_8;
  
  local_8 = *(HGLOBAL *)(this + 0x5c);
  puVar3 = *(uint **)(this + 0x60);
  if (*(int *)(this + 0x58) != 0) {
    pAVar2 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar2 + 0xc);
    hResInfo = FindResourceW(hModule,*(LPCWSTR *)(this + 0x58),(LPCWSTR)0x5);
    local_8 = LoadResource(hModule,hResInfo);
  }
  if (local_8 != (HGLOBAL)0x0) {
    puVar3 = LockResource(local_8);
  }
  iVar6 = 1;
  if (puVar3 != (uint *)0x0) {
    uVar5 = *puVar3;
    if (*(short *)((int)puVar3 + 2) == -1) {
      uVar5 = puVar3[3];
      sVar1 = *(short *)((int)puVar3 + 0x12);
      sVar4 = (short)puVar3[5];
    }
    else {
      sVar1 = *(short *)((int)puVar3 + 10);
      sVar4 = (short)puVar3[3];
    }
    if ((((uVar5 & 0x1801) != 0) || (sVar1 != 0)) || (sVar4 != 0)) {
      iVar6 = 0;
    }
  }
  if (*(int *)(this + 0x58) != 0) {
    FreeResource(local_8);
  }
  return iVar6;
}

