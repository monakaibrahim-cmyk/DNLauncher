// Address: 0x00465398
// Name: FUN_00465398
// Category: MFC_CRT


undefined4 * __thiscall FUN_00465398(void *this,byte param_1)

{
  *(undefined ***)this = IControlSiteFactory::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

