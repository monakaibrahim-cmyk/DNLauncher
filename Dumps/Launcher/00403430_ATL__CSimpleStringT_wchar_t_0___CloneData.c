// Address: 0x00403430
// Name: ATL::CSimpleStringT<wchar_t,0>::CloneData
// Category: Launcher


/* Library Function - Single Match
    private: static struct ATL::CStringData * __cdecl
   ATL::CSimpleStringT<wchar_t,0>::CloneData(struct ATL::CStringData *)
   
   Library: Visual Studio 2005 Release */

CStringData * __cdecl ATL::CSimpleStringT<wchar_t,0>::CloneData(CStringData *param_1)

{
  rsize_t _DstSize;
  undefined4 *puVar1;
  CStringData *pCVar2;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)param_1 + 0x10))();
  if ((-1 < *(int *)(param_1 + 0xc)) && (puVar1 == *(undefined4 **)param_1)) {
    LOCK();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    UNLOCK();
    return param_1;
  }
  pCVar2 = (CStringData *)(**(code **)*puVar1)(*(undefined4 *)(param_1 + 4),2);
  if (pCVar2 == (CStringData *)0x0) {
    pCVar2 = (CStringData *)FUN_0040fef0();
    return pCVar2;
  }
  *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(param_1 + 4);
  _DstSize = *(int *)(param_1 + 4) * 2 + 2;
  _memcpy_s(pCVar2 + 0x10,_DstSize,param_1 + 0x10,_DstSize);
  return pCVar2;
}

