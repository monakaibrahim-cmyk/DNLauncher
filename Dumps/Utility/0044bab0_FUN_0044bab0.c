// Address: 0x0044bab0
// Name: FUN_0044bab0
// Category: Utility


void __cdecl FUN_0044bab0(int *param_1,byte *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  
  cVar1 = (char)param_1[2];
  iVar5 = *param_1;
  if (((cVar1 == '\x02') && (param_3 != 0)) &&
     (iVar2 = iVar5, pbVar3 = param_2, *(char *)((int)param_1 + 9) == '\b')) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pbVar3 = *(byte *)((((*param_2 & 0xf8) << 5 | param_2[1] & 0xf8) * 4 |
                          (int)(uint)param_2[2] >> 3) + param_3);
      param_2 = param_2 + 3;
      pbVar3 = pbVar3 + 1;
    }
    bVar4 = *(byte *)((int)param_1 + 9);
    *(byte *)((int)param_1 + 0xb) = bVar4;
    *(undefined1 *)(param_1 + 2) = 3;
    *(undefined1 *)((int)param_1 + 10) = 1;
    if (7 < bVar4) {
      param_1[1] = (uint)(bVar4 >> 3) * iVar5;
      return;
    }
  }
  else {
    if (((cVar1 != '\x06') || (param_3 == 0)) ||
       (iVar2 = iVar5, pbVar3 = param_2, *(char *)((int)param_1 + 9) != '\b')) {
      if (((cVar1 == '\x03') && (param_4 != 0)) && (*(char *)((int)param_1 + 9) == '\b')) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + param_4);
          param_2 = param_2 + 1;
        }
      }
      return;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pbVar3 = *(byte *)((((*param_2 & 0xf8) << 5 | param_2[1] & 0xf8) * 4 |
                          (int)(uint)param_2[2] >> 3) + param_3);
      param_2 = param_2 + 4;
      pbVar3 = pbVar3 + 1;
    }
    bVar4 = *(byte *)((int)param_1 + 9);
    *(byte *)((int)param_1 + 0xb) = bVar4;
    *(undefined1 *)(param_1 + 2) = 3;
    *(undefined1 *)((int)param_1 + 10) = 1;
    if (7 < bVar4) {
      param_1[1] = (uint)(bVar4 >> 3) * iVar5;
      return;
    }
  }
  param_1[1] = (uint)bVar4 * iVar5 + 7 >> 3;
  return;
}

