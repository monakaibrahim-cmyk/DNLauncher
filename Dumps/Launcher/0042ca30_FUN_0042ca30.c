// Address: 0x0042ca30
// Name: FUN_0042ca30
// Category: Launcher


void FUN_0042ca30(void)

{
  undefined4 *puVar1;
  void *_Memory;
  int unaff_ESI;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
  *(undefined4 *)(unaff_ESI + 8) = 0;
  if (_Memory != *(void **)(unaff_ESI + 4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(unaff_ESI + 4));
}

