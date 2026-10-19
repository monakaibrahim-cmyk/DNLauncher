// Address: 0x00453612
// Name: AfxCreateActCtxW
// Category: Utility


/* Library Function - Single Match
    void * __stdcall AfxCreateActCtxW(struct tagACTCTXW const *)
   
   Library: Visual Studio 2005 Release */

void * AfxCreateActCtxW(tagACTCTXW *param_1)

{
  void *pvVar1;
  
  if (DAT_004c8ee4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045361b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*DAT_004c8ee4)();
    return pvVar1;
  }
  return (void *)0xffffffff;
}

