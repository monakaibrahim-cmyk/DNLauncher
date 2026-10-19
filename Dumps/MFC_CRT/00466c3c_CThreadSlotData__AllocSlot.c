// Address: 0x00466c3c
// Name: CThreadSlotData::AllocSlot
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CThreadSlotData::AllocSlot(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CThreadSlotData::AllocSlot(CThreadSlotData *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  byte *pbVar7;
  int iVar8;
  UINT uFlags;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  iVar3 = *(int *)(this + 4);
  iVar8 = *(int *)(this + 8);
  if ((iVar3 <= iVar8) || ((*(byte *)(*(int *)(this + 0x10) + iVar8 * 8) & 1) != 0)) {
    iVar8 = 1;
    if (1 < iVar3) {
      pbVar7 = *(byte **)(this + 0x10);
      do {
        pbVar7 = pbVar7 + 8;
        if ((*pbVar7 & 1) == 0) break;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar3);
      if (iVar8 < iVar3) goto LAB_00466d20;
    }
    uVar1 = iVar3 + 0x20;
    if (*(LPCVOID *)(this + 0x10) == (LPCVOID)0x0) {
      uVar4 = ATL::AtlMultiplyThrow<unsigned_int>(uVar1,8);
      pvVar5 = GlobalAlloc(2,uVar4);
    }
    else {
      pvVar5 = GlobalHandle(*(LPCVOID *)(this + 0x10));
      GlobalUnlock(pvVar5);
      uFlags = 0x2002;
      uVar4 = ATL::AtlMultiplyThrow<unsigned_int>(uVar1,8);
      pvVar5 = GlobalReAlloc(pvVar5,uVar4,uFlags);
    }
    if (pvVar5 == (HGLOBAL)0x0) {
      if (*(LPCVOID *)(this + 0x10) != (LPCVOID)0x0) {
        pvVar5 = GlobalHandle(*(LPCVOID *)(this + 0x10));
        GlobalLock(pvVar5);
      }
      LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
      FUN_004529b4();
    }
    pvVar6 = GlobalLock(pvVar5);
    _memset((void *)((int)pvVar6 + *(int *)(this + 4) * 8),0,(uVar1 - *(int *)(this + 4)) * 8);
    *(uint *)(this + 4) = uVar1;
    *(LPVOID *)(this + 0x10) = pvVar6;
  }
LAB_00466d20:
  if (*(int *)(this + 0xc) <= iVar8) {
    *(int *)(this + 0xc) = iVar8 + 1;
  }
  puVar2 = (uint *)(*(int *)(this + 0x10) + iVar8 * 8);
  *puVar2 = *puVar2 | 1;
  *(int *)(this + 8) = iVar8 + 1;
  LeaveCriticalSection(lpCriticalSection);
  return iVar8;
}

