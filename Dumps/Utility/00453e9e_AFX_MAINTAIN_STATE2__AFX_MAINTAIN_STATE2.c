// Address: 0x00453e9e
// Name: AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
// Category: Utility


/* Library Function - Single Match
    public: __thiscall AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(class AFX_MODULE_STATE *)
   
   Library: Visual Studio 2005 Release */

AFX_MAINTAIN_STATE2 * __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleState();
  if ((*(int *)(pAVar1 + 0x7c) == 0) || (*(void **)(param_1 + 0x80) == (void *)0xffffffff)) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    iVar2 = AfxActivateActCtx(*(void **)(param_1 + 0x80),(ulong *)this);
    *(int *)(this + 4) = iVar2;
  }
  return this;
}

