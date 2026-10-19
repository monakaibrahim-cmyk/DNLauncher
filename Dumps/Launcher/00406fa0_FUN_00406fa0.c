// Address: 0x00406fa0
// Name: FUN_00406fa0
// Category: Launcher


undefined4 * __thiscall FUN_00406fa0(void *this,int *param_1,undefined4 *param_2)

{
  CStringData *pCVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00498061;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; this != param_1; this = (void *)((int)this + 4)) {
    local_8 = 1;
    if (param_2 != (undefined4 *)0x0) {
      pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(*(int *)this + -0x10));
      *param_2 = pCVar1 + 0x10;
    }
    param_2 = param_2 + 1;
  }
  ExceptionList = local_10;
  return param_2;
}

