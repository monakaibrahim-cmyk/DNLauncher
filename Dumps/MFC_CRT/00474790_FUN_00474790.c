// Address: 0x00474790
// Name: FUN_00474790
// Category: MFC_CRT


undefined4 * __thiscall FUN_00474790(void *this,byte param_1)

{
  FUN_00474765(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

