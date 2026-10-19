// Address: 0x00453c68
// Name: FUN_00453c68
// Category: Utility


CDllIsolationWrapperBase * __thiscall FUN_00453c68(void *this,byte param_1)

{
  CDllIsolationWrapperBase::~CDllIsolationWrapperBase(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}

