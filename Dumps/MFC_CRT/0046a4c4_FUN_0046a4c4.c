// Address: 0x0046a4c4
// Name: FUN_0046a4c4
// Category: MFC_CRT


undefined4 __thiscall FUN_0046a4c4(void *this,int param_1)

{
  LPACCEL lpAccelDst;
  int iVar1;
  LPACCEL ptVar2;
  byte bVar3;
  int iVar4;
  
  if ((*(ushort *)((int)this + 0x80) == 0) || (*(int *)((int)this + 0x7c) == 0)) {
    return 0;
  }
  lpAccelDst = FUN_00452728((uint)*(ushort *)((int)this + 0x80) * 6);
  iVar1 = CopyAcceleratorTableW
                    (*(HACCEL *)((int)this + 0x7c),lpAccelDst,(uint)*(ushort *)((int)this + 0x80));
  iVar4 = 0;
  ptVar2 = lpAccelDst;
  if (0 < iVar1) {
    do {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      if (*(int *)(param_1 + 4) == 0x106) {
        bVar3 = 0x10;
      }
      else {
        bVar3 = 0;
      }
      if (((ptVar2->fVirt & 0xfd) == bVar3) && (ptVar2->key == *(WORD *)(param_1 + 8))) break;
      iVar4 = iVar4 + 1;
      ptVar2 = ptVar2 + 1;
    } while (iVar4 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free(lpAccelDst);
}

