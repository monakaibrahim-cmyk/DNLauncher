// Address: 0x00404b50
// Name: FUN_00404b50
// Category: Launcher


undefined4 __fastcall FUN_00404b50(CWinApp *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  CDialog *pCVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *pwVar7;
  INITCOMMONCONTROLSEX local_14;
  undefined1 *local_c;
  
  psVar2 = *(short **)(param_1 + 0x48);
  if (psVar2 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    psVar4 = psVar2;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)(psVar2 + 1) >> 1;
  }
  FUN_00403520(&DAT_004cbcf4,psVar2,iVar3);
  FID_conflict_operator_(&DAT_004cbd9c,&DAT_004cbcf4);
  iVar3 = extraout_ECX;
  if (*(int *)(DAT_004cbcf4 + -0xc) != 0) {
    FUN_00405130();
    iVar3 = extraout_ECX_00;
  }
  FUN_00405f20(iVar3);
  DAT_004cbcf0 = FUN_00452728(4);
  if (DAT_004cbcf0 == (int *)0x0) {
    DAT_004cbcf0 = (int *)0x0;
  }
  else {
    *DAT_004cbcf0 = (int)CDnServiceModuleSG::vftable;
  }
  if (DAT_004cbcf0 != (int *)0x0) {
    iVar3 = (**(code **)(*DAT_004cbcf0 + 4))();
    if (iVar3 == 0) {
      DAT_004cbcd0 = 3;
      uVar5 = FUN_00404da0();
      return uVar5;
    }
  }
  DAT_004cbcd4 = OpenMutexA(0x1f0001,0,"Global\\___DN___");
  if (DAT_004cbcd4 == (HANDLE)0x0) {
    DAT_004cbcd4 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Global\\___DN___");
    local_14.dwSize = 8;
    local_14.dwICC = 0xff;
    InitCommonControlsEx(&local_14);
    CWinApp::InitInstance(param_1);
    AfxEnableControlContainer((COccManager *)0x0);
    FUN_00465a15((int)param_1);
    iVar3 = FUN_00404cc0();
    if (iVar3 != 0) {
      pCVar6 = FUN_0041ef90();
      *(CDialog **)(param_1 + 0x20) = pCVar6;
      (**(code **)(*(int *)pCVar6 + 0x144))();
      (**(code **)(*(int *)pCVar6 + 4))(1);
      return 0;
    }
  }
  else {
    FUN_0040a2b0();
    local_c = &stack0xffffffdc;
    pwVar7 = extraout_ECX_01;
    FUN_00416590(&stack0xffffffdc);
    FUN_00416510(pwVar7);
  }
  return 0;
}

