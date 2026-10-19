// Address: 0x00410530
// Name: FUN_00410530
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00410530(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  _DAT_004cbed0 = 0;
  DAT_004cbea8 = iVar2 + 0x10;
  DAT_004cbeb0 = 0;
  DAT_004cbeb4 = 0;
  DAT_004cbeb8 = 0;
  DAT_004cbebc = 0;
  DAT_004cbec0 = 0;
  DAT_004cbec4 = 0;
  DAT_004cbec8 = 0;
  DAT_004cbecc = 0;
  return &DAT_004cbea8;
}

