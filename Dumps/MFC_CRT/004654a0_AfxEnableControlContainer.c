// Address: 0x004654a0
// Name: AfxEnableControlContainer
// Category: MFC_CRT


/* Library Function - Single Match
    void __cdecl AfxEnableControlContainer(class COccManager *)
   
   Library: Visual Studio 2005 Release */

void __cdecl AfxEnableControlContainer(COccManager *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
  if (param_1 == (COccManager *)0x0) {
    param_1 = (COccManager *)
              CProcessLocalObject::GetData
                        ((CProcessLocalObject *)&DAT_004cab1c,
                         (_func_CNoTrackObject_ptr *)&LAB_004653d0);
    if (param_1 == (COccManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
  }
  pAVar1 = AfxGetModuleState();
  *(COccManager **)(pAVar1 + 0x3c) = param_1;
  return;
}

