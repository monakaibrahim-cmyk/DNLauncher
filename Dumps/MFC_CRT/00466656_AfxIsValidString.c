// Address: 0x00466656
// Name: AfxIsValidString
// Category: MFC_CRT


/* Library Function - Single Match
    int __stdcall AfxIsValidString(wchar_t const *,int)
   
   Library: Visual Studio 2005 Release */

int AfxIsValidString(wchar_t *param_1,int param_2)

{
  return (uint)(param_1 != (wchar_t *)0x0);
}

