// Address: 0x0041ef90
// Name: FUN_0041ef90
// Category: Launcher


CDialog * FUN_0041ef90(void)

{
  CDialog *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a9da;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = FUN_00452728(0x5a48);
  local_4 = 0;
  if (pCVar1 != (CDialog *)0x0) {
    pCVar1 = FUN_00422800(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (CDialog *)0x0;
}

