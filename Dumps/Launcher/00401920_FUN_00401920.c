// Address: 0x00401920
// Name: FUN_00401920
// Category: Launcher


int FUN_00401920(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *unaff_ESI;
  bool bVar5;
  
  puVar2 = *(ushort **)unaff_ESI;
  puVar4 = &DAT_004abff0;
  do {
    uVar1 = *puVar2;
    bVar5 = uVar1 < *puVar4;
    if (uVar1 != *puVar4) {
LAB_0040194d:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00401952;
    }
    if (uVar1 == 0) break;
    uVar1 = puVar2[1];
    bVar5 = uVar1 < puVar4[1];
    if (uVar1 != puVar4[1]) goto LAB_0040194d;
    puVar2 = puVar2 + 2;
    puVar4 = puVar4 + 2;
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_00401952:
  if (iVar3 == 0) {
    return 0x426b;
  }
  bVar5 = ATL::operator==(unaff_ESI,L"ESP");
  if (bVar5) {
    return 0x426a;
  }
  bVar5 = ATL::operator==(unaff_ESI,L"GER");
  if (bVar5) {
    return 0x426c;
  }
  bVar5 = ATL::operator==(unaff_ESI,L"VNM");
  return bVar5 + 0x4269;
}

