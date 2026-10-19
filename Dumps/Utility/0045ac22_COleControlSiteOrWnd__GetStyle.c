// Address: 0x0045ac22
// Name: COleControlSiteOrWnd::GetStyle
// Category: Utility


/* Library Function - Single Match
    public: unsigned long __thiscall COleControlSiteOrWnd::GetStyle(void)const 
   
   Library: Visual Studio 2005 Release */

ulong __thiscall COleControlSiteOrWnd::GetStyle(COleControlSiteOrWnd *this)

{
  ulong uVar1;
  
  if (*(int *)(this + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0045ac2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(this + 4) + 0x78))();
    return uVar1;
  }
  uVar1 = GetWindowLongW(*(HWND *)this,-0x10);
  return uVar1;
}

