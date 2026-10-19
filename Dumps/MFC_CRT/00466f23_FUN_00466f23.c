// Address: 0x00466f23
// Name: FUN_00466f23
// Category: MFC_CRT


void * __thiscall FUN_00466f23(void *this,byte param_1)

{
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}

