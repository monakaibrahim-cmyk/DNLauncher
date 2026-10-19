// Address: 0x00448ad0
// Name: FUN_00448ad0
// Category: Utility


void __cdecl FUN_00448ad0(uint *param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  cVar1 = (char)param_1[2];
  uVar2 = *param_1;
  cVar4 = (char)param_3;
  if (((cVar1 == '\x02') || ((cVar1 == '\x06' && ((param_3 & 0x400000) != 0)))) &&
     (*(char *)((int)param_1 + 10) == '\x04')) {
    if (*(char *)((int)param_1 + 9) == '\b') {
      uVar6 = uVar2;
      puVar3 = param_2;
      if (cVar4 < '\0') {
        if (1 < uVar2) {
          iVar5 = uVar2 - 1;
          do {
            puVar3[3] = param_2[4];
            puVar3[4] = param_2[5];
            puVar3[5] = param_2[6];
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 4;
            puVar3 = puVar3 + 3;
          } while (iVar5 != 0);
          *(undefined1 *)((int)param_1 + 0xb) = 0x18;
          param_1[1] = uVar2 * 3;
          *(undefined1 *)((int)param_1 + 10) = 3;
          goto LAB_00448d6e;
        }
      }
      else {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_2 = puVar3[1];
          param_2[1] = puVar3[2];
          param_2[2] = puVar3[3];
          param_2 = param_2 + 3;
          puVar3 = puVar3 + 4;
        }
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x18;
      param_1[1] = uVar2 * 3;
      *(undefined1 *)((int)param_1 + 10) = 3;
    }
    else {
      uVar6 = uVar2;
      puVar3 = param_2;
      if (cVar4 < '\0') {
        if (1 < uVar2) {
          iVar5 = uVar2 - 1;
          do {
            param_2[6] = puVar3[8];
            param_2[7] = puVar3[9];
            param_2[8] = puVar3[10];
            param_2[9] = puVar3[0xb];
            param_2[10] = puVar3[0xc];
            param_2[0xb] = puVar3[0xd];
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 6;
            puVar3 = puVar3 + 8;
          } while (iVar5 != 0);
        }
      }
      else {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_2 = puVar3[2];
          param_2[1] = puVar3[3];
          param_2[2] = puVar3[4];
          param_2[3] = puVar3[5];
          param_2[4] = puVar3[6];
          param_2[5] = puVar3[7];
          param_2 = param_2 + 6;
          puVar3 = puVar3 + 8;
        }
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x30;
      param_1[1] = uVar2 * 6;
      *(undefined1 *)((int)param_1 + 10) = 3;
    }
    goto LAB_00448d6e;
  }
  if (cVar1 != '\0') {
    if (cVar1 != '\x04') goto LAB_00448d6e;
    if ((param_3 & 0x400000) == 0) {
      return;
    }
  }
  if (*(char *)((int)param_1 + 10) != '\x02') goto LAB_00448d6e;
  if (*(char *)((int)param_1 + 9) == '\b') {
    uVar6 = uVar2;
    puVar3 = param_2;
    if (cVar4 < '\0') {
      if (uVar2 != 0) {
        do {
          *puVar3 = *param_2;
          param_2 = param_2 + 2;
          uVar6 = uVar6 - 1;
          puVar3 = puVar3 + 1;
        } while (uVar6 != 0);
        *(undefined1 *)((int)param_1 + 0xb) = 8;
        param_1[1] = uVar2;
        goto LAB_00448d6a;
      }
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_2 = puVar3[1];
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 2;
      }
    }
    *(undefined1 *)((int)param_1 + 0xb) = 8;
    param_1[1] = uVar2;
  }
  else {
    uVar6 = uVar2;
    puVar3 = param_2;
    if (cVar4 < '\0') {
      if (1 < uVar2) {
        iVar5 = uVar2 - 1;
        do {
          param_2[2] = puVar3[4];
          param_2[3] = puVar3[5];
          iVar5 = iVar5 + -1;
          param_2 = param_2 + 2;
          puVar3 = puVar3 + 4;
        } while (iVar5 != 0);
      }
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_2 = puVar3[2];
        param_2[1] = puVar3[3];
        param_2 = param_2 + 2;
        puVar3 = puVar3 + 4;
      }
    }
    *(undefined1 *)((int)param_1 + 0xb) = 0x10;
    param_1[1] = uVar2 * 2;
  }
LAB_00448d6a:
  *(undefined1 *)((int)param_1 + 10) = 1;
LAB_00448d6e:
  if ((param_3 & 0x400000) != 0) {
    *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
  }
  return;
}

