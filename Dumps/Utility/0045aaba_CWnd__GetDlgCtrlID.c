// Address: 0x0045aaba
// Name: CWnd::GetDlgCtrlID
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::GetDlgCtrlID(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::GetDlgCtrlID(CWnd *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x50) == 0) {
    iVar1 = ::GetDlgCtrlID(*(HWND *)(this + 0x20));
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045aacf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(**(int **)(this + 0x50) + 0x90))();
  return iVar1;
}

