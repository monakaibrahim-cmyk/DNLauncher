// Address: 0x004508b0
// Name: FUN_004508b0
// Category: Utility


void FUN_004508b0(void)

{
  char cVar1;
  float10 fVar2;
  int iVar3;
  uint *puVar4;
  uint unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int *unaff_EDI;
  float10 fVar5;
  double dStack00000010;
  char *in_stack_0000001c;
  char *pcVar6;
  
  FUN_0044da60(unaff_EDI,unaff_ESI,unaff_EBX);
  iVar3 = FUN_0044eb90(unaff_EDI,0);
  if (iVar3 != 0) {
    FUN_0044d9b0((int)unaff_EDI,unaff_ESI);
    return;
  }
  *(byte *)(unaff_EBX + (int)unaff_ESI) = 0;
  fVar5 = (float10)FUN_0047b085((byte *)((int)unaff_ESI + 1),&stack0x0000001c);
  dStack00000010 = (double)fVar5;
  if (*in_stack_0000001c != '\0') {
    FUN_004451d0((int)unaff_EDI,"malformed width string in sCAL chunk");
    return;
  }
  cVar1 = (char)*unaff_ESI;
  puVar4 = unaff_ESI;
  while (cVar1 != '\0') {
    puVar4 = (uint *)((int)puVar4 + 1);
    cVar1 = *(char *)puVar4;
  }
  if ((byte *)(unaff_EBX + (int)unaff_ESI) < (byte *)((int)puVar4 + 1)) {
    pcVar6 = "Truncated sCAL chunk";
  }
  else {
    fVar5 = (float10)FUN_0047b085((byte *)((int)puVar4 + 1),&stack0x0000001c);
    if (*in_stack_0000001c != '\0') {
      FUN_004451d0((int)unaff_EDI,"malformed height string in sCAL chunk");
      return;
    }
    fVar2 = (float10)0;
    if (((float10)dStack00000010 < fVar2 == ((float10)dStack00000010 == fVar2)) && (fVar2 < fVar5))
    {
      FUN_00451e50((int)unaff_EDI,unaff_EBP,(char)*unaff_ESI,dStack00000010,(double)fVar5);
      FUN_0044d9b0((int)unaff_EDI,unaff_ESI);
      return;
    }
    pcVar6 = "Invalid sCAL data";
  }
  FUN_004451d0((int)unaff_EDI,pcVar6);
  FUN_0044d9b0((int)unaff_EDI,unaff_ESI);
  return;
}

