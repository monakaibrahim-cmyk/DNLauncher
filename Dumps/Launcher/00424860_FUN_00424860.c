// Address: 0x00424860
// Name: FUN_00424860
// Category: Launcher


void FUN_00424860(void)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  void *unaff_EDI;
  char *local_14 [2];
  uint local_c [3];
  
  uVar1 = *(uint *)((int)unaff_EDI + 0x18);
  pcVar6 = (char *)((int)unaff_EDI + 4);
  local_14[0] = pcVar6;
  if (0xf < uVar1) {
    local_14[0] = *(char **)pcVar6;
  }
  local_14[0] = local_14[0] + *(int *)((int)unaff_EDI + 0x14);
  if (local_14[0] == (char *)0x0) {
LAB_004248a5:
    FUN_00475b26();
  }
  else {
    pcVar2 = pcVar6;
    if (0xf < uVar1) {
      pcVar2 = *(char **)pcVar6;
    }
    if (local_14[0] < pcVar2) goto LAB_004248a5;
    pcVar2 = pcVar6;
    if (0xf < uVar1) {
      pcVar2 = *(char **)pcVar6;
    }
    if (pcVar2 + *(int *)((int)unaff_EDI + 0x14) < local_14[0]) goto LAB_004248a5;
  }
  uVar1 = *(uint *)((int)unaff_EDI + 0x18);
  pcVar2 = pcVar6;
  if (0xf < uVar1) {
    pcVar2 = *(char **)pcVar6;
  }
  pcVar2 = pcVar2 + *(int *)((int)unaff_EDI + 0x14);
  if (pcVar2 == (char *)0x0) {
LAB_004248e2:
    FUN_00475b26();
  }
  else {
    pcVar3 = pcVar6;
    if (0xf < uVar1) {
      pcVar3 = *(char **)pcVar6;
    }
    if (pcVar2 < pcVar3) goto LAB_004248e2;
    pcVar3 = pcVar6;
    if (0xf < uVar1) {
      pcVar3 = *(char **)pcVar6;
    }
    if (pcVar3 + *(int *)((int)unaff_EDI + 0x14) < pcVar2) goto LAB_004248e2;
  }
  uVar1 = *(uint *)((int)unaff_EDI + 0x18);
  pcVar3 = pcVar6;
  if (0xf < uVar1) {
    pcVar3 = *(char **)pcVar6;
  }
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar6;
    if (0xf < uVar1) {
      pcVar4 = *(char **)pcVar6;
    }
    if (pcVar4 <= pcVar3) {
      if (0xf < uVar1) {
        pcVar6 = *(char **)pcVar6;
      }
      if (pcVar3 <= pcVar6 + *(int *)((int)unaff_EDI + 0x14)) goto LAB_0042491d;
    }
  }
  FUN_00475b26();
LAB_0042491d:
  puVar5 = FUN_00425490(local_c,(uint)unaff_EDI,pcVar3,(uint)unaff_EDI,pcVar2);
  FUN_00424af0(unaff_EDI,local_14,(void *)*puVar5,puVar5[1],unaff_EDI,(int)local_14[0]);
  return;
}

