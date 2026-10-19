// Address: 0x004658c4
// Name: COccManager::CreateDlgControls
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COccManager::CreateDlgControls(class CWnd *,void *,struct
   _AFX_OCC_DIALOG_INFO *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
COccManager::CreateDlgControls
          (COccManager *this,CWnd *param_1,void *param_2,_AFX_OCC_DIALOG_INFO *param_3)

{
  ushort uVar1;
  ulong uVar2;
  DLGITEMTEMPLATE *pDVar3;
  HWND__ *hWnd;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  DLGTEMPLATE *unaff_EDI;
  short *psVar7;
  UINT uCmd;
  HWND__ *local_14;
  int local_10;
  HWND local_c;
  int local_8;
  
  psVar7 = param_2;
  if (*(int *)param_3 == 0) {
    local_8 = 1;
  }
  else {
    if (param_1 == (CWnd *)0x0) {
      local_c = (HWND)0x0;
    }
    else {
      local_c = *(HWND *)(param_1 + 0x20);
    }
    iVar4 = IsDialogEx(unaff_EDI);
    local_8 = 1;
    if (param_2 != (void *)0x0) {
      local_10 = *(int *)(param_3 + 4);
      param_3 = (_AFX_OCC_DIALOG_INFO *)0x0;
      param_2 = (void *)0x0;
      do {
        if (*psVar7 == 0) break;
        uVar1 = psVar7[1];
        uVar2 = *(ulong *)(psVar7 + 2);
        if ((((uVar1 == 0x376) || (uVar1 == 0x37a)) || (uVar1 == 0x377)) ||
           ((uVar1 == 0x37b || (uVar1 == 0x378)))) {
          while( true ) {
            pDVar3 = *(DLGITEMTEMPLATE **)(local_10 + (int)param_3 * 4);
            param_3 = param_3 + 1;
            if (pDVar3 != (DLGITEMTEMPLATE *)0x0) break;
            if (param_2 == (void *)0x0) {
              uCmd = 5;
              param_2 = local_c;
            }
            else {
              uCmd = 2;
            }
            param_2 = GetWindow(param_2,uCmd);
          }
          local_14 = (HWND)0x0;
          if ((pDVar3 == (DLGITEMTEMPLATE *)0xffffffff) ||
             (iVar5 = CreateDlgControl(this,param_1,param_2,iVar4,pDVar3,uVar1,(uchar *)(psVar7 + 4)
                                       ,uVar2,&local_14), hWnd = local_14, iVar5 == 0)) {
            local_8 = 0;
          }
          else if (local_14 != (HWND)0x0) {
            if (iVar4 != 0) {
              SetWindowContextHelpId(local_14,*(DWORD *)pDVar3);
            }
            pHVar6 = GetParent(hWnd);
            if (pHVar6 == local_c) {
              param_2 = hWnd;
            }
          }
        }
        psVar7 = (short *)((int)(psVar7 + 4) + uVar2);
      } while (local_8 != 0);
      if (local_8 == 0) {
        return 0;
      }
    }
    if (*(COleControlContainer **)(param_1 + 0x4c) != (COleControlContainer *)0x0) {
      COleControlContainer::FreezeAllEvents(*(COleControlContainer **)(param_1 + 0x4c),0);
    }
    BindControls(this,param_1);
  }
  return local_8;
}

