// Address: 0x0045c9c4
// Name: CCmdUI::Enable
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CCmdUI::Enable(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdUI::Enable(CCmdUI *this,int param_1)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  if (*(int *)(this + 0xc) == 0) {
    if (*(int *)(this + 0x14) == 0) goto LAB_0045c9de;
    if (param_1 == 0) {
      iVar1 = *(int *)(this + 0x14);
      pHVar2 = GetFocus();
      if (pHVar2 == *(HWND *)(iVar1 + 0x20)) {
        pHVar2 = GetParent(*(HWND *)(iVar1 + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar2);
        SendMessageW(*(HWND *)(pCVar3 + 0x20),0x28,0,0);
      }
    }
    CWnd::EnableWindow(*(CWnd **)(this + 0x14),param_1);
  }
  else {
    if (*(int *)(this + 0x10) != 0) {
      return;
    }
    if (*(uint *)(this + 0x20) <= *(uint *)(this + 8)) {
LAB_0045c9de:
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    EnableMenuItem(*(HMENU *)(*(int *)(this + 0xc) + 4),*(uint *)(this + 8),
                   (-(uint)(param_1 != 0) & 0xfffffffd) + 3 | 0x400);
  }
  *(undefined4 *)(this + 0x18) = 1;
  return;
}

