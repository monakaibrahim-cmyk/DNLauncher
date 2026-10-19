// Address: 0x00453651
// Name: AfxActivateActCtxWrapper
// Category: Utility


/* Library Function - Single Match
    enum eActCtxResult __stdcall AfxActivateActCtxWrapper(void *,unsigned long *)
   
   Library: Visual Studio 2005 Release */

eActCtxResult AfxActivateActCtxWrapper(void *param_1,ulong *param_2)

{
  int iVar1;
  eActCtxResult eVar2;
  
  if (param_2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (DAT_004c8eec == 0) {
    eVar2 = 2;
  }
  else {
    iVar1 = AfxActivateActCtx(param_1,param_2);
    eVar2 = (eActCtxResult)(iVar1 != 0);
  }
  return eVar2;
}

