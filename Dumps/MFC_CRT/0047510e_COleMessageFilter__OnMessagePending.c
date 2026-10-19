// Address: 0x0047510e
// Name: COleMessageFilter::OnMessagePending
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleMessageFilter::OnMessagePending(struct tagMSG const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

int __thiscall COleMessageFilter::OnMessagePending(COleMessageFilter *this,tagMSG *param_1)

{
  BOOL BVar1;
  int iVar2;
  tagMSG local_20;
  
  iVar2 = 0;
  BVar1 = PeekMessageW(&local_20,(HWND)0x0,0xf,0xf,3);
  if (BVar1 != 0) {
    iVar2 = 1;
    do {
      DispatchMessageW(&local_20);
      BVar1 = PeekMessageW(&local_20,(HWND)0x0,0xf,0xf,3);
    } while (BVar1 != 0);
  }
  return iVar2;
}

