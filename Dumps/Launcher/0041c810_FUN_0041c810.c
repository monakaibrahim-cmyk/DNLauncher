// Address: 0x0041c810
// Name: FUN_0041c810
// Category: Launcher


CWnd * __thiscall FUN_0041c810(void *this,byte param_1)

{
  FUN_0041c830(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

