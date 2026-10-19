// Address: 0x0045359f
// Name: CThreadLocalObject::~CThreadLocalObject
// Category: Utility


void __thiscall CThreadLocalObject::~CThreadLocalObject(CThreadLocalObject *this)

{
  if ((*(int *)this != 0) && (DAT_004cab80 != (CThreadSlotData *)0x0)) {
    CThreadSlotData::FreeSlot(DAT_004cab80,*(int *)this);
  }
  *(undefined4 *)this = 0;
  return;
}

