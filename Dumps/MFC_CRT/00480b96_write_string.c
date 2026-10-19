// Address: 0x00480b96
// Name: write_string
// Category: MFC_CRT


/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2005 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  DWORD *pDVar1;
  ushort *in_ECX;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char((uint)*in_ECX);
      in_ECX = in_ECX + 1;
      if (*in_EAX == -1) {
        pDVar1 = FUN_0047b849();
        if (*pDVar1 != 0x2a) {
          return;
        }
        write_char(0x3f);
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}

