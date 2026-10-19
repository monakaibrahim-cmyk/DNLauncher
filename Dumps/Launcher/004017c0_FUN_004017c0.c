// Address: 0x004017c0
// Name: FUN_004017c0
// Category: Launcher


/* WARNING: Removing unreachable block (ram,0x004017e6) */

void FUN_004017c0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  undefined4 *unaff_EBX;
  uint uVar5;
  
  uVar5 = *(uint *)(in_EAX + 8);
  if (*(uint *)(in_EAX + 0xc) < uVar5) {
    FUN_00475b26();
  }
  while( true ) {
    uVar1 = *(uint *)(in_EAX + 0xc);
    if (uVar1 < *(uint *)(in_EAX + 8)) {
      FUN_00475b26();
    }
    if (uVar5 == uVar1) break;
    if (*(uint *)(in_EAX + 0xc) <= uVar5) {
      FUN_00475b26();
    }
    if (param_1 == *(int *)(uVar5 + 0xc)) {
      if (*(uint *)(in_EAX + 0xc) <= uVar5) {
        FUN_00475b26();
      }
      uVar2 = *(undefined4 *)(uVar5 + 0x14);
      uVar3 = *(undefined4 *)(uVar5 + 0x18);
      *unaff_EBX = *(undefined4 *)(uVar5 + 0x10);
      uVar4 = *(undefined4 *)(uVar5 + 0x1c);
      unaff_EBX[1] = uVar2;
      unaff_EBX[2] = uVar3;
      unaff_EBX[3] = uVar4;
      return;
    }
    if (*(uint *)(in_EAX + 0xc) <= uVar5) {
      FUN_00475b26();
    }
    uVar5 = uVar5 + 0x20;
  }
  *unaff_EBX = 0;
  unaff_EBX[1] = 0;
  unaff_EBX[2] = 0;
  unaff_EBX[3] = 0;
  return;
}

