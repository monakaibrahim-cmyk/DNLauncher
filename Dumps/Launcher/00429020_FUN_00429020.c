// Address: 0x00429020
// Name: FUN_00429020
// Category: Launcher


void __fastcall FUN_00429020(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00498f67;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = CEtPackingFile::vftable;
  local_4 = 3;
  FUN_00429370(param_1,(int)param_1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0042bae0();
  if ((void *)param_1[0xa9] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa9]);
  }
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  if ((void *)param_1[0xa5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa5]);
  }
  if ((void *)param_1[0x95] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x95]);
  }
  ExceptionList = local_c;
  return;
}

