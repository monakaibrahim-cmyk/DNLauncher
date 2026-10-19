// Address: 0x00467abc
// Name: FUN_00467abc
// Category: MFC_CRT


undefined4 * __thiscall FUN_00467abc(void *this,byte param_1)

{
  *(undefined ***)this = CMapPtrToPtr::vftable;
  FUN_00467839((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

