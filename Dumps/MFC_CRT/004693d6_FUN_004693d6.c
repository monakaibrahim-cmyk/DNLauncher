// Address: 0x004693d6
// Name: FUN_004693d6
// Category: MFC_CRT


CHandleMap * __thiscall FUN_004693d6(void *this,byte param_1)

{
  CHandleMap::~CHandleMap(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

