// Address: 0x00422c40
// Name: FUN_00422c40
// Category: Launcher


void __fastcall FUN_00422c40(CWnd *param_1)

{
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x88));
  }
  FUN_0041f200(param_1);
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x44e0));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x44d8));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x44d8));
  return;
}

