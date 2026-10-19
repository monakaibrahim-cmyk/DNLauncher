// Address: 0x00472c82
// Name: FUN_00472c82
// Category: MFC_CRT


undefined4 * __thiscall FUN_00472c82(void *this,byte param_1)

{
  *(undefined ***)this = CMapStringToPtr::vftable;
  FUN_00472c1b((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

