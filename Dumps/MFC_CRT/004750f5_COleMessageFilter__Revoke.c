// Address: 0x004750f5
// Name: COleMessageFilter::Revoke
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleMessageFilter::Revoke(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall COleMessageFilter::Revoke(COleMessageFilter *this)

{
  if (*(int *)(this + 0x20) != 0) {
    CoRegisterMessageFilter((LPMESSAGEFILTER)0x0,(LPMESSAGEFILTER *)0x0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  return;
}

