// Address: 0x00402e40
// Name: FUN_00402e40
// Category: Launcher


void __thiscall FUN_00402e40(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)(*(int *)this + -8))) {
    *(int *)(*(int *)this + -0xc) = param_1;
    *(undefined2 *)(*(int *)this + param_1 * 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

