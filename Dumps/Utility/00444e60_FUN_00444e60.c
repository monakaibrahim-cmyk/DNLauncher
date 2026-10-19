// Address: 0x00444e60
// Name: FUN_00444e60
// Category: Utility


void __cdecl FUN_00444e60(int *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  char *local_28;
  char *local_24;
  char *local_20;
  int *local_1c;
  undefined4 local_18;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_28;
  local_1c = param_1;
  if (*param_2 == '#') {
    local_28 = local_14 + (3 - (int)param_2);
    local_20 = local_14 + -(int)param_2;
    local_18 = local_14 + (2 - (int)param_2);
    iVar4 = 0;
    local_24 = local_14 + (4 - (int)param_2);
    do {
      cVar1 = param_2[iVar4];
      cVar2 = param_2[iVar4 + 1];
      param_2[(int)(local_20 + iVar4)] = cVar2;
      if (cVar1 == ' ') break;
      cVar1 = param_2[iVar4 + 2];
      param_2[(int)(local_14 + iVar4 + (1 - (int)param_2))] = cVar1;
      if (cVar2 == ' ') {
        iVar4 = iVar4 + 1;
        break;
      }
      cVar2 = param_2[iVar4 + 3];
      param_2[(int)(local_18 + iVar4)] = cVar2;
      if (cVar1 == ' ') {
        iVar4 = iVar4 + 2;
        break;
      }
      cVar1 = param_2[iVar4 + 4];
      param_2[(int)(local_28 + iVar4)] = cVar1;
      if (cVar2 == ' ') {
        iVar4 = iVar4 + 3;
        break;
      }
      param_2[(int)(local_24 + iVar4)] = param_2[iVar4 + 5];
      if (cVar1 == ' ') {
        iVar4 = iVar4 + 4;
        break;
      }
      iVar4 = iVar4 + 5;
    } while (iVar4 < 0xf);
    if (iVar4 - 2U < 0xd) {
      local_14[iVar4 + -1] = '\0';
      pcVar5 = "libpng error no. %s: %s\n";
    }
    else {
      pcVar5 = "libpng error: %s, offset=%d\n";
    }
    ppuVar3 = FUN_0047a87c();
    FUN_00477353((FILE *)(ppuVar3 + 0x10),(byte *)pcVar5);
  }
  else {
    pbVar6 = (byte *)0x49e5e8;
    ppuVar3 = FUN_0047a87c();
    FUN_00477353((FILE *)(ppuVar3 + 0x10),pbVar6);
  }
  if (local_1c == (int *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FID_conflict____longjmp_internal(local_1c,1);
}

