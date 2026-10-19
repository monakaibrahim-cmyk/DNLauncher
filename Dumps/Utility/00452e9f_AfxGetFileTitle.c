// Address: 0x00452e9f
// Name: AfxGetFileTitle
// Category: Utility


/* Library Function - Single Match
    unsigned int __stdcall AfxGetFileTitle(wchar_t const *,wchar_t *,unsigned int)
   
   Library: Visual Studio 2005 Release */

uint AfxGetFileTitle(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  LPCWSTR Buf;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  Buf = param_2;
  if (param_2 == (wchar_t *)0x0) {
    Buf = local_210;
    param_3 = 0x104;
  }
  sVar1 = GetFileTitleW(param_1,Buf,(WORD)param_3);
  if (sVar1 == 0) {
    if (param_2 == (wchar_t *)0x0) {
      lstrlenW(Buf);
    }
  }
  else {
    AfxGetFileName(param_1,param_2,param_3);
  }
  uVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar2;
}

