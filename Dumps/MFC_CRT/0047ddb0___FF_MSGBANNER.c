// Address: 0x0047ddb0
// Name: __FF_MSGBANNER
// Category: MFC_CRT


/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2005 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_004c3710 != 1) {
      return;
    }
  }
  FUN_0047dc10(0xfc);
  FUN_0047dc10(0xff);
  return;
}

