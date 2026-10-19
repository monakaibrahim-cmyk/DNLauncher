// Address: 0x00451ec0
// Name: FUN_00451ec0
// Category: Utility


void __cdecl FUN_00451ec0(int *param_1,int param_2,void *param_3,int param_4)

{
  void *_Dst;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if ((param_4 < 0) || (0x100 < param_4)) {
      if (*(char *)(param_2 + 0x19) != '\x03') {
        FUN_004451d0((int)param_1,"Invalid palette length");
        return;
      }
      FUN_00445110(param_1,"Invalid palette length");
    }
    FUN_00445510((int)param_1,param_2,0x1000,0);
    _Dst = FUN_0044d960(param_1,0x300);
    param_1[0x45] = (int)_Dst;
    _memset(_Dst,0,0x300);
    _memcpy((void *)param_1[0x45],param_3,param_4 * 3);
    *(int *)(param_2 + 0x10) = param_1[0x45];
    *(short *)(param_1 + 0x46) = (short)param_4;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x1000;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
    *(short *)(param_2 + 0x14) = (short)param_4;
    return;
  }
  return;
}

