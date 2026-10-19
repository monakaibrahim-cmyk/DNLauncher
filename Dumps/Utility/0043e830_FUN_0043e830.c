// Address: 0x0043e830
// Name: FUN_0043e830
// Category: Utility


undefined4 __cdecl FUN_0043e830(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  piVar1 = (int *)param_1[4];
  pbVar4 = (byte *)*param_1;
  iVar5 = param_1[1];
  if (piVar1[0x5f] == 0) {
    for (; param_3 < 0x19; param_3 = param_3 + 8) {
      if (iVar5 == 0) {
        uVar3 = (**(code **)(piVar1[6] + 0xc))(piVar1);
        if ((char)uVar3 == '\0') {
LAB_0043e8e8:
          return uVar3 & 0xffffff00;
        }
        pbVar4 = *(byte **)piVar1[6];
        iVar5 = ((undefined4 *)piVar1[6])[1];
      }
      uVar3 = (uint)*pbVar4;
      iVar5 = iVar5 + -1;
      pbVar4 = pbVar4 + 1;
      if (uVar3 == 0xff) {
        do {
          if (iVar5 == 0) {
            uVar3 = (**(code **)(piVar1[6] + 0xc))(piVar1);
            if ((char)uVar3 == '\0') goto LAB_0043e8e8;
            pbVar4 = *(byte **)piVar1[6];
            iVar5 = ((undefined4 *)piVar1[6])[1];
          }
          uVar3 = (uint)*pbVar4;
          iVar5 = iVar5 + -1;
          pbVar4 = pbVar4 + 1;
        } while (uVar3 == 0xff);
        if (uVar3 != 0) {
          piVar1[0x5f] = uVar3;
          goto LAB_0043e8f5;
        }
        uVar3 = 0xff;
      }
      param_2 = param_2 << 8 | uVar3;
    }
  }
  else {
LAB_0043e8f5:
    if (param_3 < param_4) {
      if (*(char *)(piVar1[0x66] + 8) == '\0') {
        *(undefined4 *)(*piVar1 + 0x14) = 0x75;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        *(undefined1 *)(piVar1[0x66] + 8) = 1;
      }
      cVar2 = (char)param_3;
      param_3 = 0x19;
      param_2 = param_2 << (0x19U - cVar2 & 0x1f);
    }
  }
  param_1[1] = iVar5;
  *param_1 = pbVar4;
  param_1[3] = param_3;
  param_1[2] = param_2;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}

