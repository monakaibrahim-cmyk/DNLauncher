// Address: 0x004327f0
// Name: FUN_004327f0
// Category: Utility


void FUN_004327f0(void)

{
  ushort *puVar1;
  uint _Size;
  short sVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  void *this;
  int *unaff_EDI;
  
  _Size = unaff_EDI[0xb];
  while( true ) {
    this = (void *)((unaff_EDI[0xf] - unaff_EDI[0x1d]) - unaff_EDI[0x1b]);
    if ((_Size - 0x106) + unaff_EDI[0xb] <= (uint)unaff_EDI[0x1b]) {
      _memcpy((void *)unaff_EDI[0xe],(void *)(unaff_EDI[0xe] + _Size),_Size);
      iVar4 = unaff_EDI[0x13];
      unaff_EDI[0x1c] = unaff_EDI[0x1c] - _Size;
      unaff_EDI[0x1b] = unaff_EDI[0x1b] - _Size;
      unaff_EDI[0x17] = unaff_EDI[0x17] - _Size;
      psVar3 = (short *)(unaff_EDI[0x11] + iVar4 * 2);
      do {
        puVar1 = (ushort *)(psVar3 + -1);
        psVar3 = psVar3 + -1;
        if (*puVar1 < _Size) {
          sVar2 = 0;
        }
        else {
          sVar2 = *puVar1 - (short)_Size;
        }
        iVar4 = iVar4 + -1;
        *psVar3 = sVar2;
      } while (iVar4 != 0);
      psVar3 = (short *)(unaff_EDI[0x10] + _Size * 2);
      uVar5 = _Size;
      do {
        puVar1 = (ushort *)(psVar3 + -1);
        psVar3 = psVar3 + -1;
        if (*puVar1 < _Size) {
          sVar2 = 0;
        }
        else {
          sVar2 = *puVar1 - (short)_Size;
        }
        uVar5 = uVar5 - 1;
        *psVar3 = sVar2;
      } while (uVar5 != 0);
      this = (void *)((int)this + _Size);
    }
    if (*(int *)(*unaff_EDI + 4) == 0) break;
    uVar5 = FUN_004324a0(this,(void *)(unaff_EDI[0x1d] + unaff_EDI[0x1b] + unaff_EDI[0xe]));
    unaff_EDI[0x1d] = unaff_EDI[0x1d] + uVar5;
    if (2 < (uint)unaff_EDI[0x1d]) {
      uVar5 = (uint)*(byte *)(unaff_EDI[0x1b] + unaff_EDI[0xe]);
      unaff_EDI[0x12] = uVar5;
      unaff_EDI[0x12] =
           (uVar5 << ((byte)unaff_EDI[0x16] & 0x1f) ^
           (uint)((byte *)(unaff_EDI[0x1b] + unaff_EDI[0xe]))[1]) & unaff_EDI[0x15];
    }
    if (0x105 < (uint)unaff_EDI[0x1d]) {
      return;
    }
    if (*(int *)(*unaff_EDI + 4) == 0) {
      return;
    }
  }
  return;
}

