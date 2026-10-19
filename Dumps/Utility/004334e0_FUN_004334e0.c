// Address: 0x004334e0
// Name: FUN_004334e0
// Category: Utility


void __fastcall FUN_004334e0(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_EBX;
  int unaff_EDI;
  ushort auStack_24 [16];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)auStack_24;
  uVar2 = 0;
  iVar1 = 1;
  do {
    uVar2 = (*(short *)(param_2 + iVar1 * 2 + -2) + uVar2) * 2;
    auStack_24[iVar1] = uVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  iVar1 = 0;
  if (-1 < unaff_EBX) {
    do {
      uVar3 = (uint)*(ushort *)(unaff_EDI + 2 + iVar1 * 4);
      if (uVar3 != 0) {
        uVar2 = auStack_24[uVar3];
        auStack_24[uVar3] = uVar2 + 1;
        uVar3 = FUN_00434800((uint)uVar2,uVar3);
        *(short *)(unaff_EDI + iVar1 * 4) = (short)uVar3;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= unaff_EBX);
  }
  __security_check_cookie(local_4 ^ (uint)auStack_24);
  return;
}

