// Address: 0x00464b91
// Name: FUN_00464b91
// Category: MFC_CRT


void __thiscall FUN_00464b91(void *this,int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)((int)this + 0x88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00464bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)((int)this + 0x88) + 4))();
    return;
  }
  return;
}

