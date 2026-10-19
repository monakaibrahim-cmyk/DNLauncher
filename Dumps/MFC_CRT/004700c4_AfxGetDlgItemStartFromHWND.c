// Address: 0x004700c4
// Name: AfxGetDlgItemStartFromHWND
// Category: MFC_CRT


/* Library Function - Single Match
    struct HWND__ * __cdecl AfxGetDlgItemStartFromHWND(int,struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

HWND__ * __cdecl AfxGetDlgItemStartFromHWND(int param_1,HWND__ *param_2)

{
  int iVar1;
  
  while( true ) {
    if (param_2 == (HWND)0x0) {
      return (HWND__ *)0x0;
    }
    iVar1 = GetDlgCtrlID(param_2);
    if (iVar1 == param_1) break;
    param_2 = GetWindow(param_2,2);
  }
  return param_2;
}

