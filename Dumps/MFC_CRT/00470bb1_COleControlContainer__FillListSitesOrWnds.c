// Address: 0x00470bb1
// Name: COleControlContainer::FillListSitesOrWnds
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleControlContainer::FillListSitesOrWnds(struct
   _AFX_OCC_DIALOG_INFO *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
COleControlContainer::FillListSitesOrWnds(COleControlContainer *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  undefined4 uVar1;
  _AFX_OCC_DIALOG_INFO *p_Var2;
  int iVar3;
  void **ppvVar4;
  HWND pHVar5;
  HWND__ *pHVar6;
  COleControlSiteOrWnd *pCVar7;
  BOOL BVar8;
  UINT uCmd;
  uint local_18;
  __POSITION *local_14;
  __POSITION *local_10;
  HWND local_c;
  COleControlContainer *local_8;
  
  p_Var2 = param_1;
  if (param_1 == (_AFX_OCC_DIALOG_INFO *)0x0) {
    iVar3 = 0;
  }
  else {
    local_14 = *(__POSITION **)(this + 0x44);
    param_1 = (_AFX_OCC_DIALOG_INFO *)0x0;
    local_10 = local_14;
    local_8 = this;
    if (local_14 != (__POSITION *)0x0) {
      ppvVar4 = CPtrList::GetNext((CPtrList *)(this + 0x40),&local_10);
      param_1 = *ppvVar4;
    }
    local_c = (HWND)0x0;
    local_18 = 0;
    if (*(int *)(p_Var2 + 8) != 0) {
      do {
        if (((param_1 == (_AFX_OCC_DIALOG_INFO *)0x0) || (iVar3 = *(int *)(param_1 + 4), iVar3 == 0)
            ) || (*(int *)(iVar3 + 0x2c) != *(int *)(*(int *)(p_Var2 + 0xc) + local_18 * 8))) {
          iVar3 = local_18 * 8;
          if (*(int *)(iVar3 + *(int *)(p_Var2 + 0xc)) != 0) {
            if (local_c == (HWND)0x0) {
              pHVar5 = (HWND)0x0;
              if (*(int *)(this + 0x20) != 0) {
                pHVar5 = *(HWND *)(*(int *)(this + 0x20) + 0x20);
              }
              uCmd = 5;
            }
            else {
              uCmd = 2;
              pHVar5 = local_c;
            }
            pHVar5 = GetWindow(pHVar5,uCmd);
            pHVar6 = AfxGetDlgItemStartFromHWND(*(int *)(*(int *)(p_Var2 + 0xc) + iVar3),pHVar5);
            if (pHVar6 == (HWND__ *)0x0) {
              pHVar5 = (HWND)0x0;
              if (*(int *)(local_8 + 0x20) != 0) {
                pHVar5 = *(HWND *)(*(int *)(local_8 + 0x20) + 0x20);
              }
              pHVar6 = ::GetDlgItem(pHVar5,*(int *)(*(int *)(p_Var2 + 0xc) + iVar3));
            }
            pCVar7 = FUN_00452728(0xc);
            if (pCVar7 == (COleControlSiteOrWnd *)0x0) {
              pCVar7 = (COleControlSiteOrWnd *)0x0;
            }
            else {
              uVar1 = *(undefined4 *)(*(int *)(p_Var2 + 0xc) + 4 + iVar3);
              *(undefined4 *)(pCVar7 + 4) = 0;
              *(undefined4 *)(pCVar7 + 8) = uVar1;
              *(HWND__ **)pCVar7 = pHVar6;
            }
            BVar8 = IsWindow(*(HWND *)pCVar7);
            this = local_8;
            if (BVar8 != 0) {
              local_c = *(HWND *)pCVar7;
              if (local_14 == (__POSITION *)0x0) {
                CTypedPtrList<CPtrList,COleControlSiteOrWnd*>::TransferAddTail
                          ((CTypedPtrList<CPtrList,COleControlSiteOrWnd*> *)(local_8 + 0x40),pCVar7)
                ;
                this = local_8;
              }
              else {
                _CTypedPtrList<CPtrList,COleControlSiteOrWnd*>::TransferInsertBefore
                          ((_CTypedPtrList<CPtrList,COleControlSiteOrWnd*> *)(local_8 + 0x40),
                           local_14,pCVar7);
                this = local_8;
              }
            }
          }
        }
        else {
          if (*(HWND *)(iVar3 + 0x24) != (HWND)0x0) {
            local_c = *(HWND *)(iVar3 + 0x24);
          }
          local_14 = local_10;
          if (local_10 == (__POSITION *)0x0) {
            param_1 = (_AFX_OCC_DIALOG_INFO *)0x0;
          }
          else {
            ppvVar4 = CPtrList::GetNext((CPtrList *)(this + 0x40),&local_10);
            param_1 = *ppvVar4;
          }
        }
        local_18 = local_18 + 1;
      } while (local_18 < *(uint *)(p_Var2 + 8));
    }
    iVar3 = 1;
  }
  return iVar3;
}

