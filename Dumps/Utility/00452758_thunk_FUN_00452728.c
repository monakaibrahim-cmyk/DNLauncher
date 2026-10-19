// Address: 0x00452758
// Name: thunk_FUN_00452728
// Category: Utility


void * __cdecl thunk_FUN_00452728(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (PTR_thunk_FUN_004529b4_004c2068 != (undefined *)0x0)) {
    pvVar1 = (void *)(*(code *)PTR_thunk_FUN_004529b4_004c2068)(param_1);
    return pvVar1;
  }
  return pvVar1;
}

