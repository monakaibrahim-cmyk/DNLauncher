// Address: 0x00401000
// Name: FUN_00401000
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00401000(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00498108;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))(uVar1);
  DAT_004cbca4 = iVar3 + 0x10;
  DAT_004cbcac = 0;
  _DAT_004cbcb0 = 0;
  _DAT_004cbcb4 = 0;
  FUN_00401c20();
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)&DAT_004cbca4);
  ExceptionList = local_c;
  return &DAT_004cbca4;
}

