// Address: 0x00416f00
// Name: FUN_00416f00
// Category: Launcher


int FUN_00416f00(void)

{
  bool bVar1;
  undefined4 *in_EAX;
  HRESULT HVar2;
  int iVar3;
  UINT UVar4;
  char cVar5;
  int *unaff_EBX;
  int *unaff_EDI;
  undefined4 uStack_6c;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_38 [12];
  LPVOID local_2c;
  int *piStack_28;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar1 = false;
  auStack_38._5_2_ = 0;
  HVar2 = CoInitialize((LPVOID)0x0);
  auStack_38[7] = -1 < HVar2;
  auStack_38._4_4_ = auStack_38._4_4_ & 0xffffff00;
  local_2c = (int *)0x0;
  HVar2 = CoCreateInstance((IID *)&rclsid_004abecc,(LPUNKNOWN)0x0,1,(IID *)&riid_004abebc,&local_2c)
  ;
  if (HVar2 < 0) {
    cVar5 = (char)auStack_38._4_4_;
    goto LAB_0041710b;
  }
  uVar11 = &local_14;
  local_14 = 0x10;
  local_10 = 0x6f;
  local_c = 0;
  local_8 = 0;
  iVar3 = (**(code **)(*(int *)local_2c + 0xc))();
  if (-1 < iVar3) {
    auStack_38._8_4_ = (OLECHAR *)0x0;
    auStack_38._0_4_ = 0;
    iVar3 = (**(code **)(*(int *)auStack_38._4_4_ + 0x10))();
    if (-1 < iVar3) {
      uVar10 = auStack_38;
      pwVar9 = L"DxDiag_SystemInfo";
      iVar3 = (**(code **)(*(int *)auStack_38._8_4_ + 0x14))();
      if (iVar3 < 0) {
        cVar5 = (char)uVar11;
        (**(code **)(*unaff_EBX + 8))();
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        goto LAB_0041710b;
      }
      VariantInit((VARIANTARG *)auStack_38);
      uVar8 = auStack_38;
      piVar7 = unaff_EDI;
      iVar3 = (**(code **)(*unaff_EDI + 0x20))(unaff_EDI,L"dwDirectXVersionMajor");
      if ((-1 < iVar3) && ((short)unaff_EDI == 0x13)) {
        if (in_EAX != (undefined4 *)0x0) {
          *in_EAX = unaff_EBX;
        }
        bVar1 = true;
      }
      VariantClear((VARIANTARG *)&stack0xffffffbc);
      piVar6 = (int *)&stack0xffffffbc;
      uStack_6c = L"dwDirectXVersionMinor";
      iVar3 = (**(code **)(*(int *)uVar10 + 0x20))(uVar10);
      if (((-1 < iVar3) && ((short)uVar10 == 0x13)) && (piStack_28 != (int *)0x0)) {
        *piStack_28 = uVar11;
      }
      VariantClear((VARIANTARG *)&stack0xffffffb0);
      iVar3 = (**(code **)(*(int *)uVar8 + 0x20))(uVar8,L"szDirectXVersionLetter",&stack0xffffffb0);
      if (((-1 < iVar3) && ((short)uVar8 == 8)) && (UVar4 = SysStringLen(pwVar9), UVar4 != 0)) {
        *(wchar_t *)auStack_38._8_4_ = *pwVar9;
        uStack_6c = (wchar_t *)0x128bc;
      }
      VariantClear((VARIANTARG *)&stack0xffffffa4);
      if ((bVar1) && (uStack_6c._1_1_ != '\0')) {
        cVar5 = '\x01';
        if (uStack_6c._2_1_ == '\0') goto LAB_004170ad;
      }
      else {
LAB_004170ad:
        cVar5 = (char)uStack_6c;
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      (**(code **)(*piVar7 + 8))(piVar7);
      (**(code **)(*(int *)uStack_6c + 8))(uStack_6c);
      goto LAB_0041710b;
    }
  }
  cVar5 = (char)unaff_EBX;
  (**(code **)(*(int *)auStack_38._4_4_ + 8))();
LAB_0041710b:
  if (auStack_38[7] != '\0') {
    CoUninitialize();
  }
  return (-(uint)(cVar5 != '\0') & 0x7fffbffb) + 0x80004005;
}

