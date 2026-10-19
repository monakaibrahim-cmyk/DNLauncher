// Address: 0x004378b0
// Name: FUN_004378b0
// Category: Utility


undefined4 __fastcall FUN_004378b0(int param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 4);
  if ((_Memory != (void *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return CONCAT31((int3)((uint)_Memory >> 8),1);
}

