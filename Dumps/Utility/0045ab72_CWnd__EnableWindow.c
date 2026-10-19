// Address: 0x0045ab72
// Name: CWnd::EnableWindow
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::EnableWindow(int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) == 0) {
    BVar1 = ::EnableWindow(*(HWND *)(this + 0x20),param_1);
    return BVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045ab8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(this + 0x50) + 0xa8))();
  return iVar2;
}

