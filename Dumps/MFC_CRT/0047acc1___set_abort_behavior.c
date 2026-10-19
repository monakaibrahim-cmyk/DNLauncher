// Address: 0x0047acc1
// Name: __set_abort_behavior
// Category: MFC_CRT


/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_004c3a08;
  DAT_004c3a08 = ~_Mask & DAT_004c3a08 | _Flags & _Mask;
  return uVar1;
}

