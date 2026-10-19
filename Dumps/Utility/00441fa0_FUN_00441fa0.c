// Address: 0x00441fa0
// Name: FUN_00441fa0
// Category: Utility


void __thiscall FUN_00441fa0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_428;
  int local_424;
  int aiStack_400 [256];
  
  iVar1 = *(int *)(in_EAX + 0x70);
  iVar7 = (int)this + 0x1c;
  local_424 = 0x7fffffff;
  local_428 = 0;
  if (iVar1 < 1) {
    local_424 = 0x7fffffff;
  }
  else {
    piVar2 = *(int **)(in_EAX + 0x74);
    iVar11 = *piVar2;
    iVar3 = piVar2[1];
    iVar4 = piVar2[2];
    do {
      uVar5 = (uint)*(byte *)(iVar11 + local_428);
      if ((int)uVar5 < param_1) {
        iVar12 = (uVar5 - param_1) * 2;
        iVar12 = iVar12 * iVar12;
        iVar9 = param_1 + 0x18;
LAB_0044202c:
        iVar6 = iVar9;
      }
      else {
        iVar6 = param_1 + 0x18;
        iVar9 = param_1;
        if (iVar6 < (int)uVar5) {
          iVar12 = (uVar5 - iVar6) * 2;
          iVar12 = iVar12 * iVar12;
          goto LAB_0044202c;
        }
        iVar12 = 0;
        if (param_1 * 2 + 0x18 >> 1 < (int)uVar5) goto LAB_0044202c;
      }
      uVar8 = (uint)*(byte *)(iVar3 + local_428);
      iVar6 = (uVar5 - iVar6) * 2;
      if ((int)uVar8 < (int)this) {
        iVar9 = (uVar8 - (int)this) * 3;
        iVar12 = iVar12 + iVar9 * iVar9;
        iVar9 = uVar8 - iVar7;
      }
      else {
        if (iVar7 < (int)uVar8) {
          iVar9 = (uVar8 - iVar7) * 3;
          iVar12 = iVar12 + iVar9 * iVar9;
        }
        else if ((int)uVar8 <= iVar7 + (int)this >> 1) {
          iVar9 = uVar8 - iVar7;
          goto LAB_00442095;
        }
        iVar9 = uVar8 - (int)this;
      }
LAB_00442095:
      uVar5 = (uint)*(byte *)(iVar4 + local_428);
      if ((int)uVar5 < param_2) {
        iVar12 = iVar12 + (uVar5 - param_2) * (uVar5 - param_2);
        iVar10 = uVar5 - (param_2 + 0x18);
      }
      else {
        iVar10 = param_2 + 0x18;
        if (iVar10 < (int)uVar5) {
          iVar12 = iVar12 + (uVar5 - iVar10) * (uVar5 - iVar10);
        }
        else if ((int)uVar5 <= param_2 * 2 + 0x18 >> 1) {
          iVar10 = uVar5 - iVar10;
          goto LAB_004420f3;
        }
        iVar10 = uVar5 - param_2;
      }
LAB_004420f3:
      iVar6 = iVar6 * iVar6 + iVar9 * 3 * iVar9 * 3 + iVar10 * iVar10;
      aiStack_400[local_428] = iVar12;
      if (iVar6 < local_424) {
        local_424 = iVar6;
      }
      local_428 = local_428 + 1;
    } while (local_428 < iVar1);
  }
  iVar7 = 0;
  iVar11 = 0;
  if (0 < iVar1) {
    do {
      if (aiStack_400[iVar11] <= local_424) {
        *(char *)(iVar7 + param_3) = (char)iVar11;
        iVar7 = iVar7 + 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar1);
  }
  return;
}

