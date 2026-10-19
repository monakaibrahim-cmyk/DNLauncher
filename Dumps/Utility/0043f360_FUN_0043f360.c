// Address: 0x0043f360
// Name: FUN_0043f360
// Category: Utility


int __cdecl FUN_0043f360(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x198);
  iVar2 = *(int *)(param_1 + 0x170);
  uVar3 = *(undefined4 *)(param_1 + 0x178);
  iVar6 = iVar2;
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar1 + 0x28) == 0)) &&
     (iVar6 = FUN_0043f090(), (char)iVar6 == '\0')) {
    return iVar6;
  }
  if (*(char *)(iVar1 + 8) == '\0') {
    if (*(int *)(iVar1 + 0x14) != 0) {
      *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
      return CONCAT31((int3)((uint)iVar6 >> 8),1);
    }
    local_14 = **(undefined4 **)(param_1 + 0x18);
    local_10 = (*(undefined4 **)(param_1 + 0x18))[1];
    iVar4 = *param_2;
    uVar10 = *(uint *)(iVar1 + 0xc);
    iVar6 = *(int *)(iVar1 + 0x10);
    iVar5 = *(int *)(iVar1 + 0x3c);
    iVar12 = 0;
    local_4 = param_1;
    for (iVar9 = *(int *)(param_1 + 0x16c); iVar9 <= iVar2; iVar9 = iVar9 + 1) {
      if (iVar6 < 8) {
        uVar7 = FUN_0043e830(&local_14,uVar10,iVar6,0);
        if ((char)uVar7 == '\0') goto LAB_0043f547;
        iVar6 = local_8;
        uVar10 = local_c;
        if (7 < local_8) goto LAB_0043f446;
        iVar8 = 1;
LAB_0043f473:
        uVar7 = FUN_0043e960(&local_14,uVar10,iVar6,iVar5,iVar8);
        iVar6 = local_8;
        uVar10 = local_c;
        if ((int)uVar7 < 0) goto LAB_0043f547;
      }
      else {
LAB_0043f446:
        uVar7 = (int)uVar10 >> ((char)iVar6 - 8U & 0x1f) & 0xff;
        iVar8 = *(int *)(iVar5 + 0x90 + uVar7 * 4);
        if (iVar8 == 0) {
          iVar8 = 9;
          goto LAB_0043f473;
        }
        uVar7 = (uint)*(byte *)(uVar7 + 0x490 + iVar5);
        iVar6 = iVar6 - iVar8;
      }
      iVar8 = (int)uVar7 >> 4;
      uVar11 = uVar7 & 0xf;
      if (uVar11 == 0) {
        if (iVar8 != 0xf) {
          iVar12 = 1 << ((byte)iVar8 & 0x1f);
          if (iVar8 != 0) {
            if ((iVar6 < iVar8) &&
               (uVar7 = FUN_0043e830(&local_14,uVar10,iVar6,iVar8), iVar6 = local_8,
               uVar10 = local_c, (char)uVar7 == '\0')) goto LAB_0043f547;
            iVar6 = iVar6 - iVar8;
            iVar12 = iVar12 + ((int)uVar10 >> ((byte)iVar6 & 0x1f) & iVar12 - 1U);
          }
          iVar12 = iVar12 + -1;
          break;
        }
        iVar9 = iVar9 + 0xf;
      }
      else {
        iVar9 = iVar9 + iVar8;
        if ((iVar6 < (int)uVar11) &&
           (uVar7 = FUN_0043e830(&local_14,uVar10,iVar6,uVar11), iVar6 = local_8, uVar10 = local_c,
           (char)uVar7 == '\0')) {
LAB_0043f547:
          return uVar7 & 0xffffff00;
        }
        iVar6 = iVar6 - uVar11;
        uVar7 = (1 << (sbyte)uVar11) - 1U & (int)uVar10 >> ((byte)iVar6 & 0x1f);
        if ((int)uVar7 < *(int *)(&DAT_0049e368 + uVar11 * 4)) {
          uVar7 = *(int *)(&DAT_0049e3a8 + uVar11 * 4) + uVar7;
        }
        *(short *)(iVar4 + *(int *)(&DAT_0049e188 + iVar9 * 4) * 2) =
             (short)(uVar7 << ((byte)uVar3 & 0x1f));
      }
    }
    **(undefined4 **)(param_1 + 0x18) = local_14;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_10;
    *(uint *)(iVar1 + 0xc) = uVar10;
    *(int *)(iVar1 + 0x10) = iVar6;
    *(int *)(iVar1 + 0x14) = iVar12;
  }
  *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

