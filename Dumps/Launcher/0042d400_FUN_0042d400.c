// Address: 0x0042d400
// Name: FUN_0042d400
// Category: Launcher


void __thiscall FUN_0042d400(void *this,int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  void *local_2c;
  byte local_28;
  undefined3 uStack_27;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_2c;
  iVar4 = *(int *)(param_1 + 0x14);
  uVar7 = 0;
  local_2c = this;
  if (0 < iVar4) {
    bVar8 = iVar4 != 0;
    do {
      if (!bVar8 && iVar4 != 0) {
        FUN_00475b26();
      }
      puVar1 = (undefined4 *)(param_1 + 4);
      puVar5 = puVar1;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar5 = (undefined4 *)*puVar1;
      }
      bVar2 = *(byte *)((int)puVar5 + uVar7);
      _local_28 = CONCAT31(uStack_27,bVar2);
      if (bVar2 == 0x26) {
        if ((int)uVar7 < (int)(*(uint *)(param_1 + 0x14) - 2)) {
          if (*(uint *)(param_1 + 0x14) < uVar7 + 1) {
            FUN_00475b26();
          }
          puVar5 = puVar1;
          if (0xf < *(uint *)(param_1 + 0x18)) {
            puVar5 = (undefined4 *)*puVar1;
          }
          if (*(char *)((int)puVar5 + uVar7 + 1) == '#') {
            if (*(uint *)(param_1 + 0x14) < uVar7 + 2) {
              FUN_00475b26();
            }
            puVar5 = puVar1;
            if (0xf < *(uint *)(param_1 + 0x18)) {
              puVar5 = (undefined4 *)*puVar1;
            }
            if (*(char *)((int)puVar5 + uVar7 + 2) == 'x') {
              if ((int)uVar7 < *(int *)(param_1 + 0x14) + -1) {
                do {
                  uVar9 = 1;
                  iVar4 = FUN_004028d0(param_1);
                  FUN_004262b0((undefined4 *)(iVar4 + uVar7),uVar9);
                  uVar7 = uVar7 + 1;
                  if (*(uint *)(param_1 + 0x14) < uVar7) {
                    FUN_00475b26();
                  }
                  puVar5 = puVar1;
                  if (0xf < *(uint *)(param_1 + 0x18)) {
                    puVar5 = (undefined4 *)*puVar1;
                  }
                } while ((*(char *)((int)puVar5 + uVar7) != ';') &&
                        ((int)uVar7 < *(int *)(param_1 + 0x14) + -1));
              }
              goto LAB_0042d4f2;
            }
          }
        }
        FUN_004262b0((undefined4 *)PTR_s__amp__004c5344,DAT_004c5348);
        uVar7 = uVar7 + 1;
      }
      else if (bVar2 == 0x3c) {
        FUN_004262b0((undefined4 *)PTR_DAT_004c5350,DAT_004c5354);
        uVar7 = uVar7 + 1;
      }
      else if (bVar2 == 0x3e) {
        FUN_004262b0((undefined4 *)PTR_DAT_004c535c,DAT_004c5360);
        uVar7 = uVar7 + 1;
      }
      else if (bVar2 == 0x22) {
        FUN_004262b0((undefined4 *)PTR_s__quot__004c5368,DAT_004c536c);
        uVar7 = uVar7 + 1;
      }
      else if (bVar2 == 0x27) {
        FUN_004262b0((undefined4 *)PTR_s__apos__004c5374,DAT_004c5378);
        uVar7 = uVar7 + 1;
      }
      else if (bVar2 < 0x20) {
        FUN_0042eb30(local_24,"&#x%02X;");
        pcVar6 = local_24;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        FUN_004262b0((undefined4 *)local_24,(int)pcVar6 - (int)(local_24 + 1));
        uVar7 = uVar7 + 1;
      }
      else {
        FUN_00424db0();
        uVar7 = uVar7 + 1;
      }
LAB_0042d4f2:
      uVar9 = *(uint *)(param_1 + 0x14);
      bVar8 = uVar7 < uVar9;
      iVar4 = uVar7 - uVar9;
    } while ((int)uVar7 < (int)uVar9);
  }
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}

