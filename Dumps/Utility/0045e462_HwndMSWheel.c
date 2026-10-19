// Address: 0x0045e462
// Name: HwndMSWheel
// Category: Utility


/* Library Function - Single Match
    struct HWND__ * __cdecl HwndMSWheel(unsigned int *,unsigned int *,unsigned int *,int *,int *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

HWND__ * __cdecl HwndMSWheel(uint *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5)

{
  HWND hWnd;
  UINT UVar1;
  LRESULT LVar2;
  
  hWnd = FindWindowW(L"MouseZ",L"Magellan MSWHEEL");
  UVar1 = RegisterWindowMessageW(L"MSWHEEL_ROLLMSG");
  *param_1 = UVar1;
  UVar1 = RegisterWindowMessageW(L"MSH_WHEELSUPPORT_MSG");
  *param_2 = UVar1;
  UVar1 = RegisterWindowMessageW(L"MSH_SCROLL_LINES_MSG");
  *param_3 = UVar1;
  if (*param_2 == 0) {
    *param_4 = 0;
  }
  else {
    LVar2 = SendMessageW(hWnd,*param_2,0,0);
    *param_4 = LVar2;
  }
  if (*param_3 == 0) {
    *param_5 = 3;
  }
  else {
    LVar2 = SendMessageW(hWnd,*param_3,0,0);
    *param_5 = LVar2;
  }
  return hWnd;
}

