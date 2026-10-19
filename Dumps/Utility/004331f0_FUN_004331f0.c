// Address: 0x004331f0
// Name: FUN_004331f0
// Category: Utility


void __cdecl FUN_004331f0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  bool bVar8;
  
  iVar7 = *(int *)(in_EAX + 0x1450);
  iVar3 = *(int *)(in_EAX + 0xb5c + param_1 * 4);
  iVar6 = param_1 * 2;
  bVar8 = SBORROW4(iVar6,iVar7);
  iVar5 = iVar6 - iVar7;
  if (iVar7 < iVar6) {
    *(int *)(in_EAX + 0xb5c + param_1 * 4) = iVar3;
    return;
  }
  do {
    iVar7 = iVar6;
    if (bVar8 != iVar5 < 0) {
      iVar5 = *(int *)(in_EAX + 0xb60 + iVar6 * 4);
      iVar4 = *(int *)(in_EAX + 0xb5c + iVar6 * 4);
      uVar1 = *(ushort *)(unaff_EDI + iVar5 * 4);
      uVar2 = *(ushort *)(unaff_EDI + iVar4 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar5 + 0x1458 + in_EAX) <= *(byte *)(in_EAX + 0x1458 + iVar4))))) {
        iVar7 = iVar6 + 1;
      }
    }
    iVar5 = *(int *)(in_EAX + 0xb5c + iVar7 * 4);
    uVar1 = *(ushort *)(unaff_EDI + iVar3 * 4);
    uVar2 = *(ushort *)(unaff_EDI + iVar5 * 4);
    if (uVar1 < uVar2) break;
    if ((uVar1 == uVar2) &&
       (*(byte *)(in_EAX + 0x1458 + iVar3) <= *(byte *)(iVar5 + 0x1458 + in_EAX))) {
      *(int *)(in_EAX + 0xb5c + param_1 * 4) = iVar3;
      return;
    }
    *(int *)(in_EAX + 0xb5c + param_1 * 4) = iVar5;
    iVar4 = *(int *)(in_EAX + 0x1450);
    iVar6 = iVar7 * 2;
    bVar8 = SBORROW4(iVar6,iVar4);
    iVar5 = iVar6 - iVar4;
    param_1 = iVar7;
  } while (iVar6 <= iVar4);
  *(int *)(in_EAX + 0xb5c + param_1 * 4) = iVar3;
  return;
}

