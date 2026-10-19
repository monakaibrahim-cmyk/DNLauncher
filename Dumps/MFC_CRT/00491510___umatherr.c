// Address: 0x00491510
// Name: __umatherr
// Category: MFC_CRT


/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2005 Release */

float10 __cdecl __umatherr(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = 0;
  do {
    if ((&DAT_004c4978)[iVar1 * 2] == param_2) {
      iVar1 = *(int *)(iVar1 * 8 + 0x4c497c);
      goto LAB_0049152c;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  iVar1 = 0;
LAB_0049152c:
  if (iVar1 != 0) {
    __ctrlfp();
    iVar1 = FUN_0045c850();
    if (iVar1 == 0) {
      __set_errno_from_matherr(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  __ctrlfp();
  __set_errno_from_matherr(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}

