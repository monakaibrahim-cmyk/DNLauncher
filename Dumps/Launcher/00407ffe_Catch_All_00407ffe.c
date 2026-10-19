// Address: 0x00407ffe
// Name: Catch_All@00407ffe
// Category: Launcher


void Catch_All_00407ffe(void)

{
  void *_Memory;
  int unaff_EBP;
  
  _Memory = *(void **)(unaff_EBP + -0x58);
  FUN_00407de0(*(int *)(unaff_EBP + -0x54));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

