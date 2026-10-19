// Address: 0x00458fca
// Name: CWnd::IsTopParentActive
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::IsTopParentActive(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::IsTopParentActive(CWnd *this)

{
  CWnd *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  pCVar1 = GetTopLevelParent(this);
  if (pCVar1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  pHVar2 = GetForegroundWindow();
  pCVar3 = FromHandle(pHVar2);
  pHVar2 = GetLastActivePopup(*(HWND *)(pCVar1 + 0x20));
  pCVar1 = FromHandle(pHVar2);
  return (uint)(pCVar3 == pCVar1);
}

