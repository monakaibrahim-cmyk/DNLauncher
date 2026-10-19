// Address: 0x0042e960
// Name: FUN_0042e960
// Category: Launcher


void FUN_0042e960(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x12]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)unaff_ESI[0xd]);
  }
  unaff_ESI[0x12] = 0xf;
  unaff_ESI[0x11] = 0;
  *(undefined1 *)(unaff_ESI + 0xd) = 0;
  if (0xf < (uint)unaff_ESI[0xb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)unaff_ESI[6]);
  }
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0xf;
  *(undefined1 *)(unaff_ESI + 6) = 0;
  *unaff_ESI = TiXmlBase::vftable;
  return;
}

