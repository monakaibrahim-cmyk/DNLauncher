// Address: 0x00471fe8
// Name: _AfxFindNextMnem
// Category: MFC_CRT


/* Library Function - Single Match
    struct COleControlSiteOrWnd * __stdcall _AfxFindNextMnem(class CWnd *,struct
   COleControlSiteOrWnd *,struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

COleControlSiteOrWnd * _AfxFindNextMnem(CWnd *param_1,COleControlSiteOrWnd *param_2,tagMSG *param_3)

{
  CWnd *this;
  HWND__ *pHVar1;
  CWnd *pCVar2;
  COleControlSiteOrWnd *pCVar3;
  int iVar4;
  void **ppvVar5;
  int iVar6;
  HWND hWnd;
  BOOL BVar7;
  uint uVar8;
  COleControlSiteOrWnd *pCVar9;
  
  pCVar9 = param_2;
  this = param_1;
  if (param_1 != (CWnd *)0x0) {
    param_1 = (CWnd *)0x0;
    pCVar3 = pCVar9;
    if (param_2 != (COleControlSiteOrWnd *)0x0) {
      if (*(int *)(param_2 + 4) == 0) {
        pHVar1 = *(HWND__ **)param_2;
      }
      else {
        pHVar1 = *(HWND__ **)(*(int *)(param_2 + 4) + 0x24);
      }
      if (pHVar1 != (HWND__ *)0x0) {
        pCVar2 = CWnd::FromHandle(pHVar1);
        pCVar2 = _AfxGetChildControl(this,pCVar2);
        if (pCVar2 != (CWnd *)0x0) {
          pCVar3 = _AfxFindSiteOrWnd(this,pCVar2);
        }
      }
    }
    while (((pCVar3 = CWnd::GetNextDlgGroupItem(this,pCVar3), pCVar3 != (COleControlSiteOrWnd *)0x0
            && (param_1 = param_1 + 1, pCVar3 != pCVar9)) && ((int)param_1 < 0x3d))) {
      iVar4 = COccManager::IsMatchingMnemonic(pCVar3,param_3);
      if (iVar4 != 0) {
        return pCVar3;
      }
    }
    iVar4 = FUN_00454fc3((int)this);
    if (iVar4 != 0) {
      param_1 = *(CWnd **)(iVar4 + 0x44);
      if (pCVar9 == (COleControlSiteOrWnd *)0x0) {
        ppvVar5 = CPtrList::GetNext((CPtrList *)(iVar4 + 0x40),(__POSITION **)&param_1);
        pCVar3 = *ppvVar5;
        pCVar9 = pCVar3;
      }
      else {
        pCVar3 = (COleControlSiteOrWnd *)0x0;
        if (param_1 == (CWnd *)0x0) {
          return (COleControlSiteOrWnd *)0x0;
        }
        do {
          if (pCVar3 == pCVar9) break;
          ppvVar5 = CPtrList::GetNext((CPtrList *)(iVar4 + 0x40),(__POSITION **)&param_1);
          pCVar3 = *ppvVar5;
        } while (param_1 != (CWnd *)0x0);
      }
      if (((param_1 != (CWnd *)0x0) && (pCVar3 != (COleControlSiteOrWnd *)0x0)) &&
         (pCVar9 != (COleControlSiteOrWnd *)0x0)) {
        do {
          if (param_1 == (CWnd *)0x0) {
            param_1 = *(CWnd **)(iVar4 + 0x44);
          }
          ppvVar5 = CPtrList::GetNext((CPtrList *)(iVar4 + 0x40),(__POSITION **)&param_1);
          pCVar3 = *ppvVar5;
          iVar6 = COccManager::IsMatchingMnemonic(pCVar3,param_3);
          if (iVar6 != 0) {
            if (pCVar3 != (COleControlSiteOrWnd *)0x0) {
              if (*(int *)(pCVar3 + 4) == 0) {
                hWnd = *(HWND *)pCVar3;
              }
              else {
                hWnd = *(HWND *)(*(int *)(pCVar3 + 4) + 0x24);
              }
              if (hWnd != (HWND)0x0) {
                BVar7 = IsWindowEnabled(hWnd);
                if (BVar7 != 0) {
                  return pCVar3;
                }
                goto LAB_0047212c;
              }
            }
            if (*(int *)(pCVar3 + 4) == 0) goto LAB_00471ff5;
            uVar8 = (**(code **)(**(int **)(pCVar3 + 4) + 0x78))();
            if ((uVar8 & 0x8000000) == 0) {
              return pCVar3;
            }
          }
LAB_0047212c:
        } while (pCVar3 != pCVar9);
      }
    }
    return (COleControlSiteOrWnd *)0x0;
  }
LAB_00471ff5:
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

