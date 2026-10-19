// Address: 0x0045ab57
// Name: CWnd::IsWindowEnabled
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::IsWindowEnabled(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::IsWindowEnabled(CWnd *this)

{
  BOOL BVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) == 0) {
    BVar1 = ::IsWindowEnabled(*(HWND *)(this + 0x20));
    return BVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045ab6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(this + 0x50) + 0xa4))();
  return iVar2;
}

