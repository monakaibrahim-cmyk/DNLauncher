// Address: 0x004262b0
// Name: FUN_004262b0
// Category: Launcher


void FUN_004262b0(undefined4 *param_1,uint param_2)

{
  void *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *unaff_retaddr;
  
  uVar3 = *(uint *)((int)in_EAX + 0x18);
  puVar2 = (undefined4 *)((int)in_EAX + 4);
  puVar1 = puVar2;
  if (0xf < uVar3) {
    puVar1 = (undefined4 *)*puVar2;
  }
  if (puVar1 <= param_1) {
    puVar1 = puVar2;
    if (0xf < uVar3) {
      puVar1 = (undefined4 *)*puVar2;
    }
    if (param_1 < (undefined4 *)(*(int *)((int)in_EAX + 0x14) + (int)puVar1)) {
      if (0xf < uVar3) {
        puVar2 = (undefined4 *)*puVar2;
      }
      FUN_004263a0((int)in_EAX,(int)param_1 - (int)puVar2);
      return;
    }
  }
  uVar3 = *(uint *)((int)in_EAX + 0x14);
  if ((-uVar3 - 1 <= param_2) || (uVar3 + param_2 < uVar3)) {
    FUN_004956fe();
  }
  if (param_2 != 0) {
    uVar3 = *(int *)((int)in_EAX + 0x14) + param_2;
    if (uVar3 == 0xffffffff) {
      FUN_004956fe();
    }
    if (*(uint *)((int)in_EAX + 0x18) < uVar3) {
      FUN_00402af0(in_EAX,uVar3);
    }
    else if (uVar3 == 0) {
      *(undefined4 *)((int)in_EAX + 0x14) = 0;
      if (0xf < *(uint *)((int)in_EAX + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
      return;
    }
    if (uVar3 != 0) {
      puVar1 = puVar2;
      if (0xf < *(uint *)((int)in_EAX + 0x18)) {
        puVar1 = (undefined4 *)*puVar2;
      }
      _memcpy_s((void *)(*(int *)((int)in_EAX + 0x14) + (int)puVar1),
                *(uint *)((int)in_EAX + 0x18) - *(int *)((int)in_EAX + 0x14),unaff_retaddr,param_2);
      *(uint *)((int)in_EAX + 0x14) = uVar3;
      if (0xf < *(uint *)((int)in_EAX + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)((int)puVar2 + uVar3) = 0;
    }
  }
  return;
}

