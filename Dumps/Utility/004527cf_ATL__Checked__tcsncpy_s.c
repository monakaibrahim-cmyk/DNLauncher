// Address: 0x004527cf
// Name: ATL::Checked::tcsncpy_s
// Category: Utility


/* Library Function - Single Match
    int __cdecl ATL::Checked::tcsncpy_s(wchar_t *,unsigned int,wchar_t const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl ATL::Checked::tcsncpy_s(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4)

{
  errno_t eVar1;
  int iVar2;
  
  eVar1 = _wcsncpy_s(param_1,param_2,param_3,param_4);
  iVar2 = FUN_00403120(eVar1);
  return iVar2;
}

