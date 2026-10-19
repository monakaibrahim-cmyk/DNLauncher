// Address: 0x004670b1
// Name: CThreadLocalObject::~CThreadLocalObject
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CThreadLocalObject::~CThreadLocalObject(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CThreadLocalObject::~CThreadLocalObject(CThreadLocalObject *this)

{
  if ((*(int *)this != 0) && (DAT_004cab80 != (CThreadSlotData *)0x0)) {
    CThreadSlotData::FreeSlot(DAT_004cab80,*(int *)this);
  }
  *(undefined4 *)this = 0;
  return;
}

