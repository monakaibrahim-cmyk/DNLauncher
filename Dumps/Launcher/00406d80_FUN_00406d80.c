// Address: 0x00406d80
// Name: FUN_00406d80
// Category: Launcher


void __thiscall FUN_00406d80(void *this,undefined4 *param_1,int *param_2)

{
  CStringData *pCVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00497bf1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; this != (void *)0x0; this = (void *)((int)this + -1)) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(*param_2 + -0x10));
      *param_1 = pCVar1 + 0x10;
    }
    param_1 = param_1 + 1;
  }
  ExceptionList = local_10;
  return;
}

