// Address: 0x0045ab36
// Name: CWnd::ShowWindow
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::ShowWindow(int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) == 0) {
    BVar1 = ::ShowWindow(*(HWND *)(this + 0x20),param_1);
    return BVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045ab51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(this + 0x50) + 0xa0))();
  return iVar2;
}

