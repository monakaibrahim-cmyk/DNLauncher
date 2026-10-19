// Address: 0x004361a0
// Name: FUN_004361a0
// Category: Utility


void __thiscall
FUN_004361a0(void *this,byte param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 != 0) && (*(uint *)((int)this + 0x28) != 0)) &&
     ((uint)param_1 < *(uint *)((int)this + 0x28))) {
    iVar2 = (uint)param_1 * 4;
    *(undefined1 *)(iVar2 + 0x28 + iVar1) = param_4;
    *(undefined1 *)(iVar2 + 0x29 + iVar1) = param_3;
    *(undefined1 *)(iVar2 + 0x2a + iVar1) = param_2;
    *(undefined1 *)(iVar2 + 0x2b + iVar1) = param_5;
    *(undefined1 *)((int)this + 0x19d) = 0;
  }
  return;
}

