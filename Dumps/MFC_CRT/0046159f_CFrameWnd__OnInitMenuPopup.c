// Address: 0x0046159f
// Name: CFrameWnd::OnInitMenuPopup
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnInitMenuPopup(class CMenu *,unsigned int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnInitMenuPopup(CFrameWnd *this,CMenu *param_1,uint param_2,int param_3)

{
  int iVar1;
  _AFX_THREAD_STATE *p_Var2;
  HMENU pHVar3;
  CWnd *pCVar4;
  HMENU pHVar5;
  uint uVar6;
  UINT UVar7;
  int nPos;
  CCmdUI local_30 [4];
  UINT local_2c;
  uint local_28;
  CMenu *local_24;
  CMenu *local_20;
  uint local_10;
  CMenu *local_c;
  CFrameWnd *local_8;
  
  local_8 = this;
  AfxCancelModes(*(HWND__ **)(this + 0x20));
  if ((param_3 == 0) &&
     ((*(int *)(this + 0x80) == 0 ||
      (iVar1 = (**(code **)(**(int **)(this + 0x80) + 0x74))(param_1,param_2,0), iVar1 == 0)))) {
    if (param_1 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    CCmdUI::CCmdUI(local_30);
    local_24 = param_1;
    p_Var2 = AfxGetThreadState();
    if (*(int *)(p_Var2 + 0x78) == *(int *)(param_1 + 4)) {
      local_c = param_1;
    }
    else {
      pHVar3 = GetMenu(*(HWND *)(this + 0x20));
      if (((pHVar3 != (HMENU)0x0) &&
          (pCVar4 = CWnd::GetTopLevelParent((CWnd *)this), pCVar4 != (CWnd *)0x0)) &&
         (pHVar3 = GetMenu(*(HWND *)(pCVar4 + 0x20)), pHVar3 != (HMENU)0x0)) {
        iVar1 = GetMenuItemCount(pHVar3);
        nPos = 0;
        this = local_8;
        if (0 < iVar1) {
          do {
            pHVar5 = GetSubMenu(pHVar3,nPos);
            if (pHVar5 == *(HMENU *)(param_1 + 4)) {
              local_c = CMenu::FromHandle(pHVar3);
              this = local_8;
              break;
            }
            nPos = nPos + 1;
            this = local_8;
          } while (nPos < iVar1);
        }
      }
    }
    local_10 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
    local_28 = 0;
    if (local_10 != 0) {
      do {
        local_2c = GetMenuItemID(*(HMENU *)(param_1 + 4),local_28);
        uVar6 = local_10;
        if (local_2c != 0) {
          if (local_2c == 0xffffffff) {
            local_20 = CMenu::GetSubMenu(param_1,local_28);
            uVar6 = local_10;
            if (((local_20 == (CMenu *)0x0) ||
                (local_2c = GetMenuItemID(*(HMENU *)(local_20 + 4),0), uVar6 = local_10,
                local_2c == 0)) || (local_2c == 0xffffffff)) goto LAB_00461712;
            iVar1 = 0;
          }
          else {
            local_20 = (CMenu *)0x0;
            if ((*(int *)(this + 0x54) == 0) || (0xefff < local_2c)) {
              iVar1 = 0;
            }
            else {
              iVar1 = 1;
            }
          }
          CCmdUI::DoUpdate(local_30,(CCmdTarget *)this,iVar1);
          uVar6 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
          this = local_8;
          if (uVar6 < local_10) {
            local_28 = local_28 + (uVar6 - local_10);
            while ((this = local_8, local_28 < uVar6 &&
                   (UVar7 = GetMenuItemID(*(HMENU *)(param_1 + 4),local_28), this = local_8,
                   UVar7 == local_2c))) {
              local_28 = local_28 + 1;
            }
          }
        }
LAB_00461712:
        local_10 = uVar6;
        local_28 = local_28 + 1;
      } while (local_28 < local_10);
    }
  }
  return;
}

