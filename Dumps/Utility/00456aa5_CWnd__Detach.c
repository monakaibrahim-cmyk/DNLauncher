// Address: 0x00456aa5
// Name: CWnd::Detach
// Category: Utility


/* Library Function - Single Match
    public: struct HWND__ * __thiscall CWnd::Detach(void)
   
   Library: Visual Studio 2005 Release */

HWND__ * __thiscall CWnd::Detach(CWnd *this)

{
  HWND__ *pHVar1;
  CHandleMap *pCVar2;
  
  pHVar1 = *(HWND__ **)(this + 0x20);
  if (pHVar1 != (HWND__ *)0x0) {
    pCVar2 = afxMapHWND(0);
    if (pCVar2 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(this + 0x20));
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x50) = 0;
  return pHVar1;
}

