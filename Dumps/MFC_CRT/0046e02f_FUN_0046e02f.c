// Address: 0x0046e02f
// Name: FUN_0046e02f
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e02f(void)

{
  uchar uVar1;
  uchar uVar2;
  ushort uVar3;
  size_t sVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  CDynamicAccessor *unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  tagDBOBJECT *ptVar14;
  
  if (*(int *)(unaff_EBP + -0x3c) == 0) {
    if (*(int *)(unaff_EBP + -0x44) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(*(int *)(unaff_EBP + -0x40) + 0x14));
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EBX + 0x10));
  }
  puVar9 = *(undefined4 **)(unaff_EBP + -0x3c);
  *puVar9 = 0;
  puVar9[1] = _DAT_004ac814;
  puVar9[2] = _UNK_004ac818;
  puVar9[3] = _UNK_004ac81c;
  puVar9[4] = _UNK_004ac820;
  iVar11 = *(int *)(unaff_EBP + -0x44) * 0x30;
  *(undefined2 *)(*(int *)(unaff_EBX + 0x14) + 0x14 + iVar11) = 0xd;
  *(undefined4 *)(*(int *)(unaff_EBX + 0x14) + 0x10 + iVar11) = 4;
  iVar5 = *(int *)(unaff_EBX + 0x14);
  *(int *)(unaff_EBP + -0x28) = iVar5 + iVar11;
  uVar7 = ATL::CDynamicAccessor::GetAlignment(*(ushort *)(iVar5 + iVar11 + 0x14));
  ptVar14 = *(tagDBOBJECT **)(unaff_EBP + -0x3c);
  iVar5 = *(int *)(unaff_EBP + -0x28);
  uVar10 = (uVar7 - 1) + *(int *)(unaff_EBP + -0x2c) & ~(uVar7 - 1);
  uVar7 = *(int *)(iVar5 + 0x10) + 3 + uVar10 & 0xfffffffc;
  uVar8 = uVar7 + 4;
  uVar1 = *(uchar *)(iVar5 + 0x17);
  uVar2 = *(uchar *)(iVar5 + 0x16);
  uVar13 = *(ulong *)(iVar5 + 0x10);
  uVar3 = *(ushort *)(iVar5 + 0x14);
  uVar12 = *(ulong *)(iVar5 + 8);
  *(ulong *)(unaff_EBP + -0x28) = uVar8;
  do {
    *(ulong *)(unaff_EBP + -0x2c) = uVar8;
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 4;
    ATL::CAccessorBase::Bind
              (*(tagDBBINDING **)(unaff_EBP + -0x30),uVar12,uVar3,uVar13,uVar2,uVar1,0,uVar10,uVar7,
               uVar8,ptVar14);
    while( true ) {
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 0x34;
      iVar5 = *(int *)(unaff_EBX + 0x14);
      *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
      *(uint *)(iVar5 + 4 + iVar11) = uVar10;
      uVar7 = *(uint *)(unaff_EBP + -0x44);
      if (*(uint *)(unaff_EBX + 0xc) <= uVar7) {
        if (*(int *)unaff_EBX == 0) {
          iVar5 = FUN_00469cfd(unaff_EBX,1);
          *(int *)(unaff_EBP + -0x28) = iVar5;
          if (iVar5 < 0) {
            if (*(int *)(unaff_EBX + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
              _free(*(void **)(*(int *)(unaff_EBP + -0x40) + 0x14));
            }
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(unaff_EBX + 0x10));
          }
          *(undefined1 *)(*(int *)unaff_EBX + 4) = 1;
        }
        sVar4 = *(size_t *)(unaff_EBP + -0x2c);
        *(undefined4 *)(unaff_EBX + 8) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        pvVar6 = FUN_00452728(sVar4);
        *(void **)(unaff_EBX + 8) = pvVar6;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        FUN_0046e192();
        return;
      }
      *(undefined1 *)(uVar7 + *(int *)(unaff_EBX + 0x10)) = 0;
      iVar11 = uVar7 * 0x30;
      iVar5 = *(int *)(unaff_EBX + 0x14) + iVar11;
      if ((*(uint *)(iVar5 + 0x10) <= *(uint *)(unaff_EBX + 0x24)) ||
         (*(short *)(iVar5 + 0x14) == 0xd)) break;
      if (*(int *)(unaff_EBX + 0x20) == 2) {
        uVar7 = *(int *)(unaff_EBP + -0x2c) + 3U & 0xfffffffc;
        *(uint *)(unaff_EBP + -0x28) = uVar7 + 4;
        *(uint *)(unaff_EBP + -0x2c) = uVar7 + 8;
        uVar13 = *(ulong *)(unaff_EBP + -0x28);
        *(undefined4 *)(iVar5 + 0x10) = 0;
        iVar5 = *(int *)(unaff_EBX + 0x14) + iVar11;
        uVar10 = 0;
        ATL::CDynamicAccessor::BindEx
                  (*(tagDBBINDING **)(unaff_EBP + -0x30),*(ulong *)(iVar5 + 8),
                   *(ushort *)(iVar5 + 0x14),*(ulong *)(iVar5 + 0x10),*(uchar *)(iVar5 + 0x16),
                   *(uchar *)(iVar5 + 0x17),0,0,uVar7,uVar13,(tagDBOBJECT *)0x0,0,true);
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
              puVar9 = &DAT_004a40f4;
              goto LAB_0046def1;
            }
          }
          else {
            puVar9 = &DAT_004a4104;
LAB_0046def1:
            *(undefined4 *)(unaff_EBP + -0x24) = *puVar9;
            *(undefined4 *)(unaff_EBP + -0x20) = puVar9[1];
            *(undefined4 *)(unaff_EBP + -0x1c) = puVar9[2];
            *(undefined4 *)(unaff_EBP + -0x18) = puVar9[3];
          }
          *(undefined1 *)(unaff_EBP + -0x35) = 1;
LAB_0046defc:
          *(undefined4 *)(unaff_EBP + -0x3c) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          pvVar6 = FUN_00452728(0x14);
          *(void **)(unaff_EBP + -0x3c) = pvVar6;
          *(undefined4 *)(unaff_EBP + -4) = 4;
          FUN_0046df30();
          return;
        }
        *(ushort *)(iVar5 + 0x14) = *(ushort *)(iVar5 + 0x14) | 0x4000;
        iVar5 = *(int *)(unaff_EBP + -0x44);
        *(undefined4 *)(*(int *)(unaff_EBX + 0x14) + 0x10 + iVar11) = 4;
        *(undefined1 *)(iVar5 + *(int *)(unaff_EBX + 0x10)) = 1;
        iVar5 = *(int *)(unaff_EBX + 0x14);
        *(int *)(unaff_EBP + -0x28) = iVar5 + iVar11;
        uVar7 = ATL::CDynamicAccessor::GetAlignment(*(ushort *)(iVar5 + iVar11 + 0x14));
        uVar10 = (uVar7 - 1) + *(int *)(unaff_EBP + -0x2c) & ~(uVar7 - 1);
        iVar5 = *(int *)(unaff_EBP + -0x28);
        uVar7 = *(int *)(iVar5 + 0x10) + 3 + uVar10 & 0xfffffffc;
        *(uint *)(unaff_EBP + -0x28) = uVar7 + 4;
        *(uint *)(unaff_EBP + -0x2c) = uVar7 + 8;
        ATL::CDynamicAccessor::BindEx
                  (*(tagDBBINDING **)(unaff_EBP + -0x30),*(ulong *)(iVar5 + 8),
                   *(ushort *)(iVar5 + 0x14),*(ulong *)(iVar5 + 0x10),*(uchar *)(iVar5 + 0x16),
                   *(uchar *)(iVar5 + 0x17),0,uVar10,uVar7,*(ulong *)(unaff_EBP + -0x28),
                   (tagDBOBJECT *)0x0,0,false);
      }
    }
    if (*(short *)(iVar5 + 0x14) == 0xd) {
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      pvVar6 = FUN_00452728(0x14);
      *(void **)(unaff_EBP + -0x3c) = pvVar6;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_0046e02f();
      return;
    }
    if (*(short *)(iVar5 + 0x14) == 0x81) {
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    }
    iVar5 = *(int *)(unaff_EBX + 0x14) + iVar11;
    if (*(short *)(iVar5 + 0x14) == 0x82) {
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) * 2 + 2;
    }
    iVar5 = *(int *)(unaff_EBX + 0x14);
    *(int *)(unaff_EBP + -0x28) = iVar5 + iVar11;
    uVar7 = ATL::CDynamicAccessor::GetAlignment(*(ushort *)(iVar5 + iVar11 + 0x14));
    uVar10 = (uVar7 - 1) + *(int *)(unaff_EBP + -0x2c) & ~(uVar7 - 1);
    iVar5 = *(int *)(unaff_EBP + -0x28);
    uVar7 = *(int *)(iVar5 + 0x10) + 3 + uVar10 & 0xfffffffc;
    ptVar14 = (tagDBOBJECT *)0x0;
    uVar8 = uVar7 + 4;
    uVar1 = *(uchar *)(iVar5 + 0x17);
    uVar2 = *(uchar *)(iVar5 + 0x16);
    uVar13 = *(ulong *)(iVar5 + 0x10);
    uVar3 = *(ushort *)(iVar5 + 0x14);
    uVar12 = *(ulong *)(iVar5 + 8);
    *(ulong *)(unaff_EBP + -0x28) = uVar8;
  } while( true );
}

