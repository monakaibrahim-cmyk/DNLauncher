// Address: 0x0045d63e
// Name: FUN_0045d63e
// Category: Utility


COleControlSite * __thiscall FUN_0045d63e(void *this,byte param_1)

{
  *(undefined ***)this = CHtmlControlSite::vftable;
  FUN_0046fc9f(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

