// Address: 0x0041b4e0
// Name: FUN_0041b4e0
// Category: Launcher


undefined4 FUN_0041b4e0(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  tagRECT local_14;
  
  GetClientRect(*(HWND *)(unaff_ESI + 0x20),&local_14);
  if (in_EAX != (int *)0x0) {
    *in_EAX = local_14.left;
    in_EAX[1] = local_14.top;
    in_EAX[2] = local_14.right;
    in_EAX[3] = local_14.bottom;
  }
  if (*(int *)(unaff_ESI + 0x54) == 0) {
    iVar7 = *(int *)(unaff_ESI + 0xa8);
    iVar6 = local_14.right - local_14.left;
  }
  else {
    iVar7 = *(int *)(unaff_ESI + 0xac);
    iVar6 = local_14.bottom - local_14.top;
  }
  iVar1 = *(int *)(unaff_ESI + 0x70);
  iVar2 = iVar6 - iVar7;
  *(int *)(unaff_ESI + 0xa0) = iVar2;
  local_14.left = iVar6 + iVar7 * -2;
  local_14.top = local_14.left >> 0x1f;
  uVar3 = *(int *)(unaff_ESI + 0x74) - iVar1;
  uVar4 = *(int *)(unaff_ESI + 0x98) - iVar1;
  lVar8 = __allmul(uVar4,(int)uVar4 >> 0x1f,local_14.left,local_14.top);
  uVar9 = __alldiv((uint)lVar8,(uint)((ulonglong)lVar8 >> 0x20),uVar3,(int)uVar3 >> 0x1f);
  iVar5 = (int)uVar9 + iVar7;
  *(int *)(unaff_ESI + 0x90) = iVar5;
  uVar4 = *(int *)(unaff_ESI + 0x88) - iVar1;
  lVar8 = __allmul(uVar4,(int)uVar4 >> 0x1f,local_14.left,local_14.top);
  uVar9 = __alldiv((uint)lVar8,(uint)((ulonglong)lVar8 >> 0x20),uVar3,(int)uVar3 >> 0x1f);
  *(int *)(unaff_ESI + 0x80) = (int)uVar9;
  if (iVar2 < iVar5) {
    *(int *)(unaff_ESI + 0x90) = iVar2;
  }
  iVar1 = *(int *)(unaff_ESI + 0x90);
  iVar5 = iVar1 - iVar7;
  if (iVar5 < (int)uVar9) {
    *(int *)(unaff_ESI + 0x80) = iVar5;
  }
  if (*(int *)(unaff_ESI + 0xa4) != 0) {
    *(int *)(unaff_ESI + 0x90) = (iVar6 - *(int *)(unaff_ESI + 0x80)) - iVar7;
    *(int *)(unaff_ESI + 0x80) = (iVar6 - iVar1) - iVar7;
  }
  if (((*(int *)(unaff_ESI + 0x9c) == iVar2) &&
      (*(int *)(unaff_ESI + 0x8c) == *(int *)(unaff_ESI + 0x90))) &&
     (*(int *)(unaff_ESI + 0x7c) == *(int *)(unaff_ESI + 0x80))) {
    return 0;
  }
  return 1;
}

