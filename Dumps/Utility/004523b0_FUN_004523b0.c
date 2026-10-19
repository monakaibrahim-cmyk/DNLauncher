// Address: 0x004523b0
// Name: FUN_004523b0
// Category: Utility


void __cdecl FUN_004523b0(int *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  void *pvVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if (param_3 != (void *)0x0) {
      FUN_00445510((int)param_1,param_2,0x2000,0);
      pvVar1 = FUN_0044d960(param_1,0x100);
      *(void **)(param_2 + 0x4c) = pvVar1;
      param_1[0x62] = (int)pvVar1;
      if ((int)param_4 < 0x101) {
        _memcpy(*(void **)(param_2 + 0x4c),param_3,param_4);
      }
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x2000;
    }
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 0x50) = *param_5;
      *(undefined4 *)(param_2 + 0x54) = param_5[1];
      *(undefined2 *)(param_2 + 0x58) = *(undefined2 *)(param_5 + 2);
      if (param_4 == 0) {
        param_4 = 1;
      }
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
    *(short *)(param_2 + 0x16) = (short)param_4;
  }
  return;
}

