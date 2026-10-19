// Address: 0x00436210
// Name: FUN_00436210
// Category: Utility


void __thiscall FUN_00436210(void *this,undefined1 *param_1,byte param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (((iVar3 != 0) && (*(uint *)((int)this + 0x28) != 0)) &&
     ((uint)param_2 < *(uint *)((int)this + 0x28))) {
    iVar1 = (uint)param_2 * 4;
    *param_1 = *(undefined1 *)(iVar1 + 0x28 + iVar3);
    param_1[1] = *(undefined1 *)(iVar1 + 0x29 + iVar3);
    uVar2 = *(undefined1 *)(iVar1 + 0x2b + iVar3);
    param_1[2] = *(undefined1 *)(iVar1 + 0x2a + iVar3);
    param_1[3] = uVar2;
  }
  return;
}

