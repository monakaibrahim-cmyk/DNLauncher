// Address: 0x004693f2
// Name: FUN_004693f2
// Category: MFC_CRT


/* WARNING: Removing unreachable block (ram,0x004694d0) */

bool FUN_004693f2(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  CNoTrackObject *pCVar4;
  size_t sVar5;
  void *pvVar6;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x10) != 0) &&
     (iVar2 = *(int *)(pAVar1 + 0x10) + -1, *(int *)(pAVar1 + 0x10) = iVar2, iVar2 == 0)) {
    if (param_1 != 0) {
      if (((param_1 != -1) && (iVar2 = FUN_0046419a(), iVar2 != 0)) &&
         (*(code **)(iVar2 + 0x3c) != (code *)0x0)) {
        (**(code **)(iVar2 + 0x3c))(0,0);
      }
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x20));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x1c));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x18));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x14));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x24));
    }
    pAVar3 = AfxGetModuleState();
    iVar2 = *(int *)(pAVar3 + 4);
    pCVar4 = CThreadLocalObject::GetDataNA((CThreadLocalObject *)&DAT_004c8efc);
    if ((((pCVar4 != (CNoTrackObject *)0x0) && (iVar2 != 0)) &&
        ((*(void **)(pCVar4 + 0xc) == (void *)0x0 ||
         (sVar5 = __msize(*(void **)(pCVar4 + 0xc)), sVar5 < *(uint *)(iVar2 + 0x98))))) &&
       (*(int *)(iVar2 + 0x98) != 0)) {
      if (*(void **)(pCVar4 + 0xc) != (void *)0x0) {
        __msize(*(void **)(pCVar4 + 0xc));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(pCVar4 + 0xc));
      }
      pvVar6 = _malloc(*(size_t *)(iVar2 + 0x98));
      *(void **)(pCVar4 + 0xc) = pvVar6;
    }
  }
  return *(int *)(pAVar1 + 0x10) != 0;
}

