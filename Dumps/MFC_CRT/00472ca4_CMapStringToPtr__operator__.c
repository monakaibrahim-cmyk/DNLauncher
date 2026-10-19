// Address: 0x00472ca4
// Name: CMapStringToPtr::operator[]
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: void * & __thiscall CMapStringToPtr::operator[](char const *)
    public: void * & __thiscall CMapStringToPtr::operator[](wchar_t const *)
   
   Library: Visual Studio 2005 Release */

undefined4 * __thiscall CMapStringToPtr__operator__(void *this,wchar_t *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  puVar1 = GetAssocAt(this,param_1,(uint *)&local_c,(uint *)&local_8);
  if (puVar1 == (undefined4 *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_00472a93(this,*(uint *)((int)this + 8),1);
    }
    puVar1 = NewAssoc((int)this);
    puVar1[1] = local_8;
    FUN_004034e0(puVar1 + 2,param_1);
    *puVar1 = *(undefined4 *)((int)local_c * 4 + *(int *)((int)this + 4));
    *(undefined4 **)((int)local_c * 4 + *(int *)((int)this + 4)) = puVar1;
  }
  return puVar1 + 3;
}

