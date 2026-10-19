// Address: 0x0047a830
// Name: __init_pointers
// Category: MFC_CRT


/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_0047fbb1(uVar1);
  FUN_0048b16f(uVar1);
  FUN_004759fc(uVar1);
  FUN_004822f0(uVar1);
  FUN_0048b165(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_0045f86d();
  __initp_eh_hooks();
  PTR___exit_004c3780 = (undefined *)FUN_0047e766(0x47a801);
  return;
}

