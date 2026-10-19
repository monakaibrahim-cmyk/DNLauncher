// Address: 0x004731dc
// Name: FUN_004731dc
// Category: MFC_CRT


undefined4 * __thiscall FUN_004731dc(void *this,byte param_1)

{
  FUN_00473163(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

