// Address: 0x0046787d
// Name: CMapPtrToPtr::GetAssocAt
// Category: MFC_CRT


/* Library Function - Single Match
    protected: struct CMapPtrToPtr::CAssoc * __thiscall CMapPtrToPtr::GetAssocAt(void *,unsigned int
   &,unsigned int &)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

CAssoc * __thiscall
CMapPtrToPtr::GetAssocAt(CMapPtrToPtr *this,void *param_1,uint *param_2,uint *param_3)

{
  CAssoc *pCVar1;
  uint uVar2;
  
  *param_3 = (uint)param_1 >> 4;
  uVar2 = ((uint)param_1 >> 4) % *(uint *)(this + 8);
  *param_2 = uVar2;
  if (*(int *)(this + 4) != 0) {
    for (pCVar1 = *(CAssoc **)(*(int *)(this + 4) + uVar2 * 4); pCVar1 != (CAssoc *)0x0;
        pCVar1 = *(CAssoc **)pCVar1) {
      if (*(void **)(pCVar1 + 4) == param_1) {
        return pCVar1;
      }
    }
  }
  return (CAssoc *)0x0;
}

