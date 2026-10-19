// Address: 0x00473a11
// Name: FUN_00473a11
// Category: MFC_CRT


CCmdTarget * __thiscall FUN_00473a11(void *this,byte param_1)

{
  FUN_00473978(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

