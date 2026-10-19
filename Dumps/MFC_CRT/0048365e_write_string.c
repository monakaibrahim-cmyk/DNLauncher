// Address: 0x0048365e
// Name: write_string
// Category: MFC_CRT


/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2005 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  DWORD *pDVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        pDVar1 = FUN_0047b849();
        if (*pDVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}

