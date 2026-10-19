// Address: 0x0045389d
// Name: FUN_0045389d
// Category: Utility


undefined4 * __thiscall FUN_0045389d(void *this,byte param_1)

{
  FUN_004537bc(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}

