// Address: 0x00448890
// Name: FUN_00448890
// Category: Utility


void __cdecl FUN_00448890(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 local_4;
  
  pvVar1 = (void *)0x0;
  puVar3 = (undefined4 *)0x0;
  pvVar4 = (void *)0x0;
  puVar2 = (undefined *)0x0;
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    local_4 = puVar3[0x91];
    puVar2 = (undefined *)puVar3[0x93];
  }
  if (param_2 != (undefined4 *)0x0) {
    pvVar4 = (void *)*param_2;
  }
  if (param_3 != (undefined4 *)0x0) {
    pvVar1 = (void *)*param_3;
  }
  FUN_004485d0(puVar3,(int)pvVar4,(int)pvVar1);
  if (pvVar4 != (void *)0x0) {
    FUN_00445510((int)puVar3,(int)pvVar4,0x4000,-1);
    FUN_0044d7f0(pvVar4,puVar2,local_4);
    *param_2 = 0;
  }
  if (pvVar1 != (void *)0x0) {
    FUN_00445510((int)puVar3,(int)pvVar1,0x4000,-1);
    FUN_0044d7f0(pvVar1,puVar2,local_4);
    *param_3 = 0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0044d7f0(puVar3,puVar2,local_4);
    *param_1 = 0;
  }
  return;
}

