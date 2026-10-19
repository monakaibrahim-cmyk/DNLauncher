// Address: 0x004760f6
// Name: _calloc
// Category: MFC_CRT


/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  DWORD DVar1;
  int *piVar2;
  DWORD *pDVar3;
  DWORD local_8;
  
  local_8 = 0;
  piVar2 = __calloc_impl(_Count,_Size,&local_8);
  DVar1 = local_8;
  if (((piVar2 == (int *)0x0) && (local_8 != 0)) &&
     (pDVar3 = FUN_0047b849(), pDVar3 != (DWORD *)0x0)) {
    pDVar3 = FUN_0047b849();
    *pDVar3 = DVar1;
  }
  return piVar2;
}

