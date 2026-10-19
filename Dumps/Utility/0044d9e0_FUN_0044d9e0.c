// Address: 0x0044d9e0
// Name: FUN_0044d9e0
// Category: Utility


void * __cdecl FUN_0044d9e0(int *param_1,size_t param_2)

{
  uint uVar1;
  void *pvVar2;
  
  if (param_1 == (int *)0x0) {
    return (void *)0x0;
  }
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 | 0x100000;
  pvVar2 = FUN_0044d960(param_1,param_2);
  param_1[0x1b] = uVar1;
  return pvVar2;
}

