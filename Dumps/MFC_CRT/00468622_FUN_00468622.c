// Address: 0x00468622
// Name: FUN_00468622
// Category: MFC_CRT


undefined4 * __thiscall FUN_00468622(void *this,byte param_1)

{
  *(undefined ***)this = CArchiveException::vftable;
  FUN_004031b0((undefined4 *)(*(int *)((int)this + 0xc) + -0x10));
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

