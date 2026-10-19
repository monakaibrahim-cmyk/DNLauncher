// Address: 0x004196d0
// Name: FUN_004196d0
// Category: Launcher


CGdiObject * __thiscall FUN_004196d0(void *this,byte param_1)

{
  *(undefined ***)this = CBrush::vftable;
  CGdiObject::~CGdiObject(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

