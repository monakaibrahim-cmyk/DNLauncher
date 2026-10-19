// Address: 0x00458410
// Name: _AfxHandleSetCursor
// Category: Utility


/* Library Function - Single Match
    int __stdcall _AfxHandleSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int _AfxHandleSetCursor(CWnd *param_1,uint param_2,uint param_3)

{
  CWnd *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  
  if (((param_2 == 0xfffffffe) && (((param_3 == 0x201 || (param_3 == 0x207)) || (param_3 == 0x204)))
      ) && (pCVar1 = CWnd::GetTopLevelParent(param_1), pCVar1 != (CWnd *)0x0)) {
    pHVar2 = GetLastActivePopup(*(HWND *)(pCVar1 + 0x20));
    pCVar1 = CWnd::FromHandle(pHVar2);
    if (pCVar1 != (CWnd *)0x0) {
      pHVar2 = GetForegroundWindow();
      pCVar3 = CWnd::FromHandle(pHVar2);
      if ((pCVar1 != pCVar3) && (iVar4 = CWnd::IsWindowEnabled(pCVar1), iVar4 != 0)) {
        SetForegroundWindow(*(HWND *)(pCVar1 + 0x20));
        return 1;
      }
    }
  }
  return 0;
}

