// Address: 0x00457604
// Name: CWnd::GetWindowedChildCount
// Category: Utility


/* Library Function - Single Match
    public: long __thiscall CWnd::GetWindowedChildCount(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::GetWindowedChildCount(CWnd *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pHVar1 = GetWindow(*(HWND *)(this + 0x20),5);
  pCVar2 = FromHandle(pHVar1);
  while (pCVar2 != (CWnd *)0x0) {
    pHVar1 = GetWindow(*(HWND *)(pCVar2 + 0x20),2);
    pCVar2 = FromHandle(pHVar1);
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

