// Address: 0x00472bf4
// Name: LookupKey
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CMapStringToPtr::LookupKey(char const *,char const * &)const 
    public: int __thiscall CMapStringToPtr::LookupKey(wchar_t const *,wchar_t const * &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall LookupKey(void *this,wchar_t *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_8;
  
  local_8 = this;
  puVar1 = GetAssocAt(this,param_1,(uint *)&local_8,(uint *)&param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = puVar1[2];
  }
  return puVar1 != (undefined4 *)0x0;
}

