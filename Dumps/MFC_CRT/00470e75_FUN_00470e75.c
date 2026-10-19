// Address: 0x00470e75
// Name: FUN_00470e75
// Category: MFC_CRT


CCmdTarget * __thiscall FUN_00470e75(void *this,byte param_1)

{
  FUN_00470756(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

