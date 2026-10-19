// Address: 0x00416590
// Name: FUN_00416590
// Category: Launcher


void * __cdecl FUN_00416590(void *param_1)

{
  HMODULE pHVar1;
  uint unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004982c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_004035c0(param_1,(short *)&PTR_004b1080);
  local_4 = 0;
  if (unaff_EDI != 0) {
    pHVar1 = (HMODULE)FUN_00452b55();
    if (pHVar1 != (HMODULE)0x0) {
      FUN_00402fa0(param_1,pHVar1,unaff_EDI);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

