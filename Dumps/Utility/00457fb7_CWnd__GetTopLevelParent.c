// Address: 0x00457fb7
// Name: CWnd::GetTopLevelParent
// Category: Utility


/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetTopLevelParent(void)const 
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::GetTopLevelParent(CWnd *this)

{
  HWND__ *pHVar1;
  CWnd *pCVar2;
  HWND__ *pHVar3;
  
  if ((this != (CWnd *)0x0) &&
     (pHVar1 = *(HWND__ **)(this + 0x20), *(HWND__ **)(this + 0x20) != (HWND__ *)0x0)) {
    do {
      pHVar3 = pHVar1;
      pHVar1 = AfxGetParentOwner(pHVar3);
    } while (pHVar1 != (HWND__ *)0x0);
    pCVar2 = FromHandle(pHVar3);
    return pCVar2;
  }
  return (CWnd *)0x0;
}

