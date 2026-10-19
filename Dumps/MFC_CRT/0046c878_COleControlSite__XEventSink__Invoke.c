// Address: 0x0046c878
// Name: COleControlSite::XEventSink::Invoke
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XEventSink::Invoke(long,struct _GUID const
   &,unsigned long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO
   *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XEventSink::Invoke
               (long param_1,_GUID *param_2,ulong param_3,ushort param_4,tagDISPPARAMS *param_5,
               tagVARIANT *param_6,tagEXCEPINFO *param_7,uint *param_8)

{
  uint *in_stack_00000024;
  AFX_EVENT local_3c [24];
  long local_24;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x46c884;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0xc0));
  local_8 = 0;
  AFX_EVENT::AFX_EVENT
            (local_3c,0,(long)param_2,(tagDISPPARAMS *)param_6,(tagEXCEPINFO *)param_8,
             in_stack_00000024);
  OnEvent((COleControlSite *)(param_1 + -0xdc),local_3c);
  if (param_7 != (tagEXCEPINFO *)0x0) {
    VariantClear((VARIANTARG *)param_7);
  }
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return local_24;
}

