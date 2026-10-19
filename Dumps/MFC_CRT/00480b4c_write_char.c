// Address: 0x00480b4c
// Name: write_char
// Category: MFC_CRT


/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(undefined4 param_1)

{
  short sVar1;
  FILE *in_EAX;
  int *unaff_ESI;
  
  if (((in_EAX->_flag & 0x40) == 0) || (in_EAX->_base != (char *)0x0)) {
    sVar1 = FUN_0048e288(param_1,in_EAX);
    if (sVar1 == -1) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}

