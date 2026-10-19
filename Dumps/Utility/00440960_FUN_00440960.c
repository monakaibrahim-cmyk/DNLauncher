// Address: 0x00440960
// Name: FUN_00440960
// Category: Utility


void __cdecl FUN_00440960(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iStack_10;
  undefined1 uStack_c;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x68] = (int)puVar3;
  *puVar3 = &LAB_00440490;
  puVar3[1] = FUN_004404b0;
  *(undefined1 *)(puVar3 + 2) = 0;
  if (*(char *)((int)param_1 + 0x10a) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  if (((char)param_1[0x12] == '\0') || (bVar2 = true, param_1[0x46] < 2)) {
    bVar2 = false;
  }
  iStack_10 = 0;
  if (0 < param_1[9]) {
    piVar7 = (int *)(param_1[0x31] + 0x24);
    puVar8 = puVar3 + 0xd;
    do {
      iVar4 = (piVar7[-7] * *piVar7) / param_1[0x46];
      iVar5 = (piVar7[-6] * *piVar7) / param_1[0x46];
      iVar9 = param_1[0x45];
      iVar1 = param_1[0x44];
      puVar8[0xc] = iVar5;
      if ((char)piVar7[3] == '\0') {
        *puVar8 = &LAB_00440590;
      }
      else if ((iVar4 == iVar1) && (iVar5 == iVar9)) {
        *puVar8 = &LAB_00440580;
      }
      else {
        if (iVar4 * 2 == iVar1) {
          if (iVar5 == iVar9) {
            if ((bVar2) && (2 < (uint)piVar7[1])) {
              *puVar8 = &LAB_00440750;
            }
            else {
              *puVar8 = &LAB_00440680;
            }
          }
          else {
            if ((iVar4 * 2 != iVar1) || (iVar5 * 2 != iVar9)) goto LAB_00440ab0;
            if ((bVar2) && (2 < (uint)piVar7[1])) {
              *puVar8 = FUN_00440820;
              *(undefined1 *)(puVar3 + 2) = 1;
            }
            else {
              *puVar8 = &LAB_004406e0;
            }
          }
        }
        else {
LAB_00440ab0:
          if ((iVar1 % iVar4 == 0) && (iVar9 % iVar5 == 0)) {
            uStack_c = (undefined1)(iVar1 / iVar4);
            *puVar8 = FUN_004405a0;
            *(undefined1 *)(iStack_10 + 0x8c + (int)puVar3) = uStack_c;
            *(char *)(iStack_10 + 0x96 + (int)puVar3) = (char)(iVar9 / iVar5);
          }
          else {
            *(undefined4 *)(*param_1 + 0x14) = 0x26;
            (**(code **)*param_1)(param_1);
          }
        }
        iVar9 = param_1[0x45];
        iVar1 = param_1[1];
        iVar4 = FUN_0043bc10(param_1[0x17],param_1[0x44]);
        uVar6 = (**(code **)(iVar1 + 8))(param_1,1,iVar4,iVar9);
        puVar8[-10] = uVar6;
      }
      iStack_10 = iStack_10 + 1;
      puVar8 = puVar8 + 1;
      piVar7 = piVar7 + 0x15;
    } while (iStack_10 < param_1[9]);
  }
  return;
}

