// Address: 0x0043f5b0
// Name: FUN_0043f5b0
// Category: Utility


uint __cdecl FUN_0043f5b0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x178);
  iVar2 = *(int *)(param_1 + 0x198);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar2 + 0x28) == 0)) &&
     (uVar4 = FUN_0043f090(), (char)uVar4 == '\0')) {
    return uVar4;
  }
  local_4 = param_1;
  local_14 = **(undefined4 **)(param_1 + 0x18);
  local_10 = (*(undefined4 **)(param_1 + 0x18))[1];
  iVar7 = 0;
  iVar6 = *(int *)(iVar2 + 0x10);
  uVar4 = *(uint *)(iVar2 + 0xc);
  if (0 < *(int *)(param_1 + 0x140)) {
    do {
      puVar3 = *(ushort **)(param_2 + iVar7 * 4);
      if ((iVar6 < 1) &&
         (uVar5 = FUN_0043e830(&local_14,uVar4,iVar6,1), iVar6 = local_8, uVar4 = local_c,
         (char)uVar5 == '\0')) {
        return uVar5 & 0xffffff00;
      }
      iVar6 = iVar6 + -1;
      if (((int)uVar4 >> ((byte)iVar6 & 0x1f) & 1U) != 0) {
        local_18 = (ushort)(1 << ((byte)uVar1 & 0x1f));
        *puVar3 = *puVar3 | local_18;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x140));
  }
  **(undefined4 **)(param_1 + 0x18) = local_14;
  iVar7 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(iVar7 + 4) = local_10;
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  *(uint *)(iVar2 + 0xc) = uVar4;
  *(int *)(iVar2 + 0x10) = iVar6;
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}

