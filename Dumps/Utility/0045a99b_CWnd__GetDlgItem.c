// Address: 0x0045a99b
// Name: CWnd::GetDlgItem
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::GetDlgItem(int,struct HWND__ * *)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::GetDlgItem(CWnd *this,int param_1,HWND__ **param_2)

{
  HWND pHVar1;
  
  if (*(int *)(this + 0x4c) == 0) {
    pHVar1 = ::GetDlgItem(*(HWND *)(this + 0x20),param_1);
    *param_2 = pHVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0045a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x4c) + 0x70))();
  return;
}

