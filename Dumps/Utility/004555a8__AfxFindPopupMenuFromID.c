// Address: 0x004555a8
// Name: _AfxFindPopupMenuFromID
// Category: Utility


/* Library Function - Single Match
    class CMenu * __stdcall _AfxFindPopupMenuFromID(class CMenu *,unsigned int)
   
   Library: Visual Studio 2005 Release */

CMenu * _AfxFindPopupMenuFromID(CMenu *param_1,uint param_2)

{
  int iVar1;
  CMenu *pCVar2;
  UINT UVar3;
  int nPos;
  
  if (param_1 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  iVar1 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
  nPos = 0;
  if (0 < iVar1) {
    do {
      pCVar2 = CMenu::GetSubMenu(param_1,nPos);
      if (pCVar2 == (CMenu *)0x0) {
        UVar3 = GetMenuItemID(*(HMENU *)(param_1 + 4),nPos);
        if (UVar3 == param_2) goto LAB_0045560a;
      }
      else {
        if (*(uint *)(pCVar2 + 4) == param_2) {
LAB_0045560a:
          pCVar2 = CMenu::FromHandlePermanent(*(HMENU__ **)(param_1 + 4));
          return pCVar2;
        }
        pCVar2 = _AfxFindPopupMenuFromID(pCVar2,param_2);
        if (pCVar2 != (CMenu *)0x0) {
          return pCVar2;
        }
      }
      nPos = nPos + 1;
    } while (nPos < iVar1);
  }
  return (CMenu *)0x0;
}

