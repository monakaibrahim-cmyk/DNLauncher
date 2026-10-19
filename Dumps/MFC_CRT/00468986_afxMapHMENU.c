// Address: 0x00468986
// Name: afxMapHMENU
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class CHandleMap * __stdcall afxMapHMENU(int)
   
   Library: Visual Studio 2005 Release */

CHandleMap * afxMapHMENU(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  _func_int_uint *p_Var2;
  CHandleMap *this;
  undefined4 uVar3;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x18) == 0) && (param_1 != 0)) {
    p_Var2 = AfxSetNewHandler((_func_int_uint *)&LAB_00468779);
    this = FUN_00452728(0x60);
    if (this == (CHandleMap *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CHandleMap::CHandleMap
                        (this,(CRuntimeClass *)&PTR_s_CMenu_004a3e3c,
                         (_func_void_CObject_ptr *)&LAB_00468971,
                         (_func_void_CObject_ptr *)&LAB_0045b5f3,4,1);
    }
    *(undefined4 *)(pAVar1 + 0x18) = uVar3;
    AfxSetNewHandler(p_Var2);
  }
  return *(CHandleMap **)(pAVar1 + 0x18);
}

