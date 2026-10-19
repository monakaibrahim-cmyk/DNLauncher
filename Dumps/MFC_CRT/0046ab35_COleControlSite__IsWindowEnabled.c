// Address: 0x0046ab35
// Name: COleControlSite::IsWindowEnabled
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall COleControlSite::IsWindowEnabled(void)const 
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

int __thiscall COleControlSite::IsWindowEnabled(COleControlSite *this)

{
  BOOL local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x46ab41;
  local_18[0] = 1;
  if (*(int *)(this + 0x74) == 0) {
    local_18[0] = ::IsWindowEnabled(*(HWND *)(this + 0x24));
  }
  local_8 = 0;
  (**(code **)(*(int *)this + 0x6c))(0xfffffdfe,0xb,local_18);
  return local_18[0];
}

