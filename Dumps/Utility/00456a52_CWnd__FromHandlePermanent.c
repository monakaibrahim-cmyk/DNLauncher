// Address: 0x00456a52
// Name: CWnd::FromHandlePermanent
// Category: Utility


/* Library Function - Single Match
    public: static class CWnd * __stdcall CWnd::FromHandlePermanent(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

CWnd * CWnd::FromHandlePermanent(HWND__ *param_1)

{
  CHandleMap *pCVar1;
  CWnd *pCVar2;
  
  pCVar1 = afxMapHWND(0);
  if (pCVar1 != (CHandleMap *)0x0) {
    pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    return pCVar2;
  }
  return (CWnd *)0x0;
}

