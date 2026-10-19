// Address: 0x00445400
// Name: FUN_00445400
// Category: Utility


void * __cdecl FUN_00445400(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = param_1[0x1b];
  if ((uint)(0xffffffff / (ulonglong)param_3) < param_2) {
    FUN_004451d0((int)param_1,"Potential overflow in png_zalloc()");
    return (void *)0x0;
  }
  param_1[0x1b] = uVar1 | 0x100000;
  pvVar2 = FUN_0044d960(param_1,param_2 * param_3);
  param_1[0x1b] = uVar1;
  return pvVar2;
}

