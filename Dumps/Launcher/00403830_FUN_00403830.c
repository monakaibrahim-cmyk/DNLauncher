// Address: 0x00403830
// Name: FUN_00403830
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00403830(void)

{
  uint uVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498e83;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  CDialog::CDialog((CDialog *)&DAT_004cbda8,0x4272,(CWnd *)0x0);
  local_4 = 0;
  _DAT_004cbda8 = CDnFIrstPatchDlg::vftable;
  _DAT_004cbe1c = 0;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  _DAT_004cbe20 = (**(code **)(*piVar2 + 0xc))(uVar1);
  _DAT_004cbe20 = _DAT_004cbe20 + 0x10;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00419550((CWnd *)&DAT_004cbe24);
  _DAT_004cbe88 = 0;
  _DAT_004cbe90 = 0;
  _DAT_004cbe8c = CFont::vftable;
  _DAT_004cbe94 = 0;
  _DAT_004cbe98 = 2;
  _DAT_004cbe9c = 0;
  _DAT_004cbea0 = 0;
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)&DAT_004cbe20);
  ExceptionList = local_c;
  return &DAT_004cbda8;
}

