// Address: 0x004594ff
// Name: AfxRegisterWndClass
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    char const * __stdcall AfxRegisterWndClass(unsigned int,struct HICON__ *,struct HBRUSH__
   *,struct HICON__ *)
    wchar_t const * __stdcall AfxRegisterWndClass(unsigned int,struct HICON__ *,struct HBRUSH__
   *,struct HICON__ *)
   
   Library: Visual Studio 2005 Release */

_AFX_THREAD_STATE * AfxRegisterWndClass(UINT param_1,HCURSOR param_2,HBRUSH param_3,HICON param_4)

{
  HINSTANCE pHVar1;
  _AFX_THREAD_STATE *p_Var2;
  AFX_MODULE_STATE *pAVar3;
  DWORD *pDVar4;
  BOOL BVar5;
  int iVar6;
  tagWNDCLASSW local_30;
  DWORD local_8;
  
  p_Var2 = AfxGetThreadState();
  p_Var2 = p_Var2 + 0x7c;
  pAVar3 = AfxGetModuleState();
  pHVar1 = *(HINSTANCE *)(pAVar3 + 8);
  if (((param_2 == (HCURSOR)0x0) && (param_3 == (HBRUSH)0x0)) && (param_4 == (HICON)0x0)) {
    pDVar4 = FUN_0047b849();
    local_8 = *pDVar4;
    pDVar4 = FUN_0047b849();
    *pDVar4 = 0;
    __snwprintf_s((wchar_t *)p_Var2,0x60,0x5f,L"Afx:%p:%x",pHVar1,param_1);
  }
  else {
    pDVar4 = FUN_0047b849();
    local_8 = *pDVar4;
    pDVar4 = FUN_0047b849();
    *pDVar4 = 0;
    __snwprintf_s((wchar_t *)p_Var2,0x60,0x5f,L"Afx:%p:%x:%p:%p:%p",pHVar1,param_1,param_2,param_3,
                  param_4);
  }
  pDVar4 = FUN_0047b849();
  if (*pDVar4 == 0) {
    pDVar4 = FUN_0047b849();
    *pDVar4 = local_8;
  }
  else {
    pDVar4 = FUN_0047b849();
    ATL::AtlCrtErrorCheck(*pDVar4);
  }
  BVar5 = FID_conflict_AfxCtxGetClassInfoW(pHVar1,(LPCWSTR)p_Var2,&local_30);
  if (BVar5 == 0) {
    local_30.style = param_1;
    local_30.lpfnWndProc = DefWindowProcW_exref;
    local_30.hIcon = param_4;
    local_30.hCursor = param_2;
    local_30.hbrBackground = param_3;
    local_30.cbWndExtra = 0;
    local_30.cbClsExtra = 0;
    local_30.lpszMenuName = (LPCWSTR)0x0;
    local_30.hInstance = pHVar1;
    local_30.lpszClassName = (LPCWSTR)p_Var2;
    iVar6 = AfxRegisterClass((tagWNDCLASSA *)&local_30);
    if (iVar6 == 0) {
      FUN_0045b5bf();
    }
  }
  return p_Var2;
}

