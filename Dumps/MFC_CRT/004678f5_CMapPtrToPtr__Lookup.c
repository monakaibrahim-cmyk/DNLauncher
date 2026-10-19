// Address: 0x004678f5
// Name: CMapPtrToPtr::Lookup
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CMapPtrToPtr::Lookup(void *,void * &)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CMapPtrToPtr::Lookup(CMapPtrToPtr *this,void *param_1,void **param_2)

{
  CAssoc *pCVar1;
  CMapPtrToPtr *local_8;
  
  local_8 = this;
  pCVar1 = GetAssocAt(this,param_1,(uint *)&local_8,(uint *)&param_1);
  if (pCVar1 != (CAssoc *)0x0) {
    *param_2 = *(void **)(pCVar1 + 8);
  }
  return (uint)(pCVar1 != (CAssoc *)0x0);
}

