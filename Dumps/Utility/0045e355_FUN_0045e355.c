// Address: 0x0045e355
// Name: FUN_0045e355
// Category: Utility


CScrollView * __thiscall FUN_0045e355(void *this,byte param_1)

{
  FUN_0045e228(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

