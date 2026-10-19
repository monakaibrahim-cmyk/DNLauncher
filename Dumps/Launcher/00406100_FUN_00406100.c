// Address: 0x00406100
// Name: FUN_00406100
// Category: Launcher


void FUN_00406100(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  uint unaff_EBX;
  undefined4 *puVar3;
  int unaff_ESI;
  undefined4 *local_8;
  undefined4 *puStack_4;
  
  if (*(uint *)(unaff_ESI + 0x14) < unaff_EBX) {
    FUN_0049573d();
  }
  uVar1 = *(int *)(unaff_ESI + 0x14) - unaff_EBX;
  if (uVar1 < in_EAX) {
    in_EAX = uVar1;
  }
  if (in_EAX != 0) {
    puVar3 = (undefined4 *)(unaff_ESI + 4);
    local_8 = puVar3;
    puStack_4 = puVar3;
    if (7 < *(uint *)(unaff_ESI + 0x18)) {
      local_8 = (undefined4 *)*puVar3;
      puStack_4 = (undefined4 *)*puVar3;
    }
    _memmove_s((void *)((int)puStack_4 + unaff_EBX * 2),
               (*(uint *)(unaff_ESI + 0x18) - unaff_EBX) * 2,
               (void *)((int)local_8 + (unaff_EBX + in_EAX) * 2),(uVar1 - in_EAX) * 2);
    iVar2 = *(int *)(unaff_ESI + 0x14) - in_EAX;
    *(int *)(unaff_ESI + 0x14) = iVar2;
    if (7 < *(uint *)(unaff_ESI + 0x18)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined2 *)((int)puVar3 + iVar2 * 2) = 0;
  }
  return;
}

