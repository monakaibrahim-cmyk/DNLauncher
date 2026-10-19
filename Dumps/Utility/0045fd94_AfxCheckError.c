// Address: 0x0045fd94
// Name: AfxCheckError
// Category: Utility


/* Library Function - Single Match
    void __stdcall AfxCheckError(long)
   
   Library: Visual Studio 2005 Release */

void AfxCheckError(long param_1)

{
  if (param_1 < 0) {
    if (param_1 == -0x7ff8fff2) {
                    /* WARNING: Subroutine does not return */
      FUN_004529b4();
    }
    FUN_00452804((undefined4 *)param_1);
  }
  return;
}

