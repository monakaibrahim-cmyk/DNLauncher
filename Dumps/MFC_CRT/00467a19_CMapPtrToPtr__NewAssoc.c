// Address: 0x00467a19
// Name: CMapPtrToPtr::NewAssoc
// Category: MFC_CRT


/* Library Function - Single Match
    protected: struct CMapPtrToPtr::CAssoc * __thiscall CMapPtrToPtr::NewAssoc(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

CAssoc * __thiscall CMapPtrToPtr::NewAssoc(CMapPtrToPtr *this)

{
  int iVar1;
  CAssoc *pCVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)(this + 0x10) == 0) {
    iVar4 = FUN_00471627((undefined4 *)(this + 0x14),*(int *)(this + 0x18),0xc);
    iVar1 = *(int *)(this + 0x18);
    puVar5 = (undefined4 *)(iVar4 + -8 + iVar1 * 0xc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *puVar5 = *(undefined4 *)(this + 0x10);
      *(undefined4 **)(this + 0x10) = puVar5;
      puVar5 = puVar5 + -3;
    }
  }
  pCVar2 = *(CAssoc **)(this + 0x10);
  uVar3 = *(undefined4 *)pCVar2;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(pCVar2 + 4) = 0;
  *(undefined4 *)(pCVar2 + 8) = 0;
  return pCVar2;
}

