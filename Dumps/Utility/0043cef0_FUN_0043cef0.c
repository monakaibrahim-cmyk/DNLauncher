// Address: 0x0043cef0
// Name: FUN_0043cef0
// Category: Utility


void FUN_0043cef0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x118);
  iVar2 = *(int *)(unaff_ESI + 0x184);
  iVar3 = (*(code *)**(undefined4 **)(unaff_ESI + 4))();
  *(int *)(iVar2 + 0x38) = iVar3;
  *(int *)(iVar2 + 0x3c) = iVar3 + *(int *)(unaff_ESI + 0x24) * 4;
  iVar3 = 0;
  if (0 < *(int *)(unaff_ESI + 0x24)) {
    piVar6 = (int *)(*(int *)(unaff_ESI + 0xc4) + 0xc);
    do {
      iVar4 = (piVar6[6] * *piVar6) / *(int *)(unaff_ESI + 0x118);
      iVar5 = (*(code *)**(undefined4 **)(unaff_ESI + 4))();
      iVar5 = iVar5 + iVar4 * 4;
      *(int *)(*(int *)(iVar2 + 0x38) + iVar3 * 4) = iVar5;
      *(int *)(*(int *)(iVar2 + 0x3c) + iVar3 * 4) = iVar5 + (iVar1 + 4) * iVar4 * 4;
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 0x15;
    } while (iVar3 < *(int *)(unaff_ESI + 0x24));
  }
  return;
}

