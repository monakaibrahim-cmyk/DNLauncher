// Address: 0x0046013d
// Name: FUN_0046013d
// Category: MFC_CRT


undefined4 * __thiscall FUN_0046013d(void *this,byte param_1)

{
  *(undefined ***)this = ATL::CFixedStringMgr::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

