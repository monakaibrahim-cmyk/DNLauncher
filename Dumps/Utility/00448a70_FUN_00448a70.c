// Address: 0x00448a70
// Name: FUN_00448a70
// Category: Utility


void __cdecl FUN_00448a70(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      puVar3 = &DAT_0049e890;
    }
    else if (bVar1 == 2) {
      puVar3 = &DAT_0049e990;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar3 = &DAT_0049ea90;
    }
    for (; param_2 < pbVar2; param_2 = param_2 + 1) {
      *param_2 = puVar3[*param_2];
    }
  }
  return;
}

