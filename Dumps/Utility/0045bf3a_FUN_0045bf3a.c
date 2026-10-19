// Address: 0x0045bf3a
// Name: FUN_0045bf3a
// Category: Utility


CDC * __thiscall FUN_0045bf3a(void *this,byte param_1)

{
  CDC::~CDC(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

