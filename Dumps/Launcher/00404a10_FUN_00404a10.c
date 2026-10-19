// Address: 0x00404a10
// Name: FUN_00404a10
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404a10(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWinApp::CWinApp((CWinApp *)&DAT_004cbcf8,(wchar_t *)0x0);
  local_4 = 0;
  _DAT_004cbcf8 = CDnLauncherApp::vftable;
  FUN_00405510();
  FUN_00405cc0();
  ExceptionList = local_c;
  return &DAT_004cbcf8;
}

