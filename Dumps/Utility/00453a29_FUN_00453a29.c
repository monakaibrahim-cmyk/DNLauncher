// Address: 0x00453a29
// Name: FUN_00453a29
// Category: Utility


undefined4 * __thiscall FUN_00453a29(void *this,byte param_1)

{
  FUN_0045392b(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}

