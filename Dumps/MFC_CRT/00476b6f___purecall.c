// Address: 0x00476b6f
// Name: __purecall
// Category: MFC_CRT


/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_0047e7dd(DAT_004cb8a4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_0047dc10(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}

