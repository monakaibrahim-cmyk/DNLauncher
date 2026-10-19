// Address: 0x00475154
// Name: COleMessageFilter::IsSignificantMessage
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleMessageFilter::IsSignificantMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleMessageFilter::IsSignificantMessage(COleMessageFilter *this,tagMSG *param_1)

{
  BOOL BVar1;
  uint uVar2;
  tagMSG local_20;
  
  uVar2 = 0;
  while ((BVar1 = PeekMessageW(&local_20,(HWND)0x0,*(UINT *)((int)&DAT_004a49a0 + uVar2),
                               *(UINT *)((int)&DAT_004a49a0 + uVar2),2), BVar1 == 0 ||
         (((local_20.message == 0x100 || (local_20.message == 0x104)) &&
          (((uint)local_20.lParam >> 0x10 & 0x4000) != 0))))) {
    uVar2 = uVar2 + 4;
    if (0x3b < uVar2) {
      return 0;
    }
  }
  return 1;
}

