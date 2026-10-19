// Address: 0x0040f020
// Name: FUN_0040f020
// Category: Launcher


void __fastcall FUN_0040f020(int *param_1,int param_2,undefined4 *param_3)

{
  CStringData *pCVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00498641;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(*param_1 + -0x10));
      *param_3 = pCVar1 + 0x10;
      *(short *)(param_3 + 1) = (short)param_1[1];
    }
    param_3 = param_3 + 2;
  }
  ExceptionList = local_10;
  return;
}

