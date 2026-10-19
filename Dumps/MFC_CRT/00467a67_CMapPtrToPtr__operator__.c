// Address: 0x00467a67
// Name: CMapPtrToPtr::operator[]
// Category: MFC_CRT


/* Library Function - Single Match
    public: void * & __thiscall CMapPtrToPtr::operator[](void *)
   
   Library: Visual Studio 2005 Release */

void ** __thiscall CMapPtrToPtr::operator[](CMapPtrToPtr *this,void *param_1)

{
  void *pvVar1;
  CAssoc *pCVar2;
  CMapPtrToPtr *local_8;
  
  pvVar1 = param_1;
  local_8 = this;
  pCVar2 = GetAssocAt(this,param_1,(uint *)&param_1,(uint *)&local_8);
  if (pCVar2 == (CAssoc *)0x0) {
    if (*(int *)(this + 4) == 0) {
      FUN_00472a93(this,*(uint *)(this + 8),1);
    }
    pCVar2 = NewAssoc(this);
    *(void **)(pCVar2 + 4) = pvVar1;
    *(undefined4 *)pCVar2 = *(undefined4 *)((int)param_1 * 4 + *(int *)(this + 4));
    *(CAssoc **)((int)param_1 * 4 + *(int *)(this + 4)) = pCVar2;
  }
  return (void **)(pCVar2 + 8);
}

