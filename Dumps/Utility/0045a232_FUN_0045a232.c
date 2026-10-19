// Address: 0x0045a232
// Name: FUN_0045a232
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_0045a232(CDialog *param_1)

{
  bool bVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  HWND__ *hWnd;
  HWND pHVar3;
  BOOL BVar4;
  CWnd *pCVar5;
  int iVar6;
  undefined3 extraout_var;
  ulong uVar7;
  undefined4 uVar8;
  HINSTANCE hModule;
  ulong uVar9;
  LPCDLGTEMPLATEW local_20;
  HGLOBAL local_1c;
  
  local_20 = *(LPCDLGTEMPLATEW *)(param_1 + 0x60);
  local_1c = *(HGLOBAL *)(param_1 + 0x5c);
  pAVar2 = AfxGetModuleState();
  hModule = *(HINSTANCE *)(pAVar2 + 0xc);
  if (*(int *)(param_1 + 0x58) != 0) {
    pAVar2 = AfxGetModuleState();
    hModule = *(HINSTANCE *)(pAVar2 + 0xc);
    hResInfo = FindResourceW(hModule,*(LPCWSTR *)(param_1 + 0x58),(LPCWSTR)0x5);
    local_1c = LoadResource(hModule,hResInfo);
  }
  if (local_1c != (HGLOBAL)0x0) {
    local_20 = LockResource(local_1c);
  }
  if (local_20 == (LPCDLGTEMPLATEW)0x0) {
    return 0xffffffff;
  }
  hWnd = CDialog::PreModal(param_1);
  AfxUnhookWindowCreate();
  if (hWnd != (HWND__ *)0x0) {
    pHVar3 = GetDesktopWindow();
    if (hWnd != pHVar3) {
      BVar4 = IsWindowEnabled(hWnd);
      if (BVar4 != 0) {
        EnableWindow(hWnd,0);
        pCVar5 = (CWnd *)FUN_0041c6c0();
        if (pCVar5 != (CWnd *)0x0) {
          iVar6 = (**(code **)(*(int *)pCVar5 + 0x120))();
          if (iVar6 != 0) {
            iVar6 = CWnd::IsWindowEnabled(pCVar5);
            if (iVar6 != 0) {
              CWnd::EnableWindow(pCVar5,0);
            }
          }
        }
      }
    }
  }
  AfxHookWindowCreate((CWnd *)param_1);
  pCVar5 = CWnd::FromHandle(hWnd);
  bVar1 = FUN_0045a03a(param_1,local_20,(int)pCVar5,hModule);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (((byte)param_1[0x3c] & 0x10) != 0) {
      uVar9 = 4;
      uVar7 = CWnd::GetExStyle((CWnd *)param_1);
      if ((uVar7 & 0x100) != 0) {
        uVar9 = 5;
      }
      CWnd::RunModalLoop((CWnd *)param_1,uVar9);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,0,0,0,0,0x97);
    }
  }
  uVar8 = FUN_0045a3a1();
  return uVar8;
}

