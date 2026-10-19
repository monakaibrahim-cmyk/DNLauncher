// Address: 0x004901ab
// Name: __alloc_osfhnd
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2008 Release */

int __cdecl __alloc_osfhnd(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_20;
  
  local_20 = -1;
  iVar4 = 0;
  bVar1 = false;
  iVar2 = FUN_0047efbe(0xb);
  if (iVar2 == 0) {
    local_20 = -1;
  }
  else {
    __lock(0xb);
    for (; iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar3 = (undefined4 *)(&DAT_004cc260)[iVar4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = __calloc_crt(0x20,0x40);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_004cc260)[iVar4] = puVar3;
          uNumber_004cc250 = uNumber_004cc250 + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_004cc260)[iVar4] + 0x800); puVar3 = puVar3 + 0x10) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar4 << 5;
          *(undefined1 *)((&DAT_004cc260)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_004cc260)[iVar4] + 0x800); puVar3 = puVar3 + 0x10) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                bVar1 = true;
              }
              else {
                puVar3[2] = puVar3[2] + 1;
              }
            }
            FUN_0049027e();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
              *puVar3 = 0xffffffff;
              local_20 = ((int)puVar3 - (&DAT_004cc260)[iVar4] >> 6) + iVar4 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_0049033c();
  }
  return local_20;
}

