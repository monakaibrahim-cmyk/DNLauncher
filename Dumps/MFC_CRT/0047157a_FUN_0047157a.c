// Address: 0x0047157a
// Name: FUN_0047157a
// Category: MFC_CRT


void __thiscall FUN_0047157a(void *this,int param_1,undefined4 param_2)

{
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)((int)this + 8) <= param_1) {
    FUN_00471456(this,param_1 + 1,-1);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4) = param_2;
  return;
}

