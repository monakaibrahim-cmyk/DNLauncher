// Address: 0x0045c00b
// Name: FUN_0045c00b
// Category: Utility


CWindowDC * __thiscall FUN_0045c00b(void *this,byte param_1)

{
  CWindowDC::~CWindowDC(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

