// Address: 0x0046dd6b
// Name: FUN_0046dd6b
// Category: MFC_CRT


void FUN_0046dd6b(void)

{
  uchar uVar1;
  uchar uVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  CDynamicAccessor *unaff_EBX;
  int unaff_EBP;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  
  uVar12 = 0;
  if (*(int *)(unaff_EBX + 0x10) == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EBP + -0x40));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  do {
    if (*(uint *)(unaff_EBX + 0xc) <= uVar12) {
      if (*(int *)unaff_EBX == 0) {
        iVar7 = FUN_00469cfd(unaff_EBX,1);
        *(int *)(unaff_EBP + -0x28) = iVar7;
        if (iVar7 < 0) {
          if (*(int *)(unaff_EBX + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(*(int *)(unaff_EBP + -0x40) + 0x14));
          }
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(unaff_EBX + 0x10));
        }
        *(undefined1 *)(*(int *)unaff_EBX + 4) = 1;
      }
      sVar6 = *(size_t *)(unaff_EBP + -0x2c);
      *(undefined4 *)(unaff_EBX + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      pvVar8 = FUN_00452728(sVar6);
      *(void **)(unaff_EBX + 8) = pvVar8;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_0046e192();
      return;
    }
    *(undefined1 *)(uVar12 + *(int *)(unaff_EBX + 0x10)) = 0;
    iVar13 = uVar12 * 0x30;
    iVar7 = *(int *)(unaff_EBX + 0x14) + iVar13;
    if ((*(uint *)(unaff_EBX + 0x24) < *(uint *)(iVar7 + 0x10)) && (*(short *)(iVar7 + 0x14) != 0xd)
       ) {
      if (*(int *)(unaff_EBX + 0x20) == 2) {
        uVar12 = *(int *)(unaff_EBP + -0x2c) + 3U & 0xfffffffc;
        *(uint *)(unaff_EBP + -0x28) = uVar12 + 4;
        *(uint *)(unaff_EBP + -0x2c) = uVar12 + 8;
        uVar4 = *(ulong *)(unaff_EBP + -0x28);
        *(undefined4 *)(iVar7 + 0x10) = 0;
        iVar7 = *(int *)(unaff_EBX + 0x14) + iVar13;
        uVar10 = 0;
        ATL::CDynamicAccessor::BindEx
                  (*(tagDBBINDING **)(unaff_EBP + -0x30),*(ulong *)(iVar7 + 8),
                   *(ushort *)(iVar7 + 0x14),*(ulong *)(iVar7 + 0x10),*(uchar *)(iVar7 + 0x16),
                   *(uchar *)(iVar7 + 0x17),0,0,uVar12,uVar4,(tagDBOBJECT *)0x0,0,true);
      }
      else {
        if (*(int *)(unaff_EBX + 0x20) != 1) {
          if (*(char *)(unaff_EBP + -0x35) != '\0') goto LAB_0046defc;
          *(undefined4 *)(unaff_EBP + -0x60) = 0x89;
          *(undefined4 *)(unaff_EBP + -0x5c) = 0x8b;
          *(undefined4 *)(unaff_EBP + -0x58) = 0;
          *(undefined4 *)(unaff_EBP + -0x54) = 0;
          ATL::CDynamicAccessor::GetRowsetProperties
                    (unaff_EBX,*(IUnknown **)(unaff_EBP + -0x50),(ulong *)(unaff_EBP + -0x60),
                     (int *)(unaff_EBP + -0x58),2);
          if (*(int *)(unaff_EBP + -0x58) == 0) {
            if (*(int *)(unaff_EBP + -0x54) != 0) {
              puVar11 = &DAT_004a40f4;
              goto LAB_0046def1;
            }
          }
          else {
            puVar11 = &DAT_004a4104;
LAB_0046def1:
            *(undefined4 *)(unaff_EBP + -0x24) = *puVar11;
            *(undefined4 *)(unaff_EBP + -0x20) = puVar11[1];
            *(undefined4 *)(unaff_EBP + -0x1c) = puVar11[2];
            *(undefined4 *)(unaff_EBP + -0x18) = puVar11[3];
          }
          *(undefined1 *)(unaff_EBP + -0x35) = 1;
LAB_0046defc:
          *(undefined4 *)(unaff_EBP + -0x3c) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          pvVar8 = FUN_00452728(0x14);
          *(void **)(unaff_EBP + -0x3c) = pvVar8;
          *(undefined4 *)(unaff_EBP + -4) = 4;
          FUN_0046df30();
          return;
        }
        *(ushort *)(iVar7 + 0x14) = *(ushort *)(iVar7 + 0x14) | 0x4000;
        iVar7 = *(int *)(unaff_EBP + -0x44);
        *(undefined4 *)(*(int *)(unaff_EBX + 0x14) + 0x10 + iVar13) = 4;
        *(undefined1 *)(iVar7 + *(int *)(unaff_EBX + 0x10)) = 1;
        iVar7 = *(int *)(unaff_EBX + 0x14);
        *(int *)(unaff_EBP + -0x28) = iVar7 + iVar13;
        uVar12 = ATL::CDynamicAccessor::GetAlignment(*(ushort *)(iVar7 + iVar13 + 0x14));
        uVar10 = (uVar12 - 1) + *(int *)(unaff_EBP + -0x2c) & ~(uVar12 - 1);
        iVar7 = *(int *)(unaff_EBP + -0x28);
        uVar12 = *(int *)(iVar7 + 0x10) + 3 + uVar10 & 0xfffffffc;
        *(uint *)(unaff_EBP + -0x28) = uVar12 + 4;
        *(uint *)(unaff_EBP + -0x2c) = uVar12 + 8;
        ATL::CDynamicAccessor::BindEx
                  (*(tagDBBINDING **)(unaff_EBP + -0x30),*(ulong *)(iVar7 + 8),
                   *(ushort *)(iVar7 + 0x14),*(ulong *)(iVar7 + 0x10),*(uchar *)(iVar7 + 0x16),
                   *(uchar *)(iVar7 + 0x17),0,uVar10,uVar12,*(ulong *)(unaff_EBP + -0x28),
                   (tagDBOBJECT *)0x0,0,false);
      }
    }
    else {
      if (*(short *)(iVar7 + 0x14) == 0xd) {
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        pvVar8 = FUN_00452728(0x14);
        *(void **)(unaff_EBP + -0x3c) = pvVar8;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        FUN_0046e02f();
        return;
      }
      if (*(short *)(iVar7 + 0x14) == 0x81) {
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
      }
      iVar7 = *(int *)(unaff_EBX + 0x14) + iVar13;
      if (*(short *)(iVar7 + 0x14) == 0x82) {
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) * 2 + 2;
      }
      iVar7 = *(int *)(unaff_EBX + 0x14);
      *(int *)(unaff_EBP + -0x28) = iVar7 + iVar13;
      uVar12 = ATL::CDynamicAccessor::GetAlignment(*(ushort *)(iVar7 + iVar13 + 0x14));
      uVar10 = (uVar12 - 1) + *(int *)(unaff_EBP + -0x2c) & ~(uVar12 - 1);
      iVar7 = *(int *)(unaff_EBP + -0x28);
      uVar12 = *(int *)(iVar7 + 0x10) + 3 + uVar10 & 0xfffffffc;
      uVar9 = uVar12 + 4;
      uVar1 = *(uchar *)(iVar7 + 0x17);
      uVar2 = *(uchar *)(iVar7 + 0x16);
      uVar4 = *(ulong *)(iVar7 + 0x10);
      uVar3 = *(ushort *)(iVar7 + 0x14);
      uVar5 = *(ulong *)(iVar7 + 8);
      *(ulong *)(unaff_EBP + -0x28) = uVar9;
      *(ulong *)(unaff_EBP + -0x2c) = uVar9;
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 4;
      ATL::CAccessorBase::Bind
                (*(tagDBBINDING **)(unaff_EBP + -0x30),uVar5,uVar3,uVar4,uVar2,uVar1,0,uVar10,uVar12
                 ,uVar9,(tagDBOBJECT *)0x0);
    }
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 0x34;
    iVar7 = *(int *)(unaff_EBX + 0x14);
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
    *(uint *)(iVar7 + 4 + iVar13) = uVar10;
    uVar12 = *(uint *)(unaff_EBP + -0x44);
  } while( true );
}

