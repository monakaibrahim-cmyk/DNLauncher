// Address: 0x004371e0
// Name: FUN_004371e0
// Category: Utility


void __fastcall FUN_004371e0(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00495fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = CxImageJPG::vftable;
  _Memory = (undefined4 *)param_1[0x6f];
  local_4 = 0;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00437c60(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  *param_1 = CxImage::vftable;
  FUN_00434a90((int)param_1);
  FUN_004349e0((int)param_1);
  ExceptionList = local_c;
  return;
}

