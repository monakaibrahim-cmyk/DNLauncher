// Address: 0x0045aad5
// Name: CWnd::SetDlgCtrlID
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::SetDlgCtrlID(int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::SetDlgCtrlID(CWnd *this,int param_1)

{
  LONG LVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) == 0) {
    LVar1 = SetWindowLongW(*(HWND *)(this + 0x20),-0xc,param_1);
    return LVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045aaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(this + 0x50) + 0x94))();
  return iVar2;
}

