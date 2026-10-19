// Address: 0x00474686
// Name: FUN_00474686
// Category: MFC_CRT


int FUN_00474686(byte *param_1,ushort param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  
  if (0x15 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  iVar2 = *(int *)(&DAT_004a4900 + (uint)param_2 * 4) + 4;
  do {
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    if (bVar1 != 0xff) {
      puVar3 = &DAT_004a48a8;
      if ((bVar1 & 0x40) == 0) {
        puVar3 = &DAT_004a4850;
      }
      if (0x15 < (bVar1 & 0xbf)) {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      iVar2 = iVar2 + *(int *)(puVar3 + (bVar1 & 0xbf) * 4);
    }
    param_1 = param_1 + 1;
  } while( true );
}

