// Address: 0x00472139
// Name: FUN_00472139
// Category: MFC_CRT


COleControlSiteOrWnd * FUN_00472139(CWnd *param_1,CWnd *param_2,tagMSG *param_3)

{
  COleControlSiteOrWnd *pCVar1;
  int iVar2;
  void **ppvVar3;
  HWND pHVar4;
  COleControlSiteOrWnd *pCVar5;
  int iVar6;
  BOOL BVar7;
  uint uVar8;
  COleControlSiteOrWnd *local_8;
  
  local_8 = (COleControlSiteOrWnd *)0x0;
  pCVar1 = _AfxFindSiteOrWnd(param_1,param_2);
  pCVar5 = pCVar1;
  if ((pCVar1 == (COleControlSiteOrWnd *)0x0) && (iVar2 = FUN_00454fc3((int)param_1), iVar2 != 0)) {
    param_2 = *(CWnd **)(iVar2 + 0x44);
    while (pCVar5 = pCVar1, param_2 != (CWnd *)0x0) {
      ppvVar3 = CPtrList::GetNext((CPtrList *)(iVar2 + 0x40),(__POSITION **)&param_2);
      pCVar5 = *ppvVar3;
      if (((*(int *)(pCVar5 + 4) != 0) && (*(int *)(pCVar5 + 4) == *(int *)(iVar2 + 0x70))) ||
         ((*(int *)pCVar5 != 0 && (pHVar4 = GetFocus(), *(HWND *)pCVar5 == pHVar4)))) break;
    }
  }
  iVar2 = 0;
  do {
    pCVar5 = _AfxFindNextMnem(param_1,pCVar5,param_3);
    if (pCVar5 == (COleControlSiteOrWnd *)0x0) {
      return (COleControlSiteOrWnd *)0x0;
    }
    iVar6 = COccManager::IsLabelControl(pCVar5);
    if ((iVar6 != 0) &&
       (pCVar5 = CWnd::GetNextDlgTabItem(param_1,pCVar5,0), pCVar5 == (COleControlSiteOrWnd *)0x0))
    {
      return (COleControlSiteOrWnd *)0x0;
    }
    if (pCVar5 == (COleControlSiteOrWnd *)0x0) {
LAB_004721f6:
      if (*(int *)(pCVar5 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      uVar8 = (**(code **)(**(int **)(pCVar5 + 4) + 0x78))();
      if ((uVar8 & 0x8000000) == 0) {
        return pCVar5;
      }
    }
    else {
      if (*(int *)(pCVar5 + 4) == 0) {
        pHVar4 = *(HWND *)pCVar5;
      }
      else {
        pHVar4 = *(HWND *)(*(int *)(pCVar5 + 4) + 0x24);
      }
      if (pHVar4 == (HWND)0x0) goto LAB_004721f6;
      BVar7 = IsWindowEnabled(pHVar4);
      if (BVar7 != 0) {
        return pCVar5;
      }
    }
    if (pCVar5 == local_8) {
      return (COleControlSiteOrWnd *)0x0;
    }
    if (local_8 == (COleControlSiteOrWnd *)0x0) {
      local_8 = pCVar5;
    }
    iVar2 = iVar2 + 1;
    if (0x1ff < iVar2) {
      return (COleControlSiteOrWnd *)0x0;
    }
  } while( true );
}

