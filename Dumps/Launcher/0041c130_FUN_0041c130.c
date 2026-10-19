// Address: 0x0041c130
// Name: FUN_0041c130
// Category: Launcher


bool __cdecl FUN_0041c130(LPCSTR param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *unaff_ESI;
  int iStack_4;
  
  if (*(int **)(*(int *)unaff_ESI + -0x10) != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)unaff_ESI + -0x10) + 0x10))();
    if (piVar3 != (int *)0x0) goto LAB_0041c153;
  }
  piVar3 = (int *)FUN_00453ed1();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x10))();
LAB_0041c153:
  FUN_00401c60(piVar3,param_1,&iStack_4);
  bVar2 = ATL::operator==(unaff_ESI,
                          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                          &iStack_4);
  piVar3 = (int *)(iStack_4 + -4);
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)(iStack_4 + -0x10) + 4))((undefined4 *)(iStack_4 + -0x10));
  }
  return bVar2;
}

