// Address: 0x0041c690
// Name: FUN_0041c690
// Category: Launcher


CGdiObject * __thiscall FUN_0041c690(void *this,byte param_1)

{
  *(undefined ***)this = CBitmap::vftable;
  CGdiObject::~CGdiObject(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

