// Address: 0x00467ccd
// Name: FUN_00467ccd
// Category: MFC_CRT


CPtrList * __thiscall FUN_00467ccd(void *this,byte param_1)

{
  *(undefined ***)this = CPtrList::vftable;
  CPtrList::RemoveAll(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

