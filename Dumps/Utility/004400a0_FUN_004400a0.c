// Address: 0x004400a0
// Name: FUN_004400a0
// Category: Utility


void __cdecl FUN_004400a0(int param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x54);
  *(undefined4 **)(param_1 + 0x19c) = puVar1;
  *puVar1 = FUN_0043fd80;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc4) + 0x50);
    puVar1 = puVar1 + 0xb;
    do {
      _Dst = (void *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
      *puVar2 = _Dst;
      _memset(_Dst,0,0x100);
      *puVar1 = 0xffffffff;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 0x15;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  return;
}

