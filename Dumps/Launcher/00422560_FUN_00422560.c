// Address: 0x00422560
// Name: FUN_00422560
// Category: Launcher


undefined4 * __thiscall FUN_00422560(void *this,byte param_1)

{
  *(undefined ***)this = IServiceModule::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

