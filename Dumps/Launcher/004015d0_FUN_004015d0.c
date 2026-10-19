// Address: 0x004015d0
// Name: FUN_004015d0
// Category: Launcher


uint __fastcall FUN_004015d0(undefined4 param_1,LPRECT param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 != 0) && ((int)(*(int *)(param_3 + 0xc) - uVar2) >> 5 != 0)) {
    iVar3 = 0;
    if (0 < param_4) {
      do {
        piVar1 = (int *)FUN_004017c0(iVar3);
        uVar2 = SetRect(param_2,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 1;
      } while (iVar3 < param_4);
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

