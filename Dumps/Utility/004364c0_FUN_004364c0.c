// Address: 0x004364c0
// Name: FUN_004364c0
// Category: Utility


void __fastcall FUN_004364c0(int param_1)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    iVar2 = FUN_004361f0(param_1);
    uVar4 = 0;
    if (extraout_EDX != 0) {
      uVar3 = extraout_EDX;
      pcVar5 = (char *)(iVar2 + 1);
      do {
        cVar1 = (char)(0xff / (ulonglong)(uVar3 - 1)) * (char)uVar4;
        pcVar5[1] = cVar1;
        *pcVar5 = cVar1;
        pcVar5[-1] = cVar1;
        uVar3 = *(uint *)(extraout_ECX + 0x28);
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 4;
      } while (uVar4 < uVar3);
    }
  }
  return;
}

