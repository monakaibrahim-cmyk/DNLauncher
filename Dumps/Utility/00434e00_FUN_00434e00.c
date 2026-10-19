// Address: 0x00434e00
// Name: FUN_00434e00
// Category: Utility


undefined4 * __thiscall FUN_00434e00(void *this,undefined4 *param_1)

{
  if ((*(ushort *)((int)this + 0x16) < 0x18) && (-1 < *(int *)((int)this + 0x14c))) {
    FUN_00436210(this,(undefined1 *)param_1,*(byte *)((int)this + 0x14c));
    return param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 0x150);
  return param_1;
}

