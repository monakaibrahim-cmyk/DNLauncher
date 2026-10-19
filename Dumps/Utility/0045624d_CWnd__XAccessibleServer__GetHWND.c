// Address: 0x0045624d
// Name: CWnd::XAccessibleServer::GetHWND
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessibleServer::GetHWND(struct HWND__ * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long CWnd::XAccessibleServer::GetHWND(HWND__ **param_1)

{
  long lVar1;
  undefined4 *in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_c [4];
  int local_8;
  
  if (in_stack_00000008 == (undefined4 *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_c,(AFX_MODULE_STATE *)param_1[-6]);
    *in_stack_00000008 = param_1[-5];
    if (local_8 != 0) {
      FUN_00453641();
    }
    lVar1 = 0;
  }
  return lVar1;
}

