// Address: 0x00418ef0
// Name: FUN_00418ef0
// Category: Launcher


undefined1 * FUN_00418ef0(void)

{
  void *pvVar1;
  undefined1 auStackY_100 [224];
  undefined4 uStackY_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498b2b;
  local_c = ExceptionList;
  if (DAT_004cbcec != 0) {
    return auStackY_100;
  }
  uStackY_20 = 0x418f38;
  ExceptionList = &local_c;
  pvVar1 = FUN_00452728(0x4014);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_004cbcec = 0;
  }
  else {
    DAT_004cbcec = FUN_004185b0();
  }
  ExceptionList = local_c;
  return (undefined1 *)CONCAT31((int3)((uint)DAT_004cbcec >> 8),1);
}

