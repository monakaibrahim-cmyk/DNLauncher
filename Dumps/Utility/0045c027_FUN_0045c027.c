// Address: 0x0045c027
// Name: FUN_0045c027
// Category: Utility


CPaintDC * __thiscall FUN_0045c027(void *this,byte param_1)

{
  CPaintDC::~CPaintDC(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

