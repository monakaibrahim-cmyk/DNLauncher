// Address: 0x0043b5d0
// Name: FUN_0043b5d0
// Category: Utility


void FUN_0043b5d0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int *unaff_ESI;
  char cStack_4;
  
  iVar1 = unaff_ESI[0x60];
  FUN_0043b300(unaff_ESI);
  FUN_0043b530();
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar2 = FUN_0043b280(extraout_ECX,(int)unaff_ESI);
  *(char *)(iVar1 + 0x10) = (char)uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((*(char *)((int)unaff_ESI + 0x4a) == '\0') || ((char)unaff_ESI[0x10] == '\0')) {
    *(undefined1 *)(unaff_ESI + 0x16) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x59) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
  }
  if (*(char *)((int)unaff_ESI + 0x4a) == '\0') goto LAB_0043b675;
  if (*(char *)((int)unaff_ESI + 0x41) != '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x2f;
    (**(code **)*unaff_ESI)();
  }
  if (unaff_ESI[0x19] == 3) {
    if (unaff_ESI[0x1d] == 0) {
      if ((char)unaff_ESI[0x14] == '\0') goto LAB_0043b63e;
      *(undefined1 *)((int)unaff_ESI + 0x5a) = 1;
    }
    else {
      *(undefined1 *)((int)unaff_ESI + 0x59) = 1;
    }
  }
  else {
    *(undefined1 *)((int)unaff_ESI + 0x59) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
    unaff_ESI[0x1d] = 0;
LAB_0043b63e:
    *(undefined1 *)(unaff_ESI + 0x16) = 1;
  }
  if ((char)unaff_ESI[0x16] != '\0') {
    FUN_004436a0(unaff_ESI);
    *(int *)(iVar1 + 0x14) = unaff_ESI[0x6a];
  }
  if ((*(char *)((int)unaff_ESI + 0x5a) != '\0') || (*(char *)((int)unaff_ESI + 0x59) != '\0')) {
    FUN_004429d0(unaff_ESI);
    *(int *)(iVar1 + 0x18) = unaff_ESI[0x6a];
  }
LAB_0043b675:
  if (*(char *)((int)unaff_ESI + 0x41) == '\0') {
    if (*(char *)(iVar1 + 0x10) == '\0') {
      FUN_00440fc0(unaff_ESI);
      FUN_00440960(unaff_ESI);
    }
    else {
      FUN_004416e0((int)unaff_ESI);
    }
    FUN_004403f0((int)unaff_ESI,*(char *)((int)unaff_ESI + 0x5a));
  }
  FUN_004400a0((int)unaff_ESI);
  if (*(char *)((int)unaff_ESI + 0xc9) == '\0') {
    if ((char)unaff_ESI[0x32] == '\0') {
      FUN_0043f040((int)unaff_ESI);
    }
    else {
      FUN_0043fd10((int)unaff_ESI);
    }
  }
  else {
    *(undefined4 *)(*unaff_ESI + 0x14) = 1;
    (**(code **)*unaff_ESI)();
  }
  if ((*(char *)(unaff_ESI[100] + 0x10) != '\0') || (cStack_4 = '\0', (char)unaff_ESI[0x10] != '\0')
     ) {
    cStack_4 = '\x01';
  }
  FUN_0043e400(unaff_ESI,cStack_4);
  if (*(char *)((int)unaff_ESI + 0x41) == '\0') {
    FUN_0043d4e0(unaff_ESI,'\0');
  }
  (**(code **)(unaff_ESI[1] + 0x18))();
  (**(code **)(unaff_ESI[100] + 8))();
  if (((unaff_ESI[2] != 0) && ((char)unaff_ESI[0x10] == '\0')) &&
     (*(char *)(unaff_ESI[100] + 0x10) != '\0')) {
    iVar3 = unaff_ESI[9];
    if ((char)unaff_ESI[0x32] != '\0') {
      iVar3 = iVar3 * 3 + 2;
    }
    *(undefined4 *)(unaff_ESI[2] + 4) = 0;
    *(int *)(unaff_ESI[2] + 8) = unaff_ESI[0x47] * iVar3;
    *(undefined4 *)(unaff_ESI[2] + 0xc) = 0;
    *(uint *)(unaff_ESI[2] + 0x10) = (*(char *)((int)unaff_ESI + 0x5a) != '\0') + 2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}

