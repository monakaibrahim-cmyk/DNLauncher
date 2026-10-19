// Address: 0x0046791c
// Name: CMapPtrToPtr::RemoveKey
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CMapPtrToPtr::RemoveKey(void *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CMapPtrToPtr::RemoveKey(CMapPtrToPtr *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this + 4) != 0) {
    puVar3 = (undefined4 *)(*(int *)(this + 4) + (((uint)param_1 >> 4) % *(uint *)(this + 8)) * 4);
    puVar1 = (undefined4 *)*puVar3;
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      if ((void *)puVar2[1] == param_1) {
        *puVar3 = *puVar2;
        FreeAssoc(this,puVar2);
        return 1;
      }
      puVar3 = puVar2;
      puVar1 = (undefined4 *)*puVar2;
    }
  }
  return 0;
}

