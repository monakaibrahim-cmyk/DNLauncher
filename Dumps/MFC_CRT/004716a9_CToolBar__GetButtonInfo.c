// Address: 0x004716a9
// Name: CToolBar::GetButtonInfo
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CToolBar::GetButtonInfo(int,unsigned int &,unsigned int &,int &)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall
CToolBar::GetButtonInfo(CToolBar *this,int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int local_1c;
  uint local_18;
  byte local_14;
  byte local_13;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  _GetButton(this,param_1,(_TBBUTTON *)&local_1c);
  *param_2 = local_18;
  *param_3 = (uint)local_14 << 0x10 | (uint)local_13;
  *param_4 = local_1c;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

