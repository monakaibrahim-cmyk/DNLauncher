// Address: 0x00428d50
// Name: FUN_00428d50
// Category: Launcher


void FUN_00428d50(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CEtFileHandle::vftable;
  _memset(unaff_ESI + 1,0,0x13c);
  unaff_ESI[0x50] = 0;
  unaff_ESI[0x51] = 0;
  return;
}

