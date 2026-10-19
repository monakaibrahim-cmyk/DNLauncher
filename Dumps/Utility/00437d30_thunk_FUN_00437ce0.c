// Address: 0x00437d30
// Name: thunk_FUN_00437ce0
// Category: Utility


undefined4 __thiscall thunk_FUN_00437ce0(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x108) != 0) {
    return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((int)param_1 + 1)),
                             *(undefined1 *)((int)param_1 + 2)),*(undefined1 *)((int)param_1 + 3));
  }
  return *param_1;
}

