// Address: 0x004960a4
// Name: Unwind@004960a4
// Category: MFC_CRT


void Unwind_004960a4(void)

{
  int unaff_EBP;
  
  CThreadLocalObject::~CThreadLocalObject
            ((CThreadLocalObject *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}

