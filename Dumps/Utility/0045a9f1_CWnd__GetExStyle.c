// Address: 0x0045a9f1
// Name: CWnd::GetExStyle
// Category: Utility


/* Library Function - Single Match
    public: unsigned long __thiscall CWnd::GetExStyle(void)const 
   
   Library: Visual Studio 2005 Release */

ulong __thiscall CWnd::GetExStyle(CWnd *this)

{
  ulong uVar1;
  
  if (*(int *)(this + 0x50) == 0) {
    uVar1 = GetWindowLongW(*(HWND *)(this + 0x20),-0x10);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045aa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(this + 0x50) + 0x78))();
  return uVar1;
}

