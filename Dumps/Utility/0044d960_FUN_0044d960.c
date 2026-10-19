// Address: 0x0044d960
// Name: FUN_0044d960
// Category: Utility


void * __cdecl FUN_0044d960(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if ((code *)param_1[0x92] == (code *)0x0) {
      pvVar1 = FUN_0044d870((int)param_1,param_2);
    }
    else {
      pvVar1 = (void *)(*(code *)param_1[0x92])();
    }
    if ((pvVar1 == (void *)0x0) && ((param_1[0x1b] & 0x100000U) == 0)) {
      FUN_00445110(param_1,"Out of Memory!");
    }
    return pvVar1;
  }
  return (void *)0x0;
}

