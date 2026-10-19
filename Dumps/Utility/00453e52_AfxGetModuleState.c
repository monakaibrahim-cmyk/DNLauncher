// Address: 0x00453e52
// Name: AfxGetModuleState
// Category: Utility


/* Library Function - Single Match
    class AFX_MODULE_STATE * __stdcall AfxGetModuleState(void)
   
   Library: Visual Studio 2005 Release */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  CNoTrackObject *pCVar1;
  AFX_MODULE_STATE *pAVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar1 == (CNoTrackObject *)0x0) {
LAB_00453e65:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  pAVar2 = *(AFX_MODULE_STATE **)(pCVar1 + 4);
  if (pAVar2 == (AFX_MODULE_STATE *)0x0) {
    pAVar2 = (AFX_MODULE_STATE *)
             CProcessLocalObject::GetData
                       ((CProcessLocalObject *)&DAT_004c8ef8,
                        (_func_CNoTrackObject_ptr *)&LAB_00453e23);
    if (pAVar2 == (AFX_MODULE_STATE *)0x0) goto LAB_00453e65;
  }
  return pAVar2;
}

