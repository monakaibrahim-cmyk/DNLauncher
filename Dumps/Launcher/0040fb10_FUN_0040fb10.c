// Address: 0x0040fb10
// Name: FUN_0040fb10
// Category: Launcher


undefined4 * __thiscall FUN_0040fb10(void *this,int *param_1,undefined4 *param_2)

{
  CStringData *pCVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00499a59;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; this != param_1; this = (void *)((int)this + 0x14)) {
    local_8 = 1;
    if (param_2 != (undefined4 *)0x0) {
      pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(*(int *)this + -0x10));
      *param_2 = pCVar1 + 0x10;
      local_8 = 2;
      FUN_0040ebe0((int *)((int)this + 4),(int)(param_2 + 1));
    }
    param_2 = param_2 + 5;
  }
  ExceptionList = local_10;
  return param_2;
}

