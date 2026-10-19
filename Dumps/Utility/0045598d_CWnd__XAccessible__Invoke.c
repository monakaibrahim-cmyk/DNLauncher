// Address: 0x0045598d
// Name: CWnd::XAccessible::Invoke
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::Invoke(long,struct _GUID const &,unsigned
   long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO *,unsigned int
   *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::Invoke
               (long param_1,_GUID *param_2,ulong param_3,ushort param_4,tagDISPPARAMS *param_5,
               tagVARIANT *param_6,tagEXCEPINFO *param_7,uint *param_8)

{
  long lVar1;
  undefined2 in_stack_00000012;
  uint *in_stack_00000024;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x455999;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  lVar1 = ATL::AtlIAccessibleInvokeHelper
                    ((IAccessible *)param_1,(long)param_2,(_GUID *)param_3,_param_4,(ushort)param_5,
                     (tagDISPPARAMS *)param_6,(tagVARIANT *)param_7,(tagEXCEPINFO *)param_8,
                     in_stack_00000024);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return lVar1;
}

