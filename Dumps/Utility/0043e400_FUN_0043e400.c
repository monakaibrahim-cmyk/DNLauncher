// Address: 0x0043e400
// Name: FUN_0043e400
// Category: Utility


void __cdecl FUN_0043e400(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x74);
  param_1[0x62] = puVar3;
  *puVar3 = &LAB_0043d610;
  puVar3[2] = &LAB_0043e3b0;
  puVar3[0x1c] = 0;
  if (param_2 != '\0') {
    piVar8 = param_1 + 0x31;
    _param_2 = 0;
    if (0 < (int)param_1[9]) {
      param_1 = puVar3 + 0x12;
      piVar8 = (int *)(*piVar8 + 0xc);
      do {
        iVar4 = *piVar8;
        iVar7 = iVar4;
        if (*(char *)(puVar2 + 0x32) != '\0') {
          iVar7 = iVar4 * 3;
        }
        iVar1 = puVar2[1];
        iVar4 = FUN_0043bc10(piVar8[5],iVar4);
        iVar5 = FUN_0043bc10(piVar8[4],piVar8[-1]);
        uVar6 = (**(code **)(iVar1 + 0x14))(puVar2,1,1,iVar5,iVar4,iVar7);
        *param_1 = uVar6;
        _param_2 = _param_2 + 1;
        param_1 = param_1 + 1;
        piVar8 = piVar8 + 0x15;
      } while (_param_2 < (int)puVar2[9]);
    }
    puVar3[1] = FUN_0043d880;
    puVar3[3] = FUN_0043da70;
    puVar3[4] = puVar3 + 0x12;
    return;
  }
  iVar4 = (**(code **)(param_1[1] + 4))(param_1,1,0x500);
  puVar3[9] = iVar4 + 0x80;
  puVar3[10] = iVar4 + 0x100;
  puVar3[0xb] = iVar4 + 0x180;
  puVar3[0xc] = iVar4 + 0x200;
  puVar3[0xd] = iVar4 + 0x280;
  puVar3[0xe] = iVar4 + 0x300;
  puVar3[8] = iVar4;
  puVar3[0xf] = iVar4 + 0x380;
  puVar3[0x10] = iVar4 + 0x400;
  puVar3[0x11] = iVar4 + 0x480;
  puVar3[4] = 0;
  puVar3[1] = FUN_0043d870;
  puVar3[3] = FUN_0043d630;
  return;
}

