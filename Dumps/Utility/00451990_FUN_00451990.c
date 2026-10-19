// Address: 0x00451990
// Name: FUN_00451990
// Category: Utility


void __cdecl FUN_00451990(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if ((*(ushort *)(param_2 + 0x14) != 0) && (*(ushort *)(param_2 + 0x14) < 0x101)) {
      FUN_00445510((int)param_1,param_2,8,0);
      pvVar1 = FUN_0044d9e0(param_1,0x200);
      param_1[0x7d] = (int)pvVar1;
      if (pvVar1 != (void *)0x0) {
        iVar2 = 0;
        if (*(short *)(param_2 + 0x14) != 0) {
          do {
            *(undefined2 *)(param_1[0x7d] + iVar2 * 2) = *(undefined2 *)(param_3 + iVar2 * 2);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 0x14));
        }
        iVar2 = param_1[0x7d];
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 8;
        *(int *)(param_2 + 0x7c) = iVar2;
        return;
      }
      FUN_004451d0((int)param_1,"Insufficient memory for hIST chunk data.");
      return;
    }
    FUN_004451d0((int)param_1,"Invalid palette size, hIST allocation skipped.");
  }
  return;
}

