// Address: 0x004706aa
// Name: FUN_004706aa
// Category: MFC_CRT


CEnumUnknown * __thiscall FUN_004706aa(void *this,byte param_1)

{
  CEnumUnknown::~CEnumUnknown(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

