// Address: 0x004082e0
// Name: FUN_004082e0
// Category: Launcher


void __fastcall FUN_004082e0(undefined4 param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00498031;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_00408150(param_3);
    }
    param_3 = (void *)((int)param_3 + 0x38);
  }
  ExceptionList = local_10;
  return;
}

