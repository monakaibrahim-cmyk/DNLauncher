// Address: 0x00419900
// Name: FUN_00419900
// Category: Launcher


void FUN_00419900(int param_1)

{
  undefined4 in_EAX;
  HCURSOR pHVar1;
  _AFX_THREAD_STATE *p_Var2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  LPSTR unaff_ESI;
  void *unaff_EDI;
  int in_stack_ffffffe4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  *(undefined4 *)((int)unaff_EDI + 0xe8) = in_EAX;
  *(undefined4 *)((int)unaff_EDI + 0xec) = 0;
  FUN_00419c40();
  AfxGetModuleState();
  pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  p_Var2 = AfxRegisterWndClass(0,pHVar1,(HBRUSH)0x0,(HICON)0x0);
  pHVar3 = GetParent(*(HWND *)(*(int *)((int)unaff_EDI + 0xe8) + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  iVar5 = CreateEx(unaff_EDI,0,p_Var2,&PTR_004b1080,0x5000020e,&local_18,(int)pCVar4,unaff_EDI,0);
  if (iVar5 == 0) {
    return;
  }
  *(uint *)((int)unaff_EDI + 0x54) = (uint)(local_10 - local_18 < local_c - local_14);
  if (*(int *)((int)unaff_EDI + 0xec) != 0) {
    FID_conflict_GetWindowTextA((HWND)((int)unaff_EDI + 0x68),unaff_ESI,in_stack_ffffffe4);
  }
  FUN_00419840(param_1);
  return;
}

