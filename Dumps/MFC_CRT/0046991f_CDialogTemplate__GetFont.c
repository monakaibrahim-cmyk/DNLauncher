// Address: 0x0046991f
// Name: CDialogTemplate::GetFont
// Category: MFC_CRT


/* Library Function - Single Match
    public: static int __cdecl CDialogTemplate::GetFont(struct DLGTEMPLATE const *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,unsigned
   short &)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __cdecl
CDialogTemplate::GetFont
          (DLGTEMPLATE *param_1,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,
          ushort *param_3)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = HasFont(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (ushort *)GetFontSizeField(param_1);
  *param_3 = *puVar2;
  FUN_004034e0(param_2,(short *)(puVar2 + (uint)(*(short *)((int)&param_1->style + 2) == -1) * 2 + 1
                                ));
  return 1;
}

