// Address: 0x0046c5df
// Name: COleControlSite::XAmbientProps::Invoke
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XAmbientProps::Invoke(long,struct _GUID const
   &,unsigned long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO
   *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XAmbientProps::Invoke
               (long param_1,_GUID *param_2,ulong param_3,ushort param_4,tagDISPPARAMS *param_5,
               tagVARIANT *param_6,tagEXCEPINFO *param_7,uint *param_8)

{
  int iVar1;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c5eb;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0xb8));
  local_8 = 0;
  if ((*(int *)(param_1 + -0xb4) != 0) && (*(int *)(*(int *)(param_1 + -0xb4) + 0x20) != 0)) {
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + -0xb4) + 0x20) + 0x104))
                      (param_1 + -0xd4,param_2,param_7);
    local_8 = 0xffffffff;
    if (local_14 != 0) {
      FUN_00453641();
    }
    return (-(uint)(iVar1 != 0) & 0x7ffdfffd) + 0x80020003;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

