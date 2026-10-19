// Address: 0x00468527
// Name: GetErrorMessage
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CArchiveException::GetErrorMessage(char *,unsigned int,unsigned
   int *)const 
    public: virtual int __thiscall CArchiveException::GetErrorMessage(wchar_t *,unsigned
   int,unsigned int *)const 
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall GetErrorMessage(void *this,wchar_t *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  wchar_t *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  if (param_1 == (wchar_t *)0x0) {
    uVar2 = 0;
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)((int)this + 8) + 0xf1b0;
    }
    local_8 = 0;
    piVar1 = (int *)FUN_00453ed1();
    FUN_004031d0(local_18,piVar1);
    local_8._0_1_ = 1;
    FUN_00403410(&param_3,(int *)((int)this + 0xc));
    local_8 = CONCAT31(local_8._1_3_,2);
    if (param_3[-3] == 0) {
      FUN_00402f70(&param_3,0xf006);
    }
    piVar1 = param_3;
    AfxFormatString1((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_18,
                     *(int *)((int)this + 8) + 0xf1b0);
    ATL::Checked::tcsncpy_s(param_1,param_2,local_18[0],0xffffffff);
    FUN_004031b0(piVar1 + -4);
    FUN_004031b0((undefined4 *)(local_18[0] + -8));
    uVar2 = 1;
  }
  return uVar2;
}

