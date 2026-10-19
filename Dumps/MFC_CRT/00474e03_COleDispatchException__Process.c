// Address: 0x00474e03
// Name: COleDispatchException::Process
// Category: MFC_CRT


/* Library Function - Single Match
    public: static void __stdcall COleDispatchException::Process(struct tagEXCEPINFO *,class
   CException const *)
   
   Library: Visual Studio 2005 Release */

void COleDispatchException::Process(tagEXCEPINFO *param_1,CException *param_2)

{
  int iVar1;
  BSTR pOVar2;
  int *piVar3;
  AFX_MODULE_STATE *pAVar4;
  OLECHAR *local_210;
  short *local_20c;
  short local_208 [60];
  undefined1 local_190 [392];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_190;
  _memset(param_1,0,0x20);
  local_20c = local_208;
  iVar1 = CObject::IsKindOf((CObject *)param_2,
                            (CRuntimeClass *)&PTR_s_COleDispatchException_004a4958);
  if (iVar1 == 0) {
    iVar1 = CObject::IsKindOf((CObject *)param_2,(CRuntimeClass *)&PTR_s_CMemoryException_004a0208);
    if (iVar1 == 0) {
      FUN_00452af1(0xf108,local_208,0x100);
      param_1->wCode = 0xf108;
    }
    else {
      FUN_00452af1(0xf10a,local_208,0x100);
      param_1->wCode = 0xf10a;
    }
  }
  else {
    local_20c = *(short **)(param_2 + 0xc);
    param_1->wCode = *(WORD *)(param_2 + 8);
    param_1->dwHelpContext = *(DWORD *)(param_2 + 0x10);
    param_1->scode = *(SCODE *)(param_2 + 0x1c);
    if (*(int *)(*(int *)(param_2 + 0x14) + -0xc) != 0) {
      FUN_00403410(&local_210,(int *)(param_2 + 0x14));
      pOVar2 = SysAllocString(local_210);
      param_1->bstrHelpFile = pOVar2;
      FUN_004031b0((undefined4 *)(local_210 + -8));
    }
    if (*(int *)(*(int *)(param_2 + 0x18) + -0xc) != 0) {
      FUN_00403410(&local_210,(int *)(param_2 + 0x18));
      pOVar2 = SysAllocString(local_210);
      param_1->bstrSource = pOVar2;
      FUN_004031b0((undefined4 *)(local_210 + -8));
    }
  }
  piVar3 = FUN_004035c0(&local_20c,local_20c);
  pOVar2 = SysAllocString((OLECHAR *)*piVar3);
  param_1->bstrDescription = pOVar2;
  FUN_004031b0((undefined4 *)(local_20c + -8));
  if (param_1->bstrSource == (BSTR)0x0) {
    pAVar4 = AfxGetModuleState();
    piVar3 = FUN_004035c0(&local_20c,*(short **)(pAVar4 + 0x10));
    pOVar2 = SysAllocString((OLECHAR *)*piVar3);
    param_1->bstrSource = pOVar2;
    FUN_004031b0((undefined4 *)(local_20c + -8));
  }
  if ((param_1->bstrHelpFile == (BSTR)0x0) && (param_1->dwHelpContext != 0)) {
    pAVar4 = AfxGetModuleState();
    piVar3 = FUN_004035c0(&local_20c,*(short **)(*(int *)(pAVar4 + 4) + 100));
    pOVar2 = SysAllocString((OLECHAR *)*piVar3);
    param_1->bstrHelpFile = pOVar2;
    FUN_004031b0((undefined4 *)(local_20c + -8));
  }
  __security_check_cookie(local_8 ^ (uint)local_190);
  return;
}

