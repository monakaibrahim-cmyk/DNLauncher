// Address: 0x00472a53
// Name: FUN_00472a53
// Category: MFC_CRT


CMemFile * __thiscall FUN_00472a53(void *this,byte param_1)

{
  CMemFile::~CMemFile(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

