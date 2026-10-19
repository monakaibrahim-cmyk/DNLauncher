// Address: 0x00470047
// Name: COleControlContainer::SetDlgItemInt
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::SetDlgItemInt(int,unsigned int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlContainer::SetDlgItemInt(COleControlContainer *this,int param_1,uint param_2,int param_3)

{
  errno_t eVar1;
  wchar_t local_4c [34];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  if (param_3 == 0) {
    eVar1 = __ultow_s(param_2,local_4c,0x22,10);
  }
  else {
    eVar1 = __ltow_s(param_2,local_4c,0x22,10);
  }
  FUN_00403120(eVar1);
  (**(code **)(*(int *)this + 0x88))(param_1,local_4c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

