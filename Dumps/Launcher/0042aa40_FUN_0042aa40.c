// Address: 0x0042aa40
// Name: FUN_0042aa40
// Category: Launcher


void FUN_0042aa40(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined4 local_148 [64];
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)local_148;
  if ((*(int *)(unaff_EBX + 8) != -1) && (param_1[0x41] != 0)) {
    uVar1 = param_1[0x40];
    puVar3 = local_148;
    for (iVar2 = 0x4f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    local_3c = *(undefined4 *)(unaff_EBX + 0x114);
    local_40 = uVar1;
    FUN_0042b020();
    *(int *)(unaff_EBX + 0x114) = *(int *)(unaff_EBX + 0x114) + local_48;
    *(undefined1 *)(unaff_EBX + 0x118) = 1;
  }
  __security_check_cookie(local_4 ^ (uint)local_148);
  return;
}

