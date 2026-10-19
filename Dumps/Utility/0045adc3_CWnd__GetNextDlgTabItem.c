// Address: 0x0045adc3
// Name: CWnd::GetNextDlgTabItem
// Category: Utility


/* Library Function - Single Match
    public: struct COleControlSiteOrWnd * __thiscall CWnd::GetNextDlgTabItem(struct
   COleControlSiteOrWnd *,int)const 
   
   Library: Visual Studio 2005 Release */

COleControlSiteOrWnd * __thiscall
CWnd::GetNextDlgTabItem(CWnd *this,COleControlSiteOrWnd *param_1,int param_2)

{
  COleControlSiteOrWnd *pCVar1;
  COleControlSiteOrWnd *this_00;
  HWND pHVar2;
  CWnd *this_01;
  int *piVar3;
  HWND pHVar4;
  undefined4 *puVar5;
  ulong uVar6;
  bool bVar7;
  UINT uCmd;
  code *local_c;
  CWnd *local_8;
  
  if (*(int *)(this + 0x4c) == 0) {
    this_00 = (COleControlSiteOrWnd *)0x0;
  }
  else {
    local_8 = this;
    if ((*(ushort *)(this + 0x3c) & 0x800) == 0) {
      uCmd = 5;
      pHVar2 = *(HWND *)(this + 0x20);
      while( true ) {
        pHVar2 = GetWindow(pHVar2,uCmd);
        this_01 = FromHandle(pHVar2);
        if (this_01 == (CWnd *)0x0) break;
        uVar6 = GetExStyle(this_01);
        if ((((uVar6 & 0x10000) != 0) && (uVar6 = GetExStyle(this_01), (uVar6 & 0x10000000) != 0))
           && (uVar6 = GetExStyle(this_01), (uVar6 & 0x8000000) == 0)) goto LAB_0045aeb8;
        pHVar2 = *(HWND *)(this_01 + 0x20);
        uCmd = 2;
      }
    }
    if (param_2 == 0) {
      local_c = (code *)&LAB_00454fcd;
      param_2 = (int)FUN_00454c41;
    }
    else {
      local_c = CPtrList::GetPrev;
      param_2 = (int)FUN_00460139;
    }
    local_8 = (CWnd *)(*(code *)param_2)();
joined_r0x0045ae63:
    do {
      if (local_8 == (CWnd *)0x0) goto LAB_0045aeb8;
      piVar3 = (int *)(*local_c)(&local_8);
      pCVar1 = (COleControlSiteOrWnd *)*piVar3;
      if (param_1 == (COleControlSiteOrWnd *)0x0) {
        if (*(int *)(pCVar1 + 4) == 0) {
          pHVar2 = *(HWND *)pCVar1;
        }
        else {
          pHVar2 = *(HWND *)(*(int *)(pCVar1 + 4) + 0x24);
        }
        if ((pHVar2 != (HWND)0x0) && (pHVar4 = GetFocus(), pHVar2 == pHVar4)) break;
        if (*(int *)(pCVar1 + 4) == 0) goto joined_r0x0045ae63;
        bVar7 = *(int *)(pCVar1 + 4) == *(int *)(*(int *)(this + 0x4c) + 0x70);
      }
      else {
        bVar7 = param_1 == pCVar1;
      }
    } while (!bVar7);
    if (pCVar1 == (COleControlSiteOrWnd *)0x0) {
LAB_0045aeb8:
      this_00 = (COleControlSiteOrWnd *)0x0;
    }
    else {
      do {
        if (local_8 == (CWnd *)0x0) {
          local_8 = (CWnd *)(*(code *)param_2)();
        }
        puVar5 = (undefined4 *)(*local_c)(&local_8);
        this_00 = (COleControlSiteOrWnd *)*puVar5;
        uVar6 = COleControlSiteOrWnd::GetStyle(this_00);
      } while ((this_00 != pCVar1) &&
              ((((uVar6 & 0x10000) == 0 || ((uVar6 & 0x8000000) != 0)) ||
               ((uVar6 & 0x10000000) == 0))));
    }
  }
  return this_00;
}

