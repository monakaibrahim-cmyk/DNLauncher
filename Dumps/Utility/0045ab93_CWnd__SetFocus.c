// Address: 0x0045ab93
// Name: CWnd::SetFocus
// Category: Utility


/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::SetFocus(void)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::SetFocus(CWnd *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  if (*(int *)(this + 0x50) == 0) {
    pHVar1 = ::SetFocus(*(HWND *)(this + 0x20));
    pCVar2 = FromHandle(pHVar1);
    return pCVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0045abae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar2 = (CWnd *)(**(code **)(**(int **)(this + 0x50) + 0xb0))();
  return pCVar2;
}

