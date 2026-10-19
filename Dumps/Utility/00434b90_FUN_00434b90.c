// Address: 0x00434b90
// Name: FUN_00434b90
// Category: Utility


uint __thiscall FUN_00434b90(void *this,int param_1,char param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = FUN_004349e0((int)this);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  puVar4 = (undefined4 *)(param_1 + 8);
  puVar5 = (undefined4 *)((int)this + 8);
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x30);
  puVar5 = (undefined4 *)((int)this + 0x30);
  for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  pvVar2 = _memset((undefined4 *)(param_1 + 0x30),0,0x17c);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if (param_2 != '\0') {
    pvVar2 = (void *)FUN_00434a90((int)this);
    *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}

