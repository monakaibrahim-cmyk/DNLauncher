// Address: 0x004713f5
// Name: FUN_004713f5
// Category: MFC_CRT


undefined4 * __thiscall FUN_004713f5(void *this,byte param_1)

{
  FUN_00471242(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

