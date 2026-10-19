// Address: 0x0046fb0d
// Name: CDataSourceControl::UpdateControls
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CDataSourceControl::UpdateControls(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall CDataSourceControl::UpdateControls(CDataSourceControl *this)

{
  void *pvVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  tagVARIANT *ptVar4;
  int iVar5;
  int iVar6;
  undefined1 local_7c [4];
  BSTR local_78;
  BSTR local_74;
  BSTR local_70;
  VARIANTARG local_5c;
  VARIANTARG local_4c;
  VARIANTARG *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  __POSITION *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x46fb19;
  *(undefined4 *)(this + 0x44) = 1;
  local_18 = 0;
  local_14 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      iVar6 = local_14 * 0x28;
      iVar5 = *(int *)(*(int *)(this + 0x14) + 0x24 + iVar6);
      if ((iVar5 != 0) && (local_24 = *(__POSITION **)(iVar5 + 4), local_24 != (__POSITION *)0x0)) {
        local_1c = local_18 << 4;
        do {
          ppvVar3 = CPtrList::GetNext(*(CPtrList **)(*(int *)(this + 0x14) + 0x24 + iVar6),&local_24
                                     );
          pvVar1 = *ppvVar3;
          local_28 = 0xfffffffd;
          _memset(local_7c,0,0x20);
          FUN_0045fe88(&local_4c);
          local_8 = 0;
          if (*(int *)(this + 0x48) == 0) {
            local_3c = (VARIANTARG *)(*(int *)(this + 0x40) + local_1c);
          }
          else {
            ptVar4 = (tagVARIANT *)ToVariant(this,(int)&local_5c);
            local_8._0_1_ = 1;
            COleVariant::operator=((COleVariant *)&local_4c,ptVar4);
            local_8 = (uint)local_8._1_3_ << 8;
            VariantClear(&local_5c);
            local_3c = &local_4c;
          }
          local_38 = &local_28;
          local_34 = 1;
          local_30 = 1;
          *(undefined4 *)((int)pvVar1 + 0x88) = 1;
          puVar2 = *(undefined4 **)((int)pvVar1 + 0x50);
          if (puVar2 != (undefined4 *)0x0) {
            iVar5 = (**(code **)*puVar2)(puVar2,&DAT_004ab72c,&local_20);
            if (-1 < iVar5) {
              (**(code **)(*local_20 + 0x18))
                        (local_20,*(undefined4 *)((int)pvVar1 + 0x9c),&DAT_004ab61c,0,4,&local_3c,0,
                         local_7c,local_2c);
              (**(code **)(*local_20 + 8))(local_20);
              *(undefined4 *)((int)pvVar1 + 0x88) = 0;
              if (local_78 != (BSTR)0x0) {
                SysFreeString(local_78);
              }
              if (local_74 != (BSTR)0x0) {
                SysFreeString(local_74);
              }
              if (local_70 != (BSTR)0x0) {
                SysFreeString(local_70);
              }
              local_18 = local_18 + 1;
              local_1c = local_1c + 0x10;
            }
          }
          local_8 = 0xffffffff;
          VariantClear(&local_4c);
        } while (local_24 != (__POSITION *)0x0);
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x44) = 0;
  return 0;
}

