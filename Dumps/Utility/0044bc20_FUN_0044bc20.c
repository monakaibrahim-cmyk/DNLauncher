// Address: 0x0044bc20
// Name: FUN_0044bc20
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0044bc20(int *param_1)

{
  double dVar1;
  byte bVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  uint local_38;
  uint local_34;
  undefined1 local_28;
  ushort local_24;
  uint local_20;
  
  if (*(byte *)((int)param_1 + 0x127) < 9) {
    pvVar3 = FUN_0044d960(param_1,0x100);
    param_1[0x59] = (int)pvVar3;
    iVar9 = 0;
    do {
      fVar13 = (float10)FUN_0047ad20();
      iVar8 = iVar9 + 1;
      local_28 = (undefined1)(int)ROUND(fVar13 * (float10)_DAT_0049c998 + (float10)_DAT_004b4728);
      *(undefined1 *)(iVar9 + param_1[0x59]) = local_28;
      iVar9 = iVar8;
    } while (iVar8 < 0x100);
    if ((param_1[0x1c] & 0x600080U) != 0) {
      pvVar3 = FUN_0044d960(param_1,0x100);
      param_1[0x5b] = (int)pvVar3;
      iVar9 = 0;
      do {
        fVar13 = (float10)FUN_0047ad20();
        iVar8 = iVar9 + 1;
        local_28 = (undefined1)(int)ROUND(fVar13 * (float10)_DAT_0049c998 + (float10)_DAT_004b4728);
        *(undefined1 *)(iVar9 + param_1[0x5b]) = local_28;
        iVar9 = iVar8;
      } while (iVar8 < 0x100);
      pvVar3 = FUN_0044d960(param_1,0x100);
      param_1[0x5a] = (int)pvVar3;
      iVar9 = 0;
      do {
        fVar13 = (float10)FUN_0047ad20();
        iVar8 = iVar9 + 1;
        local_28 = (undefined1)(int)ROUND(fVar13 * (float10)_DAT_0049c998 + (float10)_DAT_004b4728);
        *(undefined1 *)(iVar9 + param_1[0x5a]) = local_28;
        iVar9 = iVar8;
      } while (iVar8 < 0x100);
      return;
    }
  }
  else {
    if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
      local_38 = (uint)*(byte *)((int)param_1 + 0x17f);
    }
    else {
      local_38 = (uint)*(byte *)(param_1 + 0x5f);
      if ((uint)*(byte *)(param_1 + 0x5f) < (uint)*(byte *)((int)param_1 + 0x17d)) {
        local_38 = (uint)*(byte *)((int)param_1 + 0x17d);
      }
      if (local_38 < *(byte *)((int)param_1 + 0x17e)) {
        local_38 = (uint)*(byte *)((int)param_1 + 0x17e);
      }
    }
    iVar9 = 0;
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = 0x10 - local_38;
    }
    if (((param_1[0x1c] & 0x400U) == 0) || (4 < (int)local_38)) {
      if ((int)local_38 < 9) {
        if ((int)local_38 < 0) {
          local_38 = 0;
        }
      }
      else {
        local_38 = 8;
      }
    }
    else {
      local_38 = 5;
    }
    param_1[0x56] = local_38 & 0xff;
    bVar2 = (byte)local_38;
    bVar6 = 8 - bVar2;
    iVar8 = 1 << (bVar6 & 0x1f);
    pvVar3 = FUN_0044d960(param_1,iVar8 * 4);
    param_1[0x5c] = (int)pvVar3;
    if ((param_1[0x1c] & 0x480U) == 0) {
      local_34 = 0;
      if (0 < iVar8) {
        do {
          pvVar3 = FUN_0044d960(param_1,0x200);
          *(void **)(param_1[0x5c] + local_34 * 4) = pvVar3;
          iVar9 = 0;
          do {
            fVar13 = (float10)FUN_0047ad20();
            iVar11 = iVar9 + 2;
            local_20._0_2_ =
                 (undefined2)(int)ROUND(fVar13 * (float10)_DAT_0049ebc0 + (float10)_DAT_004b4728);
            *(undefined2 *)(iVar9 + *(int *)(param_1[0x5c] + local_34 * 4)) = (undefined2)local_20;
            iVar9 = iVar11;
          } while (iVar11 < 0x200);
          local_34 = local_34 + 1;
        } while ((int)local_34 < iVar8);
      }
    }
    else {
      if (0 < iVar8) {
        do {
          pvVar3 = FUN_0044d960(param_1,0x200);
          *(void **)(param_1[0x5c] + iVar9 * 4) = pvVar3;
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      uVar4 = iVar8 << 8;
      uVar10 = 0;
      local_34 = 0;
      dVar1 = (double)(int)uVar4;
      if ((int)uVar4 < 0) {
        dVar1 = dVar1 + _DAT_0049c9d0;
      }
      do {
        fVar13 = (float10)FUN_0047ad20();
        local_20 = (uint)(longlong)ROUND(fVar13 * (float10)dVar1);
        if (uVar10 <= local_20) {
          local_24 = (ushort)((local_34 & 0xff) << 8) | (ushort)local_34;
          do {
            uVar7 = uVar10 >> (bVar6 & 0x1f);
            uVar5 = 0xff >> (bVar2 & 0x1f) & uVar10;
            uVar10 = uVar10 + 1;
            *(ushort *)(*(int *)(param_1[0x5c] + uVar5 * 4) + uVar7 * 2) = local_24;
          } while (uVar10 <= local_20);
        }
        local_34 = local_34 + 1;
      } while ((int)local_34 < 0x100);
      if (uVar10 < uVar4) {
        do {
          uVar5 = 0xff >> (bVar2 & 0x1f) & uVar10;
          uVar7 = uVar10 >> (bVar6 & 0x1f);
          uVar10 = uVar10 + 1;
          *(undefined2 *)(*(int *)(param_1[0x5c] + uVar5 * 4) + uVar7 * 2) = 0xffff;
        } while (uVar10 < uVar4);
      }
    }
    if ((param_1[0x1c] & 0x600080U) != 0) {
      pvVar3 = FUN_0044d960(param_1,iVar8 * 4);
      iVar9 = 0;
      param_1[0x5e] = (int)pvVar3;
      if (0 < iVar8) {
        do {
          pvVar3 = FUN_0044d960(param_1,0x200);
          *(void **)(param_1[0x5e] + iVar9 * 4) = pvVar3;
          iVar11 = 0;
          do {
            fVar13 = (float10)FUN_0047ad20();
            iVar12 = iVar11 + 2;
            local_20._0_2_ =
                 (undefined2)(int)ROUND(fVar13 * (float10)_DAT_0049ebc0 + (float10)_DAT_004b4728);
            *(undefined2 *)(iVar11 + *(int *)(param_1[0x5e] + iVar9 * 4)) = (undefined2)local_20;
            iVar11 = iVar12;
          } while (iVar12 < 0x200);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      pvVar3 = FUN_0044d960(param_1,iVar8 * 4);
      iVar9 = 0;
      param_1[0x5d] = (int)pvVar3;
      if (0 < iVar8) {
        do {
          pvVar3 = FUN_0044d960(param_1,0x200);
          *(void **)(param_1[0x5d] + iVar9 * 4) = pvVar3;
          iVar11 = 0;
          do {
            fVar13 = (float10)FUN_0047ad20();
            iVar12 = iVar11 + 2;
            local_20._0_2_ =
                 (undefined2)(int)ROUND(fVar13 * (float10)_DAT_0049ebc0 + (float10)_DAT_004b4728);
            *(undefined2 *)(iVar11 + *(int *)(param_1[0x5d] + iVar9 * 4)) = (undefined2)local_20;
            iVar11 = iVar12;
          } while (iVar12 < 0x200);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
    }
  }
  return;
}

