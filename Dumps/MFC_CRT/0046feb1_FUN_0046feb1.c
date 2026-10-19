// Address: 0x0046feb1
// Name: FUN_0046feb1
// Category: MFC_CRT


COleControlSite * __thiscall FUN_0046feb1(void *this,byte param_1)

{
  FUN_0046fc9f(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

