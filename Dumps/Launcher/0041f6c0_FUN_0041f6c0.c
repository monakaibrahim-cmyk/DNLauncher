// Address: 0x0041f6c0
// Name: FUN_0041f6c0
// Category: Launcher


undefined4 __fastcall FUN_0041f6c0(CFrameWnd *param_1)

{
  int *piVar1;
  CWnd *pCVar2;
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00418fd0(L"InitWebpage");
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = 0;
  local_14 = &PTR_s_CDnView_004ac400;
  pCVar2 = CFrameWnd::CreateView(param_1,(CCreateContext *)&local_14,0xe900);
  if (pCVar2 != (CWnd *)0x0) {
    CWnd::ShowWindow(pCVar2,5);
    local_10 = 0;
    local_14 = &PTR_s_CDnHtmlView_004ac43c;
    pCVar2 = CFrameWnd::CreateView(param_1,(CCreateContext *)&local_14,0xe900);
    *(CWnd **)(param_1 + 0x44d0) = pCVar2;
    if (pCVar2 != (CWnd *)0x0) {
      CWnd::ShowWindow(pCVar2,5);
      piVar1 = *(int **)(param_1 + 0x88);
      CWnd::MoveWindow(*(CWnd **)(param_1 + 0x44d0),*piVar1,piVar1[1],piVar1[2] - *piVar1,
                       piVar1[3] - piVar1[1],1);
      return 1;
    }
  }
  return 0;
}

