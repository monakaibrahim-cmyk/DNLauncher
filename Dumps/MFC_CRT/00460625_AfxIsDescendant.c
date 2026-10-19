// Address: 0x00460625
// Name: AfxIsDescendant
// Category: MFC_CRT


/* Library Function - Single Match
    int __stdcall AfxIsDescendant(struct HWND__ *,struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

int AfxIsDescendant(HWND__ *param_1,HWND__ *param_2)

{
  do {
    if (param_1 == param_2) {
      return 1;
    }
    param_2 = AfxGetParentOwner(param_2);
  } while (param_2 != (HWND__ *)0x0);
  return 0;
}

