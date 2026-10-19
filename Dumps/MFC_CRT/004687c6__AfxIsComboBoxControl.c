// Address: 0x004687c6
// Name: _AfxIsComboBoxControl
// Category: MFC_CRT


/* Library Function - Single Match
    int __stdcall _AfxIsComboBoxControl(struct HWND__ *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int _AfxIsComboBoxControl(HWND__ *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  WCHAR local_1c [10];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (HWND__ *)0x0) &&
     (uVar1 = GetWindowLongW(param_1,-0x10), (uVar1 & 0xf) == param_2)) {
    GetClassNameW(param_1,local_1c,10);
    AfxInvariantStrICmp(local_1c,L"combobox");
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

