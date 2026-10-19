// Address: 0x00403fa0
// Name: FUN_00403fa0
// Category: Launcher


CGdiObject * __thiscall FUN_00403fa0(void *this,byte param_1)

{
  *(undefined ***)this = CFont::vftable;
  CGdiObject::~CGdiObject(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

