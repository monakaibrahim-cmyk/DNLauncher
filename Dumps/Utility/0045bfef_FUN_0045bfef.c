// Address: 0x0045bfef
// Name: FUN_0045bfef
// Category: Utility


CClientDC * __thiscall FUN_0045bfef(void *this,byte param_1)

{
  CClientDC::~CClientDC(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

