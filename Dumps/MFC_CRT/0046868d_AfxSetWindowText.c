// Address: 0x0046868d
// Name: AfxSetWindowText
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxSetWindowText(struct HWND__ *,wchar_t const *)
   
   Library: Visual Studio 2005 Release */

void AfxSetWindowText(HWND__ *param_1,wchar_t *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  WCHAR local_208;
  undefined1 local_206 [510];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (HWND__ *)0x0) || (param_2 == (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  uVar1 = lstrlenW(param_2);
  local_208 = L'\0';
  _memset(local_206,0,0x1fe);
  if (uVar1 < 0x101) {
    uVar2 = GetWindowTextW(param_1,&local_208,0x100);
    if (uVar2 == uVar1) {
      iVar3 = lstrcmpW(&local_208,param_2);
      if (iVar3 == 0) goto LAB_00468713;
    }
  }
  SetWindowTextW(param_1,param_2);
LAB_00468713:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

