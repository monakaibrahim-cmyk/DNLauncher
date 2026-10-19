// Address: 0x00495819
// Name: FUN_00495819
// Category: MFC_CRT


void FUN_00495819(void)

{
  void *_Memory;
  LONG *Target;
  
  Target = (LONG *)&DAT_004cbae0;
  do {
    _Memory = (void *)InterlockedExchange(Target,0);
    if (_Memory != (void *)0x0) {
      FUN_00481fe7(*(int **)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    Target = Target + 1;
  } while ((int)Target < 0x4cbbd8);
  return;
}

