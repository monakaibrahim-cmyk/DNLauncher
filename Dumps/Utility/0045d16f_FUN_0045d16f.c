// Address: 0x0045d16f
// Name: FUN_0045d16f
// Category: Utility


CImageList * __thiscall FUN_0045d16f(void *this,byte param_1)

{
  FUN_0045d076(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

