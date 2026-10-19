// Address: 0x00432a00
// Name: FUN_00432a00
// Category: Utility


byte __cdecl FUN_00432a00(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  uint uVar5;
  ushort uVar6;
  undefined1 *puVar7;
  short sVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = 0;
  do {
    uVar5 = param_1[0x1d];
    if (uVar5 < 0x106) {
      FUN_004327f0();
      uVar5 = param_1[0x1d];
      if ((uVar5 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar5 == 0) {
        if (param_1[0x17] < 0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          puVar7 = (undefined1 *)(param_1[0xe] + param_1[0x17]);
        }
        FUN_00434120(puVar7,param_1,(void *)(uint)(param_2 == 4));
        param_1[0x17] = param_1[0x1b];
        FUN_00431c50();
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (param_2 == 4) * '\x02' + 1;
        }
        return (param_2 != 4) - 1U & 2;
      }
    }
    if (2 < uVar5) {
      uVar9 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar9;
      *(undefined2 *)(param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2) =
           *(undefined2 *)(param_1[0x11] + uVar9 * 2);
      uVar9 = (uint)*(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2);
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
    }
    if (((uVar9 != 0) && (param_1[0x1b] - uVar9 <= param_1[0xb] - 0x106U)) && (param_1[0x22] != 2))
    {
      if (param_1[0x22] == 3) {
        if (param_1[0x1b] - uVar9 != 1) goto LAB_00432ad1;
        pcVar4 = FUN_00432720(uVar9);
      }
      else {
        pcVar4 = FUN_004325a0();
      }
      param_1[0x18] = (int)pcVar4;
    }
LAB_00432ad1:
    if ((uint)param_1[0x18] < 3) {
      bVar3 = *(byte *)(param_1[0x1b] + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar3;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar3 + 0x25) = (short)param_1[bVar3 + 0x25] + 1;
      bVar10 = param_1[0x5a8] == param_1[0x5a7] + -1;
      param_1[0x1d] = param_1[0x1d] + -1;
LAB_00432c6e:
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    else {
      sVar8 = (short)param_1[0x1b] - (short)param_1[0x1c];
      iVar2 = param_1[0x18];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar8;
      bVar3 = (char)iVar2 - 3;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar3;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&DAT_004ad0b8)[bVar3] + 0x126) =
           (short)param_1[(byte)(&DAT_004ad0b8)[bVar3] + 0x126] + 1;
      uVar6 = sVar8 - 1;
      if (uVar6 < 0x100) {
        bVar3 = (&DAT_004aceb8)[uVar6];
      }
      else {
        bVar3 = (&DAT_004acfb8)[uVar6 >> 7];
      }
      *(short *)(param_1 + bVar3 + 0x262) = (short)param_1[bVar3 + 0x262] + 1;
      bVar10 = param_1[0x5a8] == param_1[0x5a7] + -1;
      uVar5 = param_1[0x18];
      param_1[0x1d] = param_1[0x1d] - uVar5;
      if ((uVar5 <= (uint)param_1[0x20]) && (2 < (uint)param_1[0x1d])) {
        param_1[0x18] = uVar5 - 1;
        do {
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar9 = ((uint)*(byte *)(param_1[0x1b] + 2U + param_1[0xe]) ^
                  param_1[0x12] << ((byte)param_1[0x16] & 0x1f)) & param_1[0x15];
          param_1[0x12] = uVar9;
          *(undefined2 *)(param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2) =
               *(undefined2 *)(param_1[0x11] + uVar9 * 2);
          uVar9 = (uint)*(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
          piVar1 = param_1 + 0x18;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        goto LAB_00432c6e;
      }
      param_1[0x1b] = param_1[0x1b] + uVar5;
      param_1[0x18] = 0;
      uVar5 = (uint)*(byte *)(param_1[0x1b] + param_1[0xe]);
      param_1[0x12] = uVar5;
      param_1[0x12] =
           (uVar5 << ((byte)param_1[0x16] & 0x1f) ^
           (uint)((byte *)(param_1[0x1b] + param_1[0xe]))[1]) & param_1[0x15];
    }
    if (bVar10) {
      if (param_1[0x17] < 0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar7 = (undefined1 *)(param_1[0xe] + param_1[0x17]);
      }
      FUN_00434120(puVar7,param_1,(void *)0x0);
      param_1[0x17] = param_1[0x1b];
      FUN_00431c50();
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

