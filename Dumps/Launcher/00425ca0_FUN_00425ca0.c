// Address: 0x00425ca0
// Name: FUN_00425ca0
// Category: Launcher


void FUN_00425ca0(void)

{
  char cVar1;
  FILE *pFVar2;
  char *pcVar3;
  int unaff_EBX;
  int *unaff_ESI;
  char *unaff_EDI;
  undefined4 uStack_10;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&uStack_10;
  (**(code **)(*unaff_ESI + 0x14))();
  unaff_ESI[9] = unaff_EBX;
  if (unaff_EBX == 1) {
    uStack_10._0_3_ = CONCAT12(DAT_004b3dc6,DAT_004b3dc4);
  }
  else if (unaff_EBX == 2) {
    uStack_10 = 0x622b72;
  }
  else {
    uStack_10._0_3_ = CONCAT12(DAT_004b3dca,DAT_004b3dc8);
  }
  pFVar2 = _fopen(unaff_EDI,(char *)&uStack_10);
  unaff_ESI[1] = (int)pFVar2;
  pcVar3 = unaff_EDI;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00(unaff_ESI + 2,(undefined4 *)unaff_EDI,(int)pcVar3 - (int)(unaff_EDI + 1));
  (**(code **)(*unaff_ESI + 0x10))();
  __security_check_cookie(local_4 ^ (uint)&uStack_10);
  return;
}

