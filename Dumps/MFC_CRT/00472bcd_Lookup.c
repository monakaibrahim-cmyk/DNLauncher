// Address: 0x00472bcd
// Name: Lookup
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CMapStringToPtr::Lookup(char const *,void * &)const 
    public: int __thiscall CMapStringToPtr::Lookup(wchar_t const *,void * &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall Lookup(void *this,wchar_t *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_8;
  
  local_8 = this;
  puVar1 = GetAssocAt(this,param_1,(uint *)&local_8,(uint *)&param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = puVar1[3];
  }
  return puVar1 != (undefined4 *)0x0;
}

