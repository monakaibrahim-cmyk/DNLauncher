// Address: 0x0042d2a0
// Name: FUN_0042d2a0
// Category: Launcher


void __fastcall FUN_0042d2a0(undefined4 *param_1)

{
  *param_1 = TiXmlDeclaration::vftable;
  if (0xf < (uint)param_1[0x25]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  param_1[0x25] = 0xf;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (0xf < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x19]);
  }
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  if (0xf < (uint)param_1[0x17]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12]);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_0042d670(param_1);
  return;
}

