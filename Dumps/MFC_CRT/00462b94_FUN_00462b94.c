// Address: 0x00462b94
// Name: FUN_00462b94
// Category: MFC_CRT


CFrameWnd * __thiscall FUN_00462b94(void *this,byte param_1)

{
  FUN_00462949(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

