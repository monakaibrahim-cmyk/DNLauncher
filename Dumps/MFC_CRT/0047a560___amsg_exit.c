// Address: 0x0047a560
// Name: __amsg_exit
// Category: MFC_CRT


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_0047dc10(param_1);
  pcVar1 = (code *)FUN_0047e7dd((int)PTR___exit_004c3780);
  (*pcVar1)(0xff);
  return;
}

