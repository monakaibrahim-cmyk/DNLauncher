// Address: 0x00409d50
// Name: FUN_00409d50
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00409d50(void)

{
  uint uVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00499a1a;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  _DAT_004cc198 = CDnPatchInfo::vftable;
  _DAT_004cc19c = 0;
  _DAT_004cc1a4 = 0;
  _DAT_004cc1a8 = 0;
  _DAT_004cc1ac = 0;
  _DAT_004cc1b4 = 0;
  _DAT_004cc1b8 = 0;
  _DAT_004cc1bc = 0;
  local_4 = 1;
  uStack_3 = 0;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc1c0 = (**(code **)(*piVar2 + 0xc))(uVar1);
  _DAT_004cc1c0 = _DAT_004cc1c0 + 0x10;
  local_4 = 2;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc1c4 = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc1c4 = _DAT_004cc1c4 + 0x10;
  local_4 = 3;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc1c8 = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc1c8 = _DAT_004cc1c8 + 0x10;
  local_4 = 4;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc1cc = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc1cc = _DAT_004cc1cc + 0x10;
  local_4 = 5;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc1d0 = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc1d0 = _DAT_004cc1d0 + 0x10;
  _DAT_004cc1d8 = 0;
  _DAT_004cc1dc = 0;
  _DAT_004cc1e0 = 0;
  local_4 = 7;
  _DAT_004cc1e4 = 0xffffffff;
  _DAT_004cc1e8 = 0xffffffff;
  DAT_004cc1ec = 0;
  _DAT_004cc1f0 = 0xffffffff;
  DAT_004cc1f4 = 0;
  _DAT_004cc1f8 = 0;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc1fc = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc1fc = _DAT_004cc1fc + 0x10;
  local_4 = 8;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc200 = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc200 = _DAT_004cc200 + 0x10;
  local_4 = 9;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc204 = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc204 = _DAT_004cc204 + 0x10;
  local_4 = 10;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc208 = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc208 = _DAT_004cc208 + 0x10;
  local_4 = 0xb;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc20c = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc20c = _DAT_004cc20c + 0x10;
  local_4 = 0xc;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc210 = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc210 = _DAT_004cc210 + 0x10;
  _local_4 = CONCAT31(uStack_3,0xd);
  _DAT_004cc214 = FUN_0040d680();
  ExceptionList = local_c;
  return &DAT_004cc198;
}

