// Address: 0x004644d0
// Name: FUN_004644d0
// Category: MFC_CRT


CWinThread * __thiscall FUN_004644d0(void *this,byte param_1)

{
  CWinThread::~CWinThread(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

