// Address: 0x00470443
// Name: FUN_00470443
// Category: MFC_CRT


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00470443(void)

{
  undefined4 uVar1;
  int iVar2;
  COleControlSite *pCVar3;
  void **ppvVar4;
  void *pvVar5;
  COleControlSite *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  pCVar3 = *(COleControlSite **)(unaff_EBP + -0x14);
  if (pCVar3 == unaff_EBX) {
    uVar1 = 0;
  }
  else {
    if (*(int *)*(CControlCreationInfo **)(unaff_EBP + 0x10) == 2) {
      iVar2 = (**(code **)(*(int *)pCVar3 + 0x50))
                        (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                         *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                         *(undefined4 *)(unaff_EBP + 0x24),*(undefined4 *)(unaff_EBP + 0x28),
                         *(undefined4 *)(unaff_EBP + 0x2c),*(undefined4 *)(unaff_EBP + 0x30));
    }
    else {
      iVar2 = COleControlSite::CreateControl
                        (pCVar3,*(CWnd **)(unaff_EBP + 8),
                         *(CControlCreationInfo **)(unaff_EBP + 0x10),*(ulong *)(unaff_EBP + 0x18),
                         *(tagPOINT **)(unaff_EBP + 0x1c),*(tagSIZE **)(unaff_EBP + 0x20),
                         *(uint *)(unaff_EBP + 0x24));
    }
    *(COleControlSite **)(unaff_EBP + 0x24) = (COleControlSite *)(uint)(-1 < iVar2);
    if ((COleControlSite *)(uint)(-1 < iVar2) == unaff_EBX) {
      if (*(COleControlSite **)(unaff_EBP + -0x14) != unaff_EBX) {
        (**(code **)(*(int *)*(COleControlSite **)(unaff_EBP + -0x14) + 4))(1);
      }
    }
    else {
      pCVar3 = FUN_00452728(0xc);
      if (pCVar3 == unaff_EBX) {
        pCVar3 = (COleControlSite *)0x0;
      }
      else {
        uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
        *(COleControlSite **)pCVar3 = unaff_EBX;
        *(undefined4 *)(pCVar3 + 4) = uVar1;
        *(COleControlSite **)(pCVar3 + 8) = unaff_EBX;
      }
      CPtrList::AddTail((CPtrList *)(unaff_ESI + 0x40),pCVar3);
      pvVar5 = *(void **)(unaff_EBP + -0x14);
      if (*(COleControlSite **)((int)pvVar5 + 0x24) != unaff_EBX) {
        ppvVar4 = CMapPtrToPtr::operator[]
                            ((CMapPtrToPtr *)(unaff_ESI + 0x24),*(void **)((int)pvVar5 + 0x24));
        *ppvVar4 = pvVar5;
        pvVar5 = *(void **)(unaff_EBP + -0x14);
      }
      if (*(COleControlSite **)(unaff_EBP + 0x34) != unaff_EBX) {
        *(void **)*(COleControlSite **)(unaff_EBP + 0x34) = pvVar5;
      }
    }
    uVar1 = *(undefined4 *)(unaff_EBP + 0x24);
  }
  return uVar1;
}

