// Address: 0x00407170
// Name: FUN_00407170
// Category: Launcher


undefined4 * __thiscall FUN_00407170(void *this,byte param_1)

{
  FUN_00407190(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

