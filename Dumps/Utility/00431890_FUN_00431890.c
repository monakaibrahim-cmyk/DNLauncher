// Address: 0x00431890
// Name: FUN_00431890
// Category: Utility


undefined4 __cdecl FUN_00431890(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  bool bVar6;
  
  uVar5 = 0;
  puVar4 = &DAT_004ac008;
  puVar2 = param_1;
  do {
    uVar1 = *puVar2;
    bVar6 = uVar1 < *puVar4;
    if (uVar1 != *puVar4) {
LAB_004318c6:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004318cb;
    }
    if (uVar1 == 0) break;
    uVar1 = puVar2[1];
    bVar6 = uVar1 < puVar4[1];
    if (uVar1 != puVar4[1]) goto LAB_004318c6;
    puVar2 = puVar2 + 2;
    puVar4 = puVar4 + 2;
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_004318cb:
  if (iVar3 == 0) {
    uVar5 = 10000;
  }
  puVar2 = param_1 + -2;
  LOCK();
  iVar3 = *(int *)puVar2;
  *(int *)puVar2 = *(int *)puVar2 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(param_1 + -8) + 4))(param_1 + -8);
  }
  return uVar5;
}

