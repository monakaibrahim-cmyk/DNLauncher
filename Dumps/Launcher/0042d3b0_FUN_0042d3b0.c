// Address: 0x0042d3b0
// Name: FUN_0042d3b0
// Category: Launcher


undefined4 * __thiscall FUN_0042d3b0(void *this,byte param_1)

{
  *(undefined ***)this = TiXmlDocument::vftable;
  if (0xf < *(uint *)((int)this + 100)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 100) = 0xf;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  FUN_0042d670(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

