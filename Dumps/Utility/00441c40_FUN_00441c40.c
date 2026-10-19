// Address: 0x00441c40
// Name: FUN_00441c40
// Category: Utility


int __cdecl FUN_00441c40(void *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int local_4;
  
  if (param_4 <= param_3) {
    return param_3;
  }
  local_4 = param_3 * 2;
  piVar5 = (int *)(param_3 * 0x20 + 0xc + param_2);
  do {
    if (param_4 < local_4) {
      piVar1 = FUN_00441810(param_2,param_3);
    }
    else {
      piVar1 = FUN_004417e0(param_2,param_3);
    }
    if (piVar1 == (int *)0x0) {
      return param_3;
    }
    piVar5[-2] = piVar1[1];
    *piVar5 = piVar1[3];
    piVar5[2] = piVar1[5];
    piVar5[-3] = *piVar1;
    piVar5[-1] = piVar1[2];
    piVar5[1] = piVar1[4];
    iVar2 = (piVar1[1] - *piVar1) * 0x10;
    iVar3 = (piVar1[3] - piVar1[2]) * 0xc;
    cVar4 = iVar2 <= iVar3;
    if (!(bool)cVar4) {
      iVar3 = iVar2;
    }
    if (iVar3 < (piVar1[5] - piVar1[4]) * 8) {
      cVar4 = '\x02';
    }
    if (cVar4 == '\0') {
      iVar3 = (piVar1[1] + *piVar1) / 2;
      piVar1[1] = iVar3;
      piVar5[-3] = iVar3 + 1;
    }
    else if (cVar4 == '\x01') {
      iVar3 = (piVar1[3] + piVar1[2]) / 2;
      piVar1[3] = iVar3;
      piVar5[-1] = iVar3 + 1;
    }
    else if (cVar4 == '\x02') {
      iVar3 = (piVar1[5] + piVar1[4]) / 2;
      piVar1[5] = iVar3;
      piVar5[1] = iVar3 + 1;
    }
    FUN_00441840(param_1,piVar1);
    FUN_00441840(param_1,piVar5 + -3);
    local_4 = local_4 + 2;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 8;
  } while (param_3 < param_4);
  return param_3;
}

