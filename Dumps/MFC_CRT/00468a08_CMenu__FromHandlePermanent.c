// Address: 0x00468a08
// Name: CMenu::FromHandlePermanent
// Category: MFC_CRT


/* Library Function - Single Match
    public: static class CMenu * __stdcall CMenu::FromHandlePermanent(struct HMENU__ *)
   
   Library: Visual Studio 2005 Release */

CMenu * CMenu::FromHandlePermanent(HMENU__ *param_1)

{
  CHandleMap *pCVar1;
  CMenu *pCVar2;
  
  pCVar1 = afxMapHMENU(0);
  if (pCVar1 != (CHandleMap *)0x0) {
    pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    return pCVar2;
  }
  return (CMenu *)0x0;
}

