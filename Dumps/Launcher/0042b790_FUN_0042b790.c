// Address: 0x0042b790
// Name: FUN_0042b790
// Category: Launcher


void FUN_0042b790(void *param_1)

{
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    FUN_0042b790(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

