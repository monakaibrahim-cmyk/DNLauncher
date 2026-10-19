// Address: 0x0047222f
// Name: FUN_0047222f
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

BOOL FUN_0047222f(CWnd *param_1,LPMSG param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  SHORT SVar4;
  HWND pHVar5;
  CWnd *this;
  HWND pHVar6;
  CWnd *pCVar7;
  CWnd *pCVar8;
  int iVar9;
  ulong uVar10;
  COleControlSiteOrWnd *pCVar11;
  BOOL BVar12;
  CWnd *this_00;
  HWND local_30;
  int local_2c;
  ulong local_28;
  BOOL in_stack_ffffffe4;
  BOOL BVar13;
  
  if (param_1 == (CWnd *)0x0) {
    local_30 = (HWND)0x0;
  }
  else {
    local_30 = *(HWND *)(param_1 + 0x20);
  }
  uVar3 = param_2->message;
  pHVar5 = GetFocus();
  this = CWnd::FromHandle(pHVar5);
  if ((((0xff < uVar3) && (uVar3 < 0x10a)) || (uVar3 - 0x200 < 10)) &&
     (pCVar8 = this, this != (CWnd *)0x0)) {
    do {
      if (*(int *)(pCVar8 + 0x50) != 0) break;
      pHVar6 = GetParent(*(HWND *)(pCVar8 + 0x20));
      pCVar7 = CWnd::FromHandle(pHVar6);
      if (pCVar7 == param_1) break;
      pHVar6 = GetParent(*(HWND *)(pCVar8 + 0x20));
      pCVar8 = CWnd::FromHandle(pHVar6);
    } while (pCVar8 != (CWnd *)0x0);
    if (((pCVar8 != (CWnd *)0x0) && (iVar9 = *(int *)(pCVar8 + 0x50), iVar9 != 0)) &&
       ((*(int *)(iVar9 + 0x58) != 0 &&
        (iVar9 = (**(code **)(**(int **)(iVar9 + 0x58) + 0x14))(*(int **)(iVar9 + 0x58),param_2),
        iVar9 == 0)))) {
      return in_stack_ffffffe4;
    }
    if ((((uVar3 == 0x101) || (uVar3 == 0x100)) || (uVar3 == 0x102)) &&
       ((pCVar8 != (CWnd *)0x0 && (iVar9 = *(int *)(pCVar8 + 0x50), iVar9 != 0)))) {
      sVar1 = (short)param_2->wParam;
      if ((sVar1 == 0xd) && ((*(byte *)(iVar9 + 0x84) & 1) != 0)) {
        return in_stack_ffffffe4;
      }
      if ((sVar1 == 0x1b) && ((*(byte *)(iVar9 + 0x84) & 2) != 0)) {
        return in_stack_ffffffe4;
      }
    }
  }
  pCVar8 = (CWnd *)0x0;
  BVar13 = 0;
  pCVar7 = CWnd::FromHandle(param_2->hwnd);
  local_2c = 0;
  local_28 = 2;
  if (uVar3 == 0x100) {
    uVar10 = _AfxGetDlgCode(pCVar7,param_2);
    uVar2 = (ushort)param_2->wParam;
    if (uVar2 < 0x1c) {
      if ((uVar2 == 0x1b) || (uVar2 == 3)) {
LAB_00472582:
        pCVar8 = _AfxFindDlgItem(param_1,local_28);
        if (pCVar8 != (CWnd *)0x0) {
LAB_00472597:
          iVar9 = CWnd::IsWindowEnabled(pCVar8);
          if (iVar9 == 0) {
            MessageBeep(0);
          }
          else if (*(int *)(pCVar8 + 0x50) != 0) {
            CWnd::InvokeHelper(this_00,(long)pCVar8,0xfdd9,1,(void *)0x0,(uchar *)0x0,0);
            goto LAB_00472691;
          }
        }
      }
      else if (uVar2 == 9) {
        if ((uVar10 & 2) == 0) {
          SVar4 = GetKeyState(0x10);
          pCVar11 = CWnd::GetNextDlgTabItem(param_1,(COleControlSiteOrWnd *)0x0,(uint)(SVar4 < 0));
          if (pCVar11 != (COleControlSiteOrWnd *)0x0) {
            if (*(int *)(pCVar11 + 4) == 0) {
              if (*(HWND__ **)pCVar11 == (HWND__ *)0x0) {
                pCVar8 = (CWnd *)FUN_00459c1b(param_1,(int)pCVar7,(uint)(SVar4 < 0));
              }
              else {
                pCVar8 = CWnd::FromHandle(*(HWND__ **)pCVar11);
              }
              if (pCVar8 != (CWnd *)0x0) {
                *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x70) = 0;
                _AfxDlgSetFocus(pCVar8);
                COccManager::UIDeactivateIfNecessary(this,pCVar8);
              }
            }
            else {
              (**(code **)(**(int **)(pCVar11 + 4) + 0xac))(param_2);
            }
            goto LAB_00472691;
          }
        }
      }
      else if (uVar2 == 0xd) {
LAB_0047254c:
        if ((uVar10 & 4) == 0) {
          uVar10 = COccManager::GetDefBtnCode(this);
          if ((uVar10 & 0x10) == 0) {
            local_28 = _AfxOriginalDefButton(param_1);
          }
          else {
            local_28 = CWnd::GetDlgCtrlID(this);
            pCVar8 = this;
          }
          if (pCVar8 == (CWnd *)0x0) goto LAB_00472582;
          goto LAB_00472597;
        }
      }
    }
    else if (0x24 < uVar2) {
      if (uVar2 < 0x27) {
        local_2c = 1;
      }
      else if (0x28 < uVar2) {
        if (uVar2 == 0x2b) goto LAB_0047254c;
        goto LAB_00472412;
      }
      uVar10 = _AfxGetDlgCode(this,param_2);
      if ((uVar10 & 1) == 0) {
        if (local_2c == 0) {
          pCVar11 = CWnd::GetNextDlgGroupItem(param_1,(COleControlSiteOrWnd *)0x0);
        }
        else {
          pCVar11 = CWnd::GetPrevDlgGroupItem(param_1,(COleControlSiteOrWnd *)0x0);
        }
        if (pCVar11 != (COleControlSiteOrWnd *)0x0) {
          if (*(int *)(pCVar11 + 8) != 0) {
            CWnd::RemoveRadioCheckFromGroup(param_1,pCVar11);
          }
          if (*(int *)(pCVar11 + 4) == 0) {
            if (*(HWND__ **)pCVar11 == (HWND__ *)0x0) {
              pCVar8 = (CWnd *)FUN_00471b04(param_1,(int)this,local_2c);
            }
            else {
              pCVar8 = CWnd::FromHandle(*(HWND__ **)pCVar11);
            }
            if (pCVar8 == (CWnd *)0x0) goto LAB_00472412;
            *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x70) = 0;
            _AfxDlgSetFocus(pCVar8);
            if (*(int *)(pCVar11 + 8) != 0) {
              SendMessageW(*(HWND *)(pCVar8 + 0x20),0xf1,1,0);
            }
          }
          else {
            (**(code **)(**(int **)(pCVar11 + 4) + 0xac))(param_2);
          }
LAB_00472691:
          BVar13 = 1;
          goto LAB_00472452;
        }
      }
    }
  }
  else if ((((uVar3 == 0x102) ||
            ((uVar3 == 0x106 &&
             (((this != (CWnd *)0x0 || (SVar4 = GetKeyState(0x12), SVar4 < 0)) &&
              ((short)param_2->wParam != 0x20)))))) &&
           ((uVar10 = _AfxGetDlgCode(pCVar7,param_2), uVar3 != 0x102 || ((uVar10 & 0x84) == 0)))) &&
          ((sVar1 = (short)param_2->wParam, sVar1 != 9 || ((uVar10 & 2) == 0)))) {
    if (sVar1 == 0x20) {
      return 0;
    }
    pCVar11 = FUN_00472139(param_1,pCVar7,param_2);
    if ((pCVar11 != (COleControlSiteOrWnd *)0x0) &&
       (*(COleControlSite **)(pCVar11 + 4) != (COleControlSite *)0x0)) {
      COleControlSite::SendMnemonic(*(COleControlSite **)(pCVar11 + 4),param_2);
      goto LAB_00472691;
    }
  }
LAB_00472412:
  if (((*(ushort *)(param_1 + 0x3c) & 0x1000) == 0) &&
     (BVar13 = IsDialogMessageW(*(HWND *)(param_1 + 0x20),param_2), BVar13 != 0)) {
    pHVar6 = GetFocus();
    pCVar8 = CWnd::FromHandle(pHVar6);
    if (pCVar8 != this) {
      pHVar6 = GetFocus();
      pCVar8 = CWnd::FromHandle(pHVar6);
      COccManager::UIActivateControl(pCVar8);
    }
  }
LAB_00472452:
  BVar12 = IsWindow(pHVar5);
  if (BVar12 != 0) {
    pHVar5 = GetFocus();
    pCVar8 = CWnd::FromHandle(pHVar5);
    COccManager::UIDeactivateIfNecessary(this,pCVar8);
    BVar12 = IsWindow(local_30);
    if (BVar12 != 0) {
      pHVar5 = GetFocus();
      pCVar8 = CWnd::FromHandle(pHVar5);
      _AfxCheckDefPushButton(param_1,this,pCVar8);
    }
  }
  return BVar13;
}

