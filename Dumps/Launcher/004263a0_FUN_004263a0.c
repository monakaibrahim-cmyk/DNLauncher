// Address: 0x004263a0
// Name: FUN_004263a0
// Category: Launcher


void FUN_004263a0(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_0049573d();
  }
  uVar1 = *(int *)(param_1 + 0x14) - param_2;
  if (uVar1 < in_EAX) {
    in_EAX = uVar1;
  }
  uVar1 = *(uint *)((int)unaff_ESI + 0x14);
  if ((-uVar1 - 1 <= in_EAX) || (uVar1 + in_EAX < uVar1)) {
    FUN_004956fe();
  }
  if (in_EAX != 0) {
    uVar1 = *(int *)((int)unaff_ESI + 0x14) + in_EAX;
    if (uVar1 == 0xffffffff) {
      FUN_004956fe();
    }
    if (*(uint *)((int)unaff_ESI + 0x18) < uVar1) {
      FUN_00402af0(unaff_ESI,uVar1);
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
      if (0xf < *(uint *)((int)unaff_ESI + 0x18)) {
        **(undefined1 **)((int)unaff_ESI + 4) = 0;
        return;
      }
      *(undefined1 *)((int)unaff_ESI + 4) = 0;
      return;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        iVar3 = param_1 + 4;
      }
      else {
        iVar3 = *(int *)(param_1 + 4);
      }
      if (*(uint *)((int)unaff_ESI + 0x18) < 0x10) {
        iVar2 = (int)unaff_ESI + 4;
      }
      else {
        iVar2 = *(int *)((int)unaff_ESI + 4);
      }
      _memcpy_s((void *)(*(int *)((int)unaff_ESI + 0x14) + iVar2),
                *(uint *)((int)unaff_ESI + 0x18) - *(int *)((int)unaff_ESI + 0x14),
                (void *)(iVar3 + param_1),in_EAX);
      *(uint *)((int)unaff_ESI + 0x14) = uVar1;
      if (0xf < *(uint *)((int)unaff_ESI + 0x18)) {
        *(undefined1 *)(*(int *)((int)unaff_ESI + 4) + uVar1) = 0;
        return;
      }
      *(undefined1 *)((int)unaff_ESI + uVar1 + 4) = 0;
    }
  }
  return;
}

