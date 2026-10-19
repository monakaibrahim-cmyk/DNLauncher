// Address: 0x0045b1f4
// Name: CWnd::FindSiteOrWndWithFocus
// Category: Utility


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CWnd::FindSiteOrWndWithFocus(void)const 
   
   Library: Visual Studio 2005 Release */

__POSITION * __thiscall CWnd::FindSiteOrWndWithFocus(CWnd *this)

{
  int iVar1;
  undefined4 *puVar2;
  __POSITION *p_Var3;
  HWND pHVar4;
  HWND pHVar5;
  __POSITION *local_c;
  CWnd *local_8;
  
  iVar1 = *(int *)(this + 0x4c);
  if (iVar1 == 0) {
    return (__POSITION *)0x0;
  }
  local_c = *(__POSITION **)(iVar1 + 0x44);
  local_8 = this;
  while( true ) {
    p_Var3 = local_c;
    if (local_c == (__POSITION *)0x0) {
      return (__POSITION *)0x0;
    }
    puVar2 = *(undefined4 **)(local_c + 8);
    if (puVar2[1] == 0) {
      pHVar5 = (HWND)*puVar2;
    }
    else {
      pHVar5 = *(HWND *)(puVar2[1] + 0x24);
    }
    if ((pHVar5 != (HWND)0x0) && (pHVar4 = GetFocus(), pHVar5 == pHVar4)) break;
    if ((puVar2[1] != 0) && (puVar2[1] == *(int *)(*(int *)(local_8 + 0x4c) + 0x70))) {
      return p_Var3;
    }
    CPtrList::GetNext((CPtrList *)(iVar1 + 0x40),&local_c);
  }
  return p_Var3;
}

