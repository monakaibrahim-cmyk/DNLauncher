// Address: 0x0048313e
// Name: FUN_0048313e
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 * FUN_0048313e(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = (undefined4 *)0x0;
  __lock(1);
  iVar5 = 0;
  do {
    puVar7 = puVar6;
    if (DAT_004cd380 <= iVar5) {
LAB_0048323a:
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[3] = puVar7[3] & 0x8000;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7[7] = 0;
        puVar7[4] = 0xffffffff;
      }
      FUN_0048326b();
      return puVar7;
    }
    piVar1 = (int *)(DAT_004cc360 + iVar5 * 4);
    if (*piVar1 == 0) {
      iVar5 = iVar5 * 4;
      pvVar4 = __malloc_crt(0x38);
      *(void **)(iVar5 + DAT_004cc360) = pvVar4;
      if (*(int *)(DAT_004cc360 + iVar5) != 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_004cc360 + iVar5) + 0x20,4000);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar5 + DAT_004cc360));
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_004cc360) + 0x20));
        puVar7 = *(undefined4 **)(iVar5 + DAT_004cc360);
        puVar7[3] = 0;
      }
      goto LAB_0048323a;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && (-1 < (short)uVar2)) {
      if ((iVar5 - 3U < 0x11) && (iVar3 = FUN_0047efbe(iVar5 + 0x10), iVar3 == 0))
      goto LAB_0048323a;
      FUN_0047a98f(iVar5,*(int *)(DAT_004cc360 + iVar5 * 4));
      puVar7 = *(undefined4 **)(DAT_004cc360 + iVar5 * 4);
      if ((*(byte *)(puVar7 + 3) & 0x83) == 0) goto LAB_0048323a;
      FUN_0047a9f3(iVar5,(int)puVar7);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

