// Address: 0x0040e980
// Name: FUN_0040e980
// Category: Launcher


undefined4 * FUN_0040e980(undefined4 *param_1)

{
  CStringData *pCVar1;
  int *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00497a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(*unaff_EDI + -0x10));
  *param_1 = pCVar1 + 0x10;
  local_4 = 0;
  FUN_0040ebe0(unaff_EDI + 1,(int)(param_1 + 1));
  ExceptionList = local_c;
  return param_1;
}

