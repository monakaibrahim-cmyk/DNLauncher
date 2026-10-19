// Address: 0x00404100
// Name: FUN_00404100
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404100(void)

{
  uint uVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004980ac;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  _DAT_004cc150 = DnFirstPatchInfo::vftable;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc154 = (**(code **)(*piVar2 + 0xc))(uVar1);
  _DAT_004cc154 = _DAT_004cc154 + 0x10;
  uStack_4 = 0;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cc158 = (**(code **)(*piVar2 + 0xc))();
  _DAT_004cc158 = _DAT_004cc158 + 0x10;
  _DAT_004cc160 = 0;
  _DAT_004cc164 = 0;
  _DAT_004cc168 = 0;
  _DAT_004cc170 = 0;
  _DAT_004cc174 = 0;
  _DAT_004cc178 = 0;
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  _DAT_004cc18c = 3;
  _DAT_004cc17c = 0;
  _DAT_004cc180 = 0;
  DAT_004cc184 = 0;
  _DAT_004cc188 = 0;
  FUN_00404410();
  FUN_00404410();
  ExceptionList = local_c;
  return &DAT_004cc150;
}

