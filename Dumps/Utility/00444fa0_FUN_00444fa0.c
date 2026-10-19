// Address: 0x00444fa0
// Name: FUN_00444fa0
// Category: Utility


void __cdecl FUN_00444fa0(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  int iVar4;
  char *pcVar5;
  char *local_24;
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_24;
  if (*param_1 != '#') {
    pcVar5 = "libpng warning: %s\n";
    ppuVar3 = FUN_0047a87c();
    FUN_00477353((FILE *)(ppuVar3 + 0x10),(byte *)pcVar5);
    __security_check_cookie(local_4 ^ (uint)&local_24);
    return;
  }
  local_24 = local_14 + (3 - (int)param_1);
  local_18 = local_14 + -(int)param_1;
  local_20 = local_14 + (2 - (int)param_1);
  iVar4 = 0;
  local_1c = local_14 + (4 - (int)param_1);
  do {
    cVar1 = param_1[iVar4];
    cVar2 = param_1[iVar4 + 1];
    param_1[(int)(local_18 + iVar4)] = cVar2;
    if (cVar1 == ' ') break;
    cVar1 = param_1[iVar4 + 2];
    param_1[(int)(local_14 + iVar4 + (1 - (int)param_1))] = cVar1;
    if (cVar2 == ' ') {
      iVar4 = iVar4 + 1;
      break;
    }
    cVar2 = param_1[iVar4 + 3];
    param_1[(int)(local_20 + iVar4)] = cVar2;
    if (cVar1 == ' ') {
      iVar4 = iVar4 + 2;
      break;
    }
    cVar1 = param_1[iVar4 + 4];
    param_1[(int)(local_24 + iVar4)] = cVar1;
    if (cVar2 == ' ') {
      iVar4 = iVar4 + 3;
      break;
    }
    param_1[(int)(local_1c + iVar4)] = param_1[iVar4 + 5];
    if (cVar1 == ' ') {
      iVar4 = iVar4 + 4;
      break;
    }
    iVar4 = iVar4 + 5;
  } while (iVar4 < 0xf);
  if (0xc < iVar4 - 2U) {
    pcVar5 = "libpng warning: %s\n";
    ppuVar3 = FUN_0047a87c();
    FUN_00477353((FILE *)(ppuVar3 + 0x10),(byte *)pcVar5);
    __security_check_cookie(local_4 ^ (uint)&local_24);
    return;
  }
  pcVar5 = "libpng warning no. %s: %s\n";
  local_14[iVar4 + -1] = '\0';
  ppuVar3 = FUN_0047a87c();
  FUN_00477353((FILE *)(ppuVar3 + 0x10),(byte *)pcVar5);
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}

