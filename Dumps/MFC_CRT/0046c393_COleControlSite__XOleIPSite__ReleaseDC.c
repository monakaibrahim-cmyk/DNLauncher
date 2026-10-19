// Address: 0x0046c393
// Name: COleControlSite::XOleIPSite::ReleaseDC
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::ReleaseDC(struct HDC__ *)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::ReleaseDC(HDC__ *param_1)

{
  AFX_MAINTAIN_STATE2 local_c [4];
  int local_8;
  
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_c,(AFX_MODULE_STATE *)param_1[-0x2c].unused);
  ::ReleaseDC(*(HWND *)(*(int *)(param_1[-0x2b].unused + 0x20) + 0x20),
              *(HDC *)(param_1[-2].unused + 4));
  param_1[-2].unused = 0;
  if (local_8 != 0) {
    FUN_00453641();
  }
  return 0;
}

