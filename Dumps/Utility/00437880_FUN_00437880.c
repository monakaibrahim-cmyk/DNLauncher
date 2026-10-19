// Address: 0x00437880
// Name: FUN_00437880
// Category: Utility


void __thiscall FUN_00437880(void *this,int param_1,undefined4 param_2)

{
  *(int *)((int)this + 4) = param_1;
  *(undefined ***)this = CxMemFile::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 8) = param_2;
  *(bool *)((int)this + 0xc) = param_1 == 0;
  return;
}

