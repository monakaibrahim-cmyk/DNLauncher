// Address: 0x0046a8f7
// Name: COleControlSite::GetExStyle
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall COleControlSite::GetExStyle(void)const 
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

ulong __thiscall COleControlSite::GetExStyle(COleControlSite *this)

{
  undefined4 local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x46a903;
  local_18 = GetWindowLongW(*(HWND *)(this + 0x24),-0x14);
  local_8 = 0;
  local_1c = 0;
  (**(code **)(*(int *)this + 0x6c))(0xfffffdf8,2,&local_1c);
  if ((short)local_1c == 1) {
    local_18 = local_18 | 0x200;
  }
  return local_18;
}

