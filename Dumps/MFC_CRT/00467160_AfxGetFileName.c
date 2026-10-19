// Address: 0x00467160
// Name: AfxGetFileName
// Category: MFC_CRT


/* Library Function - Single Match
    unsigned int __stdcall AfxGetFileName(wchar_t const *,wchar_t *,unsigned int)
   
   Library: Visual Studio 2005 Release */

uint AfxGetFileName(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  LPWSTR lpString;
  int iVar1;
  uint uVar2;
  
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  lpString = PathFindFileNameW(param_1);
  if (param_2 == (wchar_t *)0x0) {
    iVar1 = lstrlenW(lpString);
    uVar2 = iVar1 + 1;
  }
  else {
    ATL::Checked::tcsncpy_s(param_2,param_3,lpString,0xffffffff);
    uVar2 = 0;
  }
  return uVar2;
}

