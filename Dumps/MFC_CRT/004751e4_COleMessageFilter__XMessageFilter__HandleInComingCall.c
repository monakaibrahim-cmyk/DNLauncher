// Address: 0x004751e4
// Name: COleMessageFilter::XMessageFilter::HandleInComingCall
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual unsigned long __stdcall
   COleMessageFilter::XMessageFilter::HandleInComingCall(unsigned long,struct HTASK__ *,unsigned
   long,struct tagINTERFACEINFO *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

ulong COleMessageFilter::XMessageFilter::HandleInComingCall
                (ulong param_1,HTASK__ *param_2,ulong param_3,tagINTERFACEINFO *param_4)

{
  BOOL BVar1;
  DWORD idThread;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagMSG local_20;
  
  if (*(int *)(param_1 - 0x1c) == 0) {
    if (((param_2 == (HTASK__ *)&DAT_00000001) || (param_2 == (HTASK__ *)0x4)) &&
       (BVar1 = PeekMessageW(&local_20,(HWND)0x0,0x36a,0x36a,0), BVar1 == 0)) {
      lParam = 0;
      wParam = 0;
      Msg = 0x36a;
      idThread = GetCurrentThreadId();
      PostThreadMessageW(idThread,Msg,wParam,lParam);
    }
  }
  else if ((param_2 == (HTASK__ *)&DAT_00000001) || (param_2 == (HTASK__ *)0x4)) {
    return *(ulong *)(param_1 - 8);
  }
  return 0;
}

