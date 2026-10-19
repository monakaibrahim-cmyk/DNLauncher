// Address: 0x0045a977
// Name: CWnd::GetDlgItem
// Category: Utility


/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetDlgItem(int)const 
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::GetDlgItem(CWnd *this,int param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  if (*(int *)(this + 0x4c) == 0) {
    pHVar1 = ::GetDlgItem(*(HWND *)(this + 0x20),param_1);
    pCVar2 = FromHandle(pHVar1);
    return pCVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0045a998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar2 = (CWnd *)(**(code **)(**(int **)(this + 0x4c) + 0x74))();
  return pCVar2;
}

