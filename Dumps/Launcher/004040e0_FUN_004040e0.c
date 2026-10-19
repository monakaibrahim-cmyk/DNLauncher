// Address: 0x004040e0
// Name: FUN_004040e0
// Category: Launcher


CGdiObject * __thiscall FUN_004040e0(void *this,byte param_1)

{
  CGdiObject::~CGdiObject(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

