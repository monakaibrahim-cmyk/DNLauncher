// Address: 0x0042d100
// Name: FUN_0042d100
// Category: Launcher


undefined4 * __thiscall FUN_0042d100(void *this,byte param_1)

{
  if (0xf < *(uint *)((int)this + 0x48)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x34));
  }
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  if (0xf < *(uint *)((int)this + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined ***)this = TiXmlBase::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

