// Address: 0x00407190
// Name: FUN_00407190
// Category: Launcher


void __fastcall FUN_00407190(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049871b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = CDnOptionData::vftable;
  local_4 = 0;
  FUN_00407c70();
  if (param_1[0xb] != 0) {
    FUN_00408380(param_1[0xc]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xb]);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  ExceptionList = local_c;
  return;
}

