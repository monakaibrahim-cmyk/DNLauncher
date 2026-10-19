// Address: 0x00469aa3
// Name: AfxFormatStrings
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall AfxFormatStrings(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &,unsigned int,wchar_t const * const *,int)
   
   Library: Visual Studio 2005 Release */

void AfxFormatStrings(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                     uint param_2,wchar_t **param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x469aaf;
  piVar1 = (int *)FUN_00453ed1();
  FUN_004031d0(local_14,piVar1);
  local_8 = 0;
  iVar2 = FUN_00402f70(local_14,param_2);
  if (iVar2 != 0) {
    AfxFormatStrings(param_1,local_14[0],param_3,param_4);
  }
  FUN_004031b0((undefined4 *)(local_14[0] + -8));
  return;
}

