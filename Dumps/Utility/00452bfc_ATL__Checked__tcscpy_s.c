// Address: 0x00452bfc
// Name: ATL::Checked::tcscpy_s
// Category: Utility


/* Library Function - Single Match
    void __cdecl ATL::Checked::tcscpy_s(wchar_t *,unsigned int,wchar_t const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl ATL::Checked::tcscpy_s(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  errno_t eVar1;
  
  eVar1 = _wcscpy_s(param_1,param_2,param_3);
  FUN_00403120(eVar1);
  return;
}

