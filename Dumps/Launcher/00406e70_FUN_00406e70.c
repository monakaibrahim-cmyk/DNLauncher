// Address: 0x00406e70
// Name: FUN_00406e70
// Category: Launcher


uint __fastcall FUN_00406e70(int param_1)

{
  uint in_EAX;
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint unaff_EDI;
  
  if (*(uint *)(param_1 + 0x14) < in_EAX) {
    in_EAX = *(uint *)(param_1 + 0x14);
  }
  uVar3 = in_EAX;
  if (unaff_EDI <= in_EAX) {
    uVar3 = unaff_EDI;
  }
  if (*(uint *)(param_1 + 0x18) < 8) {
    puVar1 = (ushort *)(param_1 + 4);
  }
  else {
    puVar1 = *(ushort **)(param_1 + 4);
  }
  puVar2 = &DAT_004b0360;
  do {
    if (uVar3 == 0) {
LAB_00406ec5:
      if (unaff_EDI <= in_EAX) {
        return (uint)(in_EAX != unaff_EDI);
      }
      return 0xffffffff;
    }
    if (*puVar1 != *puVar2) {
      uVar3 = (-(uint)(*puVar1 < *puVar2) & 0xfffffffe) + 1;
      if (uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00406ec5;
    }
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 - 1;
  } while( true );
}

