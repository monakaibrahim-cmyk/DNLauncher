// Address: 0x00469963
// Name: AfxFormatStrings
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxFormatStrings(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &,wchar_t const *,wchar_t const * const *,int)
   
   Library: Visual Studio 2005 Release */

void AfxFormatStrings(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                     wchar_t *param_2,wchar_t **param_3,int param_4)

{
  wchar_t wVar1;
  LPCWSTR lpString;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  pwVar5 = param_2;
  if ((param_2 == (wchar_t *)0x0) || (param_3 == (wchar_t **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  param_2 = (wchar_t *)0x0;
  wVar1 = *pwVar5;
  pwVar3 = pwVar5;
  while (wVar1 != L'\0') {
    if (*pwVar3 == L'%') {
      wVar1 = pwVar3[1];
      if (((ushort)wVar1 < 0x31) || (0x39 < (ushort)wVar1)) {
        if (((ushort)wVar1 < 0x41) || (0x5a < (ushort)wVar1)) goto LAB_004699da;
        if ((ushort)wVar1 < 0x3a) goto LAB_004699b9;
        iVar2 = (ushort)wVar1 - 0x38;
      }
      else {
LAB_004699b9:
        iVar2 = (ushort)wVar1 - 0x31;
      }
      pwVar3 = pwVar3 + 2;
      if (param_4 <= iVar2) goto LAB_004699dc;
      if (param_3[iVar2] != (LPCWSTR)0x0) {
        iVar2 = lstrlenW(param_3[iVar2]);
        param_2 = (wchar_t *)((int)param_2 + iVar2);
      }
    }
    else {
LAB_004699da:
      pwVar3 = pwVar3 + 1;
LAB_004699dc:
      param_2 = (wchar_t *)((int)param_2 + 1);
    }
    wVar1 = *pwVar3;
  }
  pwVar3 = (wchar_t *)FID_conflict_PrepareWrite(param_1,(int)param_2);
  wVar1 = *pwVar5;
  do {
    if (wVar1 == L'\0') {
      FUN_00404990(param_1,(int)pwVar3 - *(int *)param_1 >> 1);
      return;
    }
    if (*pwVar5 == L'%') {
      wVar1 = pwVar5[1];
      if (((ushort)wVar1 < 0x31) || (0x39 < (ushort)wVar1)) {
        if (((ushort)wVar1 < 0x41) || (0x5a < (ushort)wVar1)) goto LAB_00469a7b;
        if ((ushort)wVar1 < 0x3a) goto LAB_00469a31;
        iVar2 = (ushort)wVar1 - 0x38;
      }
      else {
LAB_00469a31:
        iVar2 = (ushort)wVar1 - 0x31;
      }
      pwVar5 = pwVar5 + 2;
      if (param_4 <= iVar2) {
        *pwVar3 = L'?';
        goto LAB_00469a82;
      }
      lpString = param_3[iVar2];
      if (lpString != (LPCWSTR)0x0) {
        iVar4 = lstrlenW(lpString);
        ATL::Checked::tcscpy_s(pwVar3,(int)param_2 + 1,param_3[iVar2]);
        param_2 = (wchar_t *)((int)param_2 - iVar4);
        pwVar3 = pwVar3 + iVar4;
      }
    }
    else {
LAB_00469a7b:
      *pwVar3 = *pwVar5;
      pwVar5 = pwVar5 + 1;
LAB_00469a82:
      pwVar3 = pwVar3 + 1;
      param_2 = (wchar_t *)((int)param_2 + -1);
    }
    wVar1 = *pwVar5;
  } while( true );
}

