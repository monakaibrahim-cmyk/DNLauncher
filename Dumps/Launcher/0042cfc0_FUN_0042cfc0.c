// Address: 0x0042cfc0
// Name: FUN_0042cfc0
// Category: Launcher


undefined4 * __thiscall FUN_0042cfc0(void *this,byte param_1)

{
  *(undefined ***)this = TiXmlBase::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

