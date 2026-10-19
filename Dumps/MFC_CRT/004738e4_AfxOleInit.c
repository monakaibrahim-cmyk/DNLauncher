// Address: 0x004738e4
// Name: AfxOleInit
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __stdcall AfxOleInit(void)
   
   Library: Visual Studio 2005 Release */

int AfxOleInit(void)

{
  _AFX_THREAD_STATE *p_Var1;
  AFX_MODULE_STATE *pAVar2;
  HRESULT HVar3;
  int iVar4;
  COleMessageFilter *this;
  undefined4 uVar5;
  
  p_Var1 = AfxGetThreadState();
  pAVar2 = AfxGetModuleState();
  if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
    HVar3 = OleInitialize((LPVOID)0x0);
    if (HVar3 < 0) {
      AfxOleTerm(0);
      return 0;
    }
    *(undefined4 *)(p_Var1 + 0x160) = 1;
    iVar4 = FUN_0046419a();
    *(undefined1 **)(iVar4 + 0x3c) = &LAB_00473895;
    if (*(int *)(iVar4 + 0x40) == 0) {
      this = FUN_00452728(0x44);
      if (this == (COleMessageFilter *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = COleMessageFilter::COleMessageFilter(this);
      }
      *(undefined4 *)(iVar4 + 0x40) = uVar5;
      iVar4 = FUN_0046419a();
      COleMessageFilter::Register(*(COleMessageFilter **)(iVar4 + 0x40));
    }
  }
  else {
    *(undefined4 *)(p_Var1 + 0x160) = 0xffffffff;
  }
  return 1;
}

