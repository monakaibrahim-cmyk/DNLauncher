// Address: 0x0042afd0
// Name: FUN_0042afd0
// Category: Launcher


void FUN_0042afd0(void *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_280 [75];
  undefined4 uStack_154;
  undefined4 local_13c [79];
  
  uStack_154 = 0x42afe9;
  _memset(local_13c,0,0x13c);
  puVar2 = local_13c;
  puVar3 = auStack_280;
  for (iVar1 = 0x4f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0042b4f0(param_1,param_2);
  return;
}

