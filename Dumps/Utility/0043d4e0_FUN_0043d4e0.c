// Address: 0x0043d4e0
// Name: FUN_0043d4e0
// Category: Utility


void __cdecl FUN_0043d4e0(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  param_1[0x61] = (int)puVar1;
  *puVar1 = &LAB_0043d460;
  if (param_2 != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (*(char *)(param_1[0x68] + 8) == '\0') {
    iVar2 = param_1[0x46];
  }
  else {
    if (param_1[0x46] < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)(param_1);
    }
    FUN_0043cef0();
    iVar2 = param_1[0x46] + 2;
  }
  iVar4 = 0;
  if (0 < param_1[9]) {
    piVar5 = (int *)(param_1[0x31] + 0x24);
    puVar1 = puVar1 + 2;
    do {
      uVar3 = (**(code **)(param_1[1] + 8))
                        (param_1,1,piVar5[-2] * *piVar5,
                         ((piVar5[-6] * *piVar5) / param_1[0x46]) * iVar2);
      *puVar1 = uVar3;
      iVar4 = iVar4 + 1;
      puVar1 = puVar1 + 1;
      piVar5 = piVar5 + 0x15;
    } while (iVar4 < param_1[9]);
  }
  return;
}

