// Address: 0x00419720
// Name: FUN_00419720
// Category: Launcher


CWnd * __thiscall FUN_00419720(void *this,byte param_1)

{
  FUN_004199d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

