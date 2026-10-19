// Address: 0x0040e880
// Name: FUN_0040e880
// Category: Launcher


undefined4 * FUN_0040e880(undefined4 *param_1)

{
  CStringData *pCVar1;
  int *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498ccf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(*unaff_EDI + -0x10));
  *param_1 = pCVar1 + 0x10;
  local_4 = 0;
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(unaff_EDI[1] + -0x10));
  param_1[1] = pCVar1 + 0x10;
  local_4._0_1_ = 1;
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(unaff_EDI[2] + -0x10));
  param_1[2] = pCVar1 + 0x10;
  local_4._0_1_ = 2;
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(unaff_EDI[3] + -0x10));
  param_1[3] = pCVar1 + 0x10;
  local_4._0_1_ = 3;
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(unaff_EDI[4] + -0x10));
  param_1[4] = pCVar1 + 0x10;
  local_4._0_1_ = 4;
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(unaff_EDI[5] + -0x10));
  param_1[5] = pCVar1 + 0x10;
  local_4 = CONCAT31(local_4._1_3_,5);
  *(short *)(param_1 + 6) = (short)unaff_EDI[6];
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)unaff_EDI + 0x1a);
  *(short *)(param_1 + 7) = (short)unaff_EDI[7];
  FUN_0040eb00(unaff_EDI + 8,(int)(param_1 + 8));
  ExceptionList = local_c;
  return param_1;
}

