// Address: 0x0042d230
// Name: FUN_0042d230
// Category: Launcher


undefined4 * __thiscall FUN_0042d230(void *this,byte param_1)

{
  *(undefined ***)this = TiXmlText::vftable;
  FUN_0042d670(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

