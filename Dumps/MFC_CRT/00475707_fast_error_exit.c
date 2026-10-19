// Address: 0x00475707
// Name: fast_error_exit
// Category: MFC_CRT


/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_004cae24 == 1) {
    __FF_MSGBANNER();
  }
  FUN_0047dc10(param_1);
  ___crtExitProcess(0xff);
  return;
}

