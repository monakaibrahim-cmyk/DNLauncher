// Address: 0x0045d18b
// Name: FUN_0045d18b
// Category: Utility


CGdiObject * __thiscall FUN_0045d18b(void *this,byte param_1)

{
  *(undefined ***)this = CRgn::vftable;
  CGdiObject::~CGdiObject(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

