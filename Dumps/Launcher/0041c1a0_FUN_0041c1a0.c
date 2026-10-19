// Address: 0x0041c1a0
// Name: FUN_0041c1a0
// Category: Launcher


undefined4 __cdecl FUN_0041c1a0(undefined4 *param_1)

{
  ushort uVar1;
  undefined4 *in_EAX;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  bool bVar5;
  
  puVar4 = (ushort *)*in_EAX;
  if (puVar4 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  puVar2 = (ushort *)*param_1;
  while( true ) {
    uVar1 = *puVar2;
    bVar5 = uVar1 < *puVar4;
    if (uVar1 != *puVar4) break;
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = puVar2[1];
    bVar5 = uVar1 < puVar4[1];
    if (uVar1 != puVar4[1]) break;
    puVar2 = puVar2 + 2;
    puVar4 = puVar4 + 2;
    if (uVar1 == 0) {
      return 0;
    }
  }
  iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 != 0);
}

