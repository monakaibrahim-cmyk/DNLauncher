// Address: 0x00437a00
// Name: FUN_00437a00
// Category: Utility


uint __fastcall FUN_00437a00(int *param_1)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x20))();
  if (cVar2 != '\0') {
    return 0xffffffff;
  }
  bVar1 = *(byte *)(param_1[1] + param_1[4]);
  param_1[4] = param_1[4] + 1;
  return (uint)bVar1;
}

