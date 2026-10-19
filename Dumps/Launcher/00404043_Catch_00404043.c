// Address: 0x00404043
// Name: Catch@00404043
// Category: Launcher


undefined4 Catch_00404043(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
             (unaff_EBP + -0x14));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piVar1 = *(int **)(unaff_EBP + -0x18);
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (iVar2 == 0) {
    FUN_00403f30((void *)(unaff_EBP + -0x14),L"%s (%s:%d)");
  }
  else {
    FUN_00403f30((void *)(unaff_EBP + -0x14),L"%s (%s:%d)\n%s");
  }
  AfxMessageBox(*(wchar_t **)(unaff_EBP + -0x14),0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00410090((int *)(unaff_EBP + -0x14));
  (**(code **)(*piVar1 + 4))(1);
  return 0x40401e;
}

