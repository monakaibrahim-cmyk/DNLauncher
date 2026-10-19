// Address: 0x00424740
// Name: FUN_00424740
// Category: Launcher


void __cdecl FUN_00424740(undefined4 param_1,int param_2)

{
  uint uVar1;
  void *this;
  uint uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  undefined4 unaff_EBX;
  void *local_24;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498fc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = *(uint *)(param_2 + 0x18);
  if (uVar2 < 8) {
    psVar4 = (short *)(param_2 + 4);
  }
  else {
    psVar4 = *(short **)(param_2 + 4);
  }
  this = (void *)FUN_00424f90(*(undefined4 *)(param_2 + 0x14),0,psVar4,
                              *(undefined4 *)(param_2 + 0x14));
  if (uVar2 < 8) {
    iVar5 = param_2 + 4;
  }
  else {
    iVar5 = *(int *)(param_2 + 4);
  }
  uVar2 = FUN_00424f00(iVar5,(uint)this,(short *)iVar5,*(int *)(param_2 + 0x14));
  while ((uVar2 != 0xffffffff || (this != (void *)0xffffffff))) {
    uVar3 = FUN_004194e0(this,unaff_EBX,uVar2 - (int)this);
    local_4 = 0;
    FUN_00424d00(uVar3);
    local_4 = 0xffffffff;
    if (7 < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    uVar1 = *(uint *)(param_2 + 0x18);
    psVar4 = (short *)(param_2 + 4);
    if (7 < uVar1) {
      psVar4 = *(short **)psVar4;
    }
    this = (void *)FUN_00424f90(*(undefined4 *)(param_2 + 0x14),uVar2,psVar4,
                                *(undefined4 *)(param_2 + 0x14));
    if (uVar1 < 8) {
      iVar5 = param_2 + 4;
    }
    else {
      iVar5 = *(int *)(param_2 + 4);
    }
    uVar2 = FUN_00424f00(iVar5,(uint)this,(short *)iVar5,*(int *)(param_2 + 0x14));
  }
  ExceptionList = local_c;
  return;
}

