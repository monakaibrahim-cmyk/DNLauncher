// Address: 0x00406500
// Name: FUN_00406500
// Category: Launcher


void FUN_00406500(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *unaff_ESI;
  
  uVar1 = *(uint *)((int)unaff_ESI + 0x18);
  puVar4 = (undefined4 *)((int)unaff_ESI + 4);
  puVar3 = puVar4;
  if (7 < uVar1) {
    puVar3 = (undefined4 *)*puVar4;
  }
  if (puVar3 <= param_1) {
    puVar3 = puVar4;
    if (7 < uVar1) {
      puVar3 = (undefined4 *)*puVar4;
    }
    if (param_1 < (undefined4 *)((int)puVar3 + *(int *)((int)unaff_ESI + 0x14) * 2)) {
      if (7 < uVar1) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_004069c0(unaff_ESI,(int)param_1 - (int)puVar4 >> 1,param_2);
      return;
    }
  }
  bVar2 = FUN_00406a70();
  if (bVar2) {
    puVar3 = puVar4;
    if (7 < *(uint *)((int)unaff_ESI + 0x18)) {
      puVar3 = (undefined4 *)*puVar4;
    }
    _memcpy_s(puVar3,*(uint *)((int)unaff_ESI + 0x18) * 2,param_1,param_2 * 2);
    *(uint *)((int)unaff_ESI + 0x14) = param_2;
    if (7 < *(uint *)((int)unaff_ESI + 0x18)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined2 *)(param_2 * 2 + (int)puVar4) = 0;
  }
  return;
}

