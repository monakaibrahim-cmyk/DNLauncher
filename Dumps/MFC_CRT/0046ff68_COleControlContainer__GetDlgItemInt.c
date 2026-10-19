// Address: 0x0046ff68
// Name: COleControlContainer::GetDlgItemInt
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual unsigned int __thiscall COleControlContainer::GetDlgItemInt(int,int *,int)const 
   
   Library: Visual Studio 2005 Release */

uint __thiscall
COleControlContainer::GetDlgItemInt(COleControlContainer *this,int param_1,int *param_2,int param_3)

{
  int iVar1;
  WCHAR *lpsz;
  uint uVar2;
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)this + 0x7c))(param_1,local_208,0x100);
  if (iVar1 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    lpsz = local_208;
    iVar1 = _iswspace(local_208[0]);
    while (iVar1 != 0) {
      lpsz = CharNextW(lpsz);
      iVar1 = _iswspace(*lpsz);
    }
    if ((*lpsz == L'+') || (*lpsz == L'-')) {
      lpsz = CharNextW(lpsz);
    }
    iVar1 = _iswdigit(*lpsz);
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
    if (iVar1 != 0) {
      if (param_3 == 0) {
        _wcstoul(local_208,(wchar_t **)0x0,10);
      }
      else {
        _wcstol(local_208,(wchar_t **)0x0,10);
      }
    }
  }
  uVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar2;
}

