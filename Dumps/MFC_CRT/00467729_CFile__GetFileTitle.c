// Address: 0x00467729
// Name: CFile::GetFileTitle
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CFile::GetFileTitle(void)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CFile::GetFileTitle(CFile *this)

{
  wchar_t *pwVar1;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *in_stack_00000004;
  uint uVar2;
  void *local_240;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  wchar_t local_212 [261];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&local_234;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  GetStatus(this,(CFileStatus *)&local_234);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>(in_stack_00000004);
  uVar2 = 0x100;
  pwVar1 = (wchar_t *)FID_conflict_PrepareWrite(in_stack_00000004,0x100);
  AfxGetFileTitle(local_212,pwVar1,uVar2);
  FUN_00404990(in_stack_00000004,-1);
  ExceptionList = local_240;
  __security_check_cookie(local_8 ^ (uint)&local_234);
  return;
}

