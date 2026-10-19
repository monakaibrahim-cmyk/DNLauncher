// Address: 0x004538e2
// Name: FUN_004538e2
// Category: Utility


undefined4 * __thiscall FUN_004538e2(void *this,byte param_1)

{
  FUN_004537f1(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}

