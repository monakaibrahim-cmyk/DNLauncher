// Address: 0x00494424
// Name: __chsize_nolock
// Category: MFC_CRT


/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __chsize_nolock(int _FileHandle,longlong _Size)

{
  uint uVar1;
  int iVar2;
  HANDLE pvVar3;
  WCHAR *lpMem;
  DWORD *pDVar4;
  int iVar5;
  WCHAR *pWVar6;
  BOOL BVar7;
  WCHAR *pWVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  uint in_stack_00000008;
  DWORD DVar14;
  SIZE_T dwBytes;
  LONG local_1c;
  LONG local_18;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  lVar12 = FUN_0048e04a(_FileHandle,0,0,1);
  if (lVar12 == -1) goto LAB_004944aa;
  lVar13 = FUN_0048e04a(_FileHandle,0,0,2);
  iVar5 = (int)((ulonglong)lVar13 >> 0x20);
  if (lVar13 == -1) goto LAB_004944aa;
  pWVar8 = (WCHAR *)(in_stack_00000008 - (uint)lVar13);
  uVar1 = (uint)(in_stack_00000008 < (uint)lVar13);
  iVar2 = (int)_Size - iVar5;
  iVar9 = iVar2 - uVar1;
  if ((iVar9 < 0) ||
     ((iVar9 == 0 || SBORROW4((int)_Size,iVar5) != SBORROW4(iVar2,uVar1) && (pWVar8 == (WCHAR *)0x0)
      ))) {
    if ((iVar9 < 1) && (iVar9 < 0)) {
      lVar13 = FUN_0048e04a(_FileHandle,in_stack_00000008,(int)_Size,0);
      if (lVar13 == -1) goto LAB_004944aa;
      pvVar3 = (HANDLE)FUN_00490078(_FileHandle);
      BVar7 = SetEndOfFile(pvVar3);
      local_14 = (BVar7 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        pDVar4 = FUN_0047b849();
        *pDVar4 = 0xd;
        pDVar4 = FUN_0047b85c();
        DVar14 = GetLastError();
        *pDVar4 = DVar14;
        goto LAB_004945a8;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar14 = 8;
    pvVar3 = GetProcessHeap();
    lpMem = HeapAlloc(pvVar3,DVar14,dwBytes);
    if (lpMem == (WCHAR *)0x0) {
      pDVar4 = FUN_0047b849();
      *pDVar4 = 0xc;
      goto LAB_004944aa;
    }
    iVar5 = FUN_004945d8(_FileHandle,0x8000);
    while( true ) {
      pWVar6 = pWVar8;
      if ((-1 < iVar9) && ((0 < iVar9 || ((WCHAR *)0xfff < pWVar8)))) {
        pWVar6 = (WCHAR *)0x1000;
      }
      pWVar6 = (WCHAR *)FUN_00488a67(_FileHandle,lpMem,pWVar6);
      if (pWVar6 == (WCHAR *)0xffffffff) break;
      bVar10 = pWVar8 < pWVar6;
      pWVar8 = (WCHAR *)((int)pWVar8 - (int)pWVar6);
      bVar11 = SBORROW4(iVar9,(int)pWVar6 >> 0x1f);
      iVar2 = iVar9 - ((int)pWVar6 >> 0x1f);
      iVar9 = iVar2 - (uint)bVar10;
      if ((iVar9 < 0) ||
         ((iVar9 == 0 || bVar11 != SBORROW4(iVar2,(uint)bVar10) && (pWVar8 == (WCHAR *)0x0))))
      goto LAB_004944fc;
    }
    pDVar4 = FUN_0047b85c();
    if (*pDVar4 == 5) {
      pDVar4 = FUN_0047b849();
      *pDVar4 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_004944fc:
    FUN_004945d8(_FileHandle,iVar5);
    DVar14 = 0;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,DVar14,lpMem);
LAB_004945a8:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_004944aa;
  }
  local_18 = (LONG)((ulonglong)lVar12 >> 0x20);
  local_1c = (LONG)lVar12;
  lVar12 = FUN_0048e04a(_FileHandle,local_1c,local_18,0);
  if (lVar12 != -1) {
    return 0;
  }
LAB_004944aa:
  pDVar4 = FUN_0047b849();
  return *pDVar4;
}

