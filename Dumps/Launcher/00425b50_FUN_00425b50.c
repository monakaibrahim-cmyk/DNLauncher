// Address: 0x00425b50
// Name: FUN_00425b50
// Category: Launcher


undefined4 * __thiscall FUN_00425b50(void *this,byte param_1)

{
  *(undefined ***)this = CFileStream::vftable;
  if (*(FILE **)((int)this + 4) != (FILE *)0x0) {
    _fclose(*(FILE **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (0xf < *(uint *)((int)this + 0x20)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined ***)this = CStream::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

