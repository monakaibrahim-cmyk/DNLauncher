// Address: 0x004750d8
// Name: COleMessageFilter::Register
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall COleMessageFilter::Register(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleMessageFilter::Register(COleMessageFilter *this)

{
  HRESULT HVar1;
  
  HVar1 = CoRegisterMessageFilter((LPMESSAGEFILTER)(this + 0x40),(LPMESSAGEFILTER *)0x0);
  if (HVar1 == 0) {
    *(undefined4 *)(this + 0x20) = 1;
    return 1;
  }
  return 0;
}

