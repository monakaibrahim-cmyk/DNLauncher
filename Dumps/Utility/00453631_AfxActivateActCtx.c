// Address: 0x00453631
// Name: AfxActivateActCtx
// Category: Utility


/* Library Function - Single Match
    int __stdcall AfxActivateActCtx(void *,unsigned long *)
   
   Library: Visual Studio 2005 Release */

int AfxActivateActCtx(void *param_1,ulong *param_2)

{
  int iVar1;
  
  if (DAT_004c8eec != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045363a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*DAT_004c8eec)();
    return iVar1;
  }
  return 0;
}

