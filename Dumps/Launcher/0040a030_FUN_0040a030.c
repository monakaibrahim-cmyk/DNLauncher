// Address: 0x0040a030
// Name: FUN_0040a030
// Category: Launcher


undefined4 * __thiscall FUN_0040a030(void *this,byte param_1)

{
  FUN_0040a050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

