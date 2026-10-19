// Address: 0x00403a50
// Name: FUN_00403a50
// Category: Launcher


undefined4 __fastcall FUN_00403a50(CDialog *param_1)

{
  LPRECT ptVar1;
  int iVar2;
  
  CDialog::OnInitDialog(param_1);
  *(undefined4 *)(param_1 + 0xf4) = 0x1fe;
  *(undefined4 *)(param_1 + 0xf8) = 0x68;
  CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)&DAT_004ca858,0,0,0x1fe,0x68,0x16);
  ptVar1 = thunk_FUN_00452728(-(uint)((int)((ulonglong)*(uint *)(param_1 + 0xf0) * 0x10 >> 0x20) !=
                                     0) | (uint)((ulonglong)*(uint *)(param_1 + 0xf0) * 0x10));
  *(LPRECT *)(param_1 + 0xec) = ptVar1;
  if (ptVar1 == (LPRECT)0x0) {
    FUN_00418fd0(L"xml파일에서 컨트롤 정보 파싱 에러.");
    return 0;
  }
  iVar2 = FUN_00403b30(ptVar1,*(int *)(param_1 + 0xf0));
  if (iVar2 == -0x7fffbffb) {
    FUN_00418fd0(L"FirstPatch Control 셋팅 에러");
    FUN_00418f70(L"FirstPatchControlData Parsing Error");
    return 0;
  }
  FUN_00403ba0();
  SetTimer(*(HWND *)(param_1 + 0x20),1,0x28,(TIMERPROC)0x0);
  if (*(void **)(param_1 + 0xec) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xec));
  }
  return 1;
}

