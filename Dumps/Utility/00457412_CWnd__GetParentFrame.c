// Address: 0x00457412
// Name: CWnd::GetParentFrame
// Category: Utility


/* Library Function - Single Match
    public: class CFrameWnd * __thiscall CWnd::GetParentFrame(void)const 
   
   Library: Visual Studio 2005 Release */

CFrameWnd * __thiscall CWnd::GetParentFrame(CWnd *this)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  if ((this != (CWnd *)0x0) && (pHVar2 = *(HWND *)(this + 0x20), pHVar2 != (HWND)0x0)) {
    while( true ) {
      pHVar2 = GetParent(pHVar2);
      pCVar3 = FromHandle(pHVar2);
      if ((pCVar3 == (CWnd *)0x0) || (iVar1 = (**(code **)(*(int *)pCVar3 + 0x120))(), iVar1 != 0))
      break;
      pHVar2 = *(HWND *)(pCVar3 + 0x20);
    }
    return (CFrameWnd *)pCVar3;
  }
  return (CFrameWnd *)0x0;
}

