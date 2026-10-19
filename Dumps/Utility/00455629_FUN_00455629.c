// Address: 0x00455629
// Name: FUN_00455629
// Category: Utility


undefined4 * __thiscall FUN_00455629(void *this,byte param_1)

{
  FUN_00455614(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}

