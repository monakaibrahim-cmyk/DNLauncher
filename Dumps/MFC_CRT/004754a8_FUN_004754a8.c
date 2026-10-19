// Address: 0x004754a8
// Name: FUN_004754a8
// Category: MFC_CRT


COleMessageFilter * __thiscall FUN_004754a8(void *this,byte param_1)

{
  COleMessageFilter::~COleMessageFilter(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

