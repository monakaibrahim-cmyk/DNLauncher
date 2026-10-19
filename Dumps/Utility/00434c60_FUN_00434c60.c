// Address: 0x00434c60
// Name: FUN_00434c60
// Category: Utility


undefined4 __thiscall
FUN_00434c60(void *this,int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  uVar1 = FUN_004349e0((int)this);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    pcVar6 = "CxImage::Create : width and height must be greater than zero";
    pcVar9 = (char *)((int)this + 0x44);
    for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    *pcVar9 = *pcVar6;
    return 0;
  }
  if (param_3 < 2) {
    uVar1 = 1;
  }
  else if (param_3 < 5) {
    uVar1 = 4;
  }
  else {
    uVar1 = (-(uint)(8 < param_3) & 0x10) + 8;
  }
  uVar2 = param_1 * param_2 * uVar1;
  if ((0x80000000 < (uVar2 & 0xfffffff8)) || (uVar2 / uVar1 != param_1 * param_2)) {
    pcVar6 = "CXIMAGE_MAX_MEMORY exceeded";
    puVar7 = (undefined4 *)((int)this + 0x44);
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      puVar7 = puVar7 + 1;
    }
    return 0;
  }
  if (uVar1 == 1) {
    *(undefined4 *)((int)this + 0x28) = 2;
  }
  else if (uVar1 == 4) {
    *(undefined4 *)((int)this + 0x28) = 0x10;
  }
  else if (uVar1 == 8) {
    *(undefined4 *)((int)this + 0x28) = 0x100;
  }
  else {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  iVar5 = (param_1 * uVar1 + 0x1f >> 5) * 4;
  *(int *)((int)this + 0x30) = iVar5;
  *(short *)((int)this + 0x16) = (short)uVar1;
  *(undefined4 *)((int)this + 0x40) = param_4;
  *(undefined4 *)((int)this + 8) = 0x28;
  *(int *)((int)this + 0xc) = param_1;
  *(int *)((int)this + 0x10) = param_2;
  *(undefined2 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(int *)((int)this + 0x1c) = iVar5 * param_2;
  sVar3 = FUN_00434b80((int)this);
  pvVar4 = _malloc(sVar3);
  *(void **)((int)this + 4) = pvVar4;
  if (pvVar4 == (void *)0x0) {
    pcVar6 = "CxImage::Create can\'t allocate memory";
    puVar7 = (undefined4 *)((int)this + 0x44);
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)pcVar6;
    return 0;
  }
  pvVar4 = (void *)FUN_004361f0((int)this);
  if (pvVar4 != (void *)0x0) {
    sVar3 = FUN_00436190((int)this);
    _memset(pvVar4,0,sVar3);
  }
  puVar7 = (undefined4 *)((int)this + 8);
  puVar8 = *(undefined4 **)((int)this + 4);
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar5 = FUN_00434b20(this,0);
  *(int *)((int)this + 0x34) = iVar5;
  return *(undefined4 *)((int)this + 4);
}

