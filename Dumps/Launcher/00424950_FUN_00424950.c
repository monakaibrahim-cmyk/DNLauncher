// Address: 0x00424950
// Name: FUN_00424950
// Category: Launcher


void FUN_00424950(void)

{
  uint uVar1;
  wint_t *pwVar2;
  uint *puVar3;
  wint_t *pwVar4;
  wint_t *pwVar5;
  wint_t *pwVar6;
  uint unaff_EDI;
  wint_t *local_14 [2];
  uint local_c [3];
  
  uVar1 = *(uint *)(unaff_EDI + 0x18);
  pwVar6 = (wint_t *)(unaff_EDI + 4);
  local_14[0] = pwVar6;
  if (7 < uVar1) {
    local_14[0] = *(wint_t **)pwVar6;
  }
  local_14[0] = local_14[0] + *(int *)(unaff_EDI + 0x14);
  if (local_14[0] == (wint_t *)0x0) {
LAB_00424997:
    FUN_00475b26();
  }
  else {
    pwVar4 = pwVar6;
    if (7 < uVar1) {
      pwVar4 = *(wint_t **)pwVar6;
    }
    if (local_14[0] < pwVar4) goto LAB_00424997;
    pwVar4 = pwVar6;
    if (7 < uVar1) {
      pwVar4 = *(wint_t **)pwVar6;
    }
    if (pwVar4 + *(int *)(unaff_EDI + 0x14) < local_14[0]) goto LAB_00424997;
  }
  uVar1 = *(uint *)(unaff_EDI + 0x18);
  pwVar4 = pwVar6;
  if (7 < uVar1) {
    pwVar4 = *(wint_t **)pwVar6;
  }
  pwVar4 = pwVar4 + *(int *)(unaff_EDI + 0x14);
  if (pwVar4 == (wint_t *)0x0) {
LAB_004249d6:
    FUN_00475b26();
  }
  else {
    pwVar5 = pwVar6;
    if (7 < uVar1) {
      pwVar5 = *(wint_t **)pwVar6;
    }
    if (pwVar4 < pwVar5) goto LAB_004249d6;
    pwVar5 = pwVar6;
    if (7 < uVar1) {
      pwVar5 = *(wint_t **)pwVar6;
    }
    if (pwVar5 + *(int *)(unaff_EDI + 0x14) < pwVar4) goto LAB_004249d6;
  }
  uVar1 = *(uint *)(unaff_EDI + 0x18);
  pwVar5 = pwVar6;
  if (7 < uVar1) {
    pwVar5 = *(wint_t **)pwVar6;
  }
  if (pwVar5 != (wint_t *)0x0) {
    pwVar2 = pwVar6;
    if (7 < uVar1) {
      pwVar2 = *(wint_t **)pwVar6;
    }
    if (pwVar2 <= pwVar5) {
      if (7 < uVar1) {
        pwVar6 = *(wint_t **)pwVar6;
      }
      if (pwVar5 <= pwVar6 + *(int *)(unaff_EDI + 0x14)) goto LAB_00424a12;
    }
  }
  FUN_00475b26();
LAB_00424a12:
  puVar3 = FUN_00425540(local_c,unaff_EDI,pwVar5,unaff_EDI,pwVar4);
  FUN_00424bf0(unaff_EDI,(int *)local_14,*puVar3,puVar3[1],unaff_EDI,(int)local_14[0]);
  return;
}

