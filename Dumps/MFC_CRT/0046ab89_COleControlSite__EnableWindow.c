// Address: 0x0046ab89
// Name: COleControlSite::EnableWindow
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall COleControlSite::EnableWindow(int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

int __thiscall COleControlSite::EnableWindow(COleControlSite *this,int param_1)

{
  uint local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0;
  (**(code **)(*(int *)this + 0x6c))(0xfffffdfe,0xb,local_18);
  local_18[0] = (uint)(local_18[0] == 0);
  (**(code **)(*(int *)this + 0x70))(this,0xfffffdfe,0xb,param_1);
  return local_18[0];
}

